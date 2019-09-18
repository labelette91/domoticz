#ifndef CEnOceanRMCC_H
#define	CEnOceanRMCC_H

#include "EnOcean.h"
#include "../json/json.h"

#include <string>

#define ResetConfigurationParameters   (1<<7)
#define ResetSetIinboundLinkTable      (1<<6)
#define ResetOutboundLinkTable         (1<<5)
#define ResetToDefaults                (0xE )


class CEnOceanRMCC : public CEnOcean
{

public:
	int m_Seq;
	//remote management
	//remote management function reception 
	int remote_man_answer;

	//Remote Mannagement Control Command reception Mutex
	std::mutex m_RMCC_Mutex;
	//Remote Mannagement Control Command reception Queue
	std::vector<int> m_RMCC_queue;




	CEnOceanRMCC();

	void setRorg(unsigned char * buff);

	void parse_PACKET_REMOTE_MAN_COMMAND(unsigned char m_buffer[], int m_DataSize, int m_OptionalDataSize);

	void remoteLearning(unsigned int destID, bool StartLearning, int channel);

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

	void resetToDefaults(uint destID, int resetAction);

	void TeachIn(std::string & sidx);

	void TeachIn(std::string & deviceId, std::string & unit);

	void GetNodeList(Json::Value & root);

	void GetLinkTable(Json::Value & root, std::string &DeviceId);

	unsigned int GetLockCode();

	void SetLockCode(std::string scode);

	void setRemote_man_answer(int premote_man_answer);

	int getRemote_man_answer();

	bool waitRemote_man_answer(int premote_man_answer, int timeout);

};

const char *RMCC_Cmd_Desc(const int tType);

#endif