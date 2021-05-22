#include "stdafx.h"
#include "EnOcean.h"
#include "../main/Logger.h"
#include "../main/SQLHelper.h"

#include <string>

#include "EnOceanRMCC.h"

#define ACK_TIMEOUT 5


char * Query_Status_return_codes[] =
{
	"OK                            ",
	"Wrong target ID               ",
	"Wrong unlock code             ",
	"Wrong EEP                     ",
	"Wrong manufacturer ID         ",
	"Wrong data size               ",
	"No code set                   ",
	"Not send                      ",
	"RPC failed                    ",
	"Message time out              ",
	"Too Long Message              ",
	"Message part already received ",
	"Message part not received     ",
	"Address out of range          ",
	"Code data size exceeded       ",
	"Wrong data                    "
};

CEnOceanRMCC::CEnOceanRMCC(int ID ):CEnOcean::CEnOcean(ID){
	m_Seq = 0 ;
	m_com_status = COM_OK;
	LoadSensorsNodesFromDb();
};
void CEnOceanRMCC::setRorg(unsigned char * buff)
{
	buff[0] = RORG_SYS_EX;

	m_Seq++;
	if (m_Seq > 3) m_Seq = 1;
	buff[1] = m_Seq << 6;       //SEQ 40/80/C0

}
void CEnOceanRMCC::setRorg(unsigned char * buff, int idx )
{
	buff[0] = RORG_SYS_EX;

	buff[1] = (m_Seq << 6)  + idx ;       //SEQ 40/80/C0

}
void CEnOceanRMCC::parse_PACKET_REMOTE_MAN_COMMAND( unsigned char m_buffer[] , int m_DataSize, int m_OptionalDataSize )
{
	//get function
	int fct = m_buffer[0] * 256 + m_buffer[1];
	Debug(DEBUG_NORM, "EnOcean: received function :%03X :%s", fct, RMCC_Cmd_Desc(fct) );
	//ping response
	if (fct == PING_ANSWER)
	{
		// ping
		//	55 00 0F 07 01 2B         C5 80 00 7F F0 06 00 00 00 00 00 00 00 00 8F        03 01 A6 54 28 FF 00 83
		//response
		//	55 00 08 0A 07 C6         06 06 07 FF D2 01 12 2D                             05 01 33 BE 01 A6 54 28 2D 00 34
		int rorg = m_buffer[4];
		int func = m_buffer[5];
		int type = m_buffer[6];

		int profile = RorgFuncTypeToProfile(rorg,func,type );
		unsigned int senderId = DeviceArrayToInt(&m_buffer[12]);
		unsigned int RSSI = m_buffer[7];
		Sensors.addSensorProfile(senderId, profile);
		AddSensors(senderId, rorg, Sensors.Find(senderId)->Manufacturer, func, type, 0);

		Log(LOG_NORM, "EnOcean: Ping Answer SenderId: %08X Profile:%06X : %s : %s", senderId, profile , Get_Enocean4BSType(rorg,func,type), Get_Enocean4BSDesc(rorg,func,type)  );
	}
	//query  response
	else if ( (fct == QUERYID_ANSWER) || (fct == QUERYID_ANSWER_EXT) )
	{
		// queryId 
//		    queryid send cmd EEP : 00000000 Mask : 0
//			Send :                                  : 55 00 0F 07 01 2B C5 80 01 FF F0 04 00 00 00 00 00 00 00 00 8F 03 FF FF FF FF FF 00 EE
//			Recv PACKET_REMOTE_MAN_COMMAND(07 / 0A) : 06 04 07 FF D2 05 00 - FF FF FF FF 05 85 87 4A 3D 00 Opt Size : 10
		int rorg = m_buffer[4];
		int func = m_buffer[5];
		int type = m_buffer[6];
		int profile = RorgFuncTypeToProfile(rorg, func, type);

		unsigned int senderId = DeviceArrayToInt(&m_buffer[11]);
		Sensors.addSensorProfile(senderId, profile);
		AddSensors(senderId, rorg, Sensors.Find(senderId)->Manufacturer, func, type, 0);


		Log(LOG_NORM, "EnOcean: QueryId Answer SenderId: %08X Profile:%06X ", senderId, profile);
	}
	//product id  response
	else if (fct == RC_GET_PRODUCT_RESPONSE)
	{
		//get product id  cmd 227 
		//55 00 0F 07 01 2B         C5 80 00 7F F2 27 00 00 00 00 00 00 00 00 8F        03 FF FF FF FF FF 00             55
		//reponse  manu 46 procuct ref 00010003
		//55 00 0A 0A 07 10         08 27 07 FF 00 46 00 01 00 03                       FF FF FF FF 01 A6 54 28 2C 00     B3
		int manuf = m_buffer[4]*256 + m_buffer[5];
		unsigned int reference  = DeviceArrayToInt(&m_buffer[6]) ;

		unsigned int senderId = DeviceArrayToInt(&m_buffer[14]);
		Log(LOG_NORM, "EnOcean: getProductId Answer SenderId: %08X Manufacturer:%s Ref:%08X  ", senderId, Get_EnoceanManufacturer(manuf) , reference );
		Sensors.addSensorManuf(senderId, manuf, reference );
		ping(senderId);
	}
	//get link table medatadate cmd 0210 : taille current / max  table
	else if (fct == RC_GET_METADATA_RESPONSE)
	{
		//get link table medatadate cmd 0210 : taille current/ max  table
		//55 00 0F 07 01 2B         C5 40 00 7F F2 10 00 00 00 00 00 00 00 00 8F        03 01 A6 54 28 FF 00  AD
		//response curren size 03 max x18=24
		//55 00 09 0A 07 AD         08 10 07 FF 50 00 00 03 18                          FF FF FF FF 01 A6 54 28 2D 00 08
		int currentSize = m_buffer[7];
		int maxSize = m_buffer[8];
		unsigned int senderId = DeviceArrayToInt(&m_buffer[13]);
		Log(LOG_NORM, "EnOcean: Get Link table medatadata Answer SenderId: %08X Size:%d Max:%d ", senderId, currentSize, maxSize);
		Sensors.setLinkTableMedadata(senderId, currentSize, maxSize);
		//if no link content , delete internal base Adresse
		if (currentSize == 0)
			if (SensorExist(senderId))
				UpdateSenorBaseAddress(DeviceIDToString(senderId),0 );
	}
	//get all link table
	else if (fct == RC_GET_TABLE_RESPONSE)
	{
		//get all link table
		//55 00 0F 07 01 2B         C5 40 01 FF F2 11 00 00 17 00 00 00 00 00 8F        03 01 A6 54 28 FF 00 56
		//response                                        ID DEVICE ID   PROFILE  CHN
		//                          0  1    2  3     4    5  6  7  8  9  10 11 12 13
		//55 00 20 0A 07 D4         08 11   07 FF    00   00 FF 99 DF 01 D5 00 01 00   01 FF 99 DF 02 F6 02 01 00   02 FF 99 DF 02 F6 02 01 01       FF FF FF FF 01 A6 54 28 2E 00 FB
		//55 00 20 0A 07 D4         08 11   07 FF    00   03 00 00 00 00 FF FF FF 00   04 00 00 00 00 FF FF FF 00   05 00 00 00 00 FF FF FF 00       FF FF FF FF 01 A6 54 28 2E 00 8F
		//55 00 20 0A 07 D4         08 11   07 FF    00   06 00 00 00 00 FF FF FF 00   07 00 00 00 00 FF FF FF 00   08 00 00 00 00 FF FF FF 00       FF FF FF FF 01 A6 54 28 2E 00 DE
		//55 00 20 0A 07 D4         08 11   07 FF    00   09 00 00 00 00 FF FF FF 00   0A 00 00 00 00 FF FF FF 00   0B 00 00 00 00 FF FF FF 00       FF FF FF FF 01 A6 54 28 2E 00 F4
		//55 00 20 0A 07 D4         08 11   07 FF    00   0C 00 00 00 00 FF FF FF 00   0D 00 00 00 00 FF FF FF 00   0E 00 00 00 00 FF FF FF 00       FF FF FF FF 01 A6 54 28 2E 00 E1
		//55 00 20 0A 07 D4         08 11   07 FF    00   0F 00 00 00 00 FF FF FF 00   10 00 00 00 00 FF FF FF 00   11 00 00 00 00 FF FF FF 00       FF FF FF FF 01 A6 54 28 2E 00 BC
		//55 00 20 0A 07 D4         08 11   07 FF    00   15 00 00 00 00 FF FF FF 00   16 00 00 00 00 FF FF FF 00   17 00 00 00 00 FF FF FF 00       FF FF FF FF 01 A6 54 28 2E 00 66

		unsigned int senderId = DeviceArrayToInt(&m_buffer[m_DataSize + 4]);
		int nb = m_DataSize - 5;
		nb /= 9;
		for (int i = 0; i < nb; i++) {

			int  offs = m_buffer[5 + i * 9];
			uint entryId = DeviceArrayToInt(&m_buffer[6 + i * 9]);
			uint entryProfile = DeviceArrayToInt(&m_buffer[10 + i * 9]);
			int  channel = m_buffer[13 + i * 9];
			entryProfile /= 256;
			Sensors.addLinkTableEntry(senderId, offs, entryProfile, entryId, channel);
			Log(LOG_NORM, "EnOcean: ADD Link table Entry SenderId: %08X  entry %02d EntryId: %08X Profile %06X Channel:%d", senderId, offs, entryId, entryProfile, channel);

		}
		Sensors.printTableLink();
	}
	//query function
	else if (fct == QUERY_FUNCTION_ANSWER)
	{
		//query function
		//55 00 0F 07 01 2B	C5 80 00 7F F0 07 00 00 00 00 00 00 00 00 8F 				03 01 A6 54 28 FF 00     8D  opt 7
		//55 00 34 0A 07 DD 06 07 07 FF 02 24 07 FF 02 27 07 FF 02 20 07 FF 02 10 07 FF 02 11 07 FF 02 12 07 FF 02 30 07 FF 02 31 07 FF 02 32 07 FF 02 33 07 FF 02 26 07 FF 00 00 00 00      FF FF FF FF 01 A6 54 28 2C 00     2E opt 10
		unsigned int senderId = DeviceArrayToInt(&m_buffer[m_DataSize + 4]);
		int nb = m_DataSize - 4;
		nb /= 4;
		for (int i = 0; i < nb; i++) {

			int  function = m_buffer[4 + i * 4] * 256 + m_buffer[5 + i * 4];
			if (function)
				Log(LOG_NORM, "EnOcean: QUERY FUNCTION answer SenderId: %08X Function :%0X = %s ", senderId, function, RMCC_Cmd_Desc(function));
		}

	}
	else if (fct == QUERY_STATUS_ANSWER)
	{	
		bool  CodeIsSet = m_buffer[4] & 0x80;
		int   LastSeq   = m_buffer[4] & 0x3 ;
		int lastFunc    = m_buffer[5]*256 + m_buffer[6];
		int lastReturnCode= m_buffer[7] ;

		unsigned int senderId = DeviceArrayToInt(&m_buffer[12]);
		Log(LOG_NORM, "EnOcean: QUERY STATUS ANSWER SenderId: %08X CodeIsSet:%d LastSeq:%d lastFunc:%04X lastReturnCode:%d :%s", senderId, CodeIsSet, LastSeq, lastFunc, lastReturnCode, Query_Status_return_codes[lastReturnCode&0xF]);
	}

	else if (fct == RC_GET_REPEATER_FUNCTIONS_RESPONSE)
	{	
		/*
		Repeater function (2 bit): 		 0b00 - Repeater Off 		 0b01 - Repeater On 		 0b10 - Filtered Repeating On
		Repeater level    (2 bit):		 0b01 - Repeater Level 1     0b10 - Repeater Level 2
		Repeater Filter Structure (1 bit): 		 0b0 - AND for Repeating		 0b1 - OR for Repeating
 		 Data structure:
		7  6    5  4   3  
		RepFunc RepLev RepStruct
		*/

		bool  RepFunc   =   m_buffer[4] >> 6 ;
		int   RepLev    = ( m_buffer[4] >> 4 ) & 0x3 ;
		int   RepStruct = ( m_buffer[4] >> 3 ) & 0x1 ;
		unsigned int senderId = DeviceArrayToInt(&m_buffer[12]);

		Log(LOG_NORM, "EnOcean: GET_REPEATER_FUNCTIONS_RESPONSE SenderId: %08X Repeater function:%d  Repeater level: %d Repeater Filter Structure  : %d", senderId, RepFunc, RepLev , RepStruct );
	}

	

	setRemote_man_answer(fct);

}
void CEnOceanRMCC::remoteLearning(unsigned int destID, int channel, T_LEARN_MODE Device_LRN_Mode )
{
	unsigned char buff[16];
	unsigned char opt[16];

	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x01;			//data len = 2
	buff[3] = 0x7F;		//mamanufacturer 7FF
	buff[4] = 0xF2;			//function 220
	buff[5] = 0x20;

	//payload 4 bytes
	buff[6] = Device_LRN_Mode << 6;
	buff[7] = channel;

	buff[14] = 0x8F; //status

	//optionnal data
	setDestination(opt, destID);

	Debug(DEBUG_NORM, "EnOcean: send remoteLearning to %08X channel %d Mode:%d",destID, channel,  Device_LRN_Mode);
	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);
}
void CEnOceanRMCC::unlock(unsigned int destID, unsigned int code)
{
	unsigned char buff[16];
	unsigned char opt[16];

	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x02;			//data len = 4
	buff[3] = 0x7F;			//mamanufacturer 7FF
	buff[4] = 0xF0;
	buff[5] = 0x01;			//function 001
	buff[14] = 0x8F; //status

	DeviceIntToArray(code, &buff[6]);

	//optionnal data
	setDestination(opt, destID);

	Debug(DEBUG_NORM, "EnOcean: unlock send cmd to %08X code:%08X", destID,code);
	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);
	waitRemote_man_answer(PACKET_RESPONSE, ACK_TIMEOUT);
}
void CEnOceanRMCC::lock(unsigned int destID, unsigned int code)
{
	unsigned char buff[16];
	unsigned char opt[16];

	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x02;			//data len = 4
	buff[3] = 0x7F;			//mamanufacturer 7FF
	buff[4] = 0xF0;
	buff[5] = 0x02;			//function 002
	buff[14] = 0x8F; //status

	DeviceIntToArray(code, &buff[6]);

	//optionnal data
	setDestination(opt, destID);

	Debug(DEBUG_NORM, "EnOcean: lock send cmd to %08X code:%08X", destID, code);
	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);

}
void CEnOceanRMCC::setcode(unsigned int destID, unsigned int code)
{
	unsigned char buff[16];
	unsigned char opt[16];

	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x02;			//data len = 4
	buff[3] = 0x7F;			//mamanufacturer 7FF
	buff[4] = 0xF0;
	buff[5] = 0x03;			//function 003
	buff[14] = 0x8F; //status

	DeviceIntToArray(code, &buff[6]);

	//optionnal data
	setDestination(opt, destID);

	Debug(DEBUG_NORM, "EnOcean: setcode send cmd to %08X , %d", destID, code);
	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);

}
void CEnOceanRMCC::queryid(unsigned int EEP, unsigned int mask )
{
	unsigned char buff[16];
	unsigned char opt[16];

	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x01;			//data len = 3
	buff[3] = 0xFF;			//mamanufacturer 7FF
	buff[4] = 0xF0;
	buff[5] = 0x04;			//function 004
	buff[6] = 0;
	buff[7] = 0;
	buff[8] = 0;

	buff[14] = 0x8F; //status

	//optionnal data : alway broadcast
	setDestination(opt, 0xFFFFFFFF);

	Debug(DEBUG_NORM, "EnOcean: queryid send cmd EEP: %08X Mask: %d", EEP, mask);
	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);

}
void CEnOceanRMCC::ping(unsigned int destID)
{
	unsigned char buff[16];
	unsigned char opt[16];

	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x00;			//data len = 0
	buff[3] = 0x7F;			//mamanufacturer 7FF
	buff[4] = 0xF0;
	buff[5] = 0x06;			//function 006
	buff[14] = 0x8F; //status

	//optionnal data
	setDestination(opt, destID);

	Debug(DEBUG_NORM, "EnOcean: Ping cmd send to %08X ", destID);
	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);

}
void CEnOceanRMCC::action(unsigned int destID)
{
	unsigned char buff[16];
	unsigned char opt[16];

	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x00;			//data len = 0
	buff[3] = 0x7F;			//mamanufacturer 7FF
	buff[4] = 0xF0;
	buff[5] = 0x05;			//function 005
	buff[14] = 0x8F;		//status

					 //optionnal data
	setDestination(opt, destID);

	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);
	Debug(DEBUG_NORM, "EnOcean: send action %08X ", destID);

}
void CEnOceanRMCC::getProductId(unsigned int destination )
{
	unsigned char buff[16];
	unsigned char opt[16];

	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x00;			//data len = 0
	buff[3] = 0x7F;			//mamanufacturer 7FF
	buff[4] = 0xF2;
	buff[5] = 0x27;			//function 227
	buff[14] = 0x8F;		//status

							//optionnal data
	setDestination(opt, destination);

	Debug(DEBUG_NORM, "EnOcean: getProductId cmd send to %08X", destination );
	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);

}
void CEnOceanRMCC::getLinkTableMedadata(uint destID)
{
	unsigned char buff[16];
	unsigned char opt[16];

	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x00;			//data len = 0
	buff[3] = 0x7F;			//mamanufacturer 7FF
	buff[4] = 0xF2;
	buff[5] = 0x10;			//function 210
	buff[14] = 0x8F; //status

					 //optionnal data
	setDestination(opt, destID);

	Debug(DEBUG_NORM, "EnOcean: send getLinkTableMedadata %08X ", destID);
	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);

	waitRemote_man_answer(RC_GET_METADATA_RESPONSE, ACK_TIMEOUT);

}
void CEnOceanRMCC::queryFunction(uint destID)
{
	unsigned char buff[16];
	unsigned char opt[16];
	//C5 80 00 7F F0 07 00 00 00 00 00 00 00 00 8F

	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x00;			//data len = 0
	buff[3] = 0x7F;			//mamanufacturer 7FF
	buff[4] = 0xF0;
	buff[5] = 0x07;			//function 007
	buff[14] = 0x8F; //status

					 //optionnal data
	setDestination(opt, destID);

	Debug(DEBUG_NORM, "EnOcean: send queryFunction %08X ", destID);
	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);

}
void CEnOceanRMCC::queryStatus(uint destID)
{
	unsigned char buff[16];
	unsigned char opt[16];
	//C5 80 00 7F F0 08 00 00 00 00 00 00 00 00 8F

	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x00;			//data len = 0
	buff[3] = 0x7F;			//mamanufacturer 7FF
	buff[4] = 0xF0;
	buff[5] = QUERY_STATUS;			//function 008
	buff[14] = 0x8F; //status

					 //optionnal data
	setDestination(opt, destID);

	Debug(DEBUG_NORM, "EnOcean: send queryStatus %08X ", destID);
	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);

}
void CEnOceanRMCC::getallLinkTable(uint SensorId, int begin, int end)
{
	unsigned char buff[16];
	unsigned char opt[16];

	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x01;			//data len = 3
	buff[3] = 0xFF;			//mamanufacturer 7FF
	buff[4] = 0xF2;
	buff[5] = 0x11;			//function 211

	buff[7] = begin;		//end offset table 
	buff[8] = end;		//end offset table 

	buff[14] = 0x8F; //status

					 //optionnal data
	setDestination(opt, SensorId);

	Debug(DEBUG_NORM, "EnOcean: send getallLinkTable %08X begin :%d End:%d ", SensorId, begin,  end );
	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);

	//Number of table entry to received
	//3 entry by response datagramm
	int NbAnswer = ( ( end - begin + 1 ) + 2 ) / 3 ;

	//wait for all the table response
	for (int i=0;i< NbAnswer;i++)
		waitRemote_man_answer(RC_GET_TABLE_RESPONSE, ACK_TIMEOUT);

}
void CEnOceanRMCC::getLinkTable( uint DeviceId)
{
	unlock(DeviceId, GetLockCode());
	getLinkTableMedadata(DeviceId);
	int TableSize = Sensors.getTableLinkCurrentSize(DeviceId);
	int begin = 0;
	if (TableSize)
		while (TableSize != Sensors.getTableLinkValidSensorIdSize(DeviceId))
		{
			getallLinkTable(DeviceId, begin, begin + 2);
			begin += 3;
		}
}
void CEnOceanRMCC::setLinkEntryTable(uint SensorId, int begin , uint ID , int EEP , int channel )
{
	unsigned char buff[16];
	unsigned char opt[16];
	unsigned char sdid[16];
	
	DeviceIntToArray(ID, sdid);


	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x05;			//data len = 10
	buff[3] = 0x7F;			//mamanufacturer 7FF
	buff[4] = 0xF2;
	buff[5] = 0x12;			//function 212
	buff[6] = 0x00;			//direction InBound bit 8 = 0 

	unsigned char* ptc = &buff[7];
	*ptc++ = begin;		//end offset table 
	*ptc++ = sdid[0];
	*ptc++ = sdid[1];
	buff[14] = 0x8F; //status
					 //optionnal data
	setDestination(opt, SensorId);

	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);

	memset(buff, 0, sizeof(buff));
	setRorg(buff,1);

	ptc    = &buff[2];
	*ptc++ = sdid[2];
	*ptc++ = sdid[3];

	*ptc++ = getRorg(EEP);
	*ptc++ = getFunc(EEP);
	*ptc++ = getType(EEP);
	*ptc++ = channel ;

	buff[14] = 0x8F; //status

	//optionnal data
	setDestination(opt, SensorId);
	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);

	//wait for all the table response
	waitRemote_man_answer(RC_ACK, ACK_TIMEOUT);

	Debug(DEBUG_NORM, "EnOcean: send setLinkTable %08X begin :%d ID:%08X EEP:%06X Channel : %d", SensorId, begin,ID, EEP, channel);

}
void CEnOceanRMCC::resetToDefaults(uint destID,int resetAction)
{
	unsigned char buff[16];
	unsigned char opt[16];

	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x00;			//data len = 1
	buff[3] = 0xFF;			//mamanufacturer 7FF
	buff[4] = 0xF2;
	buff[5] = 0x24  ;			//function 224 RC_RESET_TO_DEFAULTS
	buff[6] = resetAction ;
	buff[14] = 0x8F; //status

					 //optionnal data
	setDestination(opt, destID);

	Debug(DEBUG_NORM, "EnOcean: send resetToDefaults %08X ", destID);
	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);

}

