
#include "stdafx.h"
#include "EnOceanESP3.h"
#include "../main/Logger.h"
#include "../main/Helper.h"
#include "../main/RFXtrx.h"
#include "../main/SQLHelper.h"

#include <string>
#include <algorithm>
#include <iostream>
#include <boost/bind/bind.hpp>
#include "hardwaretypes.h"
#include "../main/localtime_r.h"
#include "../main/WebServer.h"
#include "../main/mainworker.h"
#include "../json/json.h"
#include <boost/lexical_cast.hpp>

#include <boost/exception/diagnostic_information.hpp>
#include <cmath>
#include <ctime>

using namespace boost::placeholders;

#include "SetGetRawValue.cpp"
#include "eep-d2.h"

#if _DEBUG
	#define ENOCEAN_BUTTON_DEBUG
#endif

#define ENABLE_LOGGING

#define ENOCEAN_RETRY_DELAY 30

//Write/Read has to be done in sync with ESP3

#define ESP3_SYNC 0x55
#define ESP3_HEADER_LENGTH 0x4

#define round(a) ( int ) ( a + .5 )

extern const char* Get_EnoceanManufacturer(unsigned long ID);
extern const char* Get_Enocean4BSType(const int Org, const int Func, const int Type);

// the following lines are taken from EO300I API header file

//polynomial G(x) = x8 + x2 + x1 + x0 is used to generate the CRC8 table
const unsigned char crc8table[256] = {
	0x00, 0x07, 0x0e, 0x09, 0x1c, 0x1b, 0x12, 0x15,
	0x38, 0x3f, 0x36, 0x31, 0x24, 0x23, 0x2a, 0x2d,
	0x70, 0x77, 0x7e, 0x79, 0x6c, 0x6b, 0x62, 0x65,
	0x48, 0x4f, 0x46, 0x41, 0x54, 0x53, 0x5a, 0x5d,
	0xe0, 0xe7, 0xee, 0xe9, 0xfc, 0xfb, 0xf2, 0xf5,
	0xd8, 0xdf, 0xd6, 0xd1, 0xc4, 0xc3, 0xca, 0xcd,
	0x90, 0x97, 0x9e, 0x99, 0x8c, 0x8b, 0x82, 0x85,
	0xa8, 0xaf, 0xa6, 0xa1, 0xb4, 0xb3, 0xba, 0xbd,
	0xc7, 0xc0, 0xc9, 0xce, 0xdb, 0xdc, 0xd5, 0xd2,
	0xff, 0xf8, 0xf1, 0xf6, 0xe3, 0xe4, 0xed, 0xea,
	0xb7, 0xb0, 0xb9, 0xbe, 0xab, 0xac, 0xa5, 0xa2,
	0x8f, 0x88, 0x81, 0x86, 0x93, 0x94, 0x9d, 0x9a,
	0x27, 0x20, 0x29, 0x2e, 0x3b, 0x3c, 0x35, 0x32,
	0x1f, 0x18, 0x11, 0x16, 0x03, 0x04, 0x0d, 0x0a,
	0x57, 0x50, 0x59, 0x5e, 0x4b, 0x4c, 0x45, 0x42,
	0x6f, 0x68, 0x61, 0x66, 0x73, 0x74, 0x7d, 0x7a,
	0x89, 0x8e, 0x87, 0x80, 0x95, 0x92, 0x9b, 0x9c,
	0xb1, 0xb6, 0xbf, 0xb8, 0xad, 0xaa, 0xa3, 0xa4,
	0xf9, 0xfe, 0xf7, 0xf0, 0xe5, 0xe2, 0xeb, 0xec,
	0xc1, 0xc6, 0xcf, 0xc8, 0xdd, 0xda, 0xd3, 0xd4,
	0x69, 0x6e, 0x67, 0x60, 0x75, 0x72, 0x7b, 0x7c,
	0x51, 0x56, 0x5f, 0x58, 0x4d, 0x4a, 0x43, 0x44,
	0x19, 0x1e, 0x17, 0x10, 0x05, 0x02, 0x0b, 0x0c,
	0x21, 0x26, 0x2f, 0x28, 0x3d, 0x3a, 0x33, 0x34,
	0x4e, 0x49, 0x40, 0x47, 0x52, 0x55, 0x5c, 0x5b,
	0x76, 0x71, 0x78, 0x7f, 0x6A, 0x6d, 0x64, 0x63,
	0x3e, 0x39, 0x30, 0x37, 0x22, 0x25, 0x2c, 0x2b,
	0x06, 0x01, 0x08, 0x0f, 0x1a, 0x1d, 0x14, 0x13,
	0xae, 0xa9, 0xa0, 0xa7, 0xb2, 0xb5, 0xbc, 0xbb,
	0x96, 0x91, 0x98, 0x9f, 0x8a, 0x8D, 0x84, 0x83,
	0xde, 0xd9, 0xd0, 0xd7, 0xc2, 0xc5, 0xcc, 0xcb,
	0xe6, 0xe1, 0xe8, 0xef, 0xfa, 0xfd, 0xf4, 0xf3
};

#define proc_crc8(crc, data) (crc8table[crc ^ data])

#define SER_SYNCH_CODE 0x55
#define SER_HEADER_NR_BYTES 0x04

//! Packet structure (ESP3)
typedef struct
{
	// Amount of raw data bytes to be received. The most significant byte is sent/received first
	unsigned short u16DataLength;
	// Amount of optional data bytes to be received
	unsigned char u8OptionLength;
	// Packe type code
	unsigned char u8Type;
	// Data buffer: raw data + optional bytes
	unsigned char *u8DataBuffer;
} PACKET_SERIAL_TYPE;


char * PACKET_TYPE_name[] = {
	"PACKET_RESERVED"          ,
	"PACKET_RADIO"             ,
	"PACKET_RESPONSE"          ,
	"PACKET_RADIO_SUB_TEL"     ,
	"PACKET_EVENT"             ,
	"PACKET_COMMON_COMMAND"    ,
	"PACKET_SMART_ACK_COMMAND" ,
	"PACKET_REMOTE_MAN_COMMAND",
	"PACKET_PRODUCTION_COMMAND",
	"PACKET_RADIO_MESSAGE"     ,
	"PACKET_RADIO_ADVANCED"
};

//! Response type
typedef enum
{
	RET_OK 					= 0x00, //! OK ... command is understood and triggered
	RET_ERROR 				= 0x01, //! There is an error occured
	RET_NOT_SUPPORTED 		= 0x02, //! The functionality is not supported by that implementation
	RET_WRONG_PARAM 		= 0x03, //! There was a wrong parameter in the command
	RET_OPERATION_DENIED 	= 0x04, //! Example: memory access denied (code-protected)
	RET_USER				= 0x80	//! Return codes greater than 0x80 are used for commands with special return information, not commonly useable.
} RESPONSE_TYPE;

//! Common command enum
typedef enum
{
	CO_WR_SLEEP			= 1,	//! Order to enter in energy saving mode
	CO_WR_RESET			= 2,	//! Order to reset the device
	CO_RD_VERSION		= 3,	//! Read the device (SW) version / (HW) version, chip ID etc.
	CO_RD_SYS_LOG		= 4,	//! Read system log from device databank
	CO_WR_SYS_LOG		= 5,	//! Reset System log from device databank
	CO_WR_BIST			= 6,	//! Perform Flash BIST operation
	CO_WR_IDBASE		= 7,	//! Write ID range base number
	CO_RD_IDBASE		= 8,	//! Read ID range base number
	CO_WR_REPEATER		= 9,	//! Write Repeater Level off,1,2
	CO_RD_REPEATER		= 10,	//! Read Repeater Level off,1,2
	CO_WR_FILTER_ADD	= 11,	//! Add filter to filter list
	CO_WR_FILTER_DEL	= 12,	//! Delete filter from filter list
	CO_WR_FILTER_DEL_ALL= 13,	//! Delete filters
	CO_WR_FILTER_ENABLE	= 14,	//! Enable/Disable supplied filters
	CO_RD_FILTER		= 15,	//! Read supplied filters
	CO_WR_WAIT_MATURITY	= 16,	//! Waiting till end of maturity time before received radio telegrams will transmitted
	CO_WR_SUBTEL		= 17,	//! Enable/Disable transmitting additional subtelegram info
	CO_WR_MEM			= 18,	//! Write x bytes of the Flash, XRAM, RAM0 ….
	CO_RD_MEM			= 19,	//! Read x bytes of the Flash, XRAM, RAM0 ….
	CO_RD_MEM_ADDRESS	= 20,	//! Feedback about the used address and length of the config area and the Smart Ack Table
	CO_RD_SECURITY		= 21,	//! Read security informations (level, keys)
	CO_WR_SECURITY		= 22,	//! Write security informations (level, keys)
} COMMON_COMMAND_TYPE;


//! Function return codes
typedef enum
{
	//! <b>0</b> - Action performed. No problem detected
	OK=0,
	//! <b>1</b> - Action couldn't be carried out within a certain time.
	TIME_OUT,
	//! <b>2</b> - The write/erase/verify process failed, the flash page seems to be corrupted
	FLASH_HW_ERROR,
	//! <b>3</b> - A new UART/SPI byte received
	NEW_RX_BYTE,
	//! <b>4</b> - No new UART/SPI byte received
	NO_RX_BYTE,
	//! <b>5</b> - New telegram received
	NEW_RX_TEL,
	//! <b>6</b> - No new telegram received
	NO_RX_TEL,
	//! <b>7</b> - Checksum not valid
	NOT_VALID_CHKSUM,
	//! <b>8</b> - Telegram not valid
	NOT_VALID_TEL,
	//! <b>9</b> - Buffer full, no space in Tx or Rx buffer
	BUFF_FULL,
	//! <b>10</b> - Address is out of memory
	ADDR_OUT_OF_MEM,
	//! <b>11</b> - Invalid function parameter
	NOT_VALID_PARAM,
	//! <b>12</b> - Built in self test failed
	BIST_FAILED,
	//! <b>13</b> - Before entering power down, the short term timer had timed out.
	ST_TIMEOUT_BEFORE_SLEEP,
	//! <b>14</b> - Maximum number of filters reached, no more filter possible
	MAX_FILTER_REACHED,
	//! <b>15</b> - Filter to delete not found
	FILTER_NOT_FOUND,
	//! <b>16</b> - BaseID out of range
	BASEID_OUT_OF_RANGE,
	//! <b>17</b> - BaseID was changed 10 times, no more changes are allowed
	BASEID_MAX_REACHED,
	//! <b>18</b> - XTAL is not stable
	XTAL_NOT_STABLE,
	//! <b>19</b> - No telegram for transmission in queue
	NO_TX_TEL,
	//!	<b>20</b> - Waiting before sending broadcast message
	TELEGRAM_WAIT,
	//!	<b>21</b> - Generic out of range return code
	OUT_OF_RANGE,
	//!	<b>22</b> - Function was not executed due to sending lock
	LOCK_SET,
	//! <b>23</b> - New telegram transmitted
	NEW_TX_TEL
} RETURN_TYPE;
// end of lines from EO300I API header file

/**
 * @defgroup bitmasks Bitmasks for various fields.
 * There are two definitions for every bit mask. First, the bit mask itself
 * and also the number of necessary shifts.
 * @{
 */
/**
 * @defgroup status_rps Status of telegram (for RPS telegrams)
 * Bitmasks for the status-field, if ORG = RPS.
 * @{
 */
#define S_RPS_T21 0x20
#define S_RPS_T21_SHIFT 5
#define S_RPS_NU  0x10
#define S_RPS_NU_SHIFT 4
#define S_RPS_RPC 0x0F
#define S_RPS_RPC_SHIFT 0
/*@}*/

#define F60201_R1_MASK 0xE0
#define F60201_R1_SHIFT 5
#define F60201_EB_MASK 0x10
#define F60201_EB_SHIFT 4
#define F60201_R2_MASK 0x0E
#define F60201_R2_SHIFT 1
#define F60201_SA_MASK 0x01
#define F60201_SA_SHIFT 0

#define F60201_BUTTON_A1 0
#define F60201_BUTTON_A0 1
#define F60201_BUTTON_B1 2
#define F60201_BUTTON_B0 3

/**
 * @defgroup status_rpc Status of telegram (for 1BS, 4BS, HRC or 6DT telegrams)
 * Bitmasks for the status-field, if ORG = 1BS, 4BS, HRC or 6DT.
 * @{
 */
#define S_RPC 0x0F
#define S_RPC_SHIFT 0
/*@}*/

/**
 * @defgroup data3 Meaning of data_byte 3 (for RPS telegrams, NU = 1)
 * Bitmasks for the data_byte3-field, if ORG = RPS and NU = 1.
 * Specification can be found at:
 *      https://www.enocean.com/fileadmin/redaktion/enocean_alliance/pdf/EnOcean_Equipment_Profiles_EEP_V2.6.3_public.pdf
 * @{
 */

	//!	Rocker ID Mask
#define DB3_RPS_NU_RID 0xC0
#define DB3_RPS_NU_RID_SHIFT 6

//!	Button ID Mask
#define DB3_RPS_NU_BID 0xE0
#define DB3_RPS_NU_BID_SHIFT 5

//!	Up Down Mask
#define DB3_RPS_NU_UD  0x20
#define DB3_RPS_NU_UD_SHIFT  5

//!	Pressed Mask
#define DB3_RPS_NU_PR  0x10
#define DB3_RPS_NU_PR_SHIFT 4

//!	Second Rocker ID Mask
#define DB3_RPS_NU_SRID 0x0C
#define DB3_RPS_NU_SRID_SHIFT 2

//!	Second Button ID Mask
#define DB3_RPS_NU_SBID 0x0E
#define DB3_RPS_NU_SBID_SHIFT 1

//!	Second UpDown Mask
#define DB3_RPS_NU_SUD 0x02
#define DB3_RPS_NU_SUD_SHIFT 1

//!	Second Action Mask
#define DB3_RPS_NU_SA 0x01
#define DB3_RPS_NU_SA_SHIFT 0

/*@}*/

/**
 * @defgroup data3_1 Meaning of data_byte 3 (for RPS telegrams, NU = 0)
 * Bitmasks for the data_byte3-field, if ORG = RPS and NU = 0.
 * @{
 */
#define DB3_RPS_BUTTONS 0xE0
#define DB3_RPS_BUTTONS_SHIFT 5
#define DB3_RPS_PR 0x10
#define DB3_RPS_PR_SHIFT 4
/*@}*/

/**
 * @defgroup data0 Meaning of data_byte 0 (for 4BS telegrams)
 * Bitmasks for the data_byte0-field, if ORG = 4BS.
 * @{
 */
#define DB0_4BS_DI_3 0x08
#define DB0_4BS_DI_3_SHIFT 3
#define DB0_4BS_DI_2 0x04
#define DB0_4BS_DI_2_SHIFT 2
#define DB0_4BS_DI_1 0x02
#define DB0_4BS_DI_1_SHIFT 1
#define DB0_4BS_DI_0 0x01
#define DB0_4BS_DI_0_SHIFT 0
/*@}*/

/**
 * @defgroup data3_hrc Meaning of data_byte 3 (for HRC telegrams)
 * Bitmasks for the data_byte3-field, if ORG = HRC.
 * @{
 */
#define DB3_HRC_RID 0xC0
#define DB3_HRC_RID_SHIFT 6
#define DB3_HRC_UD  0x20
#define DB3_HRC_UD_SHIFT 5
#define DB3_HRC_PR  0x10
#define DB3_HRC_PR_SHIFT 4
#define DB3_HRC_SR  0x08
#define DB3_HRC_SR_SHIFT 3

