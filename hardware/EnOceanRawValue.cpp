#include "stdafx.h"
#include "EnOceanRawValue.h"
#include <string>


const uint8_t maskArray[8] = { 0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x01 };

uint16_t BitIdxToByte(const uint16_t &bitIdx)
{
	if ((bitIdx % 8) == 0)
		return bitIdx / 8;
	return (bitIdx + (8 - (bitIdx % 8))) / 8;
}

//return the value at bit offset offset length : size
//as described in eep profile 
uint32_t GetRawValue(uint8_t * data ,  uint16_t offset, uint8_t size)
{
  uint32_t value = 0 ;
	if (size > 32)
		return value ;

	uint16_t idx = (uint16_t)(offset / 8);
	uint16_t idxe = BitIdxToByte(offset + size);
	uint16_t len = idxe - idx;
	uint64_t tmpLongValue=0;

	uint8_t bits = (offset % 8);
	uint8_t bite = 0;
	if (((offset + size) % 8) != 0)
		bite = (8 - ((offset + size) % 8));

	uint8_t mask = maskArray[bits];

	switch (len)
	{
		case 1:
			value = (data[idx] & mask);
			break;
		case 2:
			value = (data[idx] & mask) << 8 | data[idx + 1];
			break;
		case 3:
			value = (data[idx] & mask) << 16 | data[idx + 1] << 8 | data[idx + 2];
			break;
		case 4:
			value = (data[idx] & mask) << 24 | data[idx + 1] << 16 | data[idx + 2] << 8 | data[idx + 3];
			break;
		case 5:
			tmpLongValue = (uint64_t)(data[idx] & mask) << 32 | (uint64_t)(data[idx + 1]) << 24 | (uint64_t)(data[idx + 2]) << 16 | (uint64_t)(data[idx + 3]) << 8 | (uint64_t)(data[idx + 4]);
			break;
	}

	if (len == 5)
	{
		value = (uint32_t)(tmpLongValue >> bite);
	}
	else
	{
		value >>= bite;
	}

	return value;
}


//copy the value at bit offset offset length : size
//as described in eep profile 
//return true if ok
bool SetRawValue(uint8_t * data , uint32_t value, uint16_t offset, uint8_t size)
{
	if (size == 0)
		return false;
	if (size >= 32 )
		return false;

	if (((offset + size) / 8) > 16 )
		return false;

	uint8_t idx = (uint8_t)(offset / 8);
	uint16_t idxe = BitIdxToByte((offset + size));
	uint8_t len = idxe - idx;

	uint8_t bits = (offset % 8);
	uint8_t bite = 0;
	if (((offset + size) % 8) != 0)
		bite = (8 - ((offset + size) % 8));

	uint8_t mask = maskArray[bits];

	uint64_t tmpLongValue=0;
    //left shift the not used btis are zero
    if (len == 5)
    {
    	tmpLongValue = value;
    	tmpLongValue <<= bite;
    }
	value <<= bite;	//left shift the not used btis are zero
	switch (len)
	{
		case 1:
		{
			//first set to zero
			data[idx] &= ~(mask & (0xFF << bite));
			data[idx] |= (value & mask);
			break;
		}
		case 2:
		{
			data[idx] &= ~mask;
			data[idx] |= (value >> 8) & mask;
			data[idx + 1] &= ~(0xFF << bite);
			data[idx + 1] |= value;
			break;
		}
		case 3:
		{
			data[idx] &= ~mask;
			data[idx] |= (value >> 16) & mask;
			data[idx + 1] = 0;
			data[idx + 1] |= value >> 8;
			data[idx + 2] &= ~(0xFF << bite);
			data[idx + 2] |= value;
			break;
		}
		case 4:
		{
			data[idx] &= ~mask;
			data[idx] |= (value >> 24) & mask;
			data[idx + 1] = 0;
			data[idx + 1] |= value >> 16;
			data[idx + 2] = 0;
			data[idx + 2] |= value >> 8;
			data[idx + 3] &= ~(0xFF << bite);
			data[idx + 3] |= value;
			break;
		}
        case 5:
            {
                data[idx] &= (~mask);
                data[idx] |=((tmpLongValue >> 32) & mask);
                data[idx + 1] = 0;
                data[idx + 1] |= (tmpLongValue >> 24);
                data[idx + 2] = 0;
                data[idx + 2] |= (tmpLongValue >> 16);
                data[idx + 3] = 0;
                data[idx + 3] |= (tmpLongValue >> 8);
                data[idx + 4] &= (~(0xFF << bite));
                data[idx + 4] |= tmpLongValue;
                break;
            }
	}
	return true;
}