void CEnOceanRMCC::GetRepeaterQuery (unsigned int destination )
{
	unsigned char buff[16];
	unsigned char opt[16];

	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x00;			//data len = 0
	buff[3] = 0x7F;			//mamanufacturer 7FF
	buff[4] = 0xF2;
	buff[5] = 0x50;			//function x250 RC_GET_REPEATER_FUNCTIONS
	buff[14] = 0x8F;		//status

							//optionnal data
	setDestination(opt, destination);

	Debug(DEBUG_NORM, "EnOcean: geRepeaterFunctionsQuery cmd send to %08X", destination );
	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);

}




void CEnOceanRMCC::SetRepeaterQuery (unsigned int destination , int Repeaterfunction , int Repeaterlevel ,  int RepeaterFilter )
{
	unsigned char buff[16];
	unsigned char opt[16];

	memset(buff, 0, sizeof(buff));
	setRorg(buff);

	buff[2] = 0x00;			//data len = 1
	buff[3] = 0xFF;			//mamanufacturer 7FF
	buff[4] = 0xF2;
	buff[5] = 0x51;			//function x251 RC_SET_REPEATER_FUNCTIONS
	buff[14] = 0x8F;		//status

		/*
		Repeater function (2 bit): 		 0b00 - Repeater Off 		 0b01 - Repeater On 		 0b10 - Filtered Repeating On
		Repeater level    (2 bit):		 0b01 - Repeater Level 1     0b10 - Repeater Level 2
		Repeater Filter Structure (1 bit): 		 0b0 - AND for Repeating		 0b1 - OR for Repeating
 		 Data structure:
		7  6    5  4   3  
		RepFunc RepLev RepStruct
		*/

	buff[6] =  (Repeaterfunction << 6 ) & (Repeaterlevel << 4 ) & (RepeaterFilter << 3 );

							//optionnal data
	setDestination(opt, destination);

	Debug(DEBUG_NORM, "EnOcean: seRepeaterFunctionsQuery cmd send to %08X  Repeaterfunction:%d  Repeaterlevel:%d  RepeaterFilter:%d ", destination,Repeaterfunction ,  Repeaterlevel ,   RepeaterFilter  );
	sendFrameQueue(PACKET_RADIO, buff, 15, opt, 7);

}



