#include "stdafx.h"
#include "EnOcean.h"
#include "../main/Logger.h"
#include "../main/Helper.h"
#include "../main/RFXtrx.h"
#include "../main/SQLHelper.h"

#include <string>

#define S_RPS_T21 0x20
#define S_RPS_T21_SHIFT 5
#define S_RPS_NU  0x10
#define S_RPS_NU_SHIFT 4
#define S_RPS_RPC 0x0F
#define S_RPS_RPC_SHIFT 0


CEnOcean::CEnOcean(int ID) {
	m_id_base = 0;
	m_HwdID = ID;

};
//return true if base adress reading
bool CEnOcean::IsRunning()
{
	return (m_id_base != 0);
}
//id offset of device
//src : source rocker
unsigned int CEnOcean::GetAdress(int unitid) {
	return(m_id_base + unitid);
}
unsigned int CEnOcean::GetOffsetAdress(int senderid) {
	return (senderid & (0x7F)) ;
}
uint64_t CEnOcean::CreateDevice(const int HardwareID, const char* ID, const int  unitCode, const unsigned char devType, const unsigned char subType, const unsigned char signallevel, const unsigned char batterylevel, const int nValue, const char* sValue, std::string &devname, int SwitchType , const std::string & deviceoptions, int used )
{
	uint64_t ulID = 0;
	std::vector<std::vector<std::string> > result;
	result = m_sql.safe_query("SELECT ID  FROM DeviceStatus WHERE (HardwareID=%d AND DeviceID='%q' AND Unit=%d AND Type=%d AND SubType=%d)", HardwareID, ID, unitCode, devType, subType);
	if (result.size() == 0)
	{
		//Insert

		if (!m_sql.m_bAcceptNewHardware)
		{
			devname = "Ignored";
			return -1; //We do not allow new devices
		}

		if (devname != "")
			devname = "Unknown" + std::string(ID);
		m_sql.safe_query(
			"INSERT INTO DeviceStatus (HardwareID, DeviceID, Unit, Type, SubType, SignalLevel, BatteryLevel, nValue, sValue,Name,used,SwitchType) "
			"VALUES ('%d','%q','%d','%d','%d','%d','%d','%d','%q','%q',%d,'%d' )",
			HardwareID,
			ID, unitCode, devType, subType,
			signallevel, batterylevel,
			nValue, sValue, devname.c_str(),used,
			SwitchType);

		//Get new ID
		result = m_sql.safe_query(
			"SELECT ID FROM DeviceStatus WHERE (HardwareID=%d AND DeviceID='%q' AND Unit=%d AND Type=%d AND SubType=%d)",
			HardwareID, ID, unitCode, devType, subType);
		if (result.size() == 0)
		{
			_log.Log(LOG_ERROR, "Serious database error, problem getting ID from DeviceStatus!");
			return -1;
		}
		std::stringstream s_str(result[0][0]);
		s_str >> ulID;

		//Set device options
		//deviceoptions.append("SelectorStyle:0;LevelNames:Off|Level1|Level2|Level3");
		if (!deviceoptions.empty()) 
			m_sql.SetDeviceOptions(ulID , m_sql.BuildDeviceOptions(deviceoptions, false));

	}
	return ulID;
}
//return the unit that correspond to the offset from controler base adress
int CEnOcean::getUnitFromDeviceId(unsigned int devIDx )
{
	return getUnitFromDeviceId(DeviceIDToString(devIDx) );
}
int CEnOcean::getUnitFromDeviceId(std::string devIDx  )
{
	std::vector<std::vector<std::string> > result;

	ToSensorsId(devIDx);

	//get Dev UnitCode 

	result = m_sql.safe_query("SELECT Address FROM EnoceanSensors WHERE (DeviceID='%s')  ", devIDx.c_str() );
	if (result.size() > 0) {
	return  atoi(result[0][0].c_str());
	}
	else
	return 0 ;
}
//return the sender adress fro enOcean deviceId 0x12345678
unsigned int CEnOcean::getSenderAdressFromDeviceId(std::string devIDx)
{
	int unitId = getUnitFromDeviceId(devIDx);
	unsigned int SenderAdress = GetAdress(unitId);
	return SenderAdress;
}
unsigned int CEnOcean::getSenderAdressFromDeviceId(unsigned int devIDx)
{
	return getSenderAdressFromDeviceId(DeviceIDToString(devIDx));
}


