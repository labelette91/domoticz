#include "stdafx.h"
#pragma once
#include "EnOceanRawValue.h"
#include "EnOceanXmlReader.h"

//Profile descriptor from eep.xml
#include <stdarg.h>  
#include <tinyxml.h>
#include "xpath_static.h"

std::string string_format(const char* fmt, ...);
/*

{
	va_list ap;
	char buf[1024];
	va_start(ap, fmt);
	int n = vsnprintf((char *)buf, sizeof(buf), fmt, ap);

	return buf;
}
*/

T_PROFIL_MAP Profils;


std::string  getEnum(TiXmlElement *l_p , int nbc)
{

  std::string enumerate ;
char tab[256];
memset(tab,' ',sizeof(tab));
if (nbc>=sizeof(tab) )
  nbc=sizeof(tab)-1;
tab[nbc]=0;

tab[0]=0;

TiXmlElement *l_enum  = l_p->FirstChildElement( "enum" );
if (l_enum==0) 
{
  return "\n" ;
}

TiXmlElement *l_item  = l_enum->FirstChildElement( "item" );

while(l_item)
{
  TiXmlElement *lv =  l_item->FirstChildElement( "value" );

  if (lv==0)
  {
    enumerate+="\n";
    return enumerate ;
  }

  if ( l_item->FirstChildElement( "description" ) )
  {
    enumerate += string_format ( "%s//Value: %s = %s \n",tab, lv->GetText()    , l_item->FirstChildElement( "description" )->GetText()   );
  tab[0]=' ';
  }
  l_item =  l_item->NextSiblingElement("item");
}

return enumerate ;
}

std::string  getText(TiXmlElement *l_item , char * name , char * default = "" )
{
  TiXmlElement *l_child = l_item->FirstChildElement(name )  ;
  if (l_child) {
    const char * text =  l_child->GetText();
    if (text != 0 )
      return text ;
    else
    return default ;

  }
  else
    return default ;

}

void replaceBlanc (std::string & title , char car , char repCar )
{
    for (unsigned int i=0;i<title.size();i++ ){
    if (title[i]==car) 
      title[i]=repCar;
    }

}

std::string getTab(unsigned  int tabLen ,  std::string & word)
{
  std::string tab;
  if (tabLen >  word.size() ) 
    tab.insert (0, tabLen - word.size()  ,' ' );
  return tab ;

}

int getChildNumber(TiXmlElement *l_proot , const char * childName )
{

  int nbChild = 0 ;
   TiXmlElement *l_p  = l_proot->FirstChildElement( childName ); 
   while( l_p )
   {
      nbChild++;
      l_p = l_p->NextSiblingElement( childName );
   }
   printf ("nb chield %s : %d \n", childName, nbChild );

   return nbChild ;
}

/*
              <datafield>
                <data>Supply voltage</data>
                <shortcut>SVC</shortcut>
                <description>Supply voltage (linear)</description>
                <info/>
                <bitoffs>0</bitoffs>
                <bitsize>8</bitsize>
                <range>
                  <min>0</min>
                  <max>255</max>
                </range>
                <scale>
                  <min>0</min>
                  <max>5.1</max>
                </scale>
              < unit>V</unit>
              </datafield>
*/

int axtoi( const char * svalue  )
{
  int value ;
  sscanf( svalue ,"%x",&value ) ;
  return value;

}

int axtoi( std::string  & svalue  )
{
  return axtoi(svalue.c_str());

}