T_DATAFIELD* GetOffsetFromName( char * OffsetName , T_DATAFIELD * OffsetDes )
{
  uint32_t offsetInd = 0 ;
  while (OffsetDes[offsetInd].Size != 0 )
  {
    if (strstr(OffsetDes[offsetInd].ShortCut.c_str(),OffsetName ) != 0 )
      return &OffsetDes[offsetInd] ;
    offsetInd++;
  }
  return &OffsetDes[offsetInd] ;

}

bool SetRawValue(uint8_t * data , uint32_t value, T_DATAFIELD* offset )
{
  return SetRawValue( data , value, offset->Offset,offset->Size ) ;

}

uint32_t GetRawValue(uint8_t * data ,   T_DATAFIELD* offset )
{
  return GetRawValue( data ,  offset->Offset,offset->Size ) ;
}

uint32_t GetRawValue(uint8_t * data ,  T_DATAFIELD* offset , uint32_t offsetIndex )
{
  return GetRawValue( data ,  offset[offsetIndex].Offset,offset[offsetIndex].Size ) ;
}


bool SetRawValue(uint8_t * data , uint32_t value, char *  OffsetName , T_DATAFIELD * OffsetDes )
{
  T_DATAFIELD* offset =  GetOffsetFromName(  OffsetName ,  OffsetDes ) ;
  return SetRawValue( data , value, offset->Offset, offset->Size ) ;

}

uint32_t GetRawValue(uint8_t * data ,  char *  OffsetName , T_DATAFIELD * OffsetDes )
{
  T_DATAFIELD* offset =  GetOffsetFromName(  OffsetName ,  OffsetDes ) ;
  return GetRawValue( data ,  offset->Offset, offset->Size ) ;
}


#include <stdarg.h>
//return the number of byte of data payload
//0 if rror
uint32_t SetRawValuesNb(uint8_t * data , T_DATAFIELD * OffsetDes ,int NbParameter , va_list value )
{

   for ( int i=0;i<NbParameter;i++)
   {
      if  ( OffsetDes->Size == 0 )
        return 0 ; //erreur

      uint32_t par = va_arg(value,int);       /*   va_arg() donne le paramètre courant    */
      SetRawValue( data, par  , OffsetDes ) ;
      OffsetDes++;
   }

   //test if all variable are sets
   if (OffsetDes->Size != 0)
	   return 0; //erreur
   //last bit offser
   OffsetDes--;
   uint32_t total_bits  = OffsetDes->Offset + OffsetDes->Size;
   uint32_t total_bytes = (total_bits + 7) / 8;

   return total_bytes ;
}


uint32_t SetRawValuesNb(uint8_t * data, T_DATAFIELD * OffsetDes, int NbParameter, ...)
{
	va_list value;

	/* Initialize the va_list structure */
	va_start(value, NbParameter);
	uint32_t total_bytes = SetRawValuesNb(data, OffsetDes, NbParameter, value);
	va_end(value);

	return total_bytes;
}


uint32_t GetNbDataFields(T_DATAFIELD* OffsetDes)
{

	int i = 0;
	while (OffsetDes++->Size != 0)
		i++;

	return i;
}

uint32_t CopyValues(int * data, int SizeData, va_list value)
{
	int i = 0;
	int par = va_arg(value, int);       /*   va_arg() donne le paramètre courant    */
	while ( (par != END_ARG_DATA) && (i<SizeData))
	{
		data[i] = par;
		par = va_arg(value, int);       /*   va_arg() donne le paramètre courant    */
		i++;
	}

	if (par != END_ARG_DATA)
		return 0;


	return i ;
}

//return the number of byte of data payload
//0 if error

uint32_t setRawDataValues(uint8_t* data, T_DATAFIELD* OffsetDes, int value[], int NbData)
{

	int i = 0;
	while (OffsetDes->Size != 0)
	{

		if (i >= NbData)
			return 0;
		int par = value[i++];
		//not enough argument
		SetRawValue(data, par, OffsetDes);
		OffsetDes++;
	}
	if (i != NbData)
		return 0;

	//last bit offset
	OffsetDes--;
	uint32_t total_bits = OffsetDes->Offset + OffsetDes->Size;
	uint32_t total_bytes = (total_bits + 7) / 8;

	return total_bytes;
}

uint32_t getRawDataValues(uint8_t* data, T_DATAFIELD* OffsetDes, int value[], int NbData)
{

	int i = 0;
	while (OffsetDes->Size != 0)
	{

		if (i >= NbData)
			return i;
        value[i++] = GetRawValue( data ,   OffsetDes  );

		OffsetDes++;
	}
    return i ;
}

std::string printRawDataValues(uint8_t* data, T_DATAFIELD* OffsetDes )
{

    std::string message ="";
    char line[256];
	int i = 0;
	while (OffsetDes->Size != 0)
	{

        uint32_t value  = GetRawValue( data ,   OffsetDes  );
        snprintf(line,sizeof(line)-1, "offset:%2d = %5d (%02X) : %s : %s \n",OffsetDes->Offset, value,value,OffsetDes->ShortCut.c_str(),OffsetDes->description.c_str() );
        message += line ;
		OffsetDes++;
	}
    return message ;
}