// 2016-01-31 Stéphane Guillard : added 4BS learn bit definitions below
#define RORG_4BS_TEACHIN_LRN_BIT (1 << 3)
#define RORG_4BS_TEACHIN_EEP_BIT (1 << 7)

bool CEnOceanESP3::sendFrame(unsigned char frametype, unsigned char *databuf, unsigned short datalen, unsigned char *optdata, unsigned char optdatalen)
{
	unsigned char crc=0;
	unsigned char buf[1024];
	int len=0;

	buf[len++]=SER_SYNCH_CODE;
	buf[len++]=(datalen >> 8) & 0xff; // len
	buf[len++]=datalen & 0xff;
	buf[len++]=optdatalen;
	buf[len++]=frametype;
	crc = proc_crc8(crc, buf[1]);
	crc = proc_crc8(crc, buf[2]);
	crc = proc_crc8(crc, buf[3]);
	crc = proc_crc8(crc, buf[4]);
	buf[len++]=crc;
	crc = 0;
	for (int i=0;i<datalen;i++) {
		buf[len]=databuf[i];
		crc=proc_crc8(crc, buf[len++]);
	}
	for (int i=0;i<optdatalen;i++) {
		buf[len]=optdata[i];
		crc=proc_crc8(crc, buf[len++]);
	}
	buf[len++]=crc;
	write((const char*)&buf,len);
	return true;
}

bool CEnOceanESP3::sendFrameQueue(unsigned char frametype, unsigned char *databuf, unsigned short datalen, unsigned char *optdata, unsigned char optdatalen)
{
	unsigned char crc=0;
	unsigned char buf[1024];
	int len=0;

	buf[len++]=SER_SYNCH_CODE;
	buf[len++]=(datalen >> 8) & 0xff; // len
	buf[len++]=datalen & 0xff;
	buf[len++]=optdatalen;
	buf[len++]=frametype;
	crc = proc_crc8(crc, buf[1]);
	crc = proc_crc8(crc, buf[2]);
	crc = proc_crc8(crc, buf[3]);
	crc = proc_crc8(crc, buf[4]);
	buf[len++]=crc;
	crc = 0;
	for (int i=0;i<datalen;i++) {
		buf[len]=databuf[i];
		crc=proc_crc8(crc, buf[len++]);
	}
	for (int i=0;i<optdatalen;i++) {
		buf[len]=optdata[i];
		crc=proc_crc8(crc, buf[len++]);
	}
	buf[len++]=crc;
	Add2SendQueue((const char*)&buf,len);
	return true;
}

CEnOceanESP3::CEnOceanESP3(const int ID, const std::string& devname, const int type): CEnOceanRMCC::CEnOceanRMCC( ID)
{
	m_HwdID=ID;
	m_szSerialPort=devname;
    m_Type = type;
	m_bufferpos=0;
	memset(&m_buffer,0,sizeof(m_buffer));
	m_id_base=0;
	m_receivestate=ERS_SYNCBYTE;

	//Test
	//m_ReceivedPacketType = 0x01;
	//m_DataSize = 0x0A;
	//m_OptionalDataSize = 0x07;
	//m_bufferpos = 0;
	//m_buffer[m_bufferpos++] = 0xA5;
	//ParseData();
}

CEnOceanESP3::~CEnOceanESP3()
{

}

bool CEnOceanESP3::StartHardware()
{
	RequestStart();

	Init();

	m_retrycntr=ENOCEAN_RETRY_DELAY*5; //will force reconnect first thing

	//Start worker thread
	m_thread = std::make_shared<std::thread>(&CEnOceanESP3::Do_Work, this);
	SetThreadNameInt(m_thread->native_handle());

	return (m_thread != nullptr);
}

bool CEnOceanESP3::StopHardware()
{
	if (m_thread)
	{
		RequestStop();
		m_thread->join();
		m_thread.reset();
	}
	m_bIsStarted=false;
	return true;
}

void CEnOceanESP3::Init()
{
	ReloadVLDNodes();
}

void CEnOceanESP3::ReloadVLDNodes()
{
	m_VLDNodes.clear();
	std::vector<std::vector<std::string> > result;
	result = m_sql.safe_query("SELECT ID, DeviceID, Manufacturer, Profile, [Type] FROM EnoceanSensors WHERE (HardwareID==%d)", m_HwdID);
	if (!result.empty())
	{
		for (const auto & itt : result)
		{
			std::vector<std::string> sd = itt;
			_tVLDNode node;
			node.idx = atoi(sd[0].c_str());
			node.manufacturer = atoi(sd[2].c_str());
			node.profile = (uint8_t)atoi(sd[3].c_str());
			node.type = (uint8_t)atoi(sd[4].c_str());

			//convert to hex, and we have our ID
			std::stringstream s_strid;
			s_strid << std::hex << std::uppercase << sd[1];
			uint32_t devid;
			s_strid >> devid;
			m_VLDNodes[devid] = node;
		}
	}
}

_tVLDNode * CEnOceanESP3::FindVLDNodes(unsigned int id)
{
	auto itt = m_VLDNodes.find(id);
	if (itt != m_VLDNodes.end())
	{
		return &itt->second;
	}
	return 0;
}
void CEnOceanESP3::Do_Work()
{
	int msec_counter=0;
	int sec_counter = 0;

	_log.Log(LOG_STATUS, "EnOcean: Worker started...");

	while (!IsStopRequested(200))
	{
		msec_counter++;
		if (msec_counter == 5)
		{
			msec_counter = 0;
			sec_counter++;
			if (sec_counter % 12 == 0)
			{
				m_LastHeartbeat = mytime(NULL);
			}
//			testParsingData( sec_counter);
		}

		if (!isOpen())
		{
			if (m_retrycntr==0)
			{
				_log.Log(LOG_STATUS,"EnOcean: serial retrying in %d seconds...", ENOCEAN_RETRY_DELAY);
			}
			m_retrycntr++;
			if (m_retrycntr/5>=ENOCEAN_RETRY_DELAY)
			{
				m_retrycntr=0;
				m_bufferpos=0;
				OpenSerialDevice();
			}
		}
		if (m_sendqueue.size()>0)
		{
			std::lock_guard<std::mutex> l(m_sendMutex);

			std::vector<std::string>::iterator itt=m_sendqueue.begin();
			if (itt!=m_sendqueue.end())
			{
				std::string sBytes=*itt;
				write(sBytes.c_str(),sBytes.size());
				m_sendqueue.erase(itt);
			}
		}
	}
	terminate();

	_log.Log(LOG_STATUS,"EnOcean: Worker stopped...");
}

void CEnOceanESP3::Add2SendQueue(const char* pData, const size_t length)
{

	if (_log.isTraceEnabled()) {

		std::stringstream sstr;

		for (size_t idx = 0; idx < length; idx++)
		{
			sstr << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << (((unsigned int)pData[idx]) & 0xFF);
			if (idx != length - 1)
				sstr << " ";
		}
		_log.Debug(DEBUG_NORM, "EnOcean: Send: %s", sstr.str().c_str());
	}
	std::string sBytes;
	sBytes.insert(0,pData,length);
	std::lock_guard<std::mutex> l(m_sendMutex);
	m_sendqueue.push_back(sBytes);
}


bool CEnOceanESP3::OpenSerialDevice()
{
	//Try to open the Serial Port
	try
	{
		open(m_szSerialPort, 57600); //ECP3 open with 57600
		_log.Log(LOG_STATUS,"EnOcean: Using serial port: %s", m_szSerialPort.c_str());
	}
	catch (boost::exception & e)
	{
		_log.Log(LOG_ERROR,"EnOcean: Error opening serial port!");
#ifdef _DEBUG
		_log.Log(LOG_ERROR,"-----------------\n%s\n----------------", boost::diagnostic_information(e).c_str());
#else
		(void)e;
#endif
		return false;
	}
	catch ( ... )
	{
		_log.Log(LOG_ERROR,"EnOcean: Error opening serial port!!!");
		return false;
	}
	m_bIsStarted=true;

	m_receivestate=ERS_SYNCBYTE;
	setReadCallback(boost::bind(&CEnOceanESP3::readCallback, this, _1, _2));
	sOnConnected(this);

	uint8_t buf[100];

	//Request BASE_ID
	m_bBaseIDRequested=true;
	buf[0] = CO_RD_IDBASE;
	sendFrameQueue(PACKET_COMMON_COMMAND,buf,1,NULL,0);

	//Request Version
	buf[0] = CO_RD_VERSION;
	sendFrameQueue(PACKET_COMMON_COMMAND,buf,1,NULL,0);

	return true;
}

void CEnOceanESP3::readCallback(const char *data, size_t len)
{
	size_t ii=0;

	while (ii<len)
	{
		const unsigned char c = data[ii];

		switch (m_receivestate)
		{
		case ERS_SYNCBYTE:
			if (c!=0x55)
				return;
			m_receivestate = ERS_HEADER;
			m_bufferpos=0;
			break;
		case ERS_HEADER:
			m_buffer[m_bufferpos++]=c;
			if (m_bufferpos==5)
			{
				m_DataSize=(m_buffer[0]<<8)|m_buffer[1];
				m_OptionalDataSize=m_buffer[2];
				m_ReceivedPacketType=m_buffer[3];
				unsigned char CRCH=m_buffer[4];

				unsigned char crc=0;
				crc = proc_crc8(crc, m_buffer[0]);
				crc = proc_crc8(crc, m_buffer[1]);
				crc = proc_crc8(crc, m_buffer[2]);
				crc = proc_crc8(crc, m_buffer[3]);

				if (CRCH==crc)
				{
					m_bufferpos=0;
					m_wantedlength=m_DataSize+m_OptionalDataSize;
					m_receivestate = ERS_DATA;
				}
				else
				{
					_log.Log(LOG_ERROR,"EnOcean: Frame Checksum Error!...");
					m_receivestate = ERS_SYNCBYTE;
				}
			}
			break;
		case ERS_DATA:
			m_buffer[m_bufferpos++] = c;
			if (m_bufferpos>=m_wantedlength)
			{
				m_receivestate = ERS_CHECKSUM;
			}
			break;
		case ERS_CHECKSUM:
			{
				unsigned char CRCD=c;
				unsigned char crc=0;
				for (int iCheck=0; iCheck<m_wantedlength; iCheck++)
					crc = proc_crc8(crc, m_buffer[iCheck]);
				if (CRCD==crc)
				{
					ParseData();
				}
				m_receivestate = ERS_SYNCBYTE;
			}
			break;
		}
		ii++;
	}

}

//return position 0..100% from command / level
int getPositionFromCommandLevel(int cmnd , int pos )
{
	if (cmnd == light2_sOn)
		pos = 100;
	else if (cmnd == light2_sOff)
		pos = 0;
	else
		pos = pos * 100 / 15;

	return pos;
}
bool CEnOceanESP3::WriteToHardware(const char *pdata, const unsigned char /*length*/)
{
	if (m_id_base==0)
		return false;
	if (!isOpen())
		return false;
	RBUF *tsen=(RBUF*)pdata;
	if (tsen->LIGHTING2.packettype!=pTypeLighting2)
		return false; //only allowed to control switches

	unsigned long sID=(tsen->LIGHTING2.id1<<24)|(tsen->LIGHTING2.id2<<16)|(tsen->LIGHTING2.id3<<8)|tsen->LIGHTING2.id4;

	//to in range GateWay baseAdress..baseAdress+129
	if (!CheckIsGatewayAdress(sID) )
	{
		unsigned int unitBaseAddr = 0;

		//get sender adress from db
		unitBaseAddr = getSenderAdressFromDeviceId(sID);

		if ((unitBaseAddr<m_id_base) || (unitBaseAddr>m_id_base + 129)) {
			_log.Log(LOG_ERROR, "EnOcean: (1): Can not switch with this DeviceID, use a switch created with our id_base!...");
			return false;
		}
		int Manufacturer, Rorg, Func, iType;
		if (!getProfileFromDb(sID, Manufacturer, Rorg, Func, iType))
		{
			_log.Log(LOG_NORM, "EnOcean: Need Teach-In for %08X", sID);
			return false;
		}
		//D2-05
		if ((Rorg == 0xd2) && (Func == 0x05))
		{
			//build CMD 1 - Go to Position and Angle
			int channel = tsen->LIGHTING2.unitcode - 1;
			int pos = getPositionFromCommandLevel(tsen->LIGHTING2.cmnd, tsen->LIGHTING2.level);

			if (LastPosition == pos) {
				//send command stop si rappuie
				sendVld(unitBaseAddr, D20500_CMD2,  channel, 2, END_ARG_DATA);
				LastPosition = -1;
			}else{
				 sendVld(unitBaseAddr, D20500_CMD1,  pos, 127, 0, 0, channel, 1, END_ARG_DATA);
				 LastPosition = pos;
			}
		}
		//D2-01
		else	if ((Rorg == 0xd2) && (Func == 0x01))
			sendVld(unitBaseAddr, tsen->LIGHTING2.unitcode-1,  tsen->LIGHTING2.cmnd*64);
		return true ;

	}

	unsigned char RockerID=0;
	unsigned char Pressed=1;

	if (tsen->LIGHTING2.unitcode < 10)
	{
		RockerID = tsen->LIGHTING2.unitcode - 1;
	}
	else
		return false;//double not supported yet!


	//First we need to find out if this is a Dimmer switch,
	//because they are threaded differently
	bool bIsDimmer=false;
	uint8_t LastLevel=0;
	std::vector<std::vector<std::string> > result;
	char szDeviceID[20];
	sprintf(szDeviceID,"%08X",(unsigned int)sID);
	result = m_sql.safe_query("SELECT SwitchType,LastLevel FROM DeviceStatus WHERE (HardwareID==%d) AND (DeviceID=='%q') AND (Unit==%d)", m_HwdID, szDeviceID, int(tsen->LIGHTING2.unitcode));
	if (result.size()>0)
	{
		_eSwitchType switchtype=(_eSwitchType)atoi(result[0][0].c_str());
		if (switchtype==STYPE_Dimmer)
			bIsDimmer=true;
		LastLevel=(uint8_t)atoi(result[0][1].c_str());
	}

	uint8_t iLevel=tsen->LIGHTING2.level;
	int cmnd=tsen->LIGHTING2.cmnd;
	int orgcmd=cmnd;
	if ((tsen->LIGHTING2.level==0)&&(!bIsDimmer))
		cmnd=light2_sOff;
	else
	{
		if (cmnd==light2_sOn)
		{
			iLevel=LastLevel;
		}
		else
		{
			//scale to 0 - 100 %
			iLevel=tsen->LIGHTING2.level;
			if (iLevel>15)
				iLevel=15;
			float fLevel=(100.0f/15.0f)*float(iLevel);
			if (fLevel>99.0f)
				fLevel=100.0f;
			iLevel=(uint8_t)(fLevel);
		}
		cmnd=light2_sSetLevel;
	}

	//char buff[512];
	//sprintf(buff,"cmnd: %d, level: %d, orgcmd: %d",cmnd, iLevel, orgcmd);
	//_log.Log(LOG_ERROR,buff);
	unsigned char buf[100];
	//unsigned char optbuf[100];

	if(!bIsDimmer)
	{
		// on/off switch without dimming capability: Profile F6-02-01
		// cf. EnOcean Equipment Profiles v2.6.5 page 11 (RPS format) & 14
		unsigned char UpDown = 1;

		buf[0] = RORG_RPS;

		UpDown = ((orgcmd != light2_sOff) && (orgcmd != light2_sGroupOff));

		switch(RockerID)
		{
			case 0:	// Button A
						if(UpDown)
							buf[1] = F60201_BUTTON_A1 << F60201_R1_SHIFT;
						else
							buf[1] = F60201_BUTTON_A0 << F60201_R1_SHIFT;
						break;

			case 1:	// Button B
						if(UpDown)
							buf[1] = F60201_BUTTON_B1 << F60201_R1_SHIFT;
						else
							buf[1] = F60201_BUTTON_B0 << F60201_R1_SHIFT;
						break;

			default:
						return false;	// not supported
		}

		buf[1] |= F60201_EB_MASK;		// button is pressed

		buf[2]=(sID >> 24) & 0xff;		// Sender ID
		buf[3]=(sID >> 16) & 0xff;
		buf[4]=(sID >> 8) & 0xff;
		buf[5]=sID & 0xff;

		buf[6] = S_RPS_T21|S_RPS_NU;	// press button			// b5=T21, b4=NU, b3-b0= RepeaterCount

		//char buff[512];
		//sprintf(buff,"%02X %02X %02X %02X %02X %02X %02X",buf[0],buf[1],buf[2],buf[3],buf[4],buf[5],buf[6]);
		//_log.Log(LOG_ERROR,buff);

		sendFrameQueue(PACKET_RADIO,buf,7,NULL,0);

		//Next command is send a bit later (button release)
		buf[1] = 0;				// no button press
		buf[6] = S_RPS_T21;	// release button			// b5=T21, b4=NU, b3-b0= RepeaterCount
		//sprintf(buff,"%02X %02X %02X %02X %02X %02X %02X",buf[0],buf[1],buf[2],buf[3],buf[4],buf[5],buf[6]);
		//_log.Log(LOG_ERROR,buff);

		sendFrameQueue(PACKET_RADIO,buf,7,NULL,0);
	}
	else
	{
		// on/off switch with dimming capability: Profile A5-38-02
		// cf. EnOcean Equipment Profiles v2.6.5 page 12 (4BS format) & 103
		buf[0]=0xa5;
		buf[1]=0x2;
		buf[2]=100;	//level
		buf[3]=1;	//speed
		buf[4]=0x09; // Dim Off

		buf[5]=(sID >> 24) & 0xff;
		buf[6]=(sID >> 16) & 0xff;
		buf[7]=(sID >> 8) & 0xff;
		buf[8]=sID & 0xff;

		buf[9]=0x30; // status

		if (cmnd!=light2_sSetLevel)
		{
			//On/Off
			unsigned char UpDown = 1;
			UpDown = ((cmnd != light2_sOff) && (cmnd != light2_sGroupOff));

			buf[1] = (RockerID<<DB3_RPS_NU_RID_SHIFT) | (UpDown<<DB3_RPS_NU_UD_SHIFT) | (Pressed<<DB3_RPS_NU_PR_SHIFT);//0x30;
			buf[9] = 0x30;

			sendFrameQueue(PACKET_RADIO,buf,10,NULL,0);

			//char buff[512];
			//sprintf(buff,"%02X %02X %02X %02X %02X %02X %02X %02X %02X %02X",buf[0],buf[1],buf[2],buf[3],buf[4],buf[5],buf[6],buf[7],buf[8],buf[9]);
			//_log.Log(LOG_ERROR,buff);

			//Next command is send a bit later (button release)
			buf[1] = 0;
			buf[9] = 0x20;
			//sprintf(buff,"%02X %02X %02X %02X %02X %02X %02X %02X %02X %02X",buf[0],buf[1],buf[2],buf[3],buf[4],buf[5],buf[6],buf[7],buf[8],buf[9]);
			//_log.Log(LOG_ERROR,buff);
			sendFrameQueue(PACKET_RADIO,buf,10,NULL,0);
		}
		else
		{
			//Send dim value

			//Dim On DATA_BYTE0 = 0x09
			//Dim Off DATA_BYTE0 = 0x08

			buf[1]=2;
			buf[2]=iLevel;
			buf[3]=1;//very fast dimming

			if ((iLevel==0)||(orgcmd==light2_sOff))
				buf[4]=0x08; //Dim Off
			else
				buf[4]=0x09;//Dim On

			sendFrameQueue(PACKET_RADIO,buf,10,NULL,0);
		}
	}

	return true;
}