std::string getDataFieldName (int Profil, int caseNb  )
{
                    return string_format("%06X_CMD%d",Profil,caseNb );
}
void parseEEP_xml(const char * prorg,const char * pfctnum , FILE * out , FILE * outH )
{

int Rorg ;
int FuncNumber ;
int TypeNumber ;


std::string rorg ;
std::string funcNumber ;
std::string typeNumber ;
std::string  functtl ;
std::string  typettl ;
TiXmlDocument doc( "eep.xml" );
if(!doc.LoadFile()){
      printf( "erreur lors du chargement");
      printf( "error #%d %s" , doc.ErrorId() , doc.ErrorDesc() ) ;
      return ;
    }


std::vector<std::string> ProfilList  ;

TiXmlElement *l_pRootElement = doc.RootElement();
 
if( NULL != l_pRootElement )
{
    {
        TiXmlElement *l_pprofile = l_pRootElement->FirstChildElement( "profile" );
 
        TiXmlElement *l_rorg = l_pprofile->FirstChildElement( "rorg" );

        while( l_rorg )
        {
          rorg = getText (l_rorg,"number") ;

          Rorg = axtoi(rorg);

          if (strstr(rorg.c_str(),prorg)!=0)
//          if (strcmp(rorg,"0xD2")==0)
          {
            

          TiXmlElement *l_pfunc = l_rorg->FirstChildElement( "func" );
          while( l_pfunc )
          {
             
              funcNumber = getText (l_pfunc,"number") ;
              FuncNumber = axtoi(funcNumber);

              functtl = getText (l_pfunc,"title"); 

              fprintf (out,"// function number :%s : %s \n",funcNumber.c_str(),functtl.c_str());

              if (strstr(funcNumber.c_str(),pfctnum)==0)
              {
                l_pfunc = l_pfunc->NextSiblingElement( "func" );
                continue;
              }

              TiXmlElement *l_ptype = l_pfunc->FirstChildElement( "type" );
              while( l_ptype )
              {
                typeNumber    = getText (l_ptype,"number") ;
                TypeNumber = axtoi(typeNumber);

                typettl       = getText (l_ptype,"title"); 
                
                int Profil = Rorg *256 * 256  + FuncNumber * 256 + TypeNumber;

                 Profils.AddProfil(Profil,functtl,typettl);

                fprintf (out,"// function type :%s : %s \n",typeNumber.c_str(),typettl.c_str());

//	{ 0xA5, 0x02, 0x01, "Temperature Sensor Range -40C to 0C",																	"Temperature.01" },

                fprintf(out, "//{ %s, %s, %s, \"%-80s\" , \"%-80s\" },\n",rorg.c_str(),funcNumber.c_str(),typeNumber.c_str(),functtl.c_str(),typettl.c_str() );
                if (out != outH)
                fprintf(outH, "//{ %s, %s, %s, \"%-80s\" , \"%-80s\" },\n",rorg.c_str(),funcNumber.c_str(),typeNumber.c_str(),functtl.c_str(),typettl.c_str() );


                //get ref :
/*			<ref>
				<rorg>D2</rorg>
				<func>01</func>
				<type>00</type>
			</ref>
*/
                int RefProfil = 0 ;
                TiXmlElement *l_pref = l_ptype->FirstChildElement( "ref" );
                if (l_pref){
                  int rorg = axtoi ( getText (l_pref,"rorg" ).c_str() );
                  int func = axtoi ( getText (l_pref,"func" ).c_str() );
                  int type = axtoi ( getText (l_pref,"type" ).c_str() );
                  RefProfil = rorg *256 * 256  + func * 256 + type ;

                }



                TiXmlElement *l_pcase = l_ptype->FirstChildElement( "case" );
                int caseNb=0;

                while( l_pcase )
                {
                  caseNb++;
                  TiXmlElement *l_pdatafield = l_pcase->FirstChildElement( "datafield" );

                  std::string TitleCase       = getText( l_pcase, "title" ) ;
                  replaceBlanc(TitleCase,'"',' ');

                  std::string DescriptionCase = getText( l_pcase, "description" ) ;
                  replaceBlanc(DescriptionCase,'"',' ');

                  std::string DataFieldName  = getDataFieldName ( Profil,  caseNb  ) ;

                  std::vector<std::string> OffsetId ;

                  fprintf (out,"\n// TITLE:%s\n",TitleCase.c_str() );
                  if (out != outH)
                  fprintf (outH,"\n// TITLE:%s\n",TitleCase.c_str() );

                  fprintf (out,  "// DESC :%s\n",DescriptionCase.c_str() );
                  if (out != outH)
                  fprintf (outH,  "// DESC :%s\n",DescriptionCase.c_str() );

                  fprintf (outH,"extern T_DATAFIELD %s [] ; \n",DataFieldName.c_str() );
                  fprintf (out,"T_DATAFIELD %s [] = {\n",DataFieldName.c_str() );



                  int bitoffs=0;
                  int bitsize=0;

                  int NbDataF = getChildNumber(l_pcase,"datafield" );

//                  T_DATAFIELD * CaseDataf = new T_DATAFIELD[ NbDataF+1 ] ; 
                  int Nbdataf = 0 ;

                  T_DATAFIELD dataf ;
                  while( l_pdatafield )
                  {

                    std::string  datas = getText(l_pdatafield,"data","");
                    if (!datas.empty()  )
                    {

                      replaceBlanc(datas,'"',' ');

                      std::string Bitoffs="0" ;
                      std::string Bitsize="0" ;
                      Bitoffs = l_pdatafield->FirstChildElement("bitoffs" )->GetText()  ;
                      Bitsize = l_pdatafield->FirstChildElement("bitsize" )->GetText() ;
      
                      bitoffs = atoi(  Bitoffs.c_str() );
                      bitsize = atoi(  Bitsize.c_str() );

                      std::string shortcut = getText( l_pdatafield,"shortcut" ,"")  ;
                      if (shortcut.empty() ){
                        shortcut=datas;
                      }
                      replaceBlanc(shortcut,'.','_');replaceBlanc(shortcut,' ','_');replaceBlanc(shortcut,'-','_');replaceBlanc(shortcut,'(','_');replaceBlanc(shortcut,')','_');replaceBlanc(shortcut,'/','_');

                      //test range
                      std::string RangeMin ="0";
                      std::string RangeMax ="0";

                      std::string ScaleMin ="0";
                      std::string ScaleMax ="0";


                      TiXmlElement * l_prange   = l_pdatafield->FirstChildElement( "range" );
                      if (l_prange){
                         RangeMin = getText(l_prange,"min","0") ;
                         RangeMax = getText(l_prange,"max","0") ;
                      }

                      l_prange   = l_pdatafield->FirstChildElement( "scale" );
                      if (l_prange){
                         ScaleMin = getText(l_prange,"min","0") ;
                         ScaleMax = getText(l_prange,"max","0") ;
                      }

                      dataf.Offset = bitoffs ;
                      dataf.Size   = bitsize ;
                      dataf.RangeMin = atof(RangeMin.c_str() );
                      dataf.RangeMax = atof(RangeMax.c_str() );
                      dataf.ScaleMin = atof(ScaleMin.c_str() );
                      dataf.ScaleMax = atof(ScaleMax.c_str() );
                      dataf.description = datas   ;

                      //recherche si existe
                      T_DATAFIELD * df =  Profils.getCase (Profil, caseNb-1)->FindShortCut( shortcut.c_str() );
                      if (df!=0){
                        std::string sname ;
                        int nb= 1 ;
                        do
                        {
                          sname = string_format("%s%d",shortcut.c_str(),nb++);
                           df =  Profils.getCase (Profil, caseNb-1)->FindShortCut( sname.c_str() );
                        }
                        while ( df != 0 );
                        shortcut = sname;
                      }
                      dataf.ShortCut = shortcut ;


//                      CaseDataf[Nbdataf]  = dataf ;
                      Nbdataf++;
                      Profils.AddDataField (Profil, caseNb-1 ,  dataf );
                      char*nptr;
//                      int tabn = fprintf(out, "{ %2s ,%2s , \"%s\"%s , %3s , %3s , %3s , %3s , \"%s\"}," ,Bitoffs.c_str() , Bitsize.c_str(),shortcut.c_str(),getTab(8,shortcut).c_str(), RangeMin.c_str() ,RangeMax.c_str(),ScaleMin.c_str(),ScaleMax.c_str() , datas.c_str() );
                      int tabn = fprintf(out, "{ %2s ,%2s , %5.0f , %5.0f , %5.0f , %5.0f , \"%s\"%s , \"%s\"}," ,Bitoffs.c_str() , Bitsize.c_str(), strtod (RangeMin.c_str(), &nptr) ,strtod (RangeMax.c_str(), &nptr),strtod (ScaleMin.c_str(), &nptr),strtod (ScaleMax.c_str(), &nptr) ,shortcut.c_str(),getTab(8,shortcut).c_str(), datas.c_str() );
                      std::string enumerate =  getEnum(l_pdatafield,tabn ) ;
                      fprintf(out, "%s" , enumerate.c_str());

                      OffsetId.push_back(shortcut);

                    }
                    l_pdatafield = l_pdatafield->NextSiblingElement( "datafield" );
                  }
                  fprintf(out,"{  0 , 0 , 0          , 0           }\n" );

                  fprintf(out,"};\n\n");

                  dataf.Offset=dataf.Size= dataf.RangeMin=dataf.RangeMax=dataf.ScaleMin=dataf.ScaleMax=0 ;dataf.description=dataf.ShortCut = "" ;
//                  CaseDataf[Nbdataf++]  = dataf ;

                  //print case definiton
                  fprintf (outH,"extern T_EEP_CASE_ %06X_CASE%d ;\n" ,Profil,caseNb , DataFieldName.c_str() , TitleCase.c_str(), DescriptionCase.c_str()  );
                  fprintf (out ,"T_EEP_CASE_ %06X_CASE%d = { %s,\"%s\",\"%s\" } ;\n" ,Profil,caseNb , DataFieldName.c_str() , TitleCase.c_str(), DescriptionCase.c_str()  );



                  fprintf(outH,"// Index of field\n");
                  for (unsigned int i=0;i<OffsetId.size();i++)
                    fprintf(outH,"#define %s_%-10s %d\n",DataFieldName.c_str(),OffsetId[i].c_str(),i );
                  fprintf  (outH,"#define %s_%-10s %d\n",DataFieldName.c_str(),"NB_DATA",OffsetId.size() );

                  bitoffs += bitsize;
                  bitoffs = (bitoffs+7)/8 ;
                  fprintf(outH,"#define %s_%-10s %d\n",DataFieldName.c_str(),"DATA_SIZE",bitoffs );

				          //end case : add case title / description
				          Profils.AddCaseTitle(Profil, caseNb - 1, TitleCase, DescriptionCase);


                  l_pcase = l_pcase->NextSiblingElement( "case" );
                }



                //fin du profile : list des case du profil courant
                fprintf (out,"\nextern T_EEP_CASE_* %06X_CASES [] ;\n",Profil );
                fprintf (out,"\nT_EEP_CASE_* %06X_CASES [] = {\n",Profil );
                for (int i=0;i<caseNb;i++)
                   fprintf(out,"&%06X_CASE%d ,\n",Profil,i+1 );

                if ( (caseNb==0) && (RefProfil!=0))
                {

                  T_PROFIL_EEP * profil = Profils.getProfil (RefProfil);
                  for (unsigned int i=0;i<profil->cases.size() ;i++)
                      fprintf(out,"&%06X_CASE%d ,\n",RefProfil,i+1 );
                  caseNb = profil->cases.size() ;
				          //copy case
				          Profils.getProfil(Profil)->cases = Profils.getProfil(RefProfil)->cases;
                }
                
                fprintf (out,"{0 }\n" );

                fprintf(out,"};\n\n");
                
                ProfilList.push_back(  string_format ( "{ 0x%06X, %s , %s, %s, %06X_CASES , %2d ,\"%-80s\" , \"%-80s\" },\n",Profil, rorg.c_str(),funcNumber.c_str(),typeNumber.c_str(), Profil, caseNb,   functtl.c_str(),typettl.c_str() )   );
                
                l_ptype = l_ptype->NextSiblingElement( "type" );
              }

      

              l_pfunc = l_pfunc->NextSiblingElement( "func" );
          }
          }
          l_rorg = l_rorg->NextSiblingElement( "rorg" );
        }


        fprintf (out,"\n// Profils list \n");
        fprintf (out,"T_PROFIL_LIST Profillist [] = {\n" );

        for (unsigned int i=0;i<ProfilList.size();i++)
          fprintf(out, ProfilList[i].c_str() );

//        fprintf (out,"{0,0,0,0,0,\"\",\"\" }\n" );
        fprintf (out,"{0 }\n" );

        fprintf (out,"};\n\n" );

    }
}
}




// TITLE:
T_DATAFIELD A50201 [] = {
{ 28 , 1 ,    0 ,   0 ,   0 ,   0 ,"LRNB"     ,  "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 ,  255 ,   0 , -40 ,   0 ,"TMP"      , "Temperature"},
{  0 , 0 , 0    , 0   , 0   ,   0 ,""         ,""            }
};

void testProfils()
{
  Profils.AddProfil(0xd20101,"0xd20101","ggg" );
  Profils.print();
  Profils.AddDataField (0xd20101, 0 , A50201 [0] );
  Profils.print();
  Profils.AddDataField (0xd20101, 0 , A50201 [1] );
  Profils.print();
  Profils.AddDataField (0xd20101, 0 , A50201 [2] );
  Profils.print();
  T_EEP_CASE * Case = Profils.getCase(0xd20101,0) ;
  Case->print();
}



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