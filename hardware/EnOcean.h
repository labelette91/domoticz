#ifndef CEnOcean_H
#define	CEnOcean_H

#include "ASyncSerial.h"
#include "DomoticzHardware.h"

#define MAX_BASE_ADDRESS 128

#define MAX_DATA_PAYLOAD  16

#define uint unsigned int

typedef enum {
	RORG_ST = 0x30, //Secure telegram
	RORG_ST_WE = 0x31, //Secure telegram with encapsulation
	RORG_STT_FW = 0x35, //Secure Teach-In telegram for switch
	RORG_4BS = 0xA5,
	RORG_ADT = 0xA6,
	RORG_SM_REC = 0xA7,
	RORG_GP_SD = 0xB3, //Generic Profiles selective data
	RORG_SM_LRN_REQ = 0xC6,
	RORG_SM_LRN_ANS = 0xC7,
	RORG_SM_ACK_SGNL = 0xD0, //Smart Acknowledge Signal telegram
	RORG_MSC = 0xD1, // Manufacturer Specific Communicatio
	RORG_VLD = 0xD2, // Variable length data telegram 
	RORG_UTI = 0xD4, //Universal Teach-In EEP based 
	RORG_1BS = 0xD5,
	RORG_RPS = 0xF6,
	RORG_SYS_EX = 0xC5,
} ESP3_RORG;


//! Packet type (ESP3)
typedef enum
{
	PACKET_RESERVED = 0x00,	//! Reserved
	PACKET_RADIO = 0x01,	//! Radio telegram
	PACKET_RESPONSE = 0x02,	//! Response to any packet
	PACKET_RADIO_SUB_TEL = 0x03,	//! Radio sub telegram (EnOcean internal function )
	PACKET_EVENT = 0x04,	//! Event message
	PACKET_COMMON_COMMAND = 0x05,	//! Common command
	PACKET_SMART_ACK_COMMAND = 0x06,	//! Smart Ack command
	PACKET_REMOTE_MAN_COMMAND = 0x07,	//! Remote management command
	PACKET_PRODUCTION_COMMAND = 0x08,	//! Production command
	PACKET_RADIO_MESSAGE = 0x09,	//! Radio message (chained radio telegrams)
	PACKET_RADIO_ADVANCED = 0x0a  //! Advanced Protocol radio telegram

} PACKET_TYPE;

typedef enum
{
	UNLOCK = 0x001, //Unlock
	LOCK = 0x002, //Lock
	SETCODE = 0x003, //Set code
	QUERYID = 0x004, //Query ID
	QUERYID_ANSWER = 0x604, //Query ID answer
	QUERYID_ANSWER_EXT = 0x704, //! Ext Query Id Answer
	ACTION = 0x005, //Action
	PING = 0x006, //Ping
	PING_ANSWER = 0x606, //Ping answer
	QUERY_FUNCTION = 0x007, //Query function
	QUERY_FUNCTION_ANSWER = 0x607, //Query function answer
	QUERY_STATUS = 0x008, //Query status
	QUERY_STATUS_ANSWER = 0x608, //Query status answer
	REMOTE_LEARNIN = 0x201, //Remote learn in
	REMOTE_FLASH_WRITE = 0x203, //Remote flash write
	REMOTE_FLASH_READ = 0x204, //Remote flash read
	REMOTE_FLASH_READ_ANSWER = 0x804, //Remote flash read answer
	SMARTACK_READ = 0x205, //SmartACK read
	SMARTACK_READ_MAILBOX_ANSWER = 0x805, //SmartACK read mailbox answer
	SMARTACK_READ_LEARNED_SENSOR_ANSWER = 0x806, //SmartACK read learned sensor answer
	SMARTACK_WRITE = 0x206, //SmartACK write
	RC_ACK = 0x240, //Remote Commissioning Acknowledge
	RC_GET_METADATA = 0x210, //Get Link Table Metadata Query
	RC_GET_METADATA_RESPONSE = 0x810, //Get Link Table Metadata Response
	RC_GET_TABLE = 0x211, //Get Link Table Query
	RC_GET_TABLE_RESPONSE = 0x811, //Get Link Table Response
	RC_SET_TABLE = 0x212, //Set Link Table Query
	RC_GET_GP_TABLE = 0x213, //Get Link Table GP Entry Query
	RC_GET_GP_TABLE_RESPONSE = 0x813, //Get Link Table GP Entry Response
	RC_SET_GP_TABLE = 0x214, //Set Link Table GP Entry Query
	RC_SET_LEARN_MODE = 0x220, //Remote Set Learn Mode
	RC_TRIG_OUTBOUND_TEACH_REQ = 0x221, //Trigger Outbound Remote Teach Request
	RC_GET_DEVICE_CONFIG = 0x230, //Get Device Configuration Query
	RC_GET_DEVICE_CONFIG_RESPONSE = 0x830, //Get Device Configuration Response
	RC_SET_DEVICE_CONFIG = 0x231, //Set Device Configuration Query
	RC_GET_LINK_BASED_CONFIG = 0x232, //Get Link Based Configuration Query
	RC_GET_LINK_BASED_CONFIG_RESPONSE = 0x832, //Get Link Based Configuration Response
	RC_SET_LINK_BASED_CONFIG = 0x233, //Set Link Based Configuration Query
	RC_APPLY_CHANGES = 0x226, //Apply Changes Command
	RC_RESET_TO_DEFAULTS = 0x224, //Reset to Defaults
	RC_RADIO_LINK_TEST_CONTROL = 0x225, //Radio Link Test Control
	RC_GET_PRODUCT_ID = 0x227, //Get Product ID Query
	RC_GET_PRODUCT_RESPONSE = 0x827, //Get Product ID Response
	RC_GET_REPEATER_FUNCTIONS = 0x250, //Get Repeater Functions Query
	RC_GET_REPEATER_FUNCTIONS_RESPONSE = 0x850, //Get Repeater Functions Response
	RC_SET_REPEATER_FUNCTIONS = 0x251, //Set Repeater Functions Query
	RC_SET_REPEATER_FILTER = 0x252  //Set Repeater Filter Query
}FCT_CODE;