void CEnOceanESP3::SendDimmerTeachIn(const char *pdata, const unsigned char /*length*/)
{
	if (m_id_base==0)
		return;
	if (isOpen()) {
		RBUF *tsen = (RBUF*)pdata;
		if (tsen->LIGHTING2.packettype != pTypeLighting2)
			return; //only allowed to control switches
		unsigned long sID = (tsen->LIGHTING2.id1 << 24) | (tsen->LIGHTING2.id2 << 16) | (tsen->LIGHTING2.id3 << 8) | tsen->LIGHTING2.id4;
		if ((sID<m_id_base) || (sID>m_id_base + 129))
		{
			_log.Log(LOG_ERROR, "EnOcean (2): Can not switch with this DeviceID, use a switch created with our id_base!...");
			return;
		}

		unsigned char buf[100];
		buf[0] = 0xa5;
		buf[1] = 0x2;
		buf[2] = 0;
		buf[3] = 0;
		buf[4] = 0x0; // DB0.3=0 -> teach in

		buf[5] = (sID >> 24) & 0xff;
		buf[6] = (sID >> 16) & 0xff;
		buf[7] = (sID >> 8) & 0xff;
		buf[8] = sID & 0xff;

		buf[9] = 0x30; // status

		if (tsen->LIGHTING2.unitcode < 10)
		{
			unsigned char RockerID = 0;
			//unsigned char UpDown = 1;
			//unsigned char Pressed = 1;
			RockerID = tsen->LIGHTING2.unitcode - 1;
		}
		else
		{
			return;//double not supported yet!
		}
		sendFrame(PACKET_RADIO,buf,10,NULL,0);
	}
}

float CEnOceanESP3::GetValueRange(const float InValue, const float ScaleMax, const float ScaleMin, const float RangeMax, const float RangeMin)
{
	float vscale=ScaleMax-ScaleMin;
	if (vscale==0)
		return 0.0f;
	float vrange=RangeMax-RangeMin;
	if (vrange==0)
		return 0.0f;
	float multiplyer=vscale/vrange;
	return multiplyer*(InValue-RangeMin)+ScaleMin;
}

bool CEnOceanESP3::ParseData()
{
	if (_log.isTraceEnabled())
	{
		std::stringstream sstr;

		sstr << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << (unsigned int)m_ReceivedPacketType << ":" << PACKET_TYPE_name[m_ReceivedPacketType] << " (";
		sstr << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << (unsigned int)m_DataSize << "/";
		sstr << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << (unsigned int)m_OptionalDataSize << ") ";

		for (int idx=0;idx<m_bufferpos;idx++)
		{
			sstr << std::hex << std::uppercase << std::setw(2) << std::setfill('0') << (unsigned int)m_buffer[idx];
			if (idx == m_DataSize - 1)
				sstr << " -";
			if (idx!=m_bufferpos-1)
				sstr << " ";
		}
		char szTmp[100];
		if (m_OptionalDataSize == 7)
		{
			sprintf(szTmp, "Dest: 0x%02x%02x%02x%02x RSSI: %i",
				m_buffer[m_DataSize + 1], m_buffer[m_DataSize + 2], m_buffer[m_DataSize + 3], m_buffer[m_DataSize + 4],	(100 - m_buffer[m_DataSize + 5]) );
		}
		else {
			sprintf(szTmp, "Opt Size: %i", m_OptionalDataSize);
		}

		_log.Debug(DEBUG_NORM,"EnOcean: recv %s %s ",sstr.str().c_str() , szTmp );

	}

	if (m_ReceivedPacketType==PACKET_RESPONSE)
	{
		//Response
		unsigned char ResponseCode=m_buffer[0];
		if (ResponseCode!=0)
		{
			std::string szError="Unknown?";
			switch (ResponseCode)
			{
			case RET_ERROR:
				szError="RET_ERROR";
				break;
			case RET_NOT_SUPPORTED:
				szError="RET_NOT_SUPPORTED";
				break;
			case RET_WRONG_PARAM:
				szError="RET_WRONG_PARAM";
				break;
			case RET_OPERATION_DENIED:
				szError="RET_OPERATION_DENIED";
				break;
			}
			_log.Log(LOG_ERROR,"EnOcean: Response Error (Code: %d, %s)",ResponseCode,szError.c_str());
			return false;
		}
		if ((m_bBaseIDRequested) && (m_bufferpos == 6))
		{
			m_bBaseIDRequested = false;
			m_id_base = (m_buffer[1] << 24) + (m_buffer[2] << 16) + (m_buffer[3] << 8) + m_buffer[4];
			//unsigned char changes_left=m_buffer[5];
			_log.Log(LOG_STATUS, "EnOcean: Transceiver ID_Base: 0x%08lx", m_id_base);
		}
		else if (m_bufferpos == 33)
		{
			//Version Information
			_log.Log(LOG_STATUS, "EnOcean: Version_Info, App: %02x.%02x.%02x.%02x, API: %02x.%02x.%02x.%02x, ChipID: %02x.%02x.%02x.%02x, ChipVersion: %02x.%02x.%02x.%02x, Description: %s",
				m_buffer[1], m_buffer[2], m_buffer[3], m_buffer[4],
				m_buffer[5], m_buffer[6], m_buffer[7], m_buffer[8],
				m_buffer[9], m_buffer[10], m_buffer[11], m_buffer[12],
				m_buffer[13], m_buffer[14], m_buffer[15], m_buffer[16],
				(const char*)&m_buffer + 17
			);
		}
		else
			setRemote_man_answer(PACKET_RESPONSE);
		return true;
	}
	else if (m_ReceivedPacketType==PACKET_RADIO)
		ParseRadioDatagram();
	else if (m_ReceivedPacketType == PACKET_REMOTE_MAN_COMMAND) {
		parse_PACKET_REMOTE_MAN_COMMAND(m_buffer, m_DataSize, m_OptionalDataSize);
	}
	else
	{
		char szTmp[100];
		sprintf(szTmp,"Unhandled Packet Type (0x%02x)",m_ReceivedPacketType);
		_log.Log(LOG_STATUS, "%s", szTmp);
	}
/*
	enocean_data_structure *pFrame=(enocean_data_structure*)&m_buffer;
	unsigned char Checksum=enocean_calc_checksum(pFrame);
	if (Checksum!=pFrame->CHECKSUM)
		return false; //checksum Mismatch!

	long id = (pFrame->ID_BYTE3 << 24) + (pFrame->ID_BYTE2 << 16) + (pFrame->ID_BYTE1 << 8) + pFrame->ID_BYTE0;
	char szDeviceID[20];
	sprintf(szDeviceID,"%08X",(unsigned int)id);

	//Handle possible OK/Errors
	bool bStopProcessing=false;
	if (pFrame->H_SEQ_LENGTH==0x8B)
	{
		switch (pFrame->ORG)
		{
		case 0x58:
			//OK
#ifdef _DEBUG
			_log.Log(LOG_NORM,"EnOcean: OK");
#endif
			bStopProcessing=true;
			break;
		case 0x28:
			_log.Log(LOG_ERROR,"EnOcean: ERR_MODEM_NOTWANTEDACK");
			bStopProcessing=true;
			break;
		case 0x29:
			_log.Log(LOG_ERROR,"EnOcean: ERR_MODEM_NOTACK");
			bStopProcessing=true;
			break;
		case 0x0C:
			_log.Log(LOG_ERROR,"EnOcean: ERR_MODEM_DUP_ID");
			bStopProcessing=true;
			break;
		case 0x08:
			_log.Log(LOG_ERROR,"EnOcean: Error in H_SEQ");
			bStopProcessing=true;
			break;
		case 0x09:
			_log.Log(LOG_ERROR,"EnOcean: Error in LENGTH");
			bStopProcessing=true;
			break;
		case 0x0A:
			_log.Log(LOG_ERROR,"EnOcean: Error in CHECKSUM");
			bStopProcessing=true;
			break;
		case 0x0B:
			_log.Log(LOG_ERROR,"EnOcean: Error in ORG");
			bStopProcessing=true;
			break;
		case 0x22:
			_log.Log(LOG_ERROR,"EnOcean: ERR_TX_IDRANGE");
			bStopProcessing=true;
			break;
		case 0x1A:
			_log.Log(LOG_ERROR,"EnOcean: ERR_ IDRANGE");
			bStopProcessing=true;
			break;
		}
	}
	if (bStopProcessing)
		return true;

	switch (pFrame->ORG)
	{
	case C_ORG_INF_IDBASE:
		m_id_base = (pFrame->DATA_BYTE3 << 24) + (pFrame->DATA_BYTE2 << 16) + (pFrame->DATA_BYTE1 << 8) + pFrame->DATA_BYTE0;
		_log.Log(LOG_STATUS,"EnOcean: Transceiver ID_Base: 0x%08x",m_id_base);
		break;
	case C_ORG_RPS:
		if (pFrame->STATUS & S_RPS_NU) {
			//Rocker
			// NU == 1, N-Message
			unsigned char RockerID=(pFrame->DATA_BYTE3 & DB3_RPS_NU_RID) >> DB3_RPS_NU_RID_SHIFT;
			unsigned char UpDown=(pFrame->DATA_BYTE3 & DB3_RPS_NU_UD) >> DB3_RPS_NU_UD_SHIFT;
			unsigned char Pressed=(pFrame->DATA_BYTE3 & DB3_RPS_NU_PR)>>DB3_RPS_NU_PR_SHIFT;
			unsigned char SecondRockerID=(pFrame->DATA_BYTE3 & DB3_RPS_NU_SRID)>>DB3_RPS_NU_SRID_SHIFT;
			unsigned char SecondUpDown=(pFrame->DATA_BYTE3 & DB3_RPS_NU_SUD)>>DB3_RPS_NU_SUD_SHIFT;
			unsigned char SecondAction=(pFrame->DATA_BYTE3 & DB3_RPS_NU_SA)>>DB3_RPS_NU_SA_SHIFT;
#ifdef _DEBUG
			_log.Log(LOG_NORM,"Received RPS N-Message Node 0x%08x Rocker ID: %i UD: %i Pressed: %i Second Rocker ID: %i SUD: %i Second Action: %i",
				id,
				RockerID,
				UpDown,
				Pressed,
				SecondRockerID,
				SecondUpDown,
				SecondAction);
#endif
			//We distinguish 3 types of buttons from a switch: Left/Right/Left+Right
			if (Pressed==1)
			{
				RBUF tsen;
				memset(&tsen,0,sizeof(RBUF));
				tsen.LIGHTING2.packetlength=sizeof(tsen.LIGHTING2)-1;
				tsen.LIGHTING2.packettype=pTypeLighting2;
				tsen.LIGHTING2.subtype=sTypeAC;
				tsen.LIGHTING2.seqnbr=0;
				tsen.LIGHTING2.id1=(BYTE)pFrame->ID_BYTE3;
				tsen.LIGHTING2.id2=(BYTE)pFrame->ID_BYTE2;
				tsen.LIGHTING2.id3=(BYTE)pFrame->ID_BYTE1;
				tsen.LIGHTING2.id4=(BYTE)pFrame->ID_BYTE0;
				tsen.LIGHTING2.level=0;
				tsen.LIGHTING2.rssi=12;

				if (SecondAction==0)
				{
					//Left/Right Up/Down
					tsen.LIGHTING2.unitcode=RockerID+1;
					tsen.LIGHTING2.cmnd=(UpDown==1)?light2_sOn:light2_sOff;
				}
				else
				{
					//Left+Right Up/Down
					tsen.LIGHTING2.unitcode=SecondRockerID+10;
					tsen.LIGHTING2.cmnd=(SecondUpDown==1)?light2_sOn:light2_sOff;
				}
				sDecodeRXMessage(this, (const unsigned char *)&tsen.LIGHTING2, NULL, 255);
			}
		}
		break;
	case C_ORG_4BS:
		break;
	default:
		{
			char *pszHumenTxt=enocean_hexToHuman(pFrame);
			if (pszHumenTxt)
			{
				_log.Log(LOG_NORM, "EnOcean: %s", pszHumenTxt);
				free(pszHumenTxt);
			}
		}
		break;
	}
*/
    return true;
}

