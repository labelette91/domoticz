#ifndef _SetGetRawValue
#define _SetGetRawValue

#include <stdint.h>

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

//return the value at bit offset offset length : size
//as described in eep profile 
uint32_t GetRawValue(uint8_t * data, uint16_t offset, uint8_t size);

//copy the value at bit offset offset length : size
//as described in eep profile 
//return true if ok
bool SetRawValue(uint8_t * data, uint32_t value, uint16_t offset, uint8_t size);

T_DATAFIELD* GetOffsetFromName(char * OffsetName, T_DATAFIELD * OffsetDes);

bool SetRawValue(uint8_t * data, uint32_t value, T_DATAFIELD* offset);

uint32_t GetRawValue(uint8_t * data, T_DATAFIELD* offset);

uint32_t GetRawValue(uint8_t * data, T_DATAFIELD* offset, uint32_t offsetIndex);

bool SetRawValue(uint8_t * data, uint32_t value, char *  OffsetName, T_DATAFIELD * OffsetDes);

uint32_t GetRawValue(uint8_t * data, char *  OffsetName, T_DATAFIELD * OffsetDes);

uint32_t SetRawValuesNb(uint8_t * data, T_DATAFIELD * OffsetDes, int NbParameter, va_list value);

uint32_t SetRawValuesNb(uint8_t * data, T_DATAFIELD * OffsetDes, int NbParameter, ...);

uint32_t SetRawValues(uint8_t * data, T_DATAFIELD * OffsetDes, va_list value);

uint32_t SetRawValues(uint8_t * data, T_DATAFIELD * OffsetDes, ...);

//vld D2-03-0A : len=2 offset 0 battery level 1= action : //1 = simple press, 2=double press, 3=long press, 4=press release

extern T_DATAFIELD D2030A[];

#define D2030A_BAT 0
#define D2030A_BUT 1
#define D2030A_NB_DATA    1
#define D2030A_DATA_SIZE  2

extern T_DATAFIELD TEACHIN_4BS[] ;

#define WITHOUT_EEP 0
#define WITH_EEP 1
#define TEACHIN  0
#define DATA_TELEG  1

#endif