//static functions ************************************************************************

//convert id from  buffer[] to unsigned int
unsigned int DeviceArrayToInt(unsigned char m_buffer[]);
void         DeviceIntToArray(unsigned int sID, unsigned char buf[]);
unsigned int DeviceIdCharToInt(std::string &DeviceID);
std::string  GetLighting2StringId(unsigned int id);
bool         TypFnAToB(const char * st, unsigned char bin[], int  *trame_len);
const char*  Get_EnoceanManufacturer(unsigned long ID);
const char*  Get_Enocean4BSType(const int Org, const int Func, const int Type);
void         ToSensorsId(std::string &DeviceId);
const char*  Get_Enocean4BSDesc(const int Org, const int Func, const int Type);
void         ProfileToRorgFuncType(int EEP, int & Rorg, int & Func, int & Type);
int          RorgFuncTypeToProfile(int Rorg, int Func, int Type);
int          getRorg(int EEP);
int          getFunc(int EEP);
int          getType(int EEP);
std::string  GetDeviceNameFromId(unsigned int ID);
std::string  string_format(const char * fmt, ...);
std::string  IntToString(int val, int nbDigit);
void         setDestination(unsigned char * opt, unsigned int destID);


#include "sensors.h"

//Profile descriptor from eep.xml
typedef struct {
	int Offset;
	int Size;
	char * ShortCut;
	double  RangeMin;
	double  RangeMax;
	double  ScaleMin;
	double  ScaleMax;

	char * description;
}T_DATAFIELD;

//value for the last argument of a telegram data payload
#define END_ARG_DATA  (((unsigned int)1<<31)-1)

class CEnOcean : public AsyncSerial, public CDomoticzHardwareBase
{
	friend class CEnOceanESP3;
	friend class CEnOceanRMCC;

public:
    /**
    * Opens a serial device.
    * \param devname serial device name, example "/dev/ttyS0" or "COM1"
    * \param baud_rate serial baud rate
    * \param opt_parity serial parity, default even
    * \param opt_csize serial character size, default 7bit
    * \param opt_flow serial flow control, default none
    * \param opt_stop serial stop bits, default 1
    * \throws boost::system::system_error if cannot open the
    * serial device
    */
//	CEnOcean(const int ID, const std::string& devname, const int type);

	CEnOcean();

	//return true if base adress reading
	bool IsRunning();
	//id offset of device
	//src : source rocker
	unsigned int GetAdress(int unitid);

	unsigned int GetOffsetAdress(int unitid);
	

	virtual void SendDimmerTeachIn(const char *pdata, const unsigned char length) = 0 ;

	uint64_t CEnOcean::CreateDevice(const int HardwareID, const char* ID, const int  unit, const unsigned char devType, const unsigned char subType, const unsigned char signallevel, const unsigned char batterylevel, const int nValue, const char* sValue, std::string &devname, int SwitchType, const std::string & deviceoptions );

	int UpdateDeviceAddress(std::string idx );

	int UpdateDeviceAddress(unsigned int  DeviceId);

	void UpdateBaseAddress(std::string idx, int offsetID);

	static int getUnitFromDeviceId(unsigned int devIDx);

	static int getUnitFromDeviceId(std::string devIDx);

	unsigned int getSenderAdressFromDeviceId(unsigned int devIDx);

	unsigned int getSenderAdressFromDeviceId(std::string devIDx);

	int SensorExist(unsigned int Deviceid);

	int SensorExist(char * szDeviceID);

	void CreateSensors(char *     szDeviceID, int rorg, int manufacturer, int profile, int ttype, int OffsetAddr);

	void CreateSensors(unsigned int DeviceID, int rorg, int manufacturer, int profile, int ttype, int OffsetAddr);

	void AddSensors   (unsigned int DeviceID, int rorg, int manufacturer, int profile, int ttype, int OffsetAddr);

	static std::string DeviceIDToString(unsigned int DeviceID);

	bool getProfileFromDb(std::string szDeviceID, int &Manufacturer, int &Rorg, int &Profile, int &Type);

	bool getProfileFromDb(unsigned int DeviceID , int &Manufacturer, int &Rorg, int &Profile, int &Type);

	void UpdateProfileSensors(char * szDeviceID, int rorg, int profile, int ttype);

	bool CheckIsGatewayAdress(unsigned int id);

private:
	virtual bool ParseData() { return true; };

	virtual bool sendFrame(unsigned char frametype, unsigned char *databuf, unsigned short datalen, unsigned char *optdata, unsigned char optdatalen) { return true; };
	virtual bool sendFrameQueue(unsigned char frametype, unsigned char *databuf, unsigned short datalen, unsigned char *optdata, unsigned char optdatalen) { return true; };

public:
	void sendVld(unsigned int sID, int channel, int value);
	void sendVld(unsigned int sID, unsigned char *data, int DataLen);
	uint32_t sendVld(unsigned int unitBaseAddr, T_DATAFIELD * OffsetDes,  ...);


	void SendRpsTeachIn(unsigned int sID);
	void Send1BSTeachIn(unsigned int sID);
	void Send4BSTeachIn(unsigned int sID);

public:	unsigned long m_id_base;

	T_SENSORS Sensors;

};


#endif