//teachin from ID database
void CEnOceanRMCC::TeachIn(std::string& sidx, T_LEARN_MODE Device_LRN_Mode )
{
	std::vector<std::vector<std::string> > result;
	result = m_sql.safe_query("SELECT DeviceID,Unit  FROM DeviceStatus WHERE (ID='%s')  ", sidx.c_str());
	if (result.size() > 0)
	{
		TeachIn(result[0][0], result[0][1],  Device_LRN_Mode);
	}

}
//teachin from senderId / unit 
void CEnOceanRMCC::TeachIn(std::string& deviceId, std::string& unit, T_LEARN_MODE Device_LRN_Mode )
{
		int channel = atoi(unit.c_str());
		//get sender adress from db
		unsigned int SenderAdress = DeviceIdCharToInt(deviceId);

		Log(LOG_NORM, "EnOcean: send remoteLearning to device %s channel:%d Mode:%d", deviceId.c_str(), channel,  Device_LRN_Mode);

		unlock(SenderAdress, GetLockCode() );
		remoteLearning(SenderAdress, channel - 1, Device_LRN_Mode);
}
void CEnOceanRMCC::GetNodeList(Json::Value &root)
{
	root["status"] = "OK";
	root["title"] = "EnOceanNodes";

	std::vector<std::vector<std::string> > result;
//	result = m_sql.safe_query("SELECT D.Name, D.Type, d.SubType, d.SwitchType, d.Unit, d.DeviceId, E.Rorg, E.Profile, E.Type, E.Manufacturer, E.Address FROM DeviceStatus   as d LEFT OUTER JOIN EnoceanSensors as e ON(instr(E.DeviceID, D.DeviceId) <> 0)  WHERE (D.HardwareID==%d) ", m_HwdID);
//	result = m_sql.safe_query("SELECT D.Name, D.Type, d.SubType, d.SwitchType, d.Unit, d.DeviceId, E.Rorg, E.Profile, E.Type, E.Manufacturer, E.Address FROM EnoceanSensors AS E LEFT OUTER JOIN DeviceStatus   as d ON(instr(E.DeviceID, D.DeviceId) <> 0) and (D.HardwareID == E.HardwareID) ");

//	result = m_sql.safe_query("SELECT * FROM  EnoceanSensors as e LEFT OUTER JOIN DeviceStatus as d ON(instr(E.DeviceID, D.DeviceId) <> 0) and (D.HardwareID == E.HardwareID)");
	result = m_sql.safe_query("SELECT e.DeviceId, E.Rorg, E.Profile, E.Type, E.Manufacturer, E.Address , D.Name, D.Type, d.SubType, d.SwitchType, d.Unit FROM EnoceanSensors AS E LEFT OUTER JOIN DeviceStatus   as d ON(instr(E.DeviceID, D.DeviceId) <> 0) and (D.HardwareID == E.HardwareID) ");
	//                                 0          1         2        3        4              5            6       7         8        9            10
	if (result.size() > 0)
	{
		std::vector<std::vector<std::string> >::const_iterator itt;
		int ii = 0;
		for (itt = result.begin(); itt != result.end(); ++itt)
		{
			std::vector<std::string> sd = *itt;

			//					unsigned int homeID = boost::lexical_cast<unsigned int>(sd[1]);
			{

				root["result"][ii]["DeviceID"] = sd[00];
				int rorg = atoi(sd[1].c_str());
				int func = atoi(sd[2].c_str());
				int type = atoi(sd[3].c_str());

				root["result"][ii]["Profile"] = IntToString(rorg, 2) +  IntToString(func, 2) +  IntToString(type, 2);
				root["result"][ii]["Manufacturer"] = sd[4];
				std::string man = Get_EnoceanManufacturer(atoi(sd[4].c_str()));
				if (man[0] == '>') man = "Unkown";
				root["result"][ii]["Manufacturer_name"] = man ;
				
				root["result"][ii]["BaseAddress"] = DeviceIDToString( GetAdress(atoi(sd[5].c_str())));
				std::string typ = Get_Enocean4BSType(rorg, func, type);
				if (typ[0] == '>') typ = "Unkown";

				root["result"][ii]["EnoTypeName"] = typ;

				root["result"][ii]["Description"] = Get_Enocean4BSDesc(rorg, func, type);

				root["result"][ii]["Name"] = sd[6];
				root["result"][ii]["Type"] = sd[7];
				root["result"][ii]["SubType"] = sd[8];
				root["result"][ii]["SwitchType"] = sd[9];
				root["result"][ii]["TypeName"] = RFX_Type_SubType_Desc(atoi(sd[8].c_str()), atoi(sd[9].c_str()));
				if (sd[10].empty())sd[10] = "1";
				root["result"][ii]["Unit"] = sd[10];


				char szDate[80] = "";
				//struct tm loctime;
				//						localtime_r(&pNode->LastSeen, &loctime);
				//strftime(szDate, 80, "%Y-%m-%d %X", &loctime);

				root["result"][ii]["LastUpdate"] = szDate;

				ii++;
			}
		}
	}
}
void CEnOceanRMCC::GetLinkTableList(Json::Value &root, std::string &DeviceIds )
{
	root["status"] = "OK";
	root["title"] = "EnOceanLinkTable";
	unsigned int  DeviceId = DeviceIdCharToInt(DeviceIds);

/*
addLinkTableEntry(0x1a65428, 0, 0xD0500, 0xABCDEF, 1);
	addLinkTableEntry(0x1a65428, 1, 0xD0500, 0x1a65428, 1);
	addLinkTableEntry(0x1a65428, 2, 0xD0500, 0x1234567, 1);
	addLinkTableEntry(0x1a65428, 3, 0xD0500, 0x2345678, 1);
*/
	T_SENSOR* sensors = Sensors.Find(DeviceId);

	if (sensors) {
		//read link table if not readed
		if ((sensors->asLinkTable()) && (sensors->getTableLinkMaxSize() == 0))
			getLinkTable(DeviceId);

		for (int entry = 0; entry < sensors->MaxSize; entry++)
		{
			root["result"][entry]["Profile"]  = string_format("%06X", sensors->LinkTable[entry].Profile);
			UINT32 SenderId = sensors->LinkTable[entry].SenderId;
			root["result"][entry]["SenderId"] = string_format("%07X", SenderId);
			root["result"][entry]["Channel"]  = string_format("%d"  , sensors->LinkTable[entry].Channel);

			if (CheckIsGatewayAdress(SenderId))
			{
				int unitCode = GetOffsetAdress(SenderId);
				SenderId = GetSenderIdFromAddress(unitCode);
			}
			root["result"][entry]["Name"] = GetDeviceNameFromId(SenderId);
		}
	}
}
unsigned int CEnOceanRMCC::GetLockCode()
{
	std::string scode;
	m_sql.GetPreferencesVar("EnOceanLockCode", scode);
	unsigned int code = DeviceIdCharToInt(scode);
	return code;
}
void  CEnOceanRMCC::SetLockCode(std::string scode)
{
	m_sql.UpdatePreferencesVar("EnOceanLockCode", scode);
}
void CEnOceanRMCC::setRemote_man_answer(int premote_man_answer)
{
	std::lock_guard<std::mutex> l(m_RMCC_Mutex);
	m_RMCC_queue.push_back(premote_man_answer);
};
int CEnOceanRMCC::getRemote_man_answer()
{
	int remote_man_answer = 0;

	//if a response as been received
	if (m_RMCC_queue.size() > 0)
	{
		std::lock_guard<std::mutex> l(m_RMCC_Mutex);

		remote_man_answer = m_RMCC_queue.front();

		m_RMCC_queue.erase(m_RMCC_queue.begin());
	}

	return remote_man_answer;
};
void CEnOceanRMCC::clearRemote_man_answer()
{
	//if a response as been received
	if (m_RMCC_queue.size() > 0)
	{
		std::lock_guard<std::mutex> l(m_RMCC_Mutex);
		m_RMCC_queue.clear();
	}
};
//return true if time out
bool CEnOceanRMCC::waitRemote_man_answer(int premote_man_answer, int timeout)
{
	clearRemote_man_answer();
	int remote_man_answer = getRemote_man_answer();
	setCommStatus(COM_OK);
	timeout *= 10;
	while (( remote_man_answer != premote_man_answer) && (timeout > 0))
	{
		if (remote_man_answer == 0)
		{
			Sleep(100);
			timeout--;
		}
		remote_man_answer = getRemote_man_answer();
	}
	if (timeout == 0) {
		setCommStatus(COM_TIMEOUT);
		Debug(DEBUG_NORM, "EnOcean: TIMEOUT waiting answer %04X :%s ", premote_man_answer, RMCC_Cmd_Desc(premote_man_answer));
	}

	return (timeout == 0);
}