void CEnOceanESP3::ParseRadioDatagram()
{
	switch (m_buffer[0])
	{
		case RORG_1BS: // 1 byte communication (Contacts/Switches)
			{
				_log.Log(LOG_NORM, "EnOcean: 1BS data: Sender id: 0x%02x%02x%02x%02x Data: %02x",
					m_buffer[2],m_buffer[3],m_buffer[4],m_buffer[5],m_buffer[0]		);

				int UpDown=(m_buffer[1] &1)==0;
				//conpute sender ID & cmd
				unsigned int senderId = DeviceArrayToInt(&m_buffer[2]);
				bool cmnd = (UpDown == 1) ? true : false;
				SendSwitch(senderId, 1, -1, cmnd, 0, "");
				AddSensors(senderId, 0xd5, 0x7ff, 00, 01, 0);

			}
			break;
		case RORG_4BS: // 4 byte communication
			{
				_log.Log(LOG_NORM, "EnOcean: 4BS data: Sender id: 0x%02x%02x%02x%02x Status: %02x Data: %02x %02x %02x %02x ",
					m_buffer[5],m_buffer[6],m_buffer[7],m_buffer[8],m_buffer[9],  m_buffer[1], m_buffer[2], m_buffer[3], m_buffer[4]	);

				unsigned char DATA_BYTE3 = m_buffer[1];
				unsigned char DATA_BYTE2 = m_buffer[2];
				unsigned char DATA_BYTE1 = m_buffer[3];
				unsigned char DATA_BYTE0 = m_buffer[4];

				unsigned char ID_BYTE3  = m_buffer[5];
				unsigned char ID_BYTE2  = m_buffer[6];
				unsigned char ID_BYTE1  = m_buffer[7];
				unsigned char ID_BYTE0  = m_buffer[8];

				long id = (ID_BYTE3 << 24) + (ID_BYTE2 << 16) + (ID_BYTE1 << 8) + ID_BYTE0;
				char szDeviceID[20];
				sprintf(szDeviceID,"%08X",(unsigned int)id);

				if ((DATA_BYTE0 & RORG_4BS_TEACHIN_LRN_BIT) == 0)	// LRN_BIT is 0 -> Teach-in datagram
				{
					int manufacturer;
					int profile;
					int ttype;

					// 2016-01-31 Stéphane Guillard : added handling of this case:
					if ((DATA_BYTE0 & RORG_4BS_TEACHIN_EEP_BIT) == 0)
					{
						// RORG_4BS_TEACHIN_EEP_BIT is 0 -> Teach-in Variant 1 : data doesn't contain EEP and Manufacturer ID
						// An EEP profile must be manually allocated per sender ID (see EEP 2.6.2 specification §3.3 p173/197)
						_log.Log(LOG_NORM, "EnOcean: 4BS, Variant 1 Teach-in diagram: Sender_ID: 0x%08lX", id);
						_log.Log(LOG_NORM, "Teach-in data contains no EEP profile. Created generic A5-02-05 profile (0/40°C temp sensor); please adjust by hand using Setup button on EnOcean adapter in Setup/Hardware menu");

						manufacturer = 0x7FF;			// Generic
						profile = 2;					// == T4BSTable[4].Func: Temperature Sensor Range 0C to +40C
						ttype = 5;						// == T4BSTable[4].Type
					}
					else
					{
						// RORG_4BS_TEACHIN_EEP_BIT is 1 -> Teach-in Variant 2 : data contains EEP and Manufacturer ID

						//DB3		DB3/2	DB2/1			DB0
						//Profile	Type	Manufacturer-ID	RORG_4BS_TEACHIN_EEP_BIT		RE2		RE1				RORG_4BS_TEACHIN_LRN_BIT
						//6 Bit		7 Bit	11 Bit			1Bit		1Bit	1Bit	1Bit	1Bit	1Bit	1Bit	1Bit

						// Extract manufacturer, profile and type from data
						manufacturer = ((DATA_BYTE2 & 7) << 8) | DATA_BYTE1;
						profile = DATA_BYTE3 >> 2;
						ttype = ((DATA_BYTE3 & 3) << 5) | (DATA_BYTE2 >> 3);

						_log.Log(LOG_NORM,"EnOcean: 4BS, Variant 2 Teach-in diagram: Sender_ID: 0x%08X Manufacturer: 0x%02x (%s) Profile: 0x%02X Type: 0x%02X (%s)", 
							id, manufacturer,Get_EnoceanManufacturer(manufacturer),	profile,ttype,Get_Enocean4BSType(0xA5,profile,ttype));
 					}

					// Search the sensor in database
					if (SensorExist(id) == 0)
					{
						// If not found, add it to the database
						CreateSensors(id, RORG_4BS, manufacturer, profile, ttype,0);
					}
					else
						_log.Debug(DEBUG_NORM, "EnOcean: Sender_ID 0x%08X already in the database", id);
					ReloadVLDNodes();
				}
				else	// RORG_4BS_TEACHIN_LRN_BIT is 1 -> Data datagram
				{
					//Following sensors need to have had a teach-in
					int Manufacturer, Rorg, Profile, iType;
					if (!getProfileFromDb(id, Manufacturer, Rorg, Profile, iType))

					{
						_log.Log(LOG_NORM, "EnOcean: Need Teach-In for %s", szDeviceID);
						return;
					}

					const std::string szST=Get_Enocean4BSType(0xA5,Profile,iType);

					if (szST=="AMR.Counter")
					{
						//0xA5, 0x12, 0x00, "Counter"
						unsigned long cvalue=(DATA_BYTE3<<16)|(DATA_BYTE2<<8)|(DATA_BYTE1);
						RBUF tsen;
						memset(&tsen,0,sizeof(RBUF));
						tsen.RFXMETER.packetlength=sizeof(tsen.RFXMETER)-1;
						tsen.RFXMETER.packettype=pTypeRFXMeter;
						tsen.RFXMETER.subtype=sTypeRFXMeterCount;
						tsen.RFXMETER.rssi=12;
						tsen.RFXMETER.id1=ID_BYTE2;
						tsen.RFXMETER.id2=ID_BYTE1;
						tsen.RFXMETER.count1 = (BYTE)((cvalue & 0xFF000000) >> 24);
						tsen.RFXMETER.count2 = (BYTE)((cvalue & 0x00FF0000) >> 16);
						tsen.RFXMETER.count3 = (BYTE)((cvalue & 0x0000FF00) >> 8);
						tsen.RFXMETER.count4 = (BYTE)(cvalue & 0x000000FF);
						sDecodeRXMessage(this, (const unsigned char *)&tsen.RFXMETER, NULL, 255);
					}
					else if (szST=="AMR.Electricity")
					{
						//0xA5, 0x12, 0x01, "Electricity"
						int cvalue=(DATA_BYTE3<<16)|(DATA_BYTE2<<8)|(DATA_BYTE1);
						_tUsageMeter umeter;
						umeter.id1=(BYTE)ID_BYTE3;
						umeter.id2=(BYTE)ID_BYTE2;
						umeter.id3=(BYTE)ID_BYTE1;
						umeter.id4=(BYTE)ID_BYTE0;
						umeter.dunit=1;
						umeter.fusage=(float)cvalue;
						sDecodeRXMessage(this, (const unsigned char *)&umeter, NULL, 255);
					}
					else if (szST=="AMR.Gas")
					{
						//0xA5, 0x12, 0x02, "Gas"
						unsigned long cvalue=(DATA_BYTE3<<16)|(DATA_BYTE2<<8)|(DATA_BYTE1);
						RBUF tsen;
						memset(&tsen,0,sizeof(RBUF));
						tsen.RFXMETER.packetlength=sizeof(tsen.RFXMETER)-1;
						tsen.RFXMETER.packettype=pTypeRFXMeter;
						tsen.RFXMETER.subtype=sTypeRFXMeterCount;
						tsen.RFXMETER.rssi=12;
						tsen.RFXMETER.id1=ID_BYTE2;
						tsen.RFXMETER.id2=ID_BYTE1;
						tsen.RFXMETER.count1 = (BYTE)((cvalue & 0xFF000000) >> 24);
						tsen.RFXMETER.count2 = (BYTE)((cvalue & 0x00FF0000) >> 16);
						tsen.RFXMETER.count3 = (BYTE)((cvalue & 0x0000FF00) >> 8);
						tsen.RFXMETER.count4 = (BYTE)(cvalue & 0x000000FF);
						sDecodeRXMessage(this, (const unsigned char *)&tsen.RFXMETER, NULL, 255);
					}
					else if (szST=="AMR.Water")
					{
						//0xA5, 0x12, 0x03, "Water"
						unsigned long cvalue=(DATA_BYTE3<<16)|(DATA_BYTE2<<8)|(DATA_BYTE1);
						RBUF tsen;
						memset(&tsen,0,sizeof(RBUF));
						tsen.RFXMETER.packetlength=sizeof(tsen.RFXMETER)-1;
						tsen.RFXMETER.packettype=pTypeRFXMeter;
						tsen.RFXMETER.subtype=sTypeRFXMeterCount;
						tsen.RFXMETER.rssi=12;
						tsen.RFXMETER.id1=ID_BYTE2;
						tsen.RFXMETER.id2=ID_BYTE1;
						tsen.RFXMETER.count1 = (BYTE)((cvalue & 0xFF000000) >> 24);
						tsen.RFXMETER.count2 = (BYTE)((cvalue & 0x00FF0000) >> 16);
						tsen.RFXMETER.count3 = (BYTE)((cvalue & 0x0000FF00) >> 8);
						tsen.RFXMETER.count4 = (BYTE)(cvalue & 0x000000FF);
						sDecodeRXMessage(this, (const unsigned char *)&tsen.RFXMETER, NULL, 255);
					}
					else if (szST.find("RoomOperatingPanel") == 0)
					{
						if (iType<0x0E)
						{
							// Room Sensor and Control Unit (EEP A5-10-01 ... A5-10-0D)
							// [Eltako FTR55D, FTR55H, Thermokon SR04 *, Thanos SR *, untested]
							// DATA_BYTE3 is the fan speed or night reduction for Eltako
							// DATA_BYTE2 is the setpoint where 0x00 = min ... 0xFF = max or
							// reference temperature for Eltako where 0x00 = 0°C ... 0xFF = 40°C
							// DATA_BYTE1 is the temperature where 0x00 = +40°C ... 0xFF = 0°C
							// DATA_BYTE0_bit_0 is the occupy button, pushbutton or slide switch
							float temp=GetValueRange(DATA_BYTE1,0,40);
							if (Manufacturer == 0x0D)
							{
								//Eltako
								int nightReduction = 0;
								if (DATA_BYTE3 == 0x06)
									nightReduction = 1;
								else if (DATA_BYTE3 == 0x0C)
									nightReduction = 2;
								else if (DATA_BYTE3 == 0x13)
									nightReduction = 3;
								else if (DATA_BYTE3 == 0x19)
									nightReduction = 4;
								else if (DATA_BYTE3 == 0x1F)
									nightReduction = 5;
								//float setpointTemp=GetValueRange(DATA_BYTE2,40);
							}
							else
							{
								int fspeed = 3;
								if (DATA_BYTE3 >= 145)
									fspeed = 2;
								else if (DATA_BYTE3 >= 165)
									fspeed = 1;
								else if (DATA_BYTE3 >= 190)
									fspeed = 0;
								else if (DATA_BYTE3 >= 210)
									fspeed = -1; //auto
								//int iswitch = DATA_BYTE0 & 1;
							}
							RBUF tsen;
							memset(&tsen,0,sizeof(RBUF));
							tsen.TEMP.packetlength=sizeof(tsen.TEMP)-1;
							tsen.TEMP.packettype=pTypeTEMP;
							tsen.TEMP.subtype=sTypeTEMP10;
							tsen.TEMP.id1=ID_BYTE2;
							tsen.TEMP.id2=ID_BYTE1;
							tsen.TEMP.battery_level=ID_BYTE0&0x0F;
							tsen.TEMP.rssi=(ID_BYTE0&0xF0)>>4;

							tsen.TEMP.tempsign=(temp>=0)?0:1;
							int at10=round(std::abs(temp*10.0f));
							tsen.TEMP.temperatureh=(BYTE)(at10/256);
							at10-=(tsen.TEMP.temperatureh*256);
							tsen.TEMP.temperaturel=(BYTE)(at10);
							sDecodeRXMessage(this, (const unsigned char *)&tsen.TEMP, NULL, -1);
						}
					}
					else if (szST == "LightSensor.01")
					{
						// Light Sensor (EEP A5-06-01)
						// [Eltako FAH60, FAH63, FIH63, Thermokon SR65 LI, untested]
						// DATA_BYTE3 is the voltage where 0x00 = 0 V ... 0xFF = 5.1 V
						// DATA_BYTE3 is the low illuminance for Eltako devices where
						// min 0x00 = 0 lx, max 0xFF = 100 lx, if DATA_BYTE2 = 0
						// DATA_BYTE2 is the illuminance (ILL2) where min 0x00 = 300 lx, max 0xFF = 30000 lx
						// DATA_BYTE1 is the illuminance (ILL1) where min 0x00 = 600 lx, max 0xFF = 60000 lx
						// DATA_BYTE0_bit_0 is Range select where 0 = ILL1, 1 = ILL2
						float lux =0;
						if (Manufacturer == 0x0D)
						{
							if(DATA_BYTE2 == 0) {
								lux=GetValueRange(DATA_BYTE3,100);
							} else {
								lux=GetValueRange(DATA_BYTE2,30000,300);
							}
						} else {
							float voltage=GetValueRange(DATA_BYTE3,5100); //mV
							if(DATA_BYTE0 & 1) {
								lux=GetValueRange(DATA_BYTE2,30000,300);
							} else {
								lux=GetValueRange(DATA_BYTE1,60000,600);
							}
							RBUF tsen;
							memset(&tsen,0,sizeof(RBUF));
							tsen.RFXSENSOR.packetlength=sizeof(tsen.RFXSENSOR)-1;
							tsen.RFXSENSOR.packettype=pTypeRFXSensor;
							tsen.RFXSENSOR.subtype=sTypeRFXSensorVolt;
							tsen.RFXSENSOR.id=ID_BYTE1;
							tsen.RFXSENSOR.filler=ID_BYTE0&0x0F;
							tsen.RFXSENSOR.rssi=(ID_BYTE0&0xF0)>>4;
							tsen.RFXSENSOR.msg1 = (BYTE)(voltage/256);
							tsen.RFXSENSOR.msg2 = (BYTE)(voltage-(tsen.RFXSENSOR.msg1*256));
							sDecodeRXMessage(this, (const unsigned char *)&tsen.RFXSENSOR, NULL, 255);
						}
						_tLightMeter lmeter;
						lmeter.id1=(BYTE)ID_BYTE3;
						lmeter.id2=(BYTE)ID_BYTE2;
						lmeter.id3=(BYTE)ID_BYTE1;
						lmeter.id4=(BYTE)ID_BYTE0;
						lmeter.dunit=1;
						lmeter.fLux=lux;
						sDecodeRXMessage(this, (const unsigned char *)&lmeter, NULL, 255);
					}
					else if (szST.find("Temperature")==0)
					{
						//(EPP A5-02 01/30)
						float ScaleMax=0;
						float ScaleMin=0;
						if (iType==0x01) { ScaleMin=-40; ScaleMax=0; }
						else if (iType==0x02) { ScaleMin=-30; ScaleMax=10; }
						else if (iType==0x03) { ScaleMin=-20; ScaleMax=20; }
						else if (iType==0x04) { ScaleMin=-10; ScaleMax=30; }
						else if (iType==0x05) { ScaleMin=0; ScaleMax=40; }
						else if (iType==0x06) { ScaleMin=10; ScaleMax=50; }
						else if (iType==0x07) { ScaleMin=20; ScaleMax=60; }
						else if (iType==0x08) { ScaleMin=30; ScaleMax=70; }
						else if (iType==0x09) { ScaleMin=40; ScaleMax=80; }
						else if (iType==0x0A) { ScaleMin=50; ScaleMax=90; }
						else if (iType==0x0B) { ScaleMin=60; ScaleMax=100; }
						else if (iType==0x10) { ScaleMin=-60; ScaleMax=20; }
						else if (iType==0x11) { ScaleMin=-50; ScaleMax=30; }
						else if (iType==0x12) { ScaleMin=-40; ScaleMax=40; }
						else if (iType==0x13) { ScaleMin=-30; ScaleMax=50; }
						else if (iType==0x14) { ScaleMin=-20; ScaleMax=60; }
						else if (iType==0x15) { ScaleMin=-10; ScaleMax=70; }
						else if (iType==0x16) { ScaleMin=0; ScaleMax=80; }
						else if (iType==0x17) { ScaleMin=10; ScaleMax=90; }
						else if (iType==0x18) { ScaleMin=20; ScaleMax=100; }
						else if (iType==0x19) { ScaleMin=30; ScaleMax=110; }
						else if (iType==0x1A) { ScaleMin=40; ScaleMax=120; }
						else if (iType==0x1B) { ScaleMin=50; ScaleMax=130; }
						else if (iType==0x20) { ScaleMin=-10; ScaleMax=41.2f; }
						else if (iType==0x30) { ScaleMin=-40; ScaleMax=62.3f; }

						float temp;
						if (iType<0x20)
							temp=GetValueRange(DATA_BYTE1,ScaleMax,ScaleMin,0,255);
						else
							temp=GetValueRange(float(((DATA_BYTE2&3)<<8)|DATA_BYTE1),ScaleMax,ScaleMin); //10bit
						RBUF tsen;
						memset(&tsen,0,sizeof(RBUF));
						tsen.TEMP.packetlength=sizeof(tsen.TEMP)-1;
						tsen.TEMP.packettype=pTypeTEMP;
						tsen.TEMP.subtype=sTypeTEMP10;
						tsen.TEMP.id1=ID_BYTE2;
						tsen.TEMP.id2=ID_BYTE1;
						tsen.TEMP.battery_level=ID_BYTE0&0x0F;
						tsen.TEMP.rssi=(ID_BYTE0&0xF0)>>4;

						tsen.TEMP.tempsign=(temp>=0)?0:1;
						int at10=round(std::abs(temp*10.0f));
						tsen.TEMP.temperatureh=(BYTE)(at10/256);
						at10-=(tsen.TEMP.temperatureh*256);
						tsen.TEMP.temperaturel=(BYTE)(at10);
						sDecodeRXMessage(this, (const unsigned char *)&tsen.TEMP, NULL, -1);
					}
					else if (szST.find("TempHum")==0)
					{
						//(EPP A5-04 01/02)
						float ScaleMax = 0;
						float ScaleMin = 0;
						if (iType == 0x01) { ScaleMin = 0; ScaleMax = 40; }
						else if (iType == 0x02) { ScaleMin = -20; ScaleMax = 60; }
						else if (iType == 0x03) { ScaleMin = -20; ScaleMax = 60; } //10bit?

						float temp = GetValueRange(DATA_BYTE1, ScaleMax, ScaleMin,250,0);
						float hum = GetValueRange(DATA_BYTE2, 100);
						RBUF tsen;
						memset(&tsen,0,sizeof(RBUF));
						tsen.TEMP_HUM.packetlength=sizeof(tsen.TEMP_HUM)-1;
						tsen.TEMP_HUM.packettype=pTypeTEMP_HUM;
						tsen.TEMP_HUM.subtype=sTypeTH5;
						tsen.TEMP_HUM.rssi=12;
						tsen.TEMP_HUM.id1=ID_BYTE2;
						tsen.TEMP_HUM.id2=ID_BYTE1;
						tsen.TEMP_HUM.battery_level=9;
						tsen.TEMP_HUM.tempsign=(temp>=0)?0:1;
						int at10=round(std::abs(temp*10.0f));
						tsen.TEMP_HUM.temperatureh=(BYTE)(at10/256);
						at10-=(tsen.TEMP_HUM.temperatureh*256);
						tsen.TEMP_HUM.temperaturel=(BYTE)(at10);
						tsen.TEMP_HUM.humidity=(BYTE)hum;
						tsen.TEMP_HUM.humidity_status=Get_Humidity_Level(tsen.TEMP_HUM.humidity);
						sDecodeRXMessage(this, (const unsigned char *)&tsen.TEMP_HUM, NULL, -1);
					}
					else if (szST == "OccupancySensor.01")
					{
						//(EPP A5-07-01)
						if (DATA_BYTE3 < 251)
						{
							RBUF tsen;

							if (DATA_BYTE0 & 1)
							{
								//Voltage supported
								float voltage = GetValueRange(DATA_BYTE3, 5.0f, 0, 250, 0);
								memset(&tsen, 0, sizeof(RBUF));
								tsen.RFXSENSOR.packetlength = sizeof(tsen.RFXSENSOR) - 1;
								tsen.RFXSENSOR.packettype = pTypeRFXSensor;
								tsen.RFXSENSOR.subtype = sTypeRFXSensorVolt;
								tsen.RFXSENSOR.id = ID_BYTE1;
								tsen.RFXSENSOR.filler = ID_BYTE0 & 0x0F;
								tsen.RFXSENSOR.rssi = (ID_BYTE0 & 0xF0) >> 4;
								tsen.RFXSENSOR.msg1 = (BYTE)(voltage / 256);
								tsen.RFXSENSOR.msg2 = (BYTE)(voltage - (tsen.RFXSENSOR.msg1 * 256));
								sDecodeRXMessage(this, (const unsigned char *)&tsen.RFXSENSOR, NULL, 255);
							}

							bool bPIROn = (DATA_BYTE1 > 127);
							memset(&tsen, 0, sizeof(RBUF));
							tsen.LIGHTING2.packetlength = sizeof(tsen.LIGHTING2) - 1;
							tsen.LIGHTING2.packettype = pTypeLighting2;
							tsen.LIGHTING2.subtype = sTypeAC;
							tsen.LIGHTING2.seqnbr = 0;

							tsen.LIGHTING2.id1 = (BYTE)ID_BYTE3;
							tsen.LIGHTING2.id2 = (BYTE)ID_BYTE2;
							tsen.LIGHTING2.id3 = (BYTE)ID_BYTE1;
							tsen.LIGHTING2.id4 = (BYTE)ID_BYTE0;
							tsen.LIGHTING2.level = 0;
							tsen.LIGHTING2.rssi = 12;
							tsen.LIGHTING2.unitcode = 1;
							tsen.LIGHTING2.cmnd = (bPIROn) ? light2_sOn : light2_sOff;
							sDecodeRXMessage(this, (const unsigned char *)&tsen.LIGHTING2, NULL, 255);
						}
						else {
							//Error code
						}
					}
					else if (szST == "OccupancySensor.02")
					{
						//(EPP A5-07-02)
						if (DATA_BYTE3 < 251)
						{
							RBUF tsen;

							float voltage = GetValueRange(DATA_BYTE3, 5.0f, 0, 250, 0);
							memset(&tsen, 0, sizeof(RBUF));
							tsen.RFXSENSOR.packetlength = sizeof(tsen.RFXSENSOR) - 1;
							tsen.RFXSENSOR.packettype = pTypeRFXSensor;
							tsen.RFXSENSOR.subtype = sTypeRFXSensorVolt;
							tsen.RFXSENSOR.id = ID_BYTE1;
							tsen.RFXSENSOR.filler = ID_BYTE0 & 0x0F;
							tsen.RFXSENSOR.rssi = (ID_BYTE0 & 0xF0) >> 4;
							tsen.RFXSENSOR.msg1 = (BYTE)(voltage / 256);
							tsen.RFXSENSOR.msg2 = (BYTE)(voltage - (tsen.RFXSENSOR.msg1 * 256));
							sDecodeRXMessage(this, (const unsigned char *)&tsen.RFXSENSOR, NULL, 255);

							bool bPIROn = (DATA_BYTE0 & 0x80)!=0;
							memset(&tsen, 0, sizeof(RBUF));
							tsen.LIGHTING2.packetlength = sizeof(tsen.LIGHTING2) - 1;
							tsen.LIGHTING2.packettype = pTypeLighting2;
							tsen.LIGHTING2.subtype = sTypeAC;
							tsen.LIGHTING2.seqnbr = 0;

							tsen.LIGHTING2.id1 = (BYTE)ID_BYTE3;
							tsen.LIGHTING2.id2 = (BYTE)ID_BYTE2;
							tsen.LIGHTING2.id3 = (BYTE)ID_BYTE1;
							tsen.LIGHTING2.id4 = (BYTE)ID_BYTE0;
							tsen.LIGHTING2.level = 0;
							tsen.LIGHTING2.rssi = 12;
							tsen.LIGHTING2.unitcode = 1;
							tsen.LIGHTING2.cmnd = (bPIROn) ? light2_sOn : light2_sOff;
							sDecodeRXMessage(this, (const unsigned char *)&tsen.LIGHTING2, NULL, 255);
						}
						else {
							//Error code
						}
					}
					else if (szST == "OccupancySensor.03")
					{
						//(EPP A5-07-03)
						if (DATA_BYTE3 < 251)
						{
							RBUF tsen;

							float voltage = GetValueRange(DATA_BYTE3, 5.0f, 0, 250, 0);
							memset(&tsen, 0, sizeof(RBUF));
							tsen.RFXSENSOR.packetlength = sizeof(tsen.RFXSENSOR) - 1;
							tsen.RFXSENSOR.packettype = pTypeRFXSensor;
							tsen.RFXSENSOR.subtype = sTypeRFXSensorVolt;
							tsen.RFXSENSOR.id = ID_BYTE1;
							tsen.RFXSENSOR.filler = ID_BYTE0 & 0x0F;
							tsen.RFXSENSOR.rssi = (ID_BYTE0 & 0xF0) >> 4;
							tsen.RFXSENSOR.msg1 = (BYTE)(voltage / 256);
							tsen.RFXSENSOR.msg2 = (BYTE)(voltage - (tsen.RFXSENSOR.msg1 * 256));
							sDecodeRXMessage(this, (const unsigned char *)&tsen.RFXSENSOR, NULL, 255);

							int lux = (DATA_BYTE2 << 2) | (DATA_BYTE1>>6);
							if (lux > 1000)
								lux = 1000;
							_tLightMeter lmeter;
							lmeter.id1 = (BYTE)ID_BYTE3;
							lmeter.id2 = (BYTE)ID_BYTE2;
							lmeter.id3 = (BYTE)ID_BYTE1;
							lmeter.id4 = (BYTE)ID_BYTE0;
							lmeter.dunit = 1;
							lmeter.fLux = (float)lux;
							sDecodeRXMessage(this, (const unsigned char *)&lmeter, NULL, 255);

							bool bPIROn = (DATA_BYTE0 & 0x80)!=0;
							memset(&tsen, 0, sizeof(RBUF));
							tsen.LIGHTING2.packetlength = sizeof(tsen.LIGHTING2) - 1;
							tsen.LIGHTING2.packettype = pTypeLighting2;
							tsen.LIGHTING2.subtype = sTypeAC;
							tsen.LIGHTING2.seqnbr = 0;

							tsen.LIGHTING2.id1 = (BYTE)ID_BYTE3;
							tsen.LIGHTING2.id2 = (BYTE)ID_BYTE2;
							tsen.LIGHTING2.id3 = (BYTE)ID_BYTE1;
							tsen.LIGHTING2.id4 = (BYTE)ID_BYTE0;
							tsen.LIGHTING2.level = 0;
							tsen.LIGHTING2.rssi = 12;
							tsen.LIGHTING2.unitcode = 1;
							tsen.LIGHTING2.cmnd = (bPIROn) ? light2_sOn : light2_sOff;
							sDecodeRXMessage(this, (const unsigned char *)&tsen.LIGHTING2, NULL, 255);
						}
						else {
							//Error code
						}
					}
					else if (szST.find("GasSensor.04")==0)
					{
						//(EPP A5-09-04 CO2 Gas Sensor with Temp and Humidity)
						// DB3 = Humidity in 0.5% steps, 0...200 -> 0...100% RH (0x51 = 40%)
						// DB2 = CO2 concentration in 10 ppm steps, 0...255 -> 0...2550 ppm (0x39 = 570 ppm)
						// DB1 = Temperature in 0.2C steps, 0...255 -> 0...51 C (0x7B = 24.6 C)
						// DB0 = flags (DB0.3: 1=data, 0=teach-in; DB0.2: 1=Hum Sensor available, 0=no Hum; DB0.1: 1=Temp sensor available, 0=No Temp; DB0.0 not used)
						// mBuffer[15] is RSSI as -dBm (ie value of 100 means "-100 dBm"), but RssiLevel is in the range 0...15 (or reported as 12 if not known)
						// Battery level is not reported by device, so use fixed value of 9 as per other sensor functions

						// TODO: Check sensor availability flags and only report humidity and/or temp if available.
						// TODO: Report actual RSSI (scaled from dBm to 0...15 RSSI ?)

						float temp = GetValueRange(DATA_BYTE1, 51, 0, 255, 0);
						float hum = GetValueRange(DATA_BYTE3, 100, 0, 200, 0);
						int co2 = (int)GetValueRange(DATA_BYTE2, 2550, 0, 255, 0);
						int NodeID = (ID_BYTE2 << 8) + ID_BYTE1;

						// Report battery level as 9 and RSSI as 12
						SendTempHumSensor(NodeID, 9, temp, round(hum), "GasSensor.04", 12);
						SendAirQualitySensor((NodeID & 0xFF00) >> 8, NodeID & 0xFF, 9, co2, "GasSensor.04");
					}
				}
			}
			break;
		case RORG_RPS: // repeated switch communication
			{
				_log.Debug(DEBUG_NORM, "EnOcean: RPS data: Sender id: 0x%02x%02x%02x%02x Status: %02x Data: %02x T21:%d",
					m_buffer[2],m_buffer[3],m_buffer[4],m_buffer[5],m_buffer[6],m_buffer[1], (m_buffer[6] & (1 << 2)));
				if (m_buffer[6] & (1 << 2))
				{
					_log.Log(LOG_NORM, "EnOcean: T21");
				}

				unsigned char STATUS=m_buffer[6];

				unsigned char T21 = (m_buffer[6] & S_RPS_T21) >> S_RPS_T21_SHIFT;
				unsigned char NU = (m_buffer[6] & S_RPS_NU) >> S_RPS_NU_SHIFT;

				unsigned char ID_BYTE3=m_buffer[2];
				unsigned char ID_BYTE2=m_buffer[3];
				unsigned char ID_BYTE1=m_buffer[4];
				unsigned char ID_BYTE0=m_buffer[5];
				long id = (ID_BYTE3 << 24) + (ID_BYTE2 << 16) + (ID_BYTE1 << 8) + ID_BYTE0;

				int Manufacturer,Rorg, Profile, iType;
				if (getProfileFromDb(id, Manufacturer,Rorg, Profile, iType) )
				// if a button is attached to a module, we should ignore it else its datagram will conflict with status reported by the module using VLD datagram
				{
					// hardware device was already teached-in
					if( (Profile == 0x01) &&						// profile 1 (D2-01) is Electronic switches and dimmers with Energy Measurement and Local Control
						 ((iType == 0x0F) || (iType == 0x12))	// type 0F and 12 have external switch/push button control, it means they also act as rocker
						)
					{
						_log.Debug(DEBUG_NORM ,"EnOcean: %08X, ignore button press", id);
						break;
					}
				}

				// Whether we use the ButtonID reporting with ON/OFF
				bool useButtonIDs = 0;

				if (STATUS & S_RPS_NU)
				{
					//Rocker

					unsigned char DATA_BYTE3=m_buffer[1];

					// NU == 1, N-Message
					unsigned char ButtonID = (DATA_BYTE3 & DB3_RPS_NU_BID) >> DB3_RPS_NU_BID_SHIFT;
					unsigned char RockerID = (DATA_BYTE3 & DB3_RPS_NU_RID) >> DB3_RPS_NU_RID_SHIFT;
					unsigned char UpDown=(DATA_BYTE3 & DB3_RPS_NU_UD)  >> DB3_RPS_NU_UD_SHIFT;
					unsigned char Pressed=(DATA_BYTE3 & DB3_RPS_NU_PR) >> DB3_RPS_NU_PR_SHIFT;

					unsigned char SecondButtonID = (DATA_BYTE3 & DB3_RPS_NU_SBID) >> DB3_RPS_NU_SBID_SHIFT;
					unsigned char SecondRockerID = (DATA_BYTE3 & DB3_RPS_NU_SRID) >> DB3_RPS_NU_SRID_SHIFT;
					unsigned char SecondUpDown=(DATA_BYTE3 & DB3_RPS_NU_SUD)>>DB3_RPS_NU_SUD_SHIFT;
					unsigned char SecondAction=(DATA_BYTE3 & DB3_RPS_NU_SA)>>DB3_RPS_NU_SA_SHIFT;

					_log.Debug(DEBUG_NORM,
						"EnOcean: RPS N-Message message: 0x%02X Node 0x%08x RockerID: %i ButtonID: %i Pressed: %i UD: %i Second Rocker ID: %i SecondButtonID: %i SUD: %i Second Action: %i",
						DATA_BYTE3,	id,	RockerID,ButtonID,UpDown,Pressed,SecondRockerID,SecondButtonID,	SecondUpDown,SecondAction);

					//We distinguish 3 types of buttons from a switch: Left/Right/Left+Right
					if (Pressed==1)
					{
						RBUF tsen;
						memset(&tsen,0,sizeof(RBUF));
						tsen.LIGHTING2.packetlength=sizeof(tsen.LIGHTING2)-1;
						tsen.LIGHTING2.packettype=pTypeLighting2;
						tsen.LIGHTING2.subtype=sTypeAC;
						tsen.LIGHTING2.seqnbr=0;

						tsen.LIGHTING2.id1=(BYTE)ID_BYTE3;
						tsen.LIGHTING2.id2=(BYTE)ID_BYTE2;
						tsen.LIGHTING2.id3=(BYTE)ID_BYTE1;
						tsen.LIGHTING2.id4=(BYTE)ID_BYTE0;
						tsen.LIGHTING2.level=0;
						tsen.LIGHTING2.rssi=12;

						if (SecondAction==0)
						{
							if (useButtonIDs)
							{
								//Left/Right Pressed
								tsen.LIGHTING2.unitcode = ButtonID + 1;
								tsen.LIGHTING2.cmnd     = light2_sOn; // the button is pressed, so we don't get an OFF message here
							}
							else
							{
								//Left/Right Up/Down
								tsen.LIGHTING2.unitcode = RockerID + 1;
								tsen.LIGHTING2.cmnd     = (UpDown == 1) ? light2_sOn : light2_sOff;
							}
						}
						else
						{
							if (useButtonIDs)
							{
								//Left+Right Pressed
								tsen.LIGHTING2.unitcode = ButtonID + 10;
								tsen.LIGHTING2.cmnd     = light2_sOn;  // the button is pressed, so we don't get an OFF message here
							}
							else
							{
								//Left+Right Up/Down
								tsen.LIGHTING2.unitcode = SecondRockerID + 10;
								tsen.LIGHTING2.cmnd     = (SecondUpDown == 1) ? light2_sOn : light2_sOff;
							}
						}

						if (_log.isTraceEnabled())
							_log.Debug(DEBUG_NORM, "EnOcean: message: 0x%02X Node 0x%08x UnitID: %02X cmd: %02X ",
							DATA_BYTE3,	id,	tsen.LIGHTING2.unitcode,tsen.LIGHTING2.cmnd
							);

						sDecodeRXMessage(this, (const unsigned char *)&tsen.LIGHTING2, NULL, 255);
						AddSensors(id, 0xF6, 0x7ff, 02, 01, 0);

					}
				}
				else
				{
					if ((T21 == 1) && (NU == 0))
					{
						unsigned char DATA_BYTE3 = m_buffer[1];

						unsigned char ButtonID = (DATA_BYTE3 & DB3_RPS_BUTTONS) >> DB3_RPS_BUTTONS_SHIFT;
						unsigned char Pressed = (DATA_BYTE3 & DB3_RPS_PR) >> DB3_RPS_PR_SHIFT;

						unsigned char UpDown = !((DATA_BYTE3 == 0xD0) || (DATA_BYTE3 == 0xF0));

							_log.Debug(DEBUG_NORM, "EnOcean: RPS T21-Message message: 0x%02X Node 0x%08x ButtonID: %i Pressed: %i UD: %i",
							DATA_BYTE3,	id,	ButtonID,Pressed,UpDown);

						RBUF tsen;
						memset(&tsen, 0, sizeof(RBUF));
						tsen.LIGHTING2.packetlength = sizeof(tsen.LIGHTING2) - 1;
						tsen.LIGHTING2.packettype = pTypeLighting2;
						tsen.LIGHTING2.subtype = sTypeAC;
						tsen.LIGHTING2.seqnbr = 0;

						tsen.LIGHTING2.id1 = (BYTE)ID_BYTE3;
						tsen.LIGHTING2.id2 = (BYTE)ID_BYTE2;
						tsen.LIGHTING2.id3 = (BYTE)ID_BYTE1;
						tsen.LIGHTING2.id4 = (BYTE)ID_BYTE0;
						tsen.LIGHTING2.level = 0;
						tsen.LIGHTING2.rssi = 12;

						if (useButtonIDs)
						{
							// It's the release message of any button pressed before
							tsen.LIGHTING2.unitcode = 0; // does not matter, since we are using a group command
							tsen.LIGHTING2.cmnd = (Pressed == 1) ? light2_sGroupOn : light2_sGroupOff;
						}
						else
						{
							tsen.LIGHTING2.unitcode = 1;
							tsen.LIGHTING2.cmnd = (UpDown == 1) ? light2_sOn : light2_sOff;
						}
							_log.Debug(DEBUG_NORM, "EnOcean: message: 0x%02X Node 0x%08x UnitID: %02X cmd: %02X ",
							DATA_BYTE3,	id,	tsen.LIGHTING2.unitcode,tsen.LIGHTING2.cmnd);


						sDecodeRXMessage(this, (const unsigned char *)&tsen.LIGHTING2, NULL, 255);
						AddSensors(id, 0xF6, 0x7ff, 02, 01, 0);

					}
				}
			}
			break;

		case RORG_UTI:
				// Universal teach-in (0xD4)
				{
					unsigned char uni_bi_directional_communication = (m_buffer[1] >> 7) & 1;		// 0=mono, 1= bi
					unsigned char eep_teach_in_response_expected = (m_buffer[1] >> 6) & 1;			// 0=yes, 1=no
					unsigned char teach_in_request = (m_buffer[1] >> 4) & 3;								// 0= request, 1= deletion request, 2=request or deletion request, 3=not used
					unsigned char cmd = m_buffer[1] & 0x0F;

					if(cmd == 0x0)
					{
						// EEP Teach-In Query (UTE Message / CMD 0x0)

						unsigned char nb_channel = m_buffer[2];
						unsigned int manID = ((unsigned int)(m_buffer[4] & 0x7)) << 8 | (m_buffer[3]);
						unsigned char type = m_buffer[5];
						unsigned char func = m_buffer[6];
						unsigned char rorg = m_buffer[7];

						long id = DeviceArrayToInt(&m_buffer[8]);

						_log.Log(LOG_NORM, "EnOcean: teach-in request received from %08lX (manufacturer: %03X). number of channels: %d, device profile: %02X-%02X-%02X", id, manID, nb_channel, rorg,func,type);

						//if accept new hardware 
						if (m_sql.m_bAcceptNewHardware)
						// Record EnOcean device profile
						{
							// If device as not been already teachin 
							if (getUnitFromDeviceId(id)==0)
							{
								AddSensors(id , rorg, manID, func, type ,0 );

								//allocate base adress 1..127
								int OffsetId = UpdateDeviceAddress(id);
								unsigned int senderBaseAddr = GetAdress(OffsetId);
								if (OffsetId != 0)
									_log.Log(LOG_NORM, "EnOcean: Sender_ID 0x%08X inserted in the database with base address 0x%08X : ", id, senderBaseAddr );
								else
									_log.Log(LOG_ERROR, "EnOcean: could not find base empty base address for Sender_ID 0x%08X : maximum 127 address", id );
								ReloadVLDNodes();

								//if automatic teach in request 
								if (eep_teach_in_response_expected == 0)
								{
									//send teachin message
									//Send1BSTeachIn(senderBaseAddr);
									SendRpsTeachIn(senderBaseAddr);
									//Send4BSTeachIn(senderBaseAddr);
								}

								//create device switch
								if ((rorg == 0xD2) && (func == 0x01) && ((type == 0x12) || (type == 0x0F)))
								{
									for (int nbc = 0; nbc < nb_channel; nbc++)
									{
										_log.Debug(DEBUG_NORM, "EnOcean: TEACH Switch : 0xD2 Node 0x%08x UnitID: %02X cmd: %02X ", id, nbc + 1, light2_sOff);
//										SendSwitch(id, nbc + 1, -1, light2_sOff, 0, DeviceIDToString(senderBaseAddr).c_str());
										CreateDevice(m_HwdID, GetLighting2StringId(id).c_str(), nbc + 1, pTypeLighting2, sTypeAC, 0, -1, light2_sOff, "0", DeviceIDToString(id), STYPE_OnOff, "" );
									}
									return;
								}
								//create device blinds switch
								if ((rorg == 0xD2) && (func == 0x05) && ((type == 0x00) || (type == 0x01)))
								{
									for (int nbc = 0; nbc < nb_channel; nbc++)
									{
										_log.Debug(DEBUG_NORM, "EnOcean: TEACH Blinds Switch : 0xD2 Node 0x%08x UnitID: %02X cmd: %02X ", id, nbc + 1, light2_sOff);
//										SendSwitch(id, nbc + 1, -1, light2_sOff, 0, DeviceIDToString(senderBaseAddr).c_str());
										CreateDevice(m_HwdID, GetLighting2StringId(id).c_str(), nbc + 1, pTypeLighting2, sTypeAC, 0, -1, light2_sOff, "0", DeviceIDToString(id), STYPE_BlindsPercentage , "" );
									}
									return;
								}

							}
							else
								_log.Debug(DEBUG_NORM, "EnOcean: Sender_ID 0x%08X already in the database", id);
						}
						else
							_log.Log(LOG_NORM, "EnOcean: New hardware is not allowed. Turn on AcceptNewHardware in settings" );

						break;
					}

					_log.Log(LOG_NORM, "EnOcean: Unhandled RORG (%02x), uni_bi (%02x [1=bidir]), response_expected (%02x [0=yes]), request (%02x), cmd (%02x)", m_buffer[0], uni_bi_directional_communication,eep_teach_in_response_expected, teach_in_request, cmd);
				}
			break;

		case RORG_VLD:
			{
				unsigned char DATA_BYTE3=m_buffer[1];
				unsigned char func = (m_buffer[1] >> 2) & 0x3F;
				unsigned char type = ((m_buffer[2] >> 3) & 0x1F) | ((m_buffer[1] & 0x03) << 5);

				//compute senderId offese : 4byte for senderId and 1 for status
				int senderOfs = m_DataSize - 4 - 1;
				if (senderOfs <= 0)
					return;
				//conpute sender ID
				unsigned int senderId = DeviceArrayToInt(&m_buffer[senderOfs]);
				int Manufacturer,Rorg, Func, iType;
				if (!getProfileFromDb(senderId, Manufacturer,Rorg, Func, iType))
				{
					_log.Log(LOG_NORM, "EnOcean: Need Teach-In for %08X", senderId );
					return;
				}

				//D2-05 
				//{ 0xD2 , 0x05 , 0x00 , "Blinds Control for Position and Angle                                            ",  "Type 0x00           
				if ( (Func==0x05)) 
				{
					//get command
					unsigned char * data =&m_buffer[1];
				
					int cmd = GetRawValue(data, D20500_CMD1 ,  D20500_CMD1_CMD  ) ;
					int unitcode = GetRawValue(data, D20500_CMD1, D20500_CMD1_CHN);
					//if position
					if (cmd == 4 )
					{
						//get position
						int pos = GetRawValue( data,D20500_CMD1 ,  D20500_CMD1_POS  ) ;
					    _log.Log(LOG_NORM, "EnOcean: VLD: senderID: %08X EEP:D2-05  Reply Position Position:%d%", senderId, pos);
						bool bon = (pos > 0 ? 1 : 0 );
						if (pos >= 100)	pos = 0;

 						SendSwitch(senderId, unitcode+1, -1 , bon , pos , "");
						return;
					}
				}

				//Electonics switch
				if ( (Func == 0x01))
				{
					_log.Log(LOG_NORM, "EnOcean: VLD: senderID: %08X Func:%02X  Type:%02X", senderId, Func, iType);
					//get command 
					int CMD = m_buffer[1] & 0xF;
					// D2-01
					switch(CMD)
					{
						//! <b>Actuator Status Response</b> 4
						case 0x04:	// D2-01-xx
									{
										unsigned char channel = m_buffer[2] & 0x7;

										unsigned char dim_power = m_buffer[3] & 0x7F;		// 0=off, 0x64=100%

										int unitcode = channel + 1;
										bool cmnd     = (dim_power>0) ? true : false;								

										_log.Debug(DEBUG_NORM, "EnOcean: VLD : 0x%02X Node 0x%08x UnitID: %02X cmd: %02X ",
											DATA_BYTE3, senderId,unitcode,cmnd	);

										SendSwitch(senderId, unitcode, -1 , cmnd , 0, "");


										// Note: if a device uses simultaneously RPS and VLD (ex: nodon inwall module), it can be partially initialized.
										//			Domoticz will show device status but some functions may not work because EnoceanSensors table has no info on this device (until teach-in is performed)
										//       If a device has local control (ex: nodon inwall module with physically attached switched), domoticz will record the local control as unit 0.
										//       Ex: nodon inwall 2 channels will show 3 entries. Unit 0 is the local switch, 1 is the first channel, 2 is the second channel.
										//			(I only have attached a switch on the first channel, I have no idea which unit number a switch on the 2nd channel will have)
										return;
									}
									break;
					}
				}

				//vld D2-03-0A : len=2 offset 0 battery level 1= action : //1 = simple press, 2=double press, 3=long press, 4=press release
				if (m_DataSize > 7)
				{
					unsigned char ID_BYTE3 = m_buffer[m_DataSize - 5];
					unsigned char ID_BYTE2 = m_buffer[m_DataSize - 4];
					unsigned char ID_BYTE1 = m_buffer[m_DataSize - 3];
					unsigned char ID_BYTE0 = m_buffer[m_DataSize - 2];
					unsigned long id = (ID_BYTE3 << 24) + (ID_BYTE2 << 16) + (ID_BYTE1 << 8) + ID_BYTE0;

					id = DeviceArrayToInt(&m_buffer[m_DataSize - 5]);

					_tVLDNode* VLDNode = FindVLDNodes(id);
					if (VLDNode != 0 )
					{
						uint8_t Profile = VLDNode->profile;
						uint8_t iType = VLDNode->type;

						// D2-03-0A Push Button – Single Button
						_log.Log(LOG_NORM, "EnOcean message VLD: Profile: %02X Type: %02X", Profile, iType);

						switch (Profile)
						{
						case 0x03:
							//Light, Switching + Blind Control
							if (iType == 0x0A)
							{
								int battery = (int)double((255.0 / 100.0)*m_buffer[1]);
								unsigned char DATA_BYTE0 = m_buffer[2]; //1 = simple press, 2=double press, 3=long press, 4=press release
								SendGeneralSwitch(id, DATA_BYTE0, battery, 1, 0, "Switch", 12);
								return;
							}
							break;
						}
					}
				}
				_log.Log(LOG_NORM, "EnOcean message VLD: func: %02X Type: %02X", func, type);
				if (func == 0x01)
				{
					// D2-01 Electr. switches/dimmers, Energy Meas. / Local Ctrl
					switch (type)
					{
					case 0x0C:	// D2-01-0C
					{
						unsigned char channel = m_buffer[2] & 0x7;

						unsigned char dim_power = m_buffer[3] & 0x7F;		// 0=off, 0x64=100%

						unsigned char ID_BYTE3 = m_buffer[4];
						unsigned char ID_BYTE2 = m_buffer[5];
						unsigned char ID_BYTE1 = m_buffer[6];
						unsigned char ID_BYTE0 = m_buffer[7];
						long id = (ID_BYTE3 << 24) + (ID_BYTE2 << 16) + (ID_BYTE1 << 8) + ID_BYTE0;

						// report status only if it is a known device else we may have an incorrect profile
						char szDeviceID[20];
						std::vector<std::vector<std::string> > result;
						sprintf(szDeviceID, "%08X", (unsigned int)id);

						result = m_sql.safe_query("SELECT ID, Manufacturer, Profile, [Type] FROM EnoceanSensors WHERE (HardwareID==%d) AND (DeviceID=='%q')", m_HwdID, szDeviceID);
						if (result.size() < 1)
						{
							_log.Log(LOG_NORM, "EnOcean: Need Teach-In for %s", szDeviceID);
							return;
						}

						RBUF tsen;
						memset(&tsen, 0, sizeof(RBUF));
						tsen.LIGHTING2.packetlength = sizeof(tsen.LIGHTING2) - 1;
						tsen.LIGHTING2.packettype = pTypeLighting2;
						tsen.LIGHTING2.subtype = sTypeAC;
						tsen.LIGHTING2.seqnbr = 0;

						tsen.LIGHTING2.id1 = (BYTE)ID_BYTE3;
						tsen.LIGHTING2.id2 = (BYTE)ID_BYTE2;
						tsen.LIGHTING2.id3 = (BYTE)ID_BYTE1;
						tsen.LIGHTING2.id4 = (BYTE)ID_BYTE0;
						tsen.LIGHTING2.level = dim_power;
						tsen.LIGHTING2.rssi = 12;

						tsen.LIGHTING2.unitcode = channel + 1;
						tsen.LIGHTING2.cmnd = (dim_power > 0) ? light2_sOn : light2_sOff;

#ifdef ENOCEAN_BUTTON_DEBUG
						_log.Log(LOG_NORM, "EnOcean message: 0x%02X Node 0x%08x UnitID: %02X cmd: %02X ",
							DATA_BYTE3,
							id,
							tsen.LIGHTING2.unitcode,
							tsen.LIGHTING2.cmnd
						);
#endif //ENOCEAN_BUTTON_DEBUG

						// Never learn device from D2-01-0C because subtype may be incorrect
						sDecodeRXMessage(this, (const unsigned char *)&tsen.LIGHTING2, NULL, 255);

						// Note: if a device uses simultaneously RPS and VLD (ex: nodon inwall module), it can be partially initialized.
						//			Domoticz will show device status but some functions may not work because EnoceanSensors table has no info on this device (until teach-in is performed)
						//       If a device has local control (ex: nodon inwall module with physically attached switched), domoticz will record the local control as unit 0.
						//       Ex: nodon inwall 2 channels will show 3 entries. Unit 0 is the local switch, 1 is the first channel, 2 is the second channel.
						//			(I only have attached a switch on the first channel, I have no idea which unit number a switch on the 2nd channel will have)
						return;
					}
					break;
					}
				}
				else if (func == 0x02)
				{
					// D2-02 Temp. Sensor, Light, Occupancy, SmokeType
				}
				else if (func == 0x03)
				{
					// D2-03
					switch (type)
					{
					case 0x00:	// D2-03-00 Light, Switching and Blind Control Type
						break;
					case 0x0A:	// D2-03-0A Push Button – Single Button
						break;
					case 0x10:	// D2-03-10 Mechanical Handle
						break;
					case 0x20:	// D2-03-20 Beacon with Vibration Detection
						break;
					}
				}
			}
		default:
			_log.Log(LOG_NORM, "EnOcean: Unhandled RORG (%02x)", m_buffer[0]);
			break;
	}
}




