#ifndef CEnOceanRMCC_H
#define	CEnOceanRMCC_H

#include "EnOcean.h"
#include "../json/json.h"

#include <string>

#define ResetConfigurationParameters   (1<<7)
#define ResetSetIinboundLinkTable      (1<<6)
#define ResetOutboundLinkTable         (1<<5)
#define ResetToDefaults                (0xE0 )

typedef enum T_COM_STATUS {

	COM_OK = 0,
	COM_TIMEOUT,


}T_COM_STATUS;

typedef enum T_LEARN_MODE {

	LEARN_IN = 0,
	LEARN_OUT   ,
	LEARN_EXIT,

}T_LEARN_MODE ;


class CEnOceanRMCC : public CEnOcean
{

public:
	int m_Seq;
	//remote management
	//remote management function reception 
	int remote_man_answer;

	T_COM_STATUS m_com_status;

	//Remote Mannagement Control Command reception Mutex
	std::mutex m_RMCC_Mutex;
	//Remote Mannagement Control Command reception Queue
	std::vector<int> m_RMCC_queue;

	T_SENSORS Sensors;



	CEnOceanRMCC(int ID);

	void setRorg(unsigned char * buff);

	void setRorg(unsigned char * buff, int idx);

	void parse_PACKET_REMOTE_MAN_COMMAND(unsigned char m_buffer[], int m_DataSize, int m_OptionalDataSize);

	void remoteLearning(unsigned int destID, int channel, T_LEARN_MODE Device_LRN_Mode);

	void unlock(unsigned int destID, unsigned int code);

	void lock(unsigned int destID, unsigned int code);

	void setcode(unsigned int destID, unsigned int code);

	void queryid(unsigned int EEP, unsigned int mask);

	void ping(unsigned int destID);

	void action(unsigned int destID);

	void getProductId(unsigned int destination = 0xFFFFFFFF );

	void getLinkTableMedadata(uint destID);

	void queryFunction(uint destID);

	void queryStatus(uint destID);

	void getallLinkTable(uint SensorId, int begin, int end);

	void getLinkTable(uint DeviceId);

	void setLinkEntryTable(uint SensorId, int begin, uint ID, int EEP, int channel);

	void resetToDefaults(uint destID, int resetAction);

	void GetRepeaterQuery(unsigned int destination);

	void SetRepeaterQuery(unsigned int destination, int Repeaterfunction, int Repeaterlevel, int RepeaterFilter);

	void TeachIn(std::string & sidx ,  T_LEARN_MODE Device_LRN_Mode);

	void TeachIn(std::string & deviceId, std::string & unit, T_LEARN_MODE Device_LRN_Mode);

	void GetNodeList(Json::Value & root);

	void GetLinkTableList(Json::Value & root, std::string &DeviceId);

	unsigned int GetLockCode();

	void SetLockCode(std::string scode);

	void setRemote_man_answer(int premote_man_answer);

	int getRemote_man_answer();

	void clearRemote_man_answer();

	bool waitRemote_man_answer(int premote_man_answer, int timeout);

	void setCommStatus(T_COM_STATUS status);

	T_COM_STATUS getCommStatus();

	bool isCommStatusOk();

	void LoadSensorsNodesFromDb();
	
};

const char *RMCC_Cmd_Desc(const int tType);

#endif