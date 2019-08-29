// function number :0x00 : Contacts and Switches 
// function type :0x01 : Single Input Contact 
//{ 0xD5 , 0x00 , 0x01 , "Contacts and Switches                                                            ",  "Single Input Contact                                                             " },

// TITLE:
T_DATAFIELD D50001_CMD1 [] = {
{  7 , 1 , "CO"       ,   0 ,   0 ,   0 ,   0 , "Contact"},//Value: 0 = open 
                                                           //Value: 1 = closed 
{  4 , 1 , "LRN"      ,   0 ,   0 ,   0 ,   0 , "Learn Button"},//Value: 0 = pressed 
                                                                //Value: 1 = not pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D50001_CMD1_CO         0
#define D50001_CMD1_LRN        1
#define D50001_CMD1_NB_DATA    2
#define D50001_CMD1_DATA_SIZE  1