void getDeviceIdUnit(std::string &cmd , std::string &deviceId , std::string &Unit)
{
	std::vector<std::string> splitresults;
	StringSplit(cmd, ";", splitresults);
	deviceId = "0";
	Unit = "1";
	if (splitresults.size()==2 )
	{
	deviceId = splitresults[0];
	Unit = splitresults[1];
	}
	if (splitresults.size() == 1)
	{
		deviceId = splitresults[0];
	}

}

void getDeviceIdUnit(std::string &cmd, unsigned &pdeviceId, unsigned &pUnit)
{
	std::string deviceId;
	std::string Unit;
	getDeviceIdUnit(cmd, deviceId, Unit);

	pdeviceId = DeviceIdCharToInt(deviceId);
	pUnit = DeviceIdCharToInt(Unit);

}





//Webserver helpers
namespace http {
	namespace server {
		std::string getDeviceId(const request& req, int argNb)
		{
			std::string cmd = http::server::request::findValue(&req, std::to_string(argNb).c_str());

			std::vector<std::string> splitresults;
			StringSplit(cmd, ";", splitresults);
			if (splitresults.size() >= 1)
				return splitresults[0];
			else
				return "";

		}
		std::string getDeviceUnit(const request& req, int argNb)
		{
			std::string cmd = http::server::request::findValue(&req, std::to_string(argNb).c_str());

			std::vector<std::string> splitresults;
			StringSplit(cmd, ";", splitresults);
			if (splitresults.size() >= 2)
				return splitresults[1];
			else
				return "1";

		}