//find  device DeviceId : 0x12345678  from a base adress 
int CEnOcean::GetSenderIdFromAddress(int adsress) {
	std::vector<std::vector<std::string> > result;
	int deviceId = 0;
	if (adsress)
	{
		result = m_sql.safe_query("SELECT DeviceId FROM EnoceanSensors WHERE (Address=%d ) and (HardwareId=%d)  ", adsress, m_HwdID);
		if (result.size() > 0)
		{
			deviceId = DeviceIdCharToInt(result[0][0]);
		}
	}

	return deviceId;
}


//DeviceId : ID of device in EnoceanSensor
//offsetID : offset of device from controler base adress 0..127
void CEnOcean::UpdateSenorBaseAddress(std::string DeviceId , int offsetID ) {
	m_sql.safe_query("UPDATE EnoceanSensors SET %s=%d   WHERE (DeviceID = '%s' )", "Address" , offsetID , DeviceId.c_str() );

}
//find a base adress for enOcean device DeviceId : 0x12345678 
int CEnOcean::UpdateDeviceAddress(std::string DeviceId) {
	std::vector<std::vector<std::string> > result;
	bool  UsedUnitId[MAX_BASE_ADDRESS + 1];

	memset(UsedUnitId, 0, sizeof(UsedUnitId));
	//convert to 8 char
	ToSensorsId(DeviceId);

	//search if a same device ID already allocated exist
	result = m_sql.safe_query("SELECT Address FROM EnoceanSensors WHERE (DeviceId='%s') and (HardwareId=%d)  ", DeviceId.c_str(), m_HwdID);
	for (unsigned int i = 0; i < result.size(); i++)
	{
		//take the same
		int unitId = atoi(result[i][0].c_str());
		if (unitId != 0) {
			//UpdateBaseAddress(DeviceId, unitId );
			return unitId ;
		}
	}

	//get list of enocean sensor device
	result = m_sql.safe_query("SELECT Address FROM EnoceanSensors WHERE (HardwareId=%d)  ",  m_HwdID );
	//get all BaseId allready affected to switch device
	for (unsigned int i = 0; i < result.size(); i++)
	{
		int unitId = atoi(result[i][0].c_str());
		unitId = unitId % MAX_BASE_ADDRESS ;//robustess
		//ID already used
		UsedUnitId[unitId] = true;
	}

	//get list of device enocean created
	result = m_sql.safe_query("SELECT DeviceId FROM DeviceStatus  WHERE (HardwareId=%d)  ", m_HwdID);
	//get all BaseId allready affected to switch device
	for (unsigned int i = 0; i < result.size(); i++)
	{
		uint deviceId = DeviceIdCharToInt (result[i][0]);
		//if it is a gateWay range adress
		if (CheckIsGatewayAdress(deviceId))
		{
			int unitId = GetOffsetAdress(deviceId) % MAX_BASE_ADDRESS;//robustess
			//ID already used
			UsedUnitId[unitId] = true;
		}
	}

	//find not used addess
	for (int i = 1; i < MAX_BASE_ADDRESS; i++)
	{
		if (UsedUnitId[i] == false) {
			UpdateSenorBaseAddress(DeviceId, i);
			return i ;
		}
	}
	//device full 
	return 0;

}
int CEnOcean::UpdateDeviceAddress(unsigned int  DeviceId) 
	{
		return (UpdateDeviceAddress(DeviceIDToString(DeviceId)) );
	}