void CEnOceanRMCC::setCommStatus(T_COM_STATUS status)
{
	m_com_status = status;
}
T_COM_STATUS CEnOceanRMCC::getCommStatus()
{
	return m_com_status ;
}

//return true if comm status = ok
bool  CEnOceanRMCC::isCommStatusOk()
{
	return (m_com_status == COM_OK) ;
}


void CEnOceanRMCC::LoadSensorsNodesFromDb()
{
	Sensors.m_sensors.clear();
	std::vector<std::vector<std::string> > result;
	result = m_sql.safe_query("SELECT ID, DeviceID, Manufacturer, Rorg,Profile, [Type],Address FROM EnoceanSensors WHERE (HardwareID==%d)", m_HwdID);
	if (!result.empty())
	{
		for (const auto & itt : result)
		{
			std::vector<std::string> sd = itt;
			uint devideId = DeviceIdCharToInt(sd[1]);
			Sensors.addSensorManuf(devideId, atoi(sd[2].c_str()) , 0 ) ;

			int rorg = atoi(sd[3].c_str());
			int func = atoi(sd[4].c_str());
			int type = atoi(sd[5].c_str());
			Sensors.addSensorProfile(devideId, RorgFuncTypeToProfile(rorg, func, type));

			Sensors.setSensorAddress(devideId, atoi(sd[6].c_str())); 

		}
	}
}