		std::string getLinkEntry(const request& req, int argNb)
		{
			std::string cmd = http::server::request::findValue(&req, "entry");

			std::vector<std::string> splitresults;
			StringSplit(cmd, ";", splitresults);
			if (splitresults.size() >= (argNb+1) )
				return splitresults[argNb];
			else
				return "";
		}

		void CWebServer::RType_OpenEnOcean(WebEmSession & session, const request& req, Json::Value &root)
		{
			std::string deviceId;
			std::string  unit   ;

//			unsigned int  DeviceId,  Unit;

			root["status"] = "ERR";
			root["title"] = "teachin";
			root["message"] = "Undefined";

			std::string hwid = request::findValue(&req, "hwid");
			if (hwid.empty())
				return;
			std::string cmd = request::findValue(&req, "cmd");
			if (cmd.empty())
				return;
			int iHardwareID = atoi(hwid.c_str());
			CEnOceanESP3 *pEnocean = reinterpret_cast<CEnOceanESP3*>(m_mainworker.GetHardware(iHardwareID));

			if (pEnocean == NULL)
				return;
			int nbSelectedDevice = req.parameters.size() - 4;


			std::string arg;
			for ( int i = 0; i < nbSelectedDevice; i++) {
				arg += http::server::request::findValue(&req, std::to_string(i).c_str())+"-";
			}

			_log.Debug(DEBUG_NORM, "EnOcean: Server received cmd:%s Hwid:%s arg:%s Entry=%s ", cmd.c_str(),hwid.c_str(),arg.c_str(), request::findValue(&req, "entry").c_str() );

			//retrieve the list od Device Id
			if (cmd == "GetNodeList")
				pEnocean->GetNodeList(root);

			else if (cmd == "SendCode") {

				unsigned int code = pEnocean->GetLockCode();
				if(nbSelectedDevice==0)
					pEnocean->setcode(BROADCAST_ID, code);

				for ( int i = 0; i < nbSelectedDevice; i++) {
					deviceId = getDeviceId(req, i) ;  if (deviceId.empty())	return;
					pEnocean->setcode(DeviceIdCharToInt(deviceId), code);
				}

			}
			else if (cmd == "Lock") {

				unsigned int code = pEnocean->GetLockCode();
				if (nbSelectedDevice == 0)
					pEnocean->lock(BROADCAST_ID, code);

				for (int i = 0; i < nbSelectedDevice; i++) {
					deviceId = getDeviceId(req, i);  if (deviceId.empty())	return;
					pEnocean->lock(DeviceIdCharToInt(deviceId), code);
				}

			}
			else if (cmd == "UnLock") {

				unsigned int code = pEnocean->GetLockCode();
				if (nbSelectedDevice == 0)
					pEnocean->unlock(BROADCAST_ID, code);

				for (int i = 0; i < nbSelectedDevice; i++) {
					deviceId = getDeviceId(req, i);  if (deviceId.empty())	return;
					pEnocean->unlock(DeviceIdCharToInt(deviceId), code);
				}

			}
			else if (cmd == "SetCode") {
				//
				std::string code = request::findValue(&req, "code");
				if (code.empty())
					return;
				pEnocean->SetLockCode(code);

			}
			else if (cmd == "GetLinkTableList") {
				deviceId = getDeviceId(req, 0);  if (deviceId.empty())	return;
				pEnocean->GetLinkTableList(root, deviceId);
			}

			else if (cmd == "LearnIn") {
				for ( int i = 0; i < nbSelectedDevice; i++) {
					deviceId = getDeviceId(req, i);    if (deviceId.empty())	return;
					unit     = getDeviceUnit(req, i);  
					pEnocean->TeachIn(deviceId, unit, LEARN_IN );
				}

			}
			else if (cmd == "LearnOut") {
				for (int i = 0; i < nbSelectedDevice; i++) {
					deviceId = getDeviceId(req, i);    if (deviceId.empty())	return;
					unit = getDeviceUnit(req, i);
					pEnocean->TeachIn(deviceId, unit, LEARN_OUT);
				}
			}
			else if (cmd == "GetProductId") {
				pEnocean->unlock(BROADCAST_ID, pEnocean->GetLockCode());

				if (nbSelectedDevice == 0)
					pEnocean->getProductId(BROADCAST_ID);

				for (int i = 0; i < nbSelectedDevice; i++) {
					deviceId = getDeviceId(req, i);  if (deviceId.empty())	return;
					pEnocean->getProductId(DeviceIdCharToInt(deviceId));
				}

			}
			else if (cmd == "QueryId") {
				pEnocean->unlock(0xFFFFFFFF, pEnocean->GetLockCode());
				pEnocean->queryid(0,0);
			}
			else if (cmd == "GetLinkTable") {
				deviceId = getDeviceId(req, 0);    if (deviceId.empty())	return;
				pEnocean->getLinkTable(DeviceIdCharToInt(deviceId));
			}
			else if (cmd == "QueryStatus") {
				for ( int i = 0; i < nbSelectedDevice; i++) {
					deviceId = getDeviceId(req, i);    if (deviceId.empty())	return;
					pEnocean->queryStatus(DeviceIdCharToInt(deviceId));
				}

			}
			else if (cmd == "ResetToDefaults") {
				for (int i = 0; i < nbSelectedDevice; i++) {
					deviceId = getDeviceId(req, i);    if (deviceId.empty())	return;
					pEnocean->resetToDefaults(DeviceIdCharToInt(deviceId), ResetToDefaults );
				}
			}
			else if (cmd == "QueryFunction") {
				for (int i = 0; i < nbSelectedDevice; i++) {
					deviceId = getDeviceId(req, i);    if (deviceId.empty())	return;
					pEnocean->queryFunction(DeviceIdCharToInt(deviceId) );
				}
			}
			else if (cmd == "DeleteEntrys") {
				{
					deviceId = getLinkEntry(req, 0);    if (deviceId.empty())	return;
					uint DeviceId = DeviceIdCharToInt(deviceId);
					int entryNb = 1;
					std::string entry;
					entry = getLinkEntry(req, entryNb);
					while (!entry.empty())
					{
						pEnocean->setLinkEntryTable(DeviceId, std::stoi(entry,0,0),0,0,0 ) ;
						entryNb++;
						entry = getLinkEntry(req, entryNb);

					}
					pEnocean->getLinkTable(DeviceId);
				}
			}
			else if (cmd == "Ping") {
				if (nbSelectedDevice == 0)
					pEnocean->ping(BROADCAST_ID);
				for (int i = 0; i < nbSelectedDevice; i++) {
					deviceId = getDeviceId(req, i);  if (deviceId.empty())	return;
					pEnocean->ping(DeviceIdCharToInt(deviceId));
				}
			}
			else if (cmd == "Action") {
				for (int i = 0; i < nbSelectedDevice; i++) {
					deviceId = getDeviceId(req, i);  if (deviceId.empty())	return;
					pEnocean->action(DeviceIdCharToInt(deviceId));
				}
			}
			else if (cmd == "Link") {
				if (nbSelectedDevice != 2) {root["message"] = "Only 2 deviecs selected"; return;}
				int deviceId1   = DeviceIdCharToInt( getDeviceId(req, 0) );
				int deviceId2   = DeviceIdCharToInt( getDeviceId(req, 1) );
				if (pEnocean->Sensors.asLinkTable(deviceId1) )
					pEnocean->getLinkTable(deviceId1);
				if (pEnocean->Sensors.asLinkTable(deviceId2) )
					pEnocean->getLinkTable(deviceId2);
				int LinkSize1   = pEnocean->Sensors.getTableLinkMaxSize(deviceId1);
				int LinkSize2   = pEnocean->Sensors.getTableLinkMaxSize(deviceId2);
				int deviceIdSender, deviceIdReceiver, receiverChannel, senderChannel;
				if ((LinkSize1 == 0) && (LinkSize2 != 0))
				{
					deviceIdSender   = deviceId1;
					deviceIdReceiver = deviceId2;
					senderChannel    = std::stoi(getDeviceUnit(req, 0));
					receiverChannel  = std::stoi(getDeviceUnit(req, 1));
				}
				else
				if ((LinkSize1 != 0) && (LinkSize2 == 0))
				{
					deviceIdSender   = deviceId2;
					deviceIdReceiver = deviceId1;
					senderChannel   = std::stoi(getDeviceUnit(req, 1));
					receiverChannel = std::stoi(getDeviceUnit(req, 0));
				}
				else
				{
					root["message"] = "Could not link devices"; return;
				}
				//get empty entry in receiver
				int emptyEntry = pEnocean->Sensors.FindEmptyEntry(deviceIdReceiver);
				if (emptyEntry<0)
				{
					root["message"] = "Link table full or device not found "; return;
				}
				int senderEEP = pEnocean->Sensors.getEEP(deviceIdSender);
				pEnocean->setLinkEntryTable(deviceIdReceiver, emptyEntry, deviceIdSender, senderEEP , receiverChannel-1);
				_log.Log(LOG_NORM, "EnOcean: Link receiver %08X channel %d to sender %08X(%06X) ", deviceIdReceiver, receiverChannel, deviceIdSender, senderEEP);

			}

			else
				return;

			if (pEnocean->isCommStatusOk())
				root["status"] = "OK";
			else {
				root["message"] = "Communication Timeout";
				_log.Log(LOG_ERROR, "EnOcean: Server Error: %s  cmd:%s Hwid:%s arg:%s  Entry=%s", root["message"].asString().c_str(), cmd.c_str(), hwid.c_str(), arg.c_str() , request::findValue(&req, "entry").c_str() );
				pEnocean->setCommStatus(COM_OK);
			}


		}
	}
}

