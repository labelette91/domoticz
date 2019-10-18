#pragma once

//#indef  PROFILMAP
//#define PROFILMAP

#include <stdio.h>  
#include <string>
#include <vector>
#include <map>

//Profile descriptor from eep.xml


typedef struct {
  T_DATAFIELD* Dataf  ;
	std::string Title;
	std::string Desc ;
}T_EEP_CASE_ ; 

typedef struct {
  int Profil ; 
  int Rorg;
  int Func;
  int type;
  T_EEP_CASE_* *cases  ;
  int nbCases;
  std::string FuncTitle ;
  std::string TypeTitle ;



  std::string toString() 
  {
    char buf[1024] ;
    _snprintf ( buf,sizeof(buf),"%06x;%2x;%2x;%2x;%-10s;%s", 
   Profil , 
   Rorg,
   Func,
   type,
	 FuncTitle.c_str(),
	 TypeTitle.c_str() );
   return buf;

  }
}T_PROFIL_LIST  ;

extern T_PROFIL_LIST Profillist [] ;

//descriptor for a eep case
//a profil a as several case 
// a case as several datafield
typedef std::vector<T_DATAFIELD> _T_EEP_CASE;


void parseEEP_xml(const char * prorg, const char * pfctnum, FILE * out , FILE * outH);

class T_EEP_CASE : public _T_EEP_CASE
{
public:
	std::string Title;
	std::string Desc ;

  void print() 
  {
    for (unsigned int i=0;i<size();i++)
      printf("%s\n",this->at(i).toString().c_str() );
  }
  T_DATAFIELD * FindShortCut(const char * shorcut )
  {
    for (unsigned int i=0;i<size();i++)
      if (  this->at(i).ShortCut ==  shorcut )
        return &this->at(i);
    return 0;
  }
  void AddTitle(std::string &pTitle, std::string &pDesc )
  {
	   Title = pTitle ;
	   Desc  = pDesc ;

  }
};

//list of cases for a profil
typedef std::vector<T_EEP_CASE> T_EEP_CASES;


//Profile descriptor from eep.xml
class T_PROFIL_EEP 
{
public:

  int Profil ; 
  int Rorg;
  int Func;
  int type;
  std::string FuncTitle ;
  std::string TypeTitle ;

  T_EEP_CASES cases ;

  void AddDataField (unsigned  int CaseNb  , T_DATAFIELD & dataf  )
  {
    if ( !(CaseNb<cases.size()) )
    {
      T_EEP_CASE newCase ;
      cases.push_back(newCase);
    }
    //add data field
    cases[CaseNb].push_back(dataf);
  };

  void AddProfil (int pProfil ,   std::string pFuncTitle ,  std::string pTypeTitle  )
  {
    Profil = pProfil;
    FuncTitle = pFuncTitle ;
    TypeTitle = pTypeTitle ;
  };
  void printCase( int CaseNb )
  {
    printf ("Case : %d\n",CaseNb );
    for (unsigned int i=0;i<cases[CaseNb].size();i++ )
      printf ("Case:%d = %s\n",CaseNb,cases[CaseNb][i].toString().c_str() );
  }
  void printCases()
  {
    printf("Profil:%06X %s %s \n",Profil,FuncTitle.c_str(),TypeTitle.c_str() );
    for (unsigned  int i=0;i<cases.size();i++ )
       printCase(i);
  }

};


typedef std::map<unsigned int, T_PROFIL_EEP > T_PROFIL_EEP_MAP;

class T_PROFIL_MAP 
{
	  T_PROFIL_EEP_MAP lProfils  ;
    T_EEP_CASE emptyCase ;

public:

	bool IsNotLoaded()
	{
		return lProfils.empty();
	}
	void LoadXml ()
	{
		if (IsNotLoaded())
		{
			parseEEP_xml("0x", "0x", stdout , stdout );

		}
	}

  void AddProfil (int pProfil ,   std::string pFuncTitle ,  std::string pTypeTitle  )
  {
    lProfils[pProfil].AddProfil( pProfil ,   pFuncTitle ,  pTypeTitle);
  };

  void AddCaseTitle(int pProfil, int CaseNb, std::string &pTitle, std::string &pDesc) 
  {
	  lProfils[pProfil].cases[CaseNb].AddTitle(pTitle, pDesc );
  }

   void AddDataField ( int pProfil , int CaseNb  , T_DATAFIELD & dataf  )
   {
      lProfils[pProfil].AddDataField ( CaseNb ,  dataf  ) ;
   }
   void AddCase ( int pProfil ,  T_EEP_CASE &newCase   )
   {
      lProfils[pProfil].cases.push_back(newCase);
   }
   void print()
   {
    for (T_PROFIL_EEP_MAP::iterator itt = lProfils.begin(); itt != lProfils.end(); itt++)
		{
      itt->second.printCases();
		}

   }

   T_EEP_CASE * getCase ( int pProfil , unsigned  int CaseNb )
   {
     if ( CaseNb < lProfils[pProfil].cases.size() )
     {
       return &lProfils[pProfil].cases[CaseNb] ;
     }
     else
       return &emptyCase;

   }

   T_PROFIL_EEP * getProfil (int profil)
   {
     return &lProfils[profil] ;
   }


};

extern T_PROFIL_MAP Profils;

T_PROFIL_LIST * getProfil (int profil );
T_EEP_CASE_ * getProfilCase (int profil , int caseNb);


//#endif