typedef struct _STR_TABLE {
	unsigned long    id;
	const char   *str1;
} STR_TABLE;

const char *findTableIDSingle(const STR_TABLE *t, const unsigned long id)
{
	while (t->str1) {
		if (t->id == id)
			return t->str1;
		t++;
	}
	return "Unknown";
}

const char *RMCC_Cmd_Desc(const int tType)
{
	static const STR_TABLE	Table[] =
	{
		{ UNLOCK                               ,"Unlock                                " },
		{ LOCK                                 ,"Lock                                  " },
		{ SETCODE                              ,"Set code                              " },
		{ QUERYID                              ,"Query ID                              " },
		{ QUERYID_ANSWER                       ,"Query ID answer                       " },
		{ QUERYID_ANSWER_EXT                   ,"! Ext Query Id Answer                 " },
		{ ACTION                               ,"Action                                " },
		{ PING                                 ,"Ping                                  " },
		{ PING_ANSWER                          ,"Ping answer                           " },
		{ QUERY_FUNCTION                       ,"Query function                        " },
		{ QUERY_FUNCTION_ANSWER                ,"Query function answer                 " },
		{ QUERY_STATUS                         ,"Query status                          " },
		{ QUERY_STATUS_ANSWER                  ,"Query status answer                   " },
		{ REMOTE_LEARNIN                       ,"Remote learn in                       " },
		{ REMOTE_FLASH_WRITE                   ,"Remote flash write                    " },
		{ REMOTE_FLASH_READ                    ,"Remote flash read                     " },
		{ REMOTE_FLASH_READ_ANSWER             ,"Remote flash read answer              " },
		{ SMARTACK_READ                        ,"SmartACK read                         " },
		{ SMARTACK_READ_MAILBOX_ANSWER         ,"SmartACK read mailbox answer          " },
		{ SMARTACK_READ_LEARNED_SENSOR_ANSWER  ,"SmartACK read learned sensor answer   " },
		{ SMARTACK_WRITE                       ,"SmartACK write                        " },
		{ RC_ACK                               ,"Remote Commissioning Acknowledge      " },
		{ RC_GET_METADATA                      ,"Get Link Table Metadata Query         " },
		{ RC_GET_METADATA_RESPONSE             ,"Get Link Table Metadata Response      " },
		{ RC_GET_TABLE                         ,"Get Link Table Query                  " },
		{ RC_GET_TABLE_RESPONSE                ,"Get Link Table Response               " },
		{ RC_SET_TABLE                         ,"Set Link Table Query                  " },
		{ RC_GET_GP_TABLE                      ,"Get Link Table GP Entry Query         " },
		{ RC_GET_GP_TABLE_RESPONSE             ,"Get Link Table GP Entry Response      " },
		{ RC_SET_GP_TABLE                      ,"Set Link Table GP Entry Query         " },
		{ RC_SET_LEARN_MODE                    ,"Remote Set Learn Mode                 " },
		{ RC_TRIG_OUTBOUND_TEACH_REQ           ,"Trigger Outbound Remote Teach Request " },
		{ RC_GET_DEVICE_CONFIG                 ,"Get Device Configuration Query        " },
		{ RC_GET_DEVICE_CONFIG_RESPONSE        ,"Get Device Configuration Response     " },
		{ RC_SET_DEVICE_CONFIG                 ,"Set Device Configuration Query        " },
		{ RC_GET_LINK_BASED_CONFIG             ,"Get Link Based Configuration Query    " },
		{ RC_GET_LINK_BASED_CONFIG_RESPONSE    ,"Get Link Based Configuration Response " },
		{ RC_SET_LINK_BASED_CONFIG             ,"Set Link Based Configuration Query    " },
		{ RC_APPLY_CHANGES                     ,"Apply Changes Command                 " },
		{ RC_RESET_TO_DEFAULTS                 ,"Reset to Defaults                     " },
		{ RC_RADIO_LINK_TEST_CONTROL           ,"Radio Link Test Control               " },
		{ RC_GET_PRODUCT_ID                    ,"Get Product ID Query                  " },
		{ RC_GET_PRODUCT_RESPONSE              ,"Get Product ID Response               " },
		{ RC_GET_REPEATER_FUNCTIONS            ,"Get Repeater Functions Query          " },
		{ RC_GET_REPEATER_FUNCTIONS_RESPONSE   ,"Get Repeater Functions Response       " },
		{ RC_SET_REPEATER_FUNCTIONS            ,"Set Repeater Functions Query          " },
		{ RC_SET_REPEATER_FILTER               ,"Set Repeater Filter Query             " },
		{ 0, NULL  }

	};
	return findTableIDSingle(Table, tType);
}