void CEnOceanESP3::TestData(ESP3_RORG rorg, unsigned int sID,  unsigned char status , T_DATAFIELD * OffsetDes, ...)
{

	va_list value;
	unsigned char *buff = m_buffer;

	*buff++ = rorg;
	/* Initialize the va_list structure */
	va_start(value, OffsetDes);
	uint32_t total_bytes = SetRawValues(buff, OffsetDes, value);
	va_end(value);
	buff += total_bytes;
	//add adress
	*buff++ = (sID >> 24) & 0xff;		// Sender ID
	*buff++ = (sID >> 16) & 0xff;
	*buff++ = (sID >> 8) & 0xff;
	*buff++ = sID & 0xff;
	*buff++ = status ; //status


	m_ReceivedPacketType = 0x01;
	m_OptionalDataSize = 0;
	m_DataSize=m_bufferpos = 1+total_bytes+4+1 ;
	ParseData();
}


void CEnOceanESP3::TestData(char * sdata)
{
	TypFnAToB(sdata, m_buffer, &m_DataSize);
	m_ReceivedPacketType = 0x01;
	m_OptionalDataSize = 0;
	m_bufferpos = m_DataSize;
	ParseData();
}

void CEnOceanESP3::TestData(char * sdata, char * optData)
{
	TypFnAToB(sdata, m_buffer, &m_DataSize);
	TypFnAToB(optData, &m_buffer[m_DataSize], &m_OptionalDataSize);
	m_ReceivedPacketType = 0x01;
	m_bufferpos = m_DataSize + m_OptionalDataSize;
	ParseData();
}