uint32_t SetRawValues(uint8_t * data, T_DATAFIELD * OffsetDes,  va_list value)
{

	int Value[256];
	//get value in arg line ...
	int nbValue = CopyValues(Value, sizeof(Value), value);

	return setRawDataValues( data,  OffsetDes, Value , nbValue ) ;
}


uint32_t SetRawValues(uint8_t * data, T_DATAFIELD * OffsetDes,  ...)
{
	va_list value;

	/* Initialize the va_list structure */
	va_start(value, OffsetDes);
	return   SetRawValues(data, OffsetDes, value);
}


//map
uint32_t GetRawValue(uint8_t * data, _T_EEP_CASE* offset, uint32_t offsetIndex)
{
	if (offsetIndex < offset->size())
		return GetRawValue(data, offset->at(offsetIndex).Offset, offset->at(offsetIndex).Size);
	else
		return 0;
}


uint32_t SetRawValues(uint8_t * data, _T_EEP_CASE * EEP_case ,  ...)
{
	va_list value;
  uint32_t total_bits =0;

  T_DATAFIELD * OffsetDes;

  /* Initialize the va_list structure */
	va_start(value, EEP_case);

  for (int i=0;i<EEP_case->size();i++)
	{
    OffsetDes = & (EEP_case->at(i)) ;

		int par = va_arg(value, int);       /*   va_arg() donne le paramètre courant    */
		//not enough argument
		if (par == END_ARG_DATA)
			return 0;
		SetRawValue(data, par, OffsetDes);
	  total_bits = OffsetDes->Offset + OffsetDes->Size;
	}

	int par = va_arg(value, int);       
	if (par != END_ARG_DATA)
		return 0;

  //last bit offset
	int total_bytes = (total_bits + 7) / 8;

	va_end(value);

	return total_bytes;
}




//vld D2-03-0A : len=2 offset 0 battery level 1= action : //1 = simple press, 2=double press, 3=long press, 4=press release
T_DATAFIELD D2030A[] = {
{  0  , 8 , 0,0,0,0, "BAT", "battert level" },
{  8  , 8 , 0,0,0,0, "BUT", "button       " }, //
{ 0  , 0  , 0      , 0,0,0,"",""              }  //
};

//TEACHIN_4BS vld
T_DATAFIELD TEACHIN_4BS[] = {
{ 0  , 6   , 0,0,0,0, "FUNC","function" },
{ 6  , 7   , 0,0,0,0, "TYPE","type    " }, //
{ 13 , 11  , 0,0,0,0, "MANU","manufacturer   " }, //
{ 24 , 1   , 0,0,0,0, "LRNT","  learn type " }, //  0:WithOut EEP 1: with EEP
{ 28 , 1   , 0,0,0,0, "LRNB","  learn bite " }, //  0 TeachIn telegram 1 DataLelegram
{ 0  , 0  , 0      , 0,0,0,"",""}  //
};


T_DATAFIELD TEACHIN_UTE[] = {
{ 0  , 1   , 0,0,0,0, "EEPO"    ,"EEP operation" },
{ 1  , 1   , 0,0,0,0, "EEPTEACH","    " }, //
{ 2  , 2   , 0,0,0,0, "TEACHREQ","TeachIn request" }, //
{ 4  , 4   , 0,0,0,0, "CMDID"   ,"Command Identifier" }, //
{ 8  , 8   , 0,0,0,0, "NBCHAN"  ,"Nimber of channel to be taught in" }, //
{ 16  , 8  , 0,0,0,0, "MANIDLSB","MAn ID lsb" }, //
{ 29  , 3  , 0,0,0,0, "MANIFMSB","Man Id Msb" }, //
{ 32  , 8  , 0,0,0,0, "TYPE"    ,"" }, //
{ 40  , 8  , 0,0,0,0, "FUNC"    ,"" }, //
{ 48  , 8  , 0,0,0,0, "RORG"    ,"" }, //


{ 0  , 0  , 0      , 0,0,0,"",""}  //
};


extern T_PROFIL_LIST Profillist [];

T_PROFIL_LIST * getProfil (int profil )
{
  int i=0;
  while( Profillist[i].Profil != 0)
  {
    if (Profillist[i].Profil == profil)
        return &Profillist[i] ;
    i++;
  }
  return 0;
}

T_EEP_CASE_ * getProfilCase (int profil , int caseNb)
{
  T_PROFIL_LIST * prof = getProfil ( profil ) ;
  
  if (prof)
  {
      if(caseNb<prof->nbCases)
        return prof->cases[caseNb];
  }
  return 0;
}