#ifndef SENSORS_H
#define	SENSORS_H

#include "../main/Logger.h"
#include <map>


//********************************************************************************************
#define SIZE_LINK_TABLE 24 

typedef struct {
	int		Profile;
	uint	SenderId;
	int		Channel;
}T_LINK_TABLE;

typedef struct _T_SENSOR {
	unsigned int	DeviceId ;
	unsigned int	DbId;
	unsigned int	Address ;

	unsigned int	Profile;
	int				Manufacturer;
	uint			Reference;
	int				CurrentSize;
	int				NbValidId ;
	int				MaxSize;
	T_LINK_TABLE	LinkTable[SIZE_LINK_TABLE];

	_T_SENSOR()
	{
		CurrentSize = 0;
		MaxSize = 0;
		initEntry(0);
	}

	#define EMPTY_PROFILE 0xFFFFFF 
	#define EMPTY_ID      0

	void initEntry(int deb)
	{
		NbValidId = 0;
		for (int i = deb; i < SIZE_LINK_TABLE; i++)
		{
			LinkTable[i].Profile  = EMPTY_PROFILE ;
			LinkTable[i].SenderId = EMPTY_ID;
			LinkTable[i].Channel = 0;

		}
	}

	int  getSensorRorg()
	{
			return  getRorg(Profile);
	}
	int  getSensorFunc()
	{
		return  getFunc(Profile);
	}
	int  getSensorType()
	{
		return  getType(Profile);

	}

	bool asLinkTable()
	{
		return (getSensorRorg() == RORG_VLD);
	}

	int  getTableLinkMaxSize()
	{
		return  MaxSize;
	}


}T_SENSOR;

typedef 	std::map<unsigned int, T_SENSOR > T_SENSOR_MAP;


class T_SENSORS {
public:
	T_SENSOR_MAP m_sensors;

	void addSensorManuf(uint SensorId, uint Manuf, uint ref)
	{
		m_sensors[SensorId].Manufacturer = Manuf;
		m_sensors[SensorId].Reference    = ref;
	
	}

	void addSensorProfile(uint SensorId, uint Profile)
	{
		m_sensors[SensorId].Profile = Profile;
	}
	void setSensorAddress(uint SensorId, uint Address)
	{
		m_sensors[SensorId].Address = Address;
	}

	void setLinkTableMedadata(uint SensorId, int csize, int MaxSize)
	{
		m_sensors[SensorId].CurrentSize = csize;
		m_sensors[SensorId].MaxSize = MaxSize;
		m_sensors[SensorId].initEntry(csize);
	}
	void addLinkTableEntry(uint DeviceId, int entry, int profile, uint sensorId, int channel)
	{
		if (entry < SIZE_LINK_TABLE) {
			m_sensors[DeviceId].LinkTable[entry].Profile = profile;
			m_sensors[DeviceId].LinkTable[entry].SenderId = sensorId;
			m_sensors[DeviceId].LinkTable[entry].Channel = channel;
			if ((profile != EMPTY_PROFILE) && (sensorId != EMPTY_ID))
				m_sensors[DeviceId].NbValidId++;
		}

	}

	void printTableLink()
	{
		for (T_SENSOR_MAP::iterator itt = m_sensors.begin(); itt != m_sensors.end(); itt++)
		{

			_log.Log(LOG_NORM, "EnOcean: Print Link Table DeviceId:%08X  Profile:%0X Manufacturer:%d CurrentSize:%d MaxSize:%d", itt->first, itt->second.Profile, itt->second.Manufacturer, itt->second.CurrentSize, itt->second.MaxSize);
			for (int i = 0; i < itt->second.CurrentSize; i++)
				_log.Debug(DEBUG_NORM, "                      Entry:%d Id:%08X Profile:%X Channel:%d", i, itt->second.LinkTable[i].SenderId, itt->second.LinkTable[i].Profile, itt->second.LinkTable[i].Channel);

		}

	}
	int  getTableLinkMaxSize(unsigned int DeviceId)
	{
		T_SENSOR* ms = Find(DeviceId);
		if (ms)
			return  ms->getTableLinkMaxSize();
		else
			return  0;
	}
	int  getTableLinkCurrentSize(unsigned int DeviceId)
	{
		T_SENSOR* ms = Find(DeviceId);
		if (ms)
			return  ms->CurrentSize;
		else
			return  0;

	}
	int  getTableLinkValidSensorIdSize(unsigned int DeviceId)
	{
		return  m_sensors[DeviceId].NbValidId;
	}

	T_SENSOR*  Find(unsigned int  DeviceId )
	{
		auto itt = m_sensors.find(DeviceId);

		if (itt != m_sensors.end())
				return &itt->second;
		return 0;
	}
	int  getEEP(unsigned int DeviceId)
	{
		T_SENSOR* ms = Find(DeviceId);
		if (ms)
			return  ms->Profile;
		else
			return  0;

	}

	int  getSensorRorg(unsigned int DeviceId)
	{
		T_SENSOR* ms = Find(DeviceId);
		if (ms)
			return   ms->getSensorRorg() ;
		else
			return  0;

	}
	int  getSensorFunc(unsigned int DeviceId)
	{
		T_SENSOR* ms = Find(DeviceId);
		if (ms)
			return  ms->getSensorFunc();
		else
			return  0;

	}
	int  getSensorType(unsigned int DeviceId)
	{
		T_SENSOR* ms = Find(DeviceId);
		if (ms)
			return  (ms->getSensorType());
		else
			return  0;

	}

	int FindEmptyEntry(unsigned int  DeviceId)
	{
		T_SENSOR* sensor = Find(DeviceId);
		if (sensor!=0)
		for (int i = 0; i < SIZE_LINK_TABLE; i++)
		{
			if (sensor->LinkTable[i].Profile == EMPTY_PROFILE)
				return i;
		}
		return -1;
	}
	//return true if sensor as a link table 
	bool asLinkTable(unsigned int  DeviceId)
	{
		T_SENSOR* ms = Find(DeviceId);
		if (ms)
			return ms->asLinkTable();
		else
			return  false;

	}


};

#endif