void CEnOceanESP3::testParsingData(int sec_counter)
{
	//			if (sec_counter == 5)	TestData("D5 0 01 02 03 04 00 ");
	//			if (sec_counter == 25)	TestData("D5 1 01 02 03 04 00 ");

	//			if (sec_counter == 5)	TestData("D2 04 60 80 01 A6 54 28 00 "); //vld ch 0
	//			if (sec_counter == 15)	TestData("D2 04 60 E4 01 A6 54 28 00 "); //vld ch 0

	//			if (sec_counter == 5)	TestData("D2 04 61 80 01 A6 54 28 00 "); // vld ch1
	//			if (sec_counter == 15)	TestData("D2 04 61 E4 01 A6 54 28 00 "); // vld ch1


	//			if (sec_counter == 6)	TestData("D4 A0 02 46 00 12 01 D2 01 A6 54 28 00 "); // ute 

	//			if (sec_counter == 6)	TestData("D4 A0 02 46 00 12 01 D2 01 A6 54 28 00 ", "01 FF FF FF FF 2D 00");// ute opt data

	//			if (sec_counter == 5)	TestData("F6 10 01 A6 54 28 30 "); //rps switch up
	//			if (sec_counter == 6)	TestData("F6 00 01 A6 54 28 20 "); //rps switch

	//			if (sec_counter == 5)	TestData("F6 30 01 A6 54 28 30 "); //rps switch down
	//			if (sec_counter == 5)	TestData("F6 00 01 A6 54 28 20 "); //rps switch



	//			if (sec_counter == 2)	TestData("A5 02 00 00 00 FF 99 DF 01 30 "); //4BS teach in variation 1 : noo eep

//	if (sec_counter == 2)	TestData("A5 b00001000 b00001000 46 b10000000 01 02 03 04 30 "); //4BS teach in variation 2 :  eep func A-02-01
//														        | eep
//													         | manufactuer ID nodon = 46

//	if (sec_counter == 3)	TestData("A5 00         00       46 b00001000 01 02 03 04 30 "); //4BS data  :  eep func A-02-01


	//function 6 bit  type:7 bits manufacyurer 11

//	if (sec_counter == 2)	TestData("A5 b00001100 b01010000 46 b10000000 00 00 00 01 30 "); //4BS teach in variation 2 :  eep func D2-03-0A
//												         | manufactuer ID nodon = 46
//														        | eep


//ESP3_RORG rorg, unsigned sID,  unsigned char status , T_DATAFIELD * OffsetDes, ...
	if (sec_counter == 2) {

		//4BS teachin D2-03-0A 

		TestData(RORG_4BS, 0x12345678, 0, TEACHIN_4BS, 0x03,0x0A, 0x46, WITH_EEP, TEACHIN , END_ARG_DATA);

		//data bat=50 button=1
		TestData(RORG_VLD, 0x12345678, 0, D2030A, 50, 1, END_ARG_DATA);
	}


//	if (sec_counter == 2)	TestData("D2 32 01 00 00 00 01 30 "); //VLD D2  eep func D2-03-0A baterie 50% button 1

//			if (sec_counter == 3)	remoteLearning(0x01A65428 , true ,LEARN_IN ); //4BS data  :  eep func A-02-01

//			if (sec_counter == 5)	remoteLearning(0x01A65428, false, LEARN_IN); //4BS data  :  eep func A-02-01
//			if (sec_counter == 2)	ping(0x01A65428); 
//			if (sec_counter == 1)	unlock(0x01A65428,1);
//			if (sec_counter == 2)	action(0x01A65428);
//			if (sec_counter == 3)	action(0x01A65428);
//			if (sec_counter == 3)	getProductId();

//			if (sec_counter == 10)	getLinkTableMedadata(0x01A65428);
//			if (sec_counter == 12)	getallLinkTable(0x01A65428,0,3);
//			if (sec_counter == 4)	queryFunction(0x01A65428);

	char * VLD_BLINDS_D2_05_00_position = "D2 00 00 00 04 05 85 87 4A 00 "; //         01 FF FF FF FF 2E";
	char * VLD_switch_uti				= "D4 A0 02 46 00 12 01 D2 01 A6 54 28 00 ""; //01 FF FF FF FF 33"; //teach-in request received from 01A65428 (manufacturer: 046). number of channels: 2, device profile: D2-01-12
	char * VLD_switch_status            = "D2 04 60 80 01 A6 54 28 00 "; // 01 FF FF FF FF 31";


	char * VLD_BLINDS_D2_05_00_uti = "D4 A0 01 46 00 00 05 D2 05 85 87 4A 00 ";//  -01 FF FF FF FF 30 "; // 09.031 EnOcean : teach - in request received from 0585874A(manufacturer: 046).number of channels : 1, device profile : D2 - 05 - 00


	char * button_left_up_pressed  = "F6 30 00 34 F8 FE 30";
	char * button_left_up_released = "F6 00 00 34 F8 FE 20";
	char * button_left_do_pressed  = "F6 10 00 34 F8 FE 30";
	char * button_left_do_released = "F6 00 00 34 F8 FE 20";

	char * button_right_up_pressed  = "F6 70 00 34 F8 FE 30";
	char * button_right_up_released = "F6 00 00 34 F8 FE 20";
	char * button_right_do_pressed  = "F6 50 00 34 F8 FE 30";
	char * button_right_do_released = "F6 00 00 34 F8 FE 20";

	// 
// button gauche Up
// recv 01 PACKET_RADIO (07/07) F6 30 00 34 F8 FE 30 - 01 FF FF FF FF 36 00 Dest: 0xffffffff RSSI: 46
// RPS data: Sender id: 0x0034f8fe Status: 30 Data: 30 T21:0
// RPS N-Message message: 0x30 Node 0x0034f8fe RockerID: 0 ButtonID: 1 Pressed: 1 UD: 1 Second Rocker ID: 0 SecondButtonID: 0 SUD: 0 Second Action: 0
// message: 0x30 Node 0x0034f8fe UnitID: 02 cmd: 01
//
// recv 01 PACKET_RADIO (07/07) F6 00 00 34 F8 FE 20 - 01 FF FF FF FF 36 00 Dest: 0xffffffff RSSI: 46
// RPS data: Sender id: 0x0034f8fe Status: 20 Data: 00 T21:0
// RPS T21-Message message: 0x00 Node 0x0034f8fe ButtonID: 0 Pressed: 0 UD: 1
// message: 0x00 Node 0x0034f8fe UnitID: 00 cmd: 03
//
//button gauche Down
// recv 01 PACKET_RADIO (07/07) F6 10 00 34 F8 FE 30 - 01 FF FF FF FF 39 00 Dest: 0xffffffff RSSI: 43
// RPS data: Sender id: 0x0034f8fe Status: 30 Data: 10 T21:0
// RPS N-Message message: 0x10 Node 0x0034f8fe RockerID: 0 ButtonID: 0 Pressed: 0 UD: 1 Second Rocker ID: 0 SecondButtonID: 0 SUD: 0 Second Action: 0
// message: 0x10 Node 0x0034f8fe UnitID: 01 cmd: 01
//
// recv 01 PACKET_RADIO (07/07) F6 00 00 34 F8 FE 20 - 01 FF FF FF FF 39 00 Dest: 0xffffffff RSSI: 43
// RPS data: Sender id: 0x0034f8fe Status: 20 Data: 00 T21:0
// RPS T21-Message message: 0x00 Node 0x0034f8fe ButtonID: 0 Pressed: 0 UD: 1
// message: 0x00 Node 0x0034f8fe UnitID: 00 cmd: 03
//
//
// button droite Up
//recv 01 PACKET_RADIO (07/07) F6 70 00 34 F8 FE 30 - 01 FF FF FF FF 30 00 Dest: 0xffffffff RSSI: 52
// RPS data: Sender id: 0x0034f8fe Status: 30 Data: 70 T21:0
// RPS N-Message message: 0x70 Node 0x0034f8fe RockerID: 1 ButtonID: 3 Pressed: 1 UD: 1 Second Rocker ID: 0 SecondButtonID: 0 SUD: 0 Second Action: 0
// message: 0x70 Node 0x0034f8fe UnitID: 04 cmd: 01
//
// recv 01 PACKET_RADIO (07/07) F6 00 00 34 F8 FE 20 - 01 FF FF FF FF 30 00 Dest: 0xffffffff RSSI: 52
// RPS data: Sender id: 0x0034f8fe Status: 20 Data: 00 T21:0
// RPS T21-Message message: 0x00 Node 0x0034f8fe ButtonID: 0 Pressed: 0 UD: 1
// message: 0x00 Node 0x0034f8fe UnitID: 00 cmd: 03
//
// button droite down
// recv 01 PACKET_RADIO (07/07) F6 50 00 34 F8 FE 30 - 01 FF FF FF FF 34 00 Dest: 0xffffffff RSSI: 48
// RPS data: Sender id: 0x0034f8fe Status: 30 Data: 50 T21:0
// RPS N-Message message: 0x50 Node 0x0034f8fe RockerID: 1 ButtonID: 2 Pressed: 0 UD: 1 Second Rocker ID: 0 SecondButtonID: 0 SUD: 0 Second Action: 0
// message: 0x50 Node 0x0034f8fe UnitID: 03 cmd: 01
//
// recv 01 PACKET_RADIO (07/07) F6 00 00 34 F8 FE 20 - 01 FF FF FF FF 36 00 Dest: 0xffffffff RSSI: 46
// RPS data: Sender id: 0x0034f8fe Status: 20 Data: 00 T21:0
// RPS T21-Message message: 0x00 Node 0x0034f8fe ButtonID: 0 Pressed: 0 UD: 1
// message: 0x00 Node 0x0034f8fe UnitID: 00 cmd: 03
//
// Need Teach-In for 0585874A : position retour
// recv 01 PACKET_RADIO (0A/07) D2 0A 00 00 04 05 85 87 4A 00 - 01 FF FF FF FF 2E 00 Dest: 0xffffffff RSSI: 54
// recv 01 PACKET_RADIO (0A/07) D2 14 00 00 04 05 85 87 4A 00 - 01 FF FF FF FF 2E 00 Dest: 0xffffffff RSSI: 54
// recv 01 PACKET_RADIO (0A/07) D2 1E 00 00 04 05 85 87 4A 00 - 01 FF FF FF FF 2E 00 Dest: 0xffffffff RSSI: 54
// recv 01 PACKET_RADIO (0A/07) D2 28 00 00 04 05 85 87 4A 00 - 01 FF FF FF FF 30 00 Dest: 0xffffffff RSSI: 52
// recv 01 PACKET_RADIO (0A/07) D2 32 00 00 04 05 85 87 4A 00 - 01 FF FF FF FF 30 00 Dest: 0xffffffff RSSI: 52
// recv 01 PACKET_RADIO (0A/07) D2 3C 00 00 04 05 85 87 4A 00 - 01 FF FF FF FF 30 00 Dest: 0xffffffff RSSI: 52
// recv 01 PACKET_RADIO (0A/07) D2 46 00 00 04 05 85 87 4A 00 - 01 FF FF FF FF 2E 00 Dest: 0xffffffff RSSI: 54
// recv 01 PACKET_RADIO (0A/07) D2 50 00 00 04 05 85 87 4A 00 - 01 FF FF FF FF 30 00 Dest: 0xffffffff RSSI: 52
// recv 01 PACKET_RADIO (0A/07) D2 5A 00 00 04 05 85 87 4A 00 - 01 FF FF FF FF 30 00 Dest: 0xffffffff RSSI: 52
// recv 01 PACKET_RADIO (0A/07) D2 64 00 00 04 05 85 87 4A 00 - 01 FF FF FF FF 30 00 Dest: 0xffffffff RSSI: 52



//VLD: senderID: 01A65428 Func : 01 Type : 12
// 
// recv 01 PACKET_RADIO (09/07) D2 04 60 E4 01 A6 54 28 00 - 01 FF FF FF FF 2D 00 Dest: 0xffffffff RSSI: 55
// VLD : 0x04 Node 0x01a65428 UnitID: 01 cmd: 01
// recv 01 PACKET_RADIO (09/07) D2 04 61 E4 01 A6 54 28 00 - 01 FF FF FF FF 2D 00 Dest: 0xffffffff RSSI: 55
// VLD : 0x04 Node 0x01a65428 UnitID: 02 cmd: 01
// 
// recv 01 PACKET_RADIO (09/07) D2 04 60 80 01 A6 54 28 00 - 01 FF FF FF FF 2D 00 Dest: 0xffffffff RSSI: 55
// VLD : 0x04 Node 0x01a65428 UnitID: 01 cmd: 00
// recv 01 PACKET_RADIO (09/07) D2 04 61 80 01 A6 54 28 00 - 01 FF FF FF FF 2D 00 Dest: 0xffffffff RSSI: 55
// VLD : 0x04 Node 0x01a65428 UnitID: 02 cmd: 00


	char * VLD_switch_B1_ON   = "D2 04 60 E4 01 A6 54 28 00";
	 char * VLD_switch_B2_ON  = "D2 04 61 E4 01 A6 54 28 00";
	 char * VLD_switch_B1_OFF = "D2 04 60 80 01 A6 54 28 00";
	 char * VLD_switch_B2_OFF = "D2 04 61 80 01 A6 54 28 00";



}