//test if deviceId exist in in database
//return 0 if not found
int CEnOcean::SensorExist( unsigned int Deviceid)
{
return SensorExist((char *)DeviceIDToString(Deviceid).c_str());
}
int CEnOcean::SensorExist(char * szDeviceID)
{

	std::vector<std::vector<std::string> > result;

	result = m_sql.safe_query("SELECT ID  FROM EnoceanSensors WHERE (DeviceID=='%q')", szDeviceID);
	//not found
	if (result.size() < 1)
		return 0;
	else
		return atoi(result[0][0].c_str());


}
//create sensor in database
void CEnOcean::CreateSensors(char * szDeviceID, int rorg , int manufacturer, int profile, int ttype,  int OffsetAddr )
{
	m_sql.safe_query("INSERT INTO EnoceanSensors (HardwareID, DeviceID, Manufacturer, Rorg,Profile, [Type],Address) VALUES (%d,'%q',%d,%d,%d,%d,%d)", m_HwdID, szDeviceID, manufacturer, rorg,profile, ttype, OffsetAddr);
	_log.Log(LOG_NORM, "EnOcean: Sender_ID %s inserted in the database", szDeviceID);

}
void CEnOcean::CreateSensors(unsigned int DeviceID, int rorg, int manufacturer, int profile, int ttype, int OffsetAddr)
{
	CreateSensors((char *)DeviceIDToString(DeviceID).c_str(), rorg, manufacturer, profile, ttype, OffsetAddr);
}
//update profile  sensor in database
void CEnOcean::UpdateProfileSensors(char * szDeviceID, int rorg,  int profile, int ttype)
{
	m_sql.safe_query("UPDATE EnoceanSensors SET  Rorg=%d , Profile=%d , Type=%d  WHERE (DeviceID = '%s' )", rorg, profile, ttype, szDeviceID);

}
void CEnOcean::AddSensors(unsigned int DeviceID, int rorg, int manufacturer, int profile, int ttype,  int OffsetAddr)
{

	if (!SensorExist(DeviceID))
	{
		// If not found, add it to the database
		CreateSensors(DeviceID, rorg,manufacturer, profile, ttype, OffsetAddr);
	}
}
bool CEnOcean::getProfileFromDb(std::string szDeviceID, int &Manufacturer, int &Rorg, int &Profile, int &Type)
{
	Rorg = Profile = Type = Manufacturer = 0;

	std::vector<std::vector<std::string> > result;
	result = m_sql.safe_query("SELECT  Rorg, Profile, [Type], Manufacturer FROM EnoceanSensors WHERE (HardwareID==%d) AND (DeviceID=='%q')", m_HwdID, szDeviceID.c_str());
	if (result.size() == 1)
	{
		// hardware device was already teached-in
		Rorg         = atoi(result[0][0].c_str());
		Profile      = atoi(result[0][1].c_str());
		Type         = atoi(result[0][2].c_str());
		Manufacturer = atoi(result[0][3].c_str());
		return true;
	}
	return false;
}
bool CEnOcean::getProfileFromDb(unsigned int DeviceID, int &Manufacturer, int &Rorg, int &Profile, int &Type)
{
	return getProfileFromDb(DeviceIDToString(DeviceID), Manufacturer, Rorg, Profile, Type);
}
//send F6 01 01 : rocker button for teach in
void CEnOcean::SendRpsTeachIn(unsigned int sID)
{
	unsigned char buff[16];

	//F6 10 ff 99 df 01 30
	//F6 00 ff 99 df 01 20

	buff[0] = RORG_RPS;
	buff[1] = 0x10;// rocker 0 press
	buff[2] = (sID >> 24) & 0xff;		// Sender ID
	buff[3] = (sID >> 16) & 0xff;
	buff[4] = (sID >> 8) & 0xff;
	buff[5] = sID & 0xff;
	buff[6] = 0x30;
	sendFrameQueue(PACKET_RADIO, buff, 7, NULL, 0);

	//Next command is send a bit later (button release)
	buff[1] = 0;				// no button press
	buff[6] = S_RPS_T21;	// release button			// b5=T21, b4=NU, b3-b0= RepeaterCount

	sendFrameQueue(PACKET_RADIO, buff, 7, NULL, 0);

}
//send data              1BS D5 00 FF 99 DF 01 00
//opt                                             03 FF FF FF FF FF 00
//esp3     55 00 07 07 01 7A D5 00 FF 99 DF 01 00 03 FF FF FF FF FF 00 64
void CEnOcean::Send1BSTeachIn(unsigned int sID)
{
	unsigned char buff[16];

	buff[0] = RORG_1BS;
	buff[1] = 0;
	buff[2] = (sID >> 24) & 0xff;		// Sender ID
	buff[3] = (sID >> 16) & 0xff;
	buff[4] = (sID >> 8) & 0xff;
	buff[5] = sID & 0xff;
	buff[6] = 0;

	//optionnal data
	unsigned char opt[16];
	opt[0] = 0x03; //subtel
	opt[1] = 0xff;
	opt[2] = 0xff;
	opt[3] = 0xff;
	opt[4] = 0xff;
	opt[5] = 0xff;
	opt[6] = 00;//RSI 

	sendFrameQueue(PACKET_RADIO, buff, 7, opt, 7);

}
// A5 02 00 00 00 FF 99 DF 01 30
void CEnOcean::Send4BSTeachIn(unsigned int sID)
{
	if (isOpen()) {

		unsigned char buf[100];
		buf[0] = RORG_4BS;
		buf[1] = 0x2;
		buf[2] = 0;
		buf[3] = 0;
		buf[4] = 0x0; // DB0.3=0 -> teach in with no EEP

		buf[5] = (sID >> 24) & 0xff;
		buf[6] = (sID >> 16) & 0xff;
		buf[7] = (sID >> 8) & 0xff;
		buf[8] = sID & 0xff;

		buf[9] = 0x30; // status

		sendFrame(PACKET_RADIO, buf, 10, NULL, 0);
	}
}
void CEnOcean::sendVld(unsigned int sID, int channel, int value)
{
	unsigned char buff[16];

	buff[0] = RORG_VLD; //vld
	buff[1] = 0x01;
	buff[2] = channel;
	buff[3] = value;
	buff[4] = (sID >> 24) & 0xff;		// Sender ID
	buff[5] = (sID >> 16) & 0xff;
	buff[6] = (sID >> 8) & 0xff;
	buff[7] = sID & 0xff;
	buff[8] = 0; //status

	//optionnal data
	unsigned char opt[16];
	opt[0] = 0x03; //subtel
	opt[1] = 0xff;
	opt[2] = 0xff;
	opt[3] = 0xff;
	opt[4] = 0xff;
	opt[5] = 0xff;
	opt[6] = 00;//RSI 

	//D2 01 00 00 FF 99 DF 01 00
	//03 FF FF FF FF FF 00

	sendFrameQueue(PACKET_RADIO, buff, 9, opt, 7);
}
//send a VLD datagramm with payload : data to device Id sID
void CEnOcean::sendVld(unsigned int sID, unsigned char *data , int DataLen )
{
	unsigned char buffer[64];

	if (DataLen > MAX_DATA_PAYLOAD)
		return;

	unsigned char *buff = buffer ;
	*buff++ = RORG_VLD; //vld
	for (int i = 0; i < DataLen; i++)
		*buff++ = *data++;

	*buff++ = (sID >> 24) & 0xff;		// Sender ID
	*buff++ = (sID >> 16) & 0xff;
	*buff++ = (sID >> 8) & 0xff;
	*buff++ = sID & 0xff;
	*buff++ = 0; //status

				 //optionnal data
	unsigned char opt[16];
	opt[0] = 0x03; //subtel
	opt[1] = 0xff;
	opt[2] = 0xff;
	opt[3] = 0xff;
	opt[4] = 0xff;
	opt[5] = 0xff;
	opt[6] = 00;//RSI 

				//D2 01 00 00 FF 99 DF 01 00
				//03 FF FF FF FF FF 00

	sendFrameQueue(PACKET_RADIO, buffer, 6+DataLen, opt, 7);
}
//send a VLD datagramm of the command described by descriptor OffsetDes detailed in EEP profile.to device Id sID
// the argument are variable length
//it shall correspond to each offset Data detailed in EnOcean_Equipment_Profiles_EEP_v2.x.x_public.
//the list  parameter shall end with value END_ARG_DATA
//return is the size of the daya payload in byte 
// or 0 : if an error occured : not enough parameters passed
//example :
//sendVld(unitBaseAddr, D20500_CMD_2, channel, 2, END_ARG_DATA);
// send a stop command = 2 to channel 9 for EEP : D2-05-00 ; Blinds control
//sendVld(unitBaseAddr, D20500_CMD_1, 100, 127, 0, 0, 0 , 1, END_ARG_DATA);
// send a got position and angle command = 1 to 
// POS=100 % 
// ANG=127 : dont change 
// REPO=0 goto ditectly 
// LOCK=0  dont change  , 
// channel 0
// CMD = 1 goto command for EEP : D2-05-00 ; Blinds control
uint32_t CEnOcean::sendVld(unsigned int unitBaseAddr, T_DATAFIELD * OffsetDes,  ...)
{
	uint8_t  data[MAX_DATA_PAYLOAD+2];
	va_list value;

	/* Initialize the va_list structure */
	va_start(value, OffsetDes);

	memset(data, 0, sizeof(data));

	uint32_t DataSize = SetRawValues(data, OffsetDes,  value);
	if (DataSize)
		sendVld(unitBaseAddr, data, DataSize);
	else
		_log.Log(LOG_ERROR, "EnOcean: Error argument number in sendVld : cmd :%s :%s ", OffsetDes->ShortCut, OffsetDes->description);


	va_end(value);

	return  DataSize;

}
T_DATAFIELD remote_sysex[] = {
{  0 , 2 , "SEQ"       ,   0 ,   0 ,   0 ,   0 , "SEQ"},
{  2 , 6 , "IDX"       ,   0 ,   0 ,   0 ,   0 , "IDX"},
{  8 , 9 , "LEN"       ,   0 ,   0 ,   0 ,   0 , ""},
{  17, 11, "MAN"       ,   0 ,   0 ,   0 ,   0 , ""},
{  28, 12, "FN"        ,   0 ,   0 ,   0 ,   0 , ""},

															   //Value: 0x01 = Configuration data valid 
{  0 , 0 , 0          , 0           }
};
//return true if adress is in range 
bool CEnOcean::CheckIsGatewayAdress(unsigned int deviceid)
{
	if ((deviceid > m_id_base) && (deviceid < m_id_base + MAX_BASE_ADDRESS))
		return true;
	else
		return false;

}

//update sensor database with switch created manually 
void  CEnOcean::UpdateSensorDbWithManualSwitch() {
	std::vector<std::vector<std::string> > result;

	//get list of device enocean created in DeviceStatus
	result = m_sql.safe_query("SELECT DeviceId ,Unit FROM DeviceStatus  WHERE (HardwareId=%d)  ", m_HwdID);
	//get all BaseId allready affected to switch device
	for (unsigned int i = 0; i < result.size(); i++)
	{
		uint deviceId = DeviceIdCharToInt(result[i][0]);
		uint unitId   = atoi(result[i][1].c_str());
		//if it is a gateWay range adress
		if (CheckIsGatewayAdress(deviceId))
		{
			AddSensors(deviceId, 0xF6, 0x7ff, 02, 01, unitId);
		}
	}
	return ;
}


//static function librairy

std::string CEnOcean::DeviceIDToString(unsigned int DeviceID)
{
	char szDeviceID[20];
	sprintf(szDeviceID, "%08X", (unsigned int)DeviceID);
	return szDeviceID;
}
//add leading 0 
void ToSensorsId(std::string &DeviceId)
{
	while (DeviceId.size() < 8)
		DeviceId = '0' + DeviceId;
}
//convert device ID id from  buffer[] to unsigned int
unsigned int DeviceArrayToInt(unsigned char m_buffer[])
{
	unsigned int id = (m_buffer[0] << 24) + (m_buffer[1] << 16) + (m_buffer[2] << 8) + m_buffer[3];
	return id;
}
//convert device ID id from   unsigned int to buffer[]  
void  DeviceIntToArray(unsigned int sID, unsigned char buf[])
{

	buf[0] = (sID >> 24) & 0xff;
	buf[1] = (sID >> 16) & 0xff;
	buf[2] = (sID >> 8) & 0xff;
	buf[3] = sID & 0xff;
}
//convert divice ID string to long

unsigned int DeviceIdCharToInt(std::string &DeviceID) {
	unsigned int ID;
	sscanf(DeviceID.c_str(), "%x", &ID);
	return ID;
}

std::string GetLighting2StringId(unsigned int id )
{
	char szTmp[300];

	sprintf(szTmp, "%07X", id );
	return szTmp;
}
std::string  GetDeviceNameFromId( unsigned int ID )
{
	char szDeviceID[20];
	sprintf(szDeviceID, "%07X", (unsigned int)ID );

	std::vector<std::vector<std::string> > result;
	result = m_sql.safe_query("SELECT Name  FROM DeviceStatus WHERE ( instr(DeviceID, '%q' ) <> 0) ", szDeviceID );
	if (result.size() != 0)
	{
		return result[0][0];
	}
	return "" ;
}
void  ProfileToRorgFuncType(int EEP, int &Rorg, int &Func, int &Type)
{
	Type = EEP & 0xff;
	EEP >>= 8;
	Func = EEP & 0xff;
	EEP >>= 8;
	Rorg = EEP & 0xff;
}
int RorgFuncTypeToProfile( int Rorg, int Func, int Type)
{
	return (Rorg * 256 * 256 + Func * 256 + Type);
}
int   getRorg(int EEP)
{
	return ( EEP >> 16 ) & 0xFF ;
}
int   getFunc(int EEP)
{
	return (EEP >> 8) & 0xFF;
}
int   getType(int EEP)
{
	return (EEP ) & 0xFF;
}
std::string string_format(const char * fmt, ...) {
	va_list ap;
	char buf[1024];
	va_start(ap, fmt);
	int n = vsnprintf((char *)buf, sizeof(buf), fmt, ap);

	return buf;
}
//---------------------------------------------------------------------------
// TypFnAToB    : Convertit une chaîne hexadécimale ascii en un tableau binaire
// Input  Arg.  : Chaîne hexadécimale ascii
//                Adresse du tableau
//                Adresse de rangement de la longueur du tableau
// Output       : true  -> Conversion réussie
//                false -> Echec
// Remark       : Le tableau de destination doit être suffisement dimensionné
//                La conversion s'arrête sur tout caractère non hexa
//---------------------------------------------------------------------------
int HexToBin(char c)
{
	int h = (unsigned char)(c - '0');
	if (h > 9)
		h = (unsigned char)(h - 7);
	if (h > 15)
		h = (unsigned char)(h - 32);
	if (h > 15)
		return 0;
	return h;

}
bool TypFnAToB(const char * st, unsigned char bin[], int  *trame_len)
{
	std::string x;
	int  h, l;
	int i = 0;
	int index = 0;
	/* -------------- */
	*trame_len = 0;

	while (st[index] != 0)
	{

		if (st[index] == 'b') {
			index++;
			h = 0;
			while ((st[index] == '0') || (st[index] == '1'))
			{
				h = h << 1;
				if ((st[index] == '1'))
					h = h + 1;
				index++;
			}

			bin[i++] = (unsigned char)(h);
		}

		else
		{
			h = HexToBin(st[index]);

			index++;
			if (st[index] != ' ')
			{

				l = HexToBin(st[index]);
				bin[i++] = (unsigned char)((h << 4) + l);
			}
			else
				bin[i++] = (unsigned char)(h);
			index++;
		}

		if (st[index] == ' ')
			index++;
	}
	*trame_len = i;
	return true;
};
std::string IntToString(int val, int nbDigit)
{
	char fmt[16];
	char intStr[32];
	sprintf(fmt, "%%0%dX", nbDigit);
	sprintf(intStr, fmt, val);
	return intStr;
}
void setDestination(unsigned char * opt, unsigned int destID)
{
	//optionnal data
	opt[0] = 0x03; //subtel
	DeviceIntToArray(destID, &opt[1]);
	opt[5] = 0xff;
	opt[6] = 00;//RSI 

}
