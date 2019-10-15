// function number :0x02 : Rocker Switch, 2 Rocker 
// function type :0x01 : Light and Blind Control - Application Style 1 
//{ 0xF6, 0x02, 0x01, "Rocker Switch, 2 Rocker                                                         " , "Light and Blind Control - Application Style 1                                   " },

// TITLE:
// DESC :
T_DATAFIELD F60201_CMD1 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "R1"       , "Rocker 1st action"},//Value: 0 = Button AI: 
                                                                             //Value: 1 = Button A0: 
                                                                             //Value: 2 = Button BI: 
                                                                             //Value: 3 = Button B0: 
{  3 , 1 ,     0 ,     0 ,     0 ,     0 , "EB"       , "Energy Bow"},//Value: 0 = released 
                                                                      //Value: 1 = pressed 
{  4 , 3 ,     0 ,     0 ,     0 ,     0 , "R2"       , "Rocker 2nd action"},//Value: 0 = Button AI: 
                                                                             //Value: 1 = Button A0: 
                                                                             //Value: 2 = Button BI: 
                                                                             //Value: 3 = Button B0: 
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "SA"       , "2nd Action"},//Value: 0 = No 2nd action 
                                                                      //Value: 1 = 2nd action valid 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60201_CMD1_R1         0
#define F60201_CMD1_EB         1
#define F60201_CMD1_R2         2
#define F60201_CMD1_SA         3
#define F60201_CMD1_NB_DATA    4
#define F60201_CMD1_DATA_SIZE  1

// TITLE:
// DESC :
T_DATAFIELD F60201_CMD2 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "R1"       , "Number of buttons pressed simultaneously (other bit combinations are not valid)"},//Value: 0 = no button 
                                                                                                                                           //Value: 3 = 3 or 4 buttons 
{  3 , 1 ,     0 ,     0 ,     0 ,     0 , "EB"       , "Energy Bow"},//Value: 0 = released 
                                                                      //Value: 1 = pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60201_CMD2_R1         0
#define F60201_CMD2_EB         1
#define F60201_CMD2_NB_DATA    2
#define F60201_CMD2_DATA_SIZE  1

T_DATAFIELD* F60201_CASES [] = {
F60201_CMD1 ,
F60201_CMD2 ,
{0 }
};

// function type :0x02 : Light and Blind Control - Application Style 2 
//{ 0xF6, 0x02, 0x02, "Rocker Switch, 2 Rocker                                                         " , "Light and Blind Control - Application Style 2                                   " },

// TITLE:
// DESC :
T_DATAFIELD F60202_CMD1 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "R1"       , "Rocker 1st action"},//Value: 0 = Button AI: 
                                                                             //Value: 1 = Button A0: 
                                                                             //Value: 2 = Button BI: 
                                                                             //Value: 3 = Button B0: 
{  3 , 1 ,     0 ,     0 ,     0 ,     0 , "EB"       , "Energy Bow"},//Value: 0 = released 
                                                                      //Value: 1 = pressed 
{  4 , 3 ,     0 ,     0 ,     0 ,     0 , "R2"       , "Rocker 2nd action"},//Value: 0 = Button AI: 
                                                                             //Value: 1 = Button A0: 
                                                                             //Value: 2 = Button BI: 
                                                                             //Value: 3 = Button B0: 
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "SA"       , "2nd Action"},//Value: 0 = No 2nd action 
                                                                      //Value: 1 = 2nd action valid 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60202_CMD1_R1         0
#define F60202_CMD1_EB         1
#define F60202_CMD1_R2         2
#define F60202_CMD1_SA         3
#define F60202_CMD1_NB_DATA    4
#define F60202_CMD1_DATA_SIZE  1

// TITLE:
// DESC :
T_DATAFIELD F60202_CMD2 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "R1"       , "Number of buttons pressed simultaneously (other bit combinations are not valid)"},//Value: 0 = no button 
                                                                                                                                           //Value: 3 = 3 or 4 buttons 
{  3 , 1 ,     0 ,     0 ,     0 ,     0 , "EB"       , "Energy Bow"},//Value: 0 = released 
                                                                      //Value: 1 = pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60202_CMD2_R1         0
#define F60202_CMD2_EB         1
#define F60202_CMD2_NB_DATA    2
#define F60202_CMD2_DATA_SIZE  1

T_DATAFIELD* F60202_CASES [] = {
F60202_CMD1 ,
F60202_CMD2 ,
{0 }
};

// function type :0x03 : Light Control - Application Style 1 
//{ 0xF6, 0x02, 0x03, "Rocker Switch, 2 Rocker                                                         " , "Light Control - Application Style 1                                             " },

// TITLE:
// DESC :
T_DATAFIELD F60203_CMD1 [] = {
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "RA"       , "Rocker action"},//Value: 0x30 = Button A0: 
                                                                         //Value: 0x10 = Button A1: 
                                                                         //Value: 0x70 = Button B0: 
                                                                         //Value: 0x50 = Button B1: 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60203_CMD1_RA         0
#define F60203_CMD1_NB_DATA    1
#define F60203_CMD1_DATA_SIZE  1

T_DATAFIELD* F60203_CASES [] = {
F60203_CMD1 ,
{0 }
};

// function type :0x04 : Light and blind control ERP2 
//{ 0xF6, 0x02, 0x04, "Rocker Switch, 2 Rocker                                                         " , "Light and blind control ERP2                                                    " },

// TITLE:
// DESC :
T_DATAFIELD F60204_CMD1 [] = {
{  0 , 1 ,     0 ,     0 ,     0 ,     0 , "EBO"      , "Energy Bow"},//Value: 0 = released 
                                                                      //Value: 1 = pressed 
{  1 , 1 ,     0 ,     0 ,     0 ,     0 , "BC"       , "Button coding"},//Value: 0 = button 
{  4 , 1 ,     0 ,     0 ,     0 ,     0 , "RBI"      , "BI"},//Value: 0 = not pressed 
                                                              //Value: 1 = pressed 
{  5 , 1 ,     0 ,     0 ,     0 ,     0 , "RB0"      , "B0"},//Value: 0 = not pressed 
                                                              //Value: 1 = pressed 
{  6 , 1 ,     0 ,     0 ,     0 ,     0 , "RAI"      , "AI"},//Value: 0 = not pressed 
                                                              //Value: 1 = pressed 
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "RA0"      , "A0"},//Value: 0 = not pressed 
                                                              //Value: 1 = pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60204_CMD1_EBO        0
#define F60204_CMD1_BC         1
#define F60204_CMD1_RBI        2
#define F60204_CMD1_RB0        3
#define F60204_CMD1_RAI        4
#define F60204_CMD1_RA0        5
#define F60204_CMD1_NB_DATA    6
#define F60204_CMD1_DATA_SIZE  1

T_DATAFIELD* F60204_CASES [] = {
F60204_CMD1 ,
{0 }
};

// function number :0x03 : Rocker Switch, 4 Rocker 
// function type :0x01 : Light and Blind Control - Application Style 1 
//{ 0xF6, 0x03, 0x01, "Rocker Switch, 4 Rocker                                                         " , "Light and Blind Control - Application Style 1                                   " },

// TITLE:
// DESC :
T_DATAFIELD F60301_CMD1 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "R1"       , "Rocker 1st action"},//Value: 0 = Button AI: 
                                                                             //Value: 1 = Button A0: 
                                                                             //Value: 2 = Button BI: 
                                                                             //Value: 3 = Button B0: 
                                                                             //Value: 4 = Button CI: 
                                                                             //Value: 5 = Button C0: 
                                                                             //Value: 6 = Button DI: 
                                                                             //Value: 7 = Button D0: 
{  3 , 1 ,     0 ,     0 ,     0 ,     0 , "EB"       , "Energy Bow"},//Value: 0 = released 
                                                                      //Value: 1 = pressed 
{  4 , 3 ,     0 ,     0 ,     0 ,     0 , "R2"       , "Rocker 2nd action"},//Value: 0 = Button AI: 
                                                                             //Value: 1 = Button A0: 
                                                                             //Value: 2 = Button BI: 
                                                                             //Value: 3 = Button B0: 
                                                                             //Value: 4 = Button CI: 
                                                                             //Value: 5 = Button C0: 
                                                                             //Value: 6 = Button DI: 
                                                                             //Value: 7 = Button D0: 
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "SA"       , "2nd Action"},//Value: 0 = No 2nd action 
                                                                      //Value: 1 = 2nd action valid 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60301_CMD1_R1         0
#define F60301_CMD1_EB         1
#define F60301_CMD1_R2         2
#define F60301_CMD1_SA         3
#define F60301_CMD1_NB_DATA    4
#define F60301_CMD1_DATA_SIZE  1

// TITLE:
// DESC :
T_DATAFIELD F60301_CMD2 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "R1"       , "Number of buttons pressed simultaneously"},//Value: 0 = no Button pressed 
                                                                                                    //Value: 1 = 2 buttons pressed 
                                                                                                    //Value: 2 = 3 buttons pressed 
                                                                                                    //Value: 3 = 4 buttons pressed 
                                                                                                    //Value: 4 = 5 buttons pressed 
                                                                                                    //Value: 5 = 6 buttons pressed 
                                                                                                    //Value: 6 = 7 buttons pressed 
                                                                                                    //Value: 7 = 8 buttons pressed 
{  3 , 1 ,     0 ,     0 ,     0 ,     0 , "EB"       , "Energy Bow"},//Value: 0 = released 
                                                                      //Value: 1 = pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60301_CMD2_R1         0
#define F60301_CMD2_EB         1
#define F60301_CMD2_NB_DATA    2
#define F60301_CMD2_DATA_SIZE  1

T_DATAFIELD* F60301_CASES [] = {
F60301_CMD1 ,
F60301_CMD2 ,
{0 }
};

// function type :0x02 : Light and Blind Control - Application Style 2 
//{ 0xF6, 0x03, 0x02, "Rocker Switch, 4 Rocker                                                         " , "Light and Blind Control - Application Style 2                                   " },

// TITLE:
// DESC :
T_DATAFIELD F60302_CMD1 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "R1"       , "Rocker 1st action"},//Value: 0 = Button AI: 
                                                                             //Value: 1 = Button A0: 
                                                                             //Value: 2 = Button BI: 
                                                                             //Value: 3 = Button B0: 
                                                                             //Value: 4 = Button CI: 
                                                                             //Value: 5 = Button C0: 
                                                                             //Value: 6 = Button DI: 
                                                                             //Value: 7 = Button D0: 
{  3 , 1 ,     0 ,     0 ,     0 ,     0 , "EB"       , "Energy Bow"},//Value: 0 = released 
                                                                      //Value: 1 = pressed 
{  4 , 3 ,     0 ,     0 ,     0 ,     0 , "R2"       , "Rocker 2nd action"},//Value: 0 = Button AI: 
                                                                             //Value: 1 = Button A0: 
                                                                             //Value: 2 = Button BI: 
                                                                             //Value: 3 = Button B0: 
                                                                             //Value: 4 = Button CI: 
                                                                             //Value: 5 = Button C0: 
                                                                             //Value: 6 = Button DI: 
                                                                             //Value: 7 = Button D0: 
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "SA"       , "2nd Action"},//Value: 0 = No 2nd action 
                                                                      //Value: 1 = 2nd action valid 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60302_CMD1_R1         0
#define F60302_CMD1_EB         1
#define F60302_CMD1_R2         2
#define F60302_CMD1_SA         3
#define F60302_CMD1_NB_DATA    4
#define F60302_CMD1_DATA_SIZE  1

// TITLE:
// DESC :
T_DATAFIELD F60302_CMD2 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "R1"       , "Number of buttons pressed simultaneously"},//Value: 0 = no button pressed 
                                                                                                    //Value: 1 = 2 buttons pressed 
                                                                                                    //Value: 2 = 3 buttons pressed 
                                                                                                    //Value: 3 = 4 buttons pressed 
                                                                                                    //Value: 4 = 5 buttons pressed 
                                                                                                    //Value: 5 = 6 buttons pressed 
                                                                                                    //Value: 6 = 7 buttons pressed 
                                                                                                    //Value: 7 = 8 buttons pressed 
{  3 , 1 ,     0 ,     0 ,     0 ,     0 , "EB"       , "Energy Bow"},//Value: 0 = released 
                                                                      //Value: 1 = pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60302_CMD2_R1         0
#define F60302_CMD2_EB         1
#define F60302_CMD2_NB_DATA    2
#define F60302_CMD2_DATA_SIZE  1

T_DATAFIELD* F60302_CASES [] = {
F60302_CMD1 ,
F60302_CMD2 ,
{0 }
};

// function number :0x04 : Position Switch, Home and Office Application 
// function type :0x01 : Key Card Activated Switch 
//{ 0xF6, 0x04, 0x01, "Position Switch, Home and Office Application                                    " , "Key Card Activated Switch                                                       " },

// TITLE:
// DESC :
T_DATAFIELD F60401_CMD1 [] = {
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "KC"       , "Key Card"},//Value: 112 = inserted (0x70) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60401_CMD1_KC         0
#define F60401_CMD1_NB_DATA    1
#define F60401_CMD1_DATA_SIZE  1

// TITLE:
// DESC :
T_DATAFIELD F60401_CMD2 [] = {
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "KC"       , "Key Card"},//Value: 0 = taken out 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60401_CMD2_KC         0
#define F60401_CMD2_NB_DATA    1
#define F60401_CMD2_DATA_SIZE  1

T_DATAFIELD* F60401_CASES [] = {
F60401_CMD1 ,
F60401_CMD2 ,
{0 }
};

// function type :0x02 : Key Card Activated Switch ERP2 
//{ 0xF6, 0x04, 0x02, "Position Switch, Home and Office Application                                    " , "Key Card Activated Switch ERP2                                                  " },

// TITLE:
// DESC :
T_DATAFIELD F60402_CMD1 [] = {
{  0 , 1 ,     0 ,     0 ,     0 ,     0 , "EBO"      , "Energy Bow"},//Value: 0 = taken out 
                                                                      //Value: 1 = card inserted 
{  1 , 1 ,     0 ,     0 ,     0 ,     0 , "BC"       , "Button coding"},//Value: 0 = button 
{  5 , 1 ,     0 ,     0 ,     0 ,     0 , "SOC"      , "State of card"},//Value: 0 = taken out 
                                                                         //Value: 1 = card inserted 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60402_CMD1_EBO        0
#define F60402_CMD1_BC         1
#define F60402_CMD1_SOC        2
#define F60402_CMD1_NB_DATA    3
#define F60402_CMD1_DATA_SIZE  1

T_DATAFIELD* F60402_CASES [] = {
F60402_CMD1 ,
{0 }
};

// function number :0x05 : Detectors 
// function type :0x01 : Liquid Leakage Sensor (mechanic harvester) 
//{ 0xF6, 0x05, 0x01, "Detectors                                                                       " , "Liquid Leakage Sensor (mechanic harvester)                                      " },

// TITLE:
// DESC :
T_DATAFIELD F60501_CMD1 [] = {
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "WAS"      , "Water sensor"},//Value: 0x11 = Water detected 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60501_CMD1_WAS        0
#define F60501_CMD1_NB_DATA    1
#define F60501_CMD1_DATA_SIZE  1

T_DATAFIELD* F60501_CASES [] = {
F60501_CMD1 ,
{0 }
};

// function number :0x10 : Mechanical Handle 
// function type :0x00 : Window Handle 
//{ 0xF6, 0x10, 0x00, "Mechanical Handle                                                               " , "Window Handle                                                                   " },

// TITLE:
// DESC :
T_DATAFIELD F61000_CMD1 [] = {
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "WIN"      , "Window handle"},//Value: 0b11X0XXXX = Moved from up to left. 
                                                                         //Value: 0b1111XXXX = Moved from right to down. 
                                                                         //Value: 0b11X0XXXX = Moved from down to left. 
                                                                         //Value: 0b1101XXXX = Moved from left to up. 
                                                                         //Value: 0b11X0XXXX = Moved from up to left. 
                                                                         //Value: 0b1111XXXX = Moved from left to down. 
                                                                         //Value: 0b11X0XXXX = Moved from down to right. 
                                                                         //Value: 0b1101XXXX = Moved from right to up. 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F61000_CMD1_WIN        0
#define F61000_CMD1_NB_DATA    1
#define F61000_CMD1_DATA_SIZE  1

T_DATAFIELD* F61000_CASES [] = {
F61000_CMD1 ,
{0 }
};

// function type :0x01 : Window Handle ERP2 
//{ 0xF6, 0x10, 0x01, "Mechanical Handle                                                               " , "Window Handle ERP2                                                              " },

// TITLE:
// DESC :
T_DATAFIELD F61001_CMD1 [] = {
{  1 , 1 ,     0 ,     0 ,     0 ,     0 , "HC"       , "Handle coding"},//Value: 1 = handle 
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "HVL"      , "Handle value"},//Value: 0b11X0 = Moved from up to left. 
                                                                        //Value: 0b1111 = Moved from right to down. 
                                                                        //Value: 0b11X0 = Moved from down to left. 
                                                                        //Value: 0b1101 = Moved from left to up. 
                                                                        //Value: 0b11X0 = Moved from up to left. 
                                                                        //Value: 0b1111 = Moved from left to down. 
                                                                        //Value: 0b11X0 = Moved from down to right. 
                                                                        //Value: 0b1101 = Moved from right to up. 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F61001_CMD1_HC         0
#define F61001_CMD1_HVL        1
#define F61001_CMD1_NB_DATA    2
#define F61001_CMD1_DATA_SIZE  1

T_DATAFIELD* F61001_CASES [] = {
F61001_CMD1 ,
{0 }
};

// function number :0x00 : Contacts and Switches 
// function type :0x01 : Single Input Contact 
//{ 0xD5, 0x00, 0x01, "Contacts and Switches                                                           " , "Single Input Contact                                                            " },

// TITLE:
// DESC :
T_DATAFIELD D50001_CMD1 [] = {
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "CO"       , "Contact"},//Value: 0 = open 
                                                                   //Value: 1 = closed 
{  4 , 1 ,     0 ,     0 ,     0 ,     0 , "LRN"      , "Learn Button"},//Value: 0 = pressed 
                                                                        //Value: 1 = not pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D50001_CMD1_CO         0
#define D50001_CMD1_LRN        1
#define D50001_CMD1_NB_DATA    2
#define D50001_CMD1_DATA_SIZE  1

T_DATAFIELD* D50001_CASES [] = {
D50001_CMD1 ,
{0 }
};

// function number :0x02 : Temperature Sensors 
// function type :0x01 : Temperature Sensor Range -40øC to 0øC 
//{ 0xA5, 0x02, 0x01, "Temperature Sensors                                                             " , "Temperature Sensor Range -40øC to 0øC                                           " },

// TITLE:
// DESC :
T_DATAFIELD A50201_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,   -40 ,     0 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50201_CMD1_LRNB       0
#define A50201_CMD1_TMP        1
#define A50201_CMD1_NB_DATA    2
#define A50201_CMD1_DATA_SIZE  3

T_DATAFIELD* A50201_CASES [] = {
A50201_CMD1 ,
{0 }
};

// function type :0x02 : Temperature Sensor Range -30øC to +10øC 
//{ 0xA5, 0x02, 0x02, "Temperature Sensors                                                             " , "Temperature Sensor Range -30øC to +10øC                                         " },

// TITLE:
// DESC :
T_DATAFIELD A50202_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,   -30 ,    10 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50202_CMD1_LRNB       0
#define A50202_CMD1_TMP        1
#define A50202_CMD1_NB_DATA    2
#define A50202_CMD1_DATA_SIZE  3

T_DATAFIELD* A50202_CASES [] = {
A50202_CMD1 ,
{0 }
};

// function type :0x03 : Temperature Sensor Range -20øC to +20øC 
//{ 0xA5, 0x02, 0x03, "Temperature Sensors                                                             " , "Temperature Sensor Range -20øC to +20øC                                         " },

// TITLE:
// DESC :
T_DATAFIELD A50203_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,   -20 ,    20 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50203_CMD1_LRNB       0
#define A50203_CMD1_TMP        1
#define A50203_CMD1_NB_DATA    2
#define A50203_CMD1_DATA_SIZE  3

T_DATAFIELD* A50203_CASES [] = {
A50203_CMD1 ,
{0 }
};

// function type :0x04 : Temperature Sensor Range -10øC to +30øC 
//{ 0xA5, 0x02, 0x04, "Temperature Sensors                                                             " , "Temperature Sensor Range -10øC to +30øC                                         " },

// TITLE:
// DESC :
T_DATAFIELD A50204_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,   -10 ,    30 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50204_CMD1_LRNB       0
#define A50204_CMD1_TMP        1
#define A50204_CMD1_NB_DATA    2
#define A50204_CMD1_DATA_SIZE  3

T_DATAFIELD* A50204_CASES [] = {
A50204_CMD1 ,
{0 }
};

// function type :0x05 : Temperature Sensor Range 0øC to +40øC 
//{ 0xA5, 0x02, 0x05, "Temperature Sensors                                                             " , "Temperature Sensor Range 0øC to +40øC                                           " },

// TITLE:
// DESC :
T_DATAFIELD A50205_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50205_CMD1_LRNB       0
#define A50205_CMD1_TMP        1
#define A50205_CMD1_NB_DATA    2
#define A50205_CMD1_DATA_SIZE  3

T_DATAFIELD* A50205_CASES [] = {
A50205_CMD1 ,
{0 }
};

// function type :0x06 : Temperature Sensor Range +10øC to +50øC 
//{ 0xA5, 0x02, 0x06, "Temperature Sensors                                                             " , "Temperature Sensor Range +10øC to +50øC                                         " },

// TITLE:
// DESC :
T_DATAFIELD A50206_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,    10 ,    50 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50206_CMD1_LRNB       0
#define A50206_CMD1_TMP        1
#define A50206_CMD1_NB_DATA    2
#define A50206_CMD1_DATA_SIZE  3

T_DATAFIELD* A50206_CASES [] = {
A50206_CMD1 ,
{0 }
};

// function type :0x07 : Temperature Sensor Range +20øC to +60øC 
//{ 0xA5, 0x02, 0x07, "Temperature Sensors                                                             " , "Temperature Sensor Range +20øC to +60øC                                         " },

// TITLE:
// DESC :
T_DATAFIELD A50207_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,    20 ,    60 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50207_CMD1_LRNB       0
#define A50207_CMD1_TMP        1
#define A50207_CMD1_NB_DATA    2
#define A50207_CMD1_DATA_SIZE  3

T_DATAFIELD* A50207_CASES [] = {
A50207_CMD1 ,
{0 }
};

// function type :0x08 : Temperature Sensor Range +30øC to +70øC 
//{ 0xA5, 0x02, 0x08, "Temperature Sensors                                                             " , "Temperature Sensor Range +30øC to +70øC                                         " },

// TITLE:
// DESC :
T_DATAFIELD A50208_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,    30 ,    70 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50208_CMD1_LRNB       0
#define A50208_CMD1_TMP        1
#define A50208_CMD1_NB_DATA    2
#define A50208_CMD1_DATA_SIZE  3

T_DATAFIELD* A50208_CASES [] = {
A50208_CMD1 ,
{0 }
};

// function type :0x09 : Temperature Sensor Range +40øC to +80øC 
//{ 0xA5, 0x02, 0x09, "Temperature Sensors                                                             " , "Temperature Sensor Range +40øC to +80øC                                         " },

// TITLE:
// DESC :
T_DATAFIELD A50209_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,    40 ,    80 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50209_CMD1_LRNB       0
#define A50209_CMD1_TMP        1
#define A50209_CMD1_NB_DATA    2
#define A50209_CMD1_DATA_SIZE  3

T_DATAFIELD* A50209_CASES [] = {
A50209_CMD1 ,
{0 }
};

// function type :0x0A : Temperature Sensor Range +50øC to +90øC 
//{ 0xA5, 0x02, 0x0A, "Temperature Sensors                                                             " , "Temperature Sensor Range +50øC to +90øC                                         " },

// TITLE:
// DESC :
T_DATAFIELD A5020A_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,    50 ,    90 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5020A_CMD1_LRNB       0
#define A5020A_CMD1_TMP        1
#define A5020A_CMD1_NB_DATA    2
#define A5020A_CMD1_DATA_SIZE  3

T_DATAFIELD* A5020A_CASES [] = {
A5020A_CMD1 ,
{0 }
};

// function type :0x0B : Temperature Sensor Range +60øC to +100øC 
//{ 0xA5, 0x02, 0x0B, "Temperature Sensors                                                             " , "Temperature Sensor Range +60øC to +100øC                                        " },

// TITLE:
// DESC :
T_DATAFIELD A5020B_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,    60 ,   100 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5020B_CMD1_LRNB       0
#define A5020B_CMD1_TMP        1
#define A5020B_CMD1_NB_DATA    2
#define A5020B_CMD1_DATA_SIZE  3

T_DATAFIELD* A5020B_CASES [] = {
A5020B_CMD1 ,
{0 }
};

// function type :0x10 : Temperature Sensor Range -60øC to +20øC 
//{ 0xA5, 0x02, 0x10, "Temperature Sensors                                                             " , "Temperature Sensor Range -60øC to +20øC                                         " },

// TITLE:
// DESC :
T_DATAFIELD A50210_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,   -60 ,    20 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50210_CMD1_LRNB       0
#define A50210_CMD1_TMP        1
#define A50210_CMD1_NB_DATA    2
#define A50210_CMD1_DATA_SIZE  3

T_DATAFIELD* A50210_CASES [] = {
A50210_CMD1 ,
{0 }
};

// function type :0x11 : Temperature Sensor Range -50øC to +30øC 
//{ 0xA5, 0x02, 0x11, "Temperature Sensors                                                             " , "Temperature Sensor Range -50øC to +30øC                                         " },

// TITLE:
// DESC :
T_DATAFIELD A50211_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,   -50 ,    30 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50211_CMD1_LRNB       0
#define A50211_CMD1_TMP        1
#define A50211_CMD1_NB_DATA    2
#define A50211_CMD1_DATA_SIZE  3

T_DATAFIELD* A50211_CASES [] = {
A50211_CMD1 ,
{0 }
};

// function type :0x12 : Temperature Sensor Range -40øC to +40øC 
//{ 0xA5, 0x02, 0x12, "Temperature Sensors                                                             " , "Temperature Sensor Range -40øC to +40øC                                         " },

// TITLE:
// DESC :
T_DATAFIELD A50212_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,   -40 ,    40 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50212_CMD1_LRNB       0
#define A50212_CMD1_TMP        1
#define A50212_CMD1_NB_DATA    2
#define A50212_CMD1_DATA_SIZE  3

T_DATAFIELD* A50212_CASES [] = {
A50212_CMD1 ,
{0 }
};

// function type :0x13 : Temperature Sensor Range -30øC to +50øC 
//{ 0xA5, 0x02, 0x13, "Temperature Sensors                                                             " , "Temperature Sensor Range -30øC to +50øC                                         " },

// TITLE:
// DESC :
T_DATAFIELD A50213_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,   -30 ,    50 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50213_CMD1_LRNB       0
#define A50213_CMD1_TMP        1
#define A50213_CMD1_NB_DATA    2
#define A50213_CMD1_DATA_SIZE  3

T_DATAFIELD* A50213_CASES [] = {
A50213_CMD1 ,
{0 }
};

// function type :0x14 : Temperature Sensor Range -20øC to +60øC 
//{ 0xA5, 0x02, 0x14, "Temperature Sensors                                                             " , "Temperature Sensor Range -20øC to +60øC                                         " },

// TITLE:
// DESC :
T_DATAFIELD A50214_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,   -20 ,    60 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50214_CMD1_LRNB       0
#define A50214_CMD1_TMP        1
#define A50214_CMD1_NB_DATA    2
#define A50214_CMD1_DATA_SIZE  3

T_DATAFIELD* A50214_CASES [] = {
A50214_CMD1 ,
{0 }
};

// function type :0x15 : Temperature Sensor Range -10øC to +70øC 
//{ 0xA5, 0x02, 0x15, "Temperature Sensors                                                             " , "Temperature Sensor Range -10øC to +70øC                                         " },

// TITLE:
// DESC :
T_DATAFIELD A50215_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,   -10 ,    70 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50215_CMD1_LRNB       0
#define A50215_CMD1_TMP        1
#define A50215_CMD1_NB_DATA    2
#define A50215_CMD1_DATA_SIZE  3

T_DATAFIELD* A50215_CASES [] = {
A50215_CMD1 ,
{0 }
};

// function type :0x16 : Temperature Sensor Range 0øC to +80øC 
//{ 0xA5, 0x02, 0x16, "Temperature Sensors                                                             " , "Temperature Sensor Range 0øC to +80øC                                           " },

// TITLE:
// DESC :
T_DATAFIELD A50216_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,     0 ,    80 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50216_CMD1_LRNB       0
#define A50216_CMD1_TMP        1
#define A50216_CMD1_NB_DATA    2
#define A50216_CMD1_DATA_SIZE  3

T_DATAFIELD* A50216_CASES [] = {
A50216_CMD1 ,
{0 }
};

// function type :0x17 : Temperature Sensor Range +10øC to +90øC 
//{ 0xA5, 0x02, 0x17, "Temperature Sensors                                                             " , "Temperature Sensor Range +10øC to +90øC                                         " },

// TITLE:
// DESC :
T_DATAFIELD A50217_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,    10 ,    90 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50217_CMD1_LRNB       0
#define A50217_CMD1_TMP        1
#define A50217_CMD1_NB_DATA    2
#define A50217_CMD1_DATA_SIZE  3

T_DATAFIELD* A50217_CASES [] = {
A50217_CMD1 ,
{0 }
};

// function type :0x18 : Temperature Sensor Range +20øC to +100øC 
//{ 0xA5, 0x02, 0x18, "Temperature Sensors                                                             " , "Temperature Sensor Range +20øC to +100øC                                        " },

// TITLE:
// DESC :
T_DATAFIELD A50218_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,    20 ,   100 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50218_CMD1_LRNB       0
#define A50218_CMD1_TMP        1
#define A50218_CMD1_NB_DATA    2
#define A50218_CMD1_DATA_SIZE  3

T_DATAFIELD* A50218_CASES [] = {
A50218_CMD1 ,
{0 }
};

// function type :0x19 : Temperature Sensor Range +30øC to +110øC 
//{ 0xA5, 0x02, 0x19, "Temperature Sensors                                                             " , "Temperature Sensor Range +30øC to +110øC                                        " },

// TITLE:
// DESC :
T_DATAFIELD A50219_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,    30 ,   110 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50219_CMD1_LRNB       0
#define A50219_CMD1_TMP        1
#define A50219_CMD1_NB_DATA    2
#define A50219_CMD1_DATA_SIZE  3

T_DATAFIELD* A50219_CASES [] = {
A50219_CMD1 ,
{0 }
};

// function type :0x1A : Temperature Sensor Range +40øC to +120øC 
//{ 0xA5, 0x02, 0x1A, "Temperature Sensors                                                             " , "Temperature Sensor Range +40øC to +120øC                                        " },

// TITLE:
// DESC :
T_DATAFIELD A5021A_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,    40 ,   120 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5021A_CMD1_LRNB       0
#define A5021A_CMD1_TMP        1
#define A5021A_CMD1_NB_DATA    2
#define A5021A_CMD1_DATA_SIZE  3

T_DATAFIELD* A5021A_CASES [] = {
A5021A_CMD1 ,
{0 }
};

// function type :0x1B : Temperature Sensor Range +50øC to +130øC 
//{ 0xA5, 0x02, 0x1B, "Temperature Sensors                                                             " , "Temperature Sensor Range +50øC to +130øC                                        " },

// TITLE:
// DESC :
T_DATAFIELD A5021B_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,    50 ,   130 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5021B_CMD1_LRNB       0
#define A5021B_CMD1_TMP        1
#define A5021B_CMD1_NB_DATA    2
#define A5021B_CMD1_DATA_SIZE  3

T_DATAFIELD* A5021B_CASES [] = {
A5021B_CMD1 ,
{0 }
};

// function type :0x20 : 10 Bit Temperature Sensor Range -10øC to +41.2øC 
//{ 0xA5, 0x02, 0x20, "Temperature Sensors                                                             " , "10 Bit Temperature Sensor Range -10øC to +41.2øC                                " },

// TITLE:
// DESC :
T_DATAFIELD A50220_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 14 ,10 ,  1023 ,     0 ,   -10 ,    41 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50220_CMD1_LRNB       0
#define A50220_CMD1_TMP        1
#define A50220_CMD1_NB_DATA    2
#define A50220_CMD1_DATA_SIZE  3

T_DATAFIELD* A50220_CASES [] = {
A50220_CMD1 ,
{0 }
};

// function type :0x30 : 10 Bit Temperature Sensor Range -40øC to +62.3øC 
//{ 0xA5, 0x02, 0x30, "Temperature Sensors                                                             " , "10 Bit Temperature Sensor Range -40øC to +62.3øC                                " },

// TITLE:
// DESC :
T_DATAFIELD A50230_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 14 ,10 ,  1023 ,     0 ,   -40 ,    62 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50230_CMD1_LRNB       0
#define A50230_CMD1_TMP        1
#define A50230_CMD1_NB_DATA    2
#define A50230_CMD1_DATA_SIZE  3

T_DATAFIELD* A50230_CASES [] = {
A50230_CMD1 ,
{0 }
};

// function number :0x04 : Temperature and Humidity Sensor 
// function type :0x01 : Range 0øC to +40øC and 0% to 100% 
//{ 0xA5, 0x04, 0x01, "Temperature and Humidity Sensor                                                 " , "Range 0øC to +40øC and 0% to 100%                                               " },

// TITLE:
// DESC :
T_DATAFIELD A50401_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  8 , 8 ,     0 ,   250 ,     0 ,   100 , "HUM"      , "Humidity"},
{ 16 , 8 ,     0 ,   250 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "TSN"      , "T-Sensor"},//Value: 0 = not available 
                                                                    //Value: 1 = available 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50401_CMD1_LRNB       0
#define A50401_CMD1_HUM        1
#define A50401_CMD1_TMP        2
#define A50401_CMD1_TSN        3
#define A50401_CMD1_NB_DATA    4
#define A50401_CMD1_DATA_SIZE  4

T_DATAFIELD* A50401_CASES [] = {
A50401_CMD1 ,
{0 }
};

// function type :0x02 : Range -20øC to +60øC and 0% to 100% 
//{ 0xA5, 0x04, 0x02, "Temperature and Humidity Sensor                                                 " , "Range -20øC to +60øC and 0% to 100%                                             " },

// TITLE:
// DESC :
T_DATAFIELD A50402_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  8 , 8 ,     0 ,   250 ,     0 ,   100 , "HUM"      , "Humidity"},
{ 16 , 8 ,     0 ,   250 ,   -20 ,    60 , "TMP"      , "Temperature"},
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "TSN"      , "T-Sensor"},//Value: 0 = not available 
                                                                    //Value: 1 = available 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50402_CMD1_LRNB       0
#define A50402_CMD1_HUM        1
#define A50402_CMD1_TMP        2
#define A50402_CMD1_TSN        3
#define A50402_CMD1_NB_DATA    4
#define A50402_CMD1_DATA_SIZE  4

T_DATAFIELD* A50402_CASES [] = {
A50402_CMD1 ,
{0 }
};

// function type :0x03 : Range -20øC to +60øC 10bit-measurement and 0% to 100% 
//{ 0xA5, 0x04, 0x03, "Temperature and Humidity Sensor                                                 " , "Range -20øC to +60øC 10bit-measurement and 0% to 100%                           " },

// TITLE:
// DESC :
T_DATAFIELD A50403_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,   100 , "HUM"      , "Humidity"},
{ 14 ,10 ,     0 ,  1023 ,   -20 ,    60 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "TTP"      , "Telegram Type"},//Value: 0 = Heartbeat 
                                                                         //Value: 1 = Event triggered 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50403_CMD1_LRNB       0
#define A50403_CMD1_HUM        1
#define A50403_CMD1_TMP        2
#define A50403_CMD1_TTP        3
#define A50403_CMD1_NB_DATA    4
#define A50403_CMD1_DATA_SIZE  4

T_DATAFIELD* A50403_CASES [] = {
A50403_CMD1 ,
{0 }
};

// function number :0x05 : Barometric Sensor 
// function type :0x01 : Range 500 to 1150 hPa 
//{ 0xA5, 0x05, 0x01, "Barometric Sensor                                                               " , "Range 500 to 1150 hPa                                                           " },

// TITLE:
// DESC :
T_DATAFIELD A50501_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  6 ,10 ,     0 ,  1023 ,   500 ,  1150 , "BAR"      , "Barometer"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "TTP"      , "Telegram Type"},//Value: 0 = Heartbeat 
                                                                         //Value: 1 = Event triggered 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50501_CMD1_LRNB       0
#define A50501_CMD1_BAR        1
#define A50501_CMD1_TTP        2
#define A50501_CMD1_NB_DATA    3
#define A50501_CMD1_DATA_SIZE  4

T_DATAFIELD* A50501_CASES [] = {
A50501_CMD1 ,
{0 }
};

// function number :0x06 : Light Sensor 
// function type :0x01 : Range 300lx to 60.000lx 
//{ 0xA5, 0x06, 0x01, "Light Sensor                                                                    " , "Range 300lx to 60.000lx                                                         " },

// TITLE:
// DESC :
T_DATAFIELD A50601_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,     5 , "SVC"      , "Supply voltage"},
{  8 , 8 ,     0 ,   255 ,   300 , 30000 , "ILL2"     , "Illumination"},
{ 16 , 8 ,     0 ,   255 ,   600 , 60000 , "ILL1"     , "Illumination"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "RS"       , "Range select"},//Value: 0 = Range acc. to DB_1 (ILL1) 
                                                                        //Value: 1 = Range acc. to DB_2 (ILL2) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50601_CMD1_LRNB       0
#define A50601_CMD1_SVC        1
#define A50601_CMD1_ILL2       2
#define A50601_CMD1_ILL1       3
#define A50601_CMD1_RS         4
#define A50601_CMD1_NB_DATA    5
#define A50601_CMD1_DATA_SIZE  4

T_DATAFIELD* A50601_CASES [] = {
A50601_CMD1 ,
{0 }
};

// function type :0x02 : Range 0lx to 1.020lx 
//{ 0xA5, 0x06, 0x02, "Light Sensor                                                                    " , "Range 0lx to 1.020lx                                                            " },

// TITLE:
// DESC :
T_DATAFIELD A50602_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,     5 , "SVC"      , "Supply voltage"},
{  8 , 8 ,     0 ,   255 ,     0 ,   510 , "ILL2"     , "Illumination"},
{ 16 , 8 ,     0 ,   255 ,     0 ,  1020 , "ILL1"     , "Illumination"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "RS"       , "Range select"},//Value: 0 = Range acc. to DB_1 (ILL1) 
                                                                        //Value: 1 = Range acc. to DB_2 (ILL2) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50602_CMD1_LRNB       0
#define A50602_CMD1_SVC        1
#define A50602_CMD1_ILL2       2
#define A50602_CMD1_ILL1       3
#define A50602_CMD1_RS         4
#define A50602_CMD1_NB_DATA    5
#define A50602_CMD1_DATA_SIZE  4

T_DATAFIELD* A50602_CASES [] = {
A50602_CMD1 ,
{0 }
};

// function type :0x03 : 10-bit measurement (1-Lux resolution) with range 0lx to 1000lx 
//{ 0xA5, 0x06, 0x03, "Light Sensor                                                                    " , "10-bit measurement (1-Lux resolution) with range 0lx to 1000lx                  " },

// TITLE:
// DESC :
T_DATAFIELD A50603_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,     5 , "SVC"      , "Supply voltage"},
{  8 ,10 ,     0 ,  1000 ,     0 ,  1000 , "ILL"      , "Illumination"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50603_CMD1_LRNB       0
#define A50603_CMD1_SVC        1
#define A50603_CMD1_ILL        2
#define A50603_CMD1_NB_DATA    3
#define A50603_CMD1_DATA_SIZE  3

T_DATAFIELD* A50603_CASES [] = {
A50603_CMD1 ,
{0 }
};

// function type :0x04 : Curtain Wall Brightness Sensor 
//{ 0xA5, 0x06, 0x04, "Light Sensor                                                                    " , "Curtain Wall Brightness Sensor                                                  " },

// TITLE:
// DESC :
T_DATAFIELD A50604_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,   -20 ,    60 , "TEMP"     , "Temperature"},
{  8 ,16 ,     0 , 65535 ,     0 , 65535 , "ILL"      , "Illuminance"},
{ 24 , 4 ,     0 ,    15 ,     0 ,   100 , "SV"       , "Energy Storage"},
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "TMPAV"    , "Temperature Availability"},//Value: 0 = Temperature data is unavailable 
                                                                                    //Value: 1 = Temperature data is available 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "ENAV"     , "Energy Storage Availability"},//Value: 0 = Energy storage data is unavailable 
                                                                                       //Value: 1 = Energy storage data is available 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50604_CMD1_LRNB       0
#define A50604_CMD1_TEMP       1
#define A50604_CMD1_ILL        2
#define A50604_CMD1_SV         3
#define A50604_CMD1_TMPAV      4
#define A50604_CMD1_ENAV       5
#define A50604_CMD1_NB_DATA    6
#define A50604_CMD1_DATA_SIZE  4

T_DATAFIELD* A50604_CASES [] = {
A50604_CMD1 ,
{0 }
};

// function type :0x05 : Range 0lx to 10.200lx 
//{ 0xA5, 0x06, 0x05, "Light Sensor                                                                    " , "Range 0lx to 10.200lx                                                           " },

// TITLE:
// DESC :
T_DATAFIELD A50605_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,     5 , "SVC"      , "Supply voltage"},
{  8 , 8 ,     0 ,   255 ,     0 ,  5100 , "ILL2"     , "Illumination"},
{ 16 , 8 ,     0 ,   255 ,     0 , 10200 , "ILL1"     , "Illumination"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "RS"       , "Range select"},//Value: 0 = Range acc. to DB_1 (ILL1) 
                                                                        //Value: 1 = Range acc. to DB_2 (ILL2) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50605_CMD1_LRNB       0
#define A50605_CMD1_SVC        1
#define A50605_CMD1_ILL2       2
#define A50605_CMD1_ILL1       3
#define A50605_CMD1_RS         4
#define A50605_CMD1_NB_DATA    5
#define A50605_CMD1_DATA_SIZE  4

T_DATAFIELD* A50605_CASES [] = {
A50605_CMD1 ,
{0 }
};

// function number :0x07 : Occupancy Sensor 
// function type :0x01 : Occupancy with Supply voltage monitor 
//{ 0xA5, 0x07, 0x01, "Occupancy Sensor                                                                " , "Occupancy with Supply voltage monitor                                           " },

// TITLE:
// DESC :
T_DATAFIELD A50701_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,     5 , "SVC"      , "Supply voltage (OPTIONAL)"},
{ 16 , 8 ,     0 ,     0 ,     0 ,     0 , "PIRS"     , "PIR Status"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "SVA"      , "Supply voltage availability"},//Value: 0 = Supply voltage is not supported 
                                                                                       //Value: 1 = Supply voltage is supported 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50701_CMD1_LRNB       0
#define A50701_CMD1_SVC        1
#define A50701_CMD1_PIRS       2
#define A50701_CMD1_SVA        3
#define A50701_CMD1_NB_DATA    4
#define A50701_CMD1_DATA_SIZE  4

T_DATAFIELD* A50701_CASES [] = {
A50701_CMD1 ,
{0 }
};

// function type :0x02 : Occupancy with Supply voltage monitor 
//{ 0xA5, 0x07, 0x02, "Occupancy Sensor                                                                " , "Occupancy with Supply voltage monitor                                           " },

// TITLE:
// DESC :
T_DATAFIELD A50702_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,     5 , "SVC"      , "Supply voltage (REQUIRED)"},
{ 24 , 1 ,     0 ,     0 ,     0 ,     0 , "PIRS"     , "PIR Status"},//Value: 0 = Uncertain of occupancy status 
                                                                      //Value: 1 = Motion detected 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50702_CMD1_LRNB       0
#define A50702_CMD1_SVC        1
#define A50702_CMD1_PIRS       2
#define A50702_CMD1_NB_DATA    3
#define A50702_CMD1_DATA_SIZE  4

T_DATAFIELD* A50702_CASES [] = {
A50702_CMD1 ,
{0 }
};

// function type :0x03 : Occupancy with Supply voltage monitor and 10-bit illumination measurement 
//{ 0xA5, 0x07, 0x03, "Occupancy Sensor                                                                " , "Occupancy with Supply voltage monitor and 10-bit illumination measurement       " },

// TITLE:
// DESC :
T_DATAFIELD A50703_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,     5 , "SVC"      , "Supply voltage (REQUIRED)"},
{  8 ,10 ,     0 ,  1000 ,     0 ,  1000 , "ILL"      , "Illumination"},
{ 24 , 1 ,     0 ,     0 ,     0 ,     0 , "PIRS"     , "PIR Status"},//Value: 1 = Motion detected 
                                                                      //Value: 0 = Uncertain of occupancy status 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50703_CMD1_LRNB       0
#define A50703_CMD1_SVC        1
#define A50703_CMD1_ILL        2
#define A50703_CMD1_PIRS       3
#define A50703_CMD1_NB_DATA    4
#define A50703_CMD1_DATA_SIZE  4

T_DATAFIELD* A50703_CASES [] = {
A50703_CMD1 ,
{0 }
};

// function number :0x08 : Light, Temperature and Occupancy Sensor 
// function type :0x01 : Range 0lx to 510lx, 0øC to +51øC and Occupancy Button 
//{ 0xA5, 0x08, 0x01, "Light, Temperature and Occupancy Sensor                                         " , "Range 0lx to 510lx, 0øC to +51øC and Occupancy Button                           " },

// TITLE:
// DESC :
T_DATAFIELD A50801_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,     5 , "SVC"      , "Supply voltage"},
{  8 , 8 ,     0 ,   255 ,     0 ,   510 , "ILL"      , "Illumination"},
{ 16 , 8 ,     0 ,   255 ,     0 ,    51 , "TMP"      , "Temperature"},
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "PIRS"     , "PIR Status"},//Value: 0 = PIR on 
                                                                      //Value: 1 = PIR off 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy Button"},//Value: 0 = Button pressed 
                                                                            //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50801_CMD1_LRNB       0
#define A50801_CMD1_SVC        1
#define A50801_CMD1_ILL        2
#define A50801_CMD1_TMP        3
#define A50801_CMD1_PIRS       4
#define A50801_CMD1_OCC        5
#define A50801_CMD1_NB_DATA    6
#define A50801_CMD1_DATA_SIZE  4

T_DATAFIELD* A50801_CASES [] = {
A50801_CMD1 ,
{0 }
};

// function type :0x02 : Range 0lx to 1020lx, 0øC to +51øC and Occupancy Button 
//{ 0xA5, 0x08, 0x02, "Light, Temperature and Occupancy Sensor                                         " , "Range 0lx to 1020lx, 0øC to +51øC and Occupancy Button                          " },

// TITLE:
// DESC :
T_DATAFIELD A50802_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,     5 , "SVC"      , "Supply voltage"},
{  8 , 8 ,     0 ,   255 ,     0 ,  1020 , "ILL"      , "Illumination"},
{ 16 , 8 ,     0 ,   255 ,     0 ,    51 , "TMP"      , "Temperature"},
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "PIRS"     , "PIR Status"},//Value: 0 = PIR on 
                                                                      //Value: 1 = PIR off 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy Button"},//Value: 0 = Button pressed 
                                                                            //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50802_CMD1_LRNB       0
#define A50802_CMD1_SVC        1
#define A50802_CMD1_ILL        2
#define A50802_CMD1_TMP        3
#define A50802_CMD1_PIRS       4
#define A50802_CMD1_OCC        5
#define A50802_CMD1_NB_DATA    6
#define A50802_CMD1_DATA_SIZE  4

T_DATAFIELD* A50802_CASES [] = {
A50802_CMD1 ,
{0 }
};

// function type :0x03 : Range 0lx to 1530lx, -30øC to +50øC and Occupancy Button 
//{ 0xA5, 0x08, 0x03, "Light, Temperature and Occupancy Sensor                                         " , "Range 0lx to 1530lx, -30øC to +50øC and Occupancy Button                        " },

// TITLE:
// DESC :
T_DATAFIELD A50803_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,     5 , "SVC"      , "Supply voltage"},
{  8 , 8 ,     0 ,   255 ,     0 ,  1530 , "ILL"      , "Illumination"},
{ 16 , 8 ,     0 ,   255 ,   -30 ,    50 , "TMP"      , "Temperature"},
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "PIRS"     , "PIR Status"},//Value: 0 = PIR on 
                                                                      //Value: 1 = PIR off 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy Button"},//Value: 0 = Button pressed 
                                                                            //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50803_CMD1_LRNB       0
#define A50803_CMD1_SVC        1
#define A50803_CMD1_ILL        2
#define A50803_CMD1_TMP        3
#define A50803_CMD1_PIRS       4
#define A50803_CMD1_OCC        5
#define A50803_CMD1_NB_DATA    6
#define A50803_CMD1_DATA_SIZE  4

T_DATAFIELD* A50803_CASES [] = {
A50803_CMD1 ,
{0 }
};

// function number :0x09 : Gas Sensor 
// function type :0x02 : CO-Sensor 0 ppm to 1020 ppm 
//{ 0xA5, 0x09, 0x02, "Gas Sensor                                                                      " , "CO-Sensor 0 ppm to 1020 ppm                                                     " },

// TITLE:
// DESC :
T_DATAFIELD A50902_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,     5 , "SVC"      , "Supply voltage"},
{  8 , 8 ,     0 ,   255 ,     0 ,  1020 , "Conc"     , "Concentration"},
{ 16 , 8 ,     0 ,   255 ,     0 ,    51 , "TMP"      , "Temperature"},
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "TSN"      , "T-Sensor"},//Value: 0 = Temperature Sensor not available 
                                                                    //Value: 1 = Temperature Sensor available 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50902_CMD1_LRNB       0
#define A50902_CMD1_SVC        1
#define A50902_CMD1_Conc       2
#define A50902_CMD1_TMP        3
#define A50902_CMD1_TSN        4
#define A50902_CMD1_NB_DATA    5
#define A50902_CMD1_DATA_SIZE  4

T_DATAFIELD* A50902_CASES [] = {
A50902_CMD1 ,
{0 }
};

// function type :0x04 : CO2 Sensor 
//{ 0xA5, 0x09, 0x04, "Gas Sensor                                                                      " , "CO2 Sensor                                                                      " },

// TITLE:
// DESC :
T_DATAFIELD A50904_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   200 ,     0 ,   100 , "HUM"      , "Humidity"},
{  8 , 8 ,     0 ,   255 ,     0 ,  2550 , "Conc"     , "Concentration"},
{ 16 , 8 ,     0 ,   255 ,     0 ,    51 , "TMP"      , "Temperature"},
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "HSN"      , "H-Sensor"},//Value: 0 = Humidity Sensor not available 
                                                                    //Value: 1 = Humidity Sensor available 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "TSN"      , "T-Sensor"},//Value: 0 = Temperature Sensor not available 
                                                                    //Value: 1 = Temperature Sensor available 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50904_CMD1_LRNB       0
#define A50904_CMD1_HUM        1
#define A50904_CMD1_Conc       2
#define A50904_CMD1_TMP        3
#define A50904_CMD1_HSN        4
#define A50904_CMD1_TSN        5
#define A50904_CMD1_NB_DATA    6
#define A50904_CMD1_DATA_SIZE  4

T_DATAFIELD* A50904_CASES [] = {
A50904_CMD1 ,
{0 }
};

// function type :0x05 : VOC Sensor 
//{ 0xA5, 0x09, 0x05, "Gas Sensor                                                                      " , "VOC Sensor                                                                      " },

// TITLE:
// DESC :
T_DATAFIELD A50905_CMD1 [] = {
{  0 ,16 ,     0 , 65535 ,     0 , 65535 , "Conc"     , "VOC"},
{ 16 , 8 ,     0 ,     0 ,     0 ,     0 , "VOC_ID"   , "VOC ID"},//Value: 0 = VOCT (total) 
                                                                  //Value: 1 = Formaldehyde 
                                                                  //Value: 2 = Benzene 
                                                                  //Value: 3 = Styrene 
                                                                  //Value: 4 = Toluene 
                                                                  //Value: 5 = Tetrachloroethylene 
                                                                  //Value: 6 = Xylene 
                                                                  //Value: 7 = n-Hexane 
                                                                  //Value: 8 = n-Octane 
                                                                  //Value: 9 = Cyclopentane 
                                                                  //Value: 10 = Methanol 
                                                                  //Value: 11 = Ethanol 
                                                                  //Value: 12 = 1-Pentanol 
                                                                  //Value: 13 = Acetone 
                                                                  //Value: 14 = ethylene Oxide 
                                                                  //Value: 15 = Acetaldehyde ue 
                                                                  //Value: 16 = Acetic Acid 
                                                                  //Value: 17 = Propionice Acid 
                                                                  //Value: 18 = Valeric Acid 
                                                                  //Value: 19 = Butyric Acid 
                                                                  //Value: 20 = Ammoniac 
                                                                  //Value: 22 = Hydrogen Sulfide 
                                                                  //Value: 23 = Dimethylsulfide 
                                                                  //Value: 24 = 2-Butanol (butyl Alcohol) 
                                                                  //Value: 25 = 2-Methylpropanol 
                                                                  //Value: 26 = Diethyl ether 
                                                                  //Value: 255 = ozone 
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "SCM"      , "Scale Multiplier"},//Value: 0 = 0.01 
                                                                            //Value: 1 = 0.1 
                                                                            //Value: 2 = 1 
                                                                            //Value: 3 = 10 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50905_CMD1_Conc       0
#define A50905_CMD1_VOC_ID     1
#define A50905_CMD1_LRNB       2
#define A50905_CMD1_SCM        3
#define A50905_CMD1_NB_DATA    4
#define A50905_CMD1_DATA_SIZE  4

T_DATAFIELD* A50905_CASES [] = {
A50905_CMD1 ,
{0 }
};

// function type :0x06 : Radon 
//{ 0xA5, 0x09, 0x06, "Gas Sensor                                                                      " , "Radon                                                                           " },

// TITLE:
// DESC :
T_DATAFIELD A50906_CMD1 [] = {
{  0 ,10 ,     0 ,  1023 ,     0 ,  1023 , "Act"      , "Radon"},
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50906_CMD1_Act        0
#define A50906_CMD1_LRNB       1
#define A50906_CMD1_NB_DATA    2
#define A50906_CMD1_DATA_SIZE  4

T_DATAFIELD* A50906_CASES [] = {
A50906_CMD1 ,
{0 }
};

// function type :0x07 : Particles 
//{ 0xA5, 0x09, 0x07, "Gas Sensor                                                                      " , "Particles                                                                       " },

// TITLE:
// DESC :
T_DATAFIELD A50907_CMD1 [] = {
{  0 , 9 ,     0 ,   511 ,     0 ,   511 , "PM10"     , "Particles_10"},
{  9 , 9 ,     0 ,   511 ,     0 ,   511 , "PM2_5"    , "Particles_2.5"},
{ 18 , 9 ,     0 ,   511 ,     0 ,   511 , "PM1"      , "Particles_1"},
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "PM10a"    , "PM10 active"},//Value: 0 = PM10 not active 
                                                                       //Value: 1 = PM10 active 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "PM2_5a"   , "PM2.5 active"},//Value: 0 = PM2.5 not active 
                                                                        //Value: 1 = PM2.5 active 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "PM1a"     , "PM1 active"},//Value: 0 = PM1 not active 
                                                                      //Value: 1 = PM1 active 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50907_CMD1_PM10       0
#define A50907_CMD1_PM2_5      1
#define A50907_CMD1_PM1        2
#define A50907_CMD1_LRNB       3
#define A50907_CMD1_PM10a      4
#define A50907_CMD1_PM2_5a     5
#define A50907_CMD1_PM1a       6
#define A50907_CMD1_NB_DATA    7
#define A50907_CMD1_DATA_SIZE  4

T_DATAFIELD* A50907_CASES [] = {
A50907_CMD1 ,
{0 }
};

// function type :0x08 : Pure CO2 Sensor 
//{ 0xA5, 0x09, 0x08, "Gas Sensor                                                                      " , "Pure CO2 Sensor                                                                 " },

// TITLE:
// DESC :
T_DATAFIELD A50908_CMD1 [] = {
{ 16 , 8 ,     0 ,   255 ,     0 ,  2000 , "CO2"      , "CO2"},
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50908_CMD1_CO2        0
#define A50908_CMD1_LRNB       1
#define A50908_CMD1_NB_DATA    2
#define A50908_CMD1_DATA_SIZE  4

T_DATAFIELD* A50908_CASES [] = {
A50908_CMD1 ,
{0 }
};

// function type :0x09 : Pure CO2 Sensor with Power Failure Detection 
//{ 0xA5, 0x09, 0x09, "Gas Sensor                                                                      " , "Pure CO2 Sensor with Power Failure Detection                                    " },

// TITLE:
// DESC :
T_DATAFIELD A50909_CMD1 [] = {
{ 16 , 8 ,     0 ,   255 ,     0 ,  2000 , "CO2"      , "CO2"},
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "PFD"      , "Power Failure detection"},//Value: 0 = Power failure not detected 
                                                                                   //Value: 1 = Power failure detected 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50909_CMD1_CO2        0
#define A50909_CMD1_LRNB       1
#define A50909_CMD1_PFD        2
#define A50909_CMD1_NB_DATA    3
#define A50909_CMD1_DATA_SIZE  4

T_DATAFIELD* A50909_CASES [] = {
A50909_CMD1 ,
{0 }
};

// function type :0x0A : Hydrogen Gas Sensor 
//{ 0xA5, 0x09, 0x0A, "Gas Sensor                                                                      " , "Hydrogen Gas Sensor                                                             " },

// TITLE:
// DESC :
T_DATAFIELD A5090A_CMD1 [] = {
{  0 ,16 ,     0 , 65535 ,     0 , 65535 , "Conc"     , "Concentration"},
{ 16 , 8 ,     0 ,   255 ,   -20 ,    60 , "TEMP"     , "Temperature"},
{ 24 , 4 ,     0 ,    15 ,     2 ,     5 , "SV"       , "Supply voltage"},
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "TSA"      , "Temp sensor availability"},//Value: 0 = Temp sensor is not supported 
                                                                                    //Value: 1 = Temp sensor is supported 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "SVA"      , "Supply voltage availability"},//Value: 0 = Supply voltage is not supported 
                                                                                       //Value: 1 = Supply voltage is supported 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5090A_CMD1_Conc       0
#define A5090A_CMD1_TEMP       1
#define A5090A_CMD1_SV         2
#define A5090A_CMD1_LRNB       3
#define A5090A_CMD1_TSA        4
#define A5090A_CMD1_SVA        5
#define A5090A_CMD1_NB_DATA    6
#define A5090A_CMD1_DATA_SIZE  4

T_DATAFIELD* A5090A_CASES [] = {
A5090A_CMD1 ,
{0 }
};

// function type :0x0B : Radioactivity Sensor 
//{ 0xA5, 0x09, 0x0B, "Gas Sensor                                                                      " , "Radioactivity Sensor                                                            " },

// TITLE:
// DESC :
T_DATAFIELD A5090B_CMD1 [] = {
{  0 , 4 ,     0 ,    15 ,     2 ,     5 , "SV"       , "Supply voltage"},
{  8 ,16 ,     0 , 65535 ,     0 ,  6553 , "Ract"     , "Radioactivity"},
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "SCM"      , "Scale Multiplier"},//Value: 0 = 0.001 
                                                                            //Value: 1 = 0.01 
                                                                            //Value: 2 = 0.1 
                                                                            //Value: 3 = 1 
                                                                            //Value: 4 = 10 
                                                                            //Value: 5 = 100 
                                                                            //Value: 6 = 1000 
                                                                            //Value: 7 = 10000 
                                                                            //Value: 8 = 100000 
{ 29 , 2 ,     0 ,     0 ,     0 ,     0 , "VUNIT"    , "Value unit"},//Value: 0 = æSv/h 
                                                                      //Value: 1 = cpm 
                                                                      //Value: 2 = Bq/L 
                                                                      //Value: 3 = Bq/kg 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "SVA"      , "Supply voltage availability"},//Value: 0 = Supply voltage is not supported 
                                                                                       //Value: 1 = Supply voltage is supported 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5090B_CMD1_SV         0
#define A5090B_CMD1_Ract       1
#define A5090B_CMD1_LRNB       2
#define A5090B_CMD1_SCM        3
#define A5090B_CMD1_VUNIT      4
#define A5090B_CMD1_SVA        5
#define A5090B_CMD1_NB_DATA    6
#define A5090B_CMD1_DATA_SIZE  4

T_DATAFIELD* A5090B_CASES [] = {
A5090B_CMD1 ,
{0 }
};

// function number :0x10 : Room Operating Panel 
// function type :0x01 : Temperature Sensor, Set Point, Fan Speed and Occupancy Control 
//{ 0xA5, 0x10, 0x01, "Room Operating Panel                                                            " , "Temperature Sensor, Set Point, Fan Speed and Occupancy Control                  " },

// TITLE:
// DESC :
T_DATAFIELD A51001_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "Turn-switch for fan speed"},
{  8 , 8 ,     0 ,   255 ,     0 ,   255 , "SP"       , "Set point"},
{ 16 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy"},//Value: 1 = Button released 
                                                                     //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51001_CMD1_LRNB       0
#define A51001_CMD1_FAN        1
#define A51001_CMD1_SP         2
#define A51001_CMD1_TMP        3
#define A51001_CMD1_OCC        4
#define A51001_CMD1_NB_DATA    5
#define A51001_CMD1_DATA_SIZE  4

T_DATAFIELD* A51001_CASES [] = {
A51001_CMD1 ,
{0 }
};

// function type :0x02 : Temperature Sensor, Set Point, Fan Speed and Day/Night Control 
//{ 0xA5, 0x10, 0x02, "Room Operating Panel                                                            " , "Temperature Sensor, Set Point, Fan Speed and Day/Night Control                  " },

// TITLE:
// DESC :
T_DATAFIELD A51002_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "Turn-switch for fan speed"},
{  8 , 8 ,     0 ,   255 ,     0 ,   255 , "SP"       , "Set point"},
{ 16 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "SLSW"     , "Slide switch 0/I"},//Value: 0 = Position I / Night / Off 
                                                                            //Value: 1 = Position O / Day / On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51002_CMD1_LRNB       0
#define A51002_CMD1_FAN        1
#define A51002_CMD1_SP         2
#define A51002_CMD1_TMP        3
#define A51002_CMD1_SLSW       4
#define A51002_CMD1_NB_DATA    5
#define A51002_CMD1_DATA_SIZE  4

T_DATAFIELD* A51002_CASES [] = {
A51002_CMD1 ,
{0 }
};

// function type :0x03 : Temperature Sensor, Set Point Control 
//{ 0xA5, 0x10, 0x03, "Room Operating Panel                                                            " , "Temperature Sensor, Set Point Control                                           " },

// TITLE:
// DESC :
T_DATAFIELD A51003_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  8 , 8 ,     0 ,   255 ,     0 ,   255 , "SP"       , "Set point"},
{ 16 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51003_CMD1_LRNB       0
#define A51003_CMD1_SP         1
#define A51003_CMD1_TMP        2
#define A51003_CMD1_NB_DATA    3
#define A51003_CMD1_DATA_SIZE  3

T_DATAFIELD* A51003_CASES [] = {
A51003_CMD1 ,
{0 }
};

// function type :0x04 : Temperature Sensor, Set Point and Fan Speed Control 
//{ 0xA5, 0x10, 0x04, "Room Operating Panel                                                            " , "Temperature Sensor, Set Point and Fan Speed Control                             " },

// TITLE:
// DESC :
T_DATAFIELD A51004_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "Turn-switch for fan speed"},
{  8 , 8 ,     0 ,   255 ,     0 ,   255 , "SP"       , "Set point"},
{ 16 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51004_CMD1_LRNB       0
#define A51004_CMD1_FAN        1
#define A51004_CMD1_SP         2
#define A51004_CMD1_TMP        3
#define A51004_CMD1_NB_DATA    4
#define A51004_CMD1_DATA_SIZE  3

T_DATAFIELD* A51004_CASES [] = {
A51004_CMD1 ,
{0 }
};

// function type :0x05 : Temperature Sensor, Set Point and Occupancy Control 
//{ 0xA5, 0x10, 0x05, "Room Operating Panel                                                            " , "Temperature Sensor, Set Point and Occupancy Control                             " },

// TITLE:
// DESC :
T_DATAFIELD A51005_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  8 , 8 ,     0 ,   255 ,     0 ,   255 , "SP"       , "Set point"},
{ 16 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy"},//Value: 1 = Button released 
                                                                     //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51005_CMD1_LRNB       0
#define A51005_CMD1_SP         1
#define A51005_CMD1_TMP        2
#define A51005_CMD1_OCC        3
#define A51005_CMD1_NB_DATA    4
#define A51005_CMD1_DATA_SIZE  4

T_DATAFIELD* A51005_CASES [] = {
A51005_CMD1 ,
{0 }
};

// function type :0x06 : Temperature Sensor, Set Point and Day/Night Control 
//{ 0xA5, 0x10, 0x06, "Room Operating Panel                                                            " , "Temperature Sensor, Set Point and Day/Night Control                             " },

// TITLE:
// DESC :
T_DATAFIELD A51006_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  8 , 8 ,     0 ,   255 ,     0 ,   255 , "SP"       , "Set point"},
{ 16 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "SLSW"     , "Slide switch 0/I"},//Value: 0 = Position I / Night / Off 
                                                                            //Value: 1 = Position O / Day / On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51006_CMD1_LRNB       0
#define A51006_CMD1_SP         1
#define A51006_CMD1_TMP        2
#define A51006_CMD1_SLSW       3
#define A51006_CMD1_NB_DATA    4
#define A51006_CMD1_DATA_SIZE  4

T_DATAFIELD* A51006_CASES [] = {
A51006_CMD1 ,
{0 }
};

// function type :0x07 : Temperature Sensor, Fan Speed Control 
//{ 0xA5, 0x10, 0x07, "Room Operating Panel                                                            " , "Temperature Sensor, Fan Speed Control                                           " },

// TITLE:
// DESC :
T_DATAFIELD A51007_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "Turn-switch for fan speed"},
{ 16 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51007_CMD1_LRNB       0
#define A51007_CMD1_FAN        1
#define A51007_CMD1_TMP        2
#define A51007_CMD1_NB_DATA    3
#define A51007_CMD1_DATA_SIZE  3

T_DATAFIELD* A51007_CASES [] = {
A51007_CMD1 ,
{0 }
};

// function type :0x08 : Temperature Sensor, Fan Speed and Occupancy Control 
//{ 0xA5, 0x10, 0x08, "Room Operating Panel                                                            " , "Temperature Sensor, Fan Speed and Occupancy Control                             " },

// TITLE:
// DESC :
T_DATAFIELD A51008_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "Turn-switch for fan speed"},
{ 16 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy"},//Value: 1 = Button released 
                                                                     //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51008_CMD1_LRNB       0
#define A51008_CMD1_FAN        1
#define A51008_CMD1_TMP        2
#define A51008_CMD1_OCC        3
#define A51008_CMD1_NB_DATA    4
#define A51008_CMD1_DATA_SIZE  4

T_DATAFIELD* A51008_CASES [] = {
A51008_CMD1 ,
{0 }
};

// function type :0x09 : Temperature Sensor, Fan Speed and Day/Night Control 
//{ 0xA5, 0x10, 0x09, "Room Operating Panel                                                            " , "Temperature Sensor, Fan Speed and Day/Night Control                             " },

// TITLE:
// DESC :
T_DATAFIELD A51009_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "Turn-switch for fan speed"},
{ 16 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "SLSW"     , "Slide switch 0/I"},//Value: 0 = Position I / Night / Off 
                                                                            //Value: 1 = Position O / Day / On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51009_CMD1_LRNB       0
#define A51009_CMD1_FAN        1
#define A51009_CMD1_TMP        2
#define A51009_CMD1_SLSW       3
#define A51009_CMD1_NB_DATA    4
#define A51009_CMD1_DATA_SIZE  4

T_DATAFIELD* A51009_CASES [] = {
A51009_CMD1 ,
{0 }
};

// function type :0x0A : Temperature Sensor, Set Point Adjust and Single Input Contact 
//{ 0xA5, 0x10, 0x0A, "Room Operating Panel                                                            " , "Temperature Sensor, Set Point Adjust and Single Input Contact                   " },

// TITLE:
// DESC :
T_DATAFIELD A5100A_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  8 , 8 ,     0 ,   255 ,     0 ,   255 , "SP"       , "Set point"},
{ 16 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "CTST"     , "Contact State"},//Value: 0 = closed 
                                                                         //Value: 1 = open 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5100A_CMD1_LRNB       0
#define A5100A_CMD1_SP         1
#define A5100A_CMD1_TMP        2
#define A5100A_CMD1_CTST       3
#define A5100A_CMD1_NB_DATA    4
#define A5100A_CMD1_DATA_SIZE  4

T_DATAFIELD* A5100A_CASES [] = {
A5100A_CMD1 ,
{0 }
};

// function type :0x0B : Temperature Sensor and Single Input Contact 
//{ 0xA5, 0x10, 0x0B, "Room Operating Panel                                                            " , "Temperature Sensor and Single Input Contact                                     " },

// TITLE:
// DESC :
T_DATAFIELD A5100B_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "CTST"     , "Contact State"},//Value: 0 = closed 
                                                                         //Value: 1 = open 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5100B_CMD1_LRNB       0
#define A5100B_CMD1_TMP        1
#define A5100B_CMD1_CTST       2
#define A5100B_CMD1_NB_DATA    3
#define A5100B_CMD1_DATA_SIZE  4

T_DATAFIELD* A5100B_CASES [] = {
A5100B_CMD1 ,
{0 }
};

// function type :0x0C : Temperature Sensor and Occupancy Control 
//{ 0xA5, 0x10, 0x0C, "Room Operating Panel                                                            " , "Temperature Sensor and Occupancy Control                                        " },

// TITLE:
// DESC :
T_DATAFIELD A5100C_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy"},//Value: 1 = Button released 
                                                                     //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5100C_CMD1_LRNB       0
#define A5100C_CMD1_TMP        1
#define A5100C_CMD1_OCC        2
#define A5100C_CMD1_NB_DATA    3
#define A5100C_CMD1_DATA_SIZE  4

T_DATAFIELD* A5100C_CASES [] = {
A5100C_CMD1 ,
{0 }
};

// function type :0x0D : Temperature Sensor and Day/Night Control 
//{ 0xA5, 0x10, 0x0D, "Room Operating Panel                                                            " , "Temperature Sensor and Day/Night Control                                        " },

// TITLE:
// DESC :
T_DATAFIELD A5100D_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "SLSW"     , "Slide switch"},//Value: 0 = Position I / Night / Off 
                                                                        //Value: 1 = Position O / Day / On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5100D_CMD1_LRNB       0
#define A5100D_CMD1_TMP        1
#define A5100D_CMD1_SLSW       2
#define A5100D_CMD1_NB_DATA    3
#define A5100D_CMD1_DATA_SIZE  4

T_DATAFIELD* A5100D_CASES [] = {
A5100D_CMD1 ,
{0 }
};

// function type :0x10 : Temperature and Humidity Sensor, Set Point and Occupancy Control 
//{ 0xA5, 0x10, 0x10, "Room Operating Panel                                                            " , "Temperature and Humidity Sensor, Set Point and Occupancy Control                " },

// TITLE:
// DESC :
T_DATAFIELD A51010_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,   255 , "SP"       , "Set point"},
{  8 , 8 ,     0 ,   250 ,     0 ,   100 , "HUM"      , "Humidity"},
{ 16 , 8 ,     0 ,   250 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy"},//Value: 1 = Button released 
                                                                     //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51010_CMD1_LRNB       0
#define A51010_CMD1_SP         1
#define A51010_CMD1_HUM        2
#define A51010_CMD1_TMP        3
#define A51010_CMD1_OCC        4
#define A51010_CMD1_NB_DATA    5
#define A51010_CMD1_DATA_SIZE  4

T_DATAFIELD* A51010_CASES [] = {
A51010_CMD1 ,
{0 }
};

// function type :0x11 : Temperature and Humidity Sensor, Set Point and Day/Night Control 
//{ 0xA5, 0x10, 0x11, "Room Operating Panel                                                            " , "Temperature and Humidity Sensor, Set Point and Day/Night Control                " },

// TITLE:
// DESC :
T_DATAFIELD A51011_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,   255 , "SP"       , "Set point"},
{  8 , 8 ,     0 ,   250 ,     0 ,   100 , "HUM"      , "Humidity"},
{ 16 , 8 ,     0 ,   250 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "SLSW"     , "Slide switch"},//Value: 0 = Position I / Night / Off 
                                                                        //Value: 1 = Position O / Day / On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51011_CMD1_LRNB       0
#define A51011_CMD1_SP         1
#define A51011_CMD1_HUM        2
#define A51011_CMD1_TMP        3
#define A51011_CMD1_SLSW       4
#define A51011_CMD1_NB_DATA    5
#define A51011_CMD1_DATA_SIZE  4

T_DATAFIELD* A51011_CASES [] = {
A51011_CMD1 ,
{0 }
};

// function type :0x12 : Temperature and Humidity Sensor and Set Point 
//{ 0xA5, 0x10, 0x12, "Room Operating Panel                                                            " , "Temperature and Humidity Sensor and Set Point                                   " },

// TITLE:
// DESC :
T_DATAFIELD A51012_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,   255 , "SP"       , "Set point"},
{  8 , 8 ,     0 ,   250 ,     0 ,   100 , "HUM"      , "Humidity"},
{ 16 , 8 ,     0 ,   250 ,     0 ,    40 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51012_CMD1_LRNB       0
#define A51012_CMD1_SP         1
#define A51012_CMD1_HUM        2
#define A51012_CMD1_TMP        3
#define A51012_CMD1_NB_DATA    4
#define A51012_CMD1_DATA_SIZE  3

T_DATAFIELD* A51012_CASES [] = {
A51012_CMD1 ,
{0 }
};

// function type :0x13 : Temperature and Humidity Sensor, Occupancy Control 
//{ 0xA5, 0x10, 0x13, "Room Operating Panel                                                            " , "Temperature and Humidity Sensor, Occupancy Control                              " },

// TITLE:
// DESC :
T_DATAFIELD A51013_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  8 , 8 ,     0 ,   250 ,     0 ,   100 , "HUM"      , "Humidity"},
{ 16 , 8 ,     0 ,   250 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy"},//Value: 1 = Button released 
                                                                     //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51013_CMD1_LRNB       0
#define A51013_CMD1_HUM        1
#define A51013_CMD1_TMP        2
#define A51013_CMD1_OCC        3
#define A51013_CMD1_NB_DATA    4
#define A51013_CMD1_DATA_SIZE  4

T_DATAFIELD* A51013_CASES [] = {
A51013_CMD1 ,
{0 }
};

// function type :0x14 : Temperature and Humidity Sensor, Day/Night Control 
//{ 0xA5, 0x10, 0x14, "Room Operating Panel                                                            " , "Temperature and Humidity Sensor, Day/Night Control                              " },

// TITLE:
// DESC :
T_DATAFIELD A51014_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  8 , 8 ,     0 ,   250 ,     0 ,   100 , "HUM"      , "Humidity"},
{ 16 , 8 ,     0 ,   250 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "SLSW"     , "Slide switch"},//Value: 0 = Position I / Night / Off 
                                                                        //Value: 1 = Position O / Day / On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51014_CMD1_LRNB       0
#define A51014_CMD1_HUM        1
#define A51014_CMD1_TMP        2
#define A51014_CMD1_SLSW       3
#define A51014_CMD1_NB_DATA    4
#define A51014_CMD1_DATA_SIZE  4

T_DATAFIELD* A51014_CASES [] = {
A51014_CMD1 ,
{0 }
};

// function type :0x15 : 10 Bit Temperature Sensor, 6 bit Set Point Control 
//{ 0xA5, 0x10, 0x15, "Room Operating Panel                                                            " , "10 Bit Temperature Sensor, 6 bit Set Point Control                              " },

// TITLE:
// DESC :
T_DATAFIELD A51015_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 14 ,10 ,  1023 ,     0 ,   -10 ,    41 , "TMP"      , "Temperature"},
{  8 , 6 ,     0 ,    63 ,     0 ,    63 , "SP"       , "Set point"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51015_CMD1_LRNB       0
#define A51015_CMD1_TMP        1
#define A51015_CMD1_SP         2
#define A51015_CMD1_NB_DATA    3
#define A51015_CMD1_DATA_SIZE  2

T_DATAFIELD* A51015_CASES [] = {
A51015_CMD1 ,
{0 }
};

// function type :0x16 : 10 Bit Temperature Sensor, 6 bit Set Point Control;Occupancy Control 
//{ 0xA5, 0x10, 0x16, "Room Operating Panel                                                            " , "10 Bit Temperature Sensor, 6 bit Set Point Control;Occupancy Control            " },

// TITLE:
// DESC :
T_DATAFIELD A51016_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 14 ,10 ,  1023 ,     0 ,   -10 ,    41 , "TMP"      , "Temperature"},
{  8 , 6 ,     0 ,    63 ,     0 ,    63 , "SP"       , "Set point"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy"},//Value: 1 = Button released 
                                                                     //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51016_CMD1_LRNB       0
#define A51016_CMD1_TMP        1
#define A51016_CMD1_SP         2
#define A51016_CMD1_OCC        3
#define A51016_CMD1_NB_DATA    4
#define A51016_CMD1_DATA_SIZE  4

T_DATAFIELD* A51016_CASES [] = {
A51016_CMD1 ,
{0 }
};

// function type :0x17 : 10 Bit Temperature Sensor, Occupancy Control 
//{ 0xA5, 0x10, 0x17, "Room Operating Panel                                                            " , "10 Bit Temperature Sensor, Occupancy Control                                    " },

// TITLE:
// DESC :
T_DATAFIELD A51017_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 14 ,10 ,  1023 ,     0 ,   -10 ,    41 , "TMP"      , "Temperature"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy"},//Value: 1 = Button released 
                                                                     //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51017_CMD1_LRNB       0
#define A51017_CMD1_TMP        1
#define A51017_CMD1_OCC        2
#define A51017_CMD1_NB_DATA    3
#define A51017_CMD1_DATA_SIZE  4

T_DATAFIELD* A51017_CASES [] = {
A51017_CMD1 ,
{0 }
};

// function type :0x18 : Illumination, Temperature Set Point, Temperature Sensor, Fan Speed and Occupancy Control 
//{ 0xA5, 0x10, 0x18, "Room Operating Panel                                                            " , "Illumination, Temperature Set Point, Temperature Sensor, Fan Speed and Occupancy Control" },

// TITLE:
// DESC :
T_DATAFIELD A51018_CMD1 [] = {
{ 25 , 3 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "Fan Speed"},//Value: 0 = Auto 
                                                                     //Value: 1 = Speed 0 
                                                                     //Value: 2 = Speed 1 
                                                                     //Value: 3 = Speed 2 
                                                                     //Value: 4 = Speed 3 
                                                                     //Value: 5 = Speed 4 
                                                                     //Value: 6 = Speed 5 
                                                                     //Value: 7 = Off 
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,  1000 , "ILL"      , "Illumination"},
{  8 , 8 ,   250 ,     0 ,     0 ,    40 , "TMPSP"    , "Temp Setpoint"},
{ 16 , 8 ,   250 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "OED"      , "Occupancy enable/disable"},//Value: 0 = Occupancy enabled 
                                                                                    //Value: 1 = Occupancy disabled 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OB"       , "Occupancy button"},//Value: 0 = Button pressed 
                                                                            //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51018_CMD1_FAN        0
#define A51018_CMD1_LRNB       1
#define A51018_CMD1_ILL        2
#define A51018_CMD1_TMPSP      3
#define A51018_CMD1_TMP        4
#define A51018_CMD1_OED        5
#define A51018_CMD1_OB         6
#define A51018_CMD1_NB_DATA    7
#define A51018_CMD1_DATA_SIZE  4

T_DATAFIELD* A51018_CASES [] = {
A51018_CMD1 ,
{0 }
};

// function type :0x19 : Humidity, Temperature Set Point, Temperature Sensor, Fan Speed and Occupancy Control 
//{ 0xA5, 0x10, 0x19, "Room Operating Panel                                                            " , "Humidity, Temperature Set Point, Temperature Sensor, Fan Speed and Occupancy Control" },

// TITLE:
// DESC :
T_DATAFIELD A51019_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,   100 , "HUM"      , "Humidity"},
{  8 , 8 ,   250 ,     0 ,     0 ,    40 , "TMP_Sp"   , "Temp Setpoint"},
{ 16 , 8 ,   250 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 25 , 3 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "Fan speed"},//Value: 0 = Auto 
                                                                     //Value: 1 = Speed 0 
                                                                     //Value: 2 = Speed 1 
                                                                     //Value: 3 = Speed 2 
                                                                     //Value: 4 = Speed 3 
                                                                     //Value: 5 = Speed 4 
                                                                     //Value: 6 = Speed 5 
                                                                     //Value: 7 = Off 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OED"      , "Occupancy enable/disable"},//Value: 0 = Occupancy enabled 
                                                                                    //Value: 1 = Occupancy disabled 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "OB"       , "Occupancy button"},//Value: 0 = Button pressed 
                                                                            //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51019_CMD1_LRNB       0
#define A51019_CMD1_HUM        1
#define A51019_CMD1_TMP_Sp     2
#define A51019_CMD1_TMP        3
#define A51019_CMD1_FAN        4
#define A51019_CMD1_OED        5
#define A51019_CMD1_OB         6
#define A51019_CMD1_NB_DATA    7
#define A51019_CMD1_DATA_SIZE  4

T_DATAFIELD* A51019_CASES [] = {
A51019_CMD1 ,
{0 }
};

// function type :0x1A : Supply voltage monitor, Temperature Set Point, Temperature Sensor, Fan Speed and Occupancy Control 
//{ 0xA5, 0x10, 0x1A, "Room Operating Panel                                                            " , "Supply voltage monitor, Temperature Set Point, Temperature Sensor, Fan Speed and Occupancy Control" },

// TITLE:
// DESC :
T_DATAFIELD A5101A_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,     5 , "SV"       , "Supply Voltage"},
{  8 , 8 ,   250 ,     0 ,     0 ,    40 , "TMP_Sp"   , "Temp Setpoint"},
{ 16 , 8 ,   250 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 25 , 3 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "Fan speed"},//Value: 0 = Auto 
                                                                     //Value: 1 = Speed 0 
                                                                     //Value: 2 = Speed 1 
                                                                     //Value: 3 = Speed 2 
                                                                     //Value: 4 = Speed 3 
                                                                     //Value: 5 = Speed 4 
                                                                     //Value: 6 = Speed 5 
                                                                     //Value: 7 = Off 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "OED"      , "Occupancy enable/disable"},//Value: 0 = Occupancy enabled 
                                                                                    //Value: 1 = Occupancy disabled 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OB"       , "Occupancy button"},//Value: 0 = Button pressed 
                                                                            //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5101A_CMD1_LRNB       0
#define A5101A_CMD1_SV         1
#define A5101A_CMD1_TMP_Sp     2
#define A5101A_CMD1_TMP        3
#define A5101A_CMD1_FAN        4
#define A5101A_CMD1_OED        5
#define A5101A_CMD1_OB         6
#define A5101A_CMD1_NB_DATA    7
#define A5101A_CMD1_DATA_SIZE  4

T_DATAFIELD* A5101A_CASES [] = {
A5101A_CMD1 ,
{0 }
};

// function type :0x1B : Supply Voltage Monitor, Illumination, Temperature Sensor, Fan Speed and Occupancy Control 
//{ 0xA5, 0x10, 0x1B, "Room Operating Panel                                                            " , "Supply Voltage Monitor, Illumination, Temperature Sensor, Fan Speed and Occupancy Control" },

// TITLE:
// DESC :
T_DATAFIELD A5101B_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,     5 , "SV"       , "Supply Voltage"},
{  8 , 8 ,     0 ,   250 ,     0 ,  1000 , "ILL"      , "Illumination"},
{ 16 , 8 ,   250 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 25 , 3 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "Fan speed"},//Value: 0 = Auto 
                                                                     //Value: 1 = Speed 0 
                                                                     //Value: 2 = Speed 1 
                                                                     //Value: 3 = Speed 2 
                                                                     //Value: 4 = Speed 3 
                                                                     //Value: 5 = Speed 4 
                                                                     //Value: 6 = Speed 5 
                                                                     //Value: 7 = Off 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "OED"      , "Occupancy enable/disable"},//Value: 0 = Occupancy enabled 
                                                                                    //Value: 1 = Occupancy disabled 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OB"       , "Occupancy button"},//Value: 0 = Button pressed 
                                                                            //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5101B_CMD1_LRNB       0
#define A5101B_CMD1_SV         1
#define A5101B_CMD1_ILL        2
#define A5101B_CMD1_TMP        3
#define A5101B_CMD1_FAN        4
#define A5101B_CMD1_OED        5
#define A5101B_CMD1_OB         6
#define A5101B_CMD1_NB_DATA    7
#define A5101B_CMD1_DATA_SIZE  4

T_DATAFIELD* A5101B_CASES [] = {
A5101B_CMD1 ,
{0 }
};

// function type :0x1C : Illumination, Illumination Set Point, Temperature Sensor, Fan Speed and Occupancy Control 
//{ 0xA5, 0x10, 0x1C, "Room Operating Panel                                                            " , "Illumination, Illumination Set Point, Temperature Sensor, Fan Speed and Occupancy Control" },

// TITLE:
// DESC :
T_DATAFIELD A5101C_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,  1000 , "ILL"      , "Illumination"},
{  8 , 8 ,     0 ,   250 ,     0 ,  1000 , "ILLSP"    , "Illumination Set Point"},
{ 16 , 8 ,   250 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 25 , 3 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "Fan speed"},//Value: 0 = Auto 
                                                                     //Value: 1 = Speed 0 
                                                                     //Value: 2 = Speed 1 
                                                                     //Value: 3 = Speed 2 
                                                                     //Value: 4 = Speed 3 
                                                                     //Value: 5 = Speed 4 
                                                                     //Value: 6 = Speed 5 
                                                                     //Value: 7 = Off 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "OED"      , "Occupancy enable/disable"},//Value: 0 = Occupancy enabled 
                                                                                    //Value: 1 = Occupancy disabled 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OB"       , "Occupancy button"},//Value: 0 = Button pressed 
                                                                            //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5101C_CMD1_LRNB       0
#define A5101C_CMD1_ILL        1
#define A5101C_CMD1_ILLSP      2
#define A5101C_CMD1_TMP        3
#define A5101C_CMD1_FAN        4
#define A5101C_CMD1_OED        5
#define A5101C_CMD1_OB         6
#define A5101C_CMD1_NB_DATA    7
#define A5101C_CMD1_DATA_SIZE  4

T_DATAFIELD* A5101C_CASES [] = {
A5101C_CMD1 ,
{0 }
};

// function type :0x1D : Humidity, Humidity Set Point, Temperature Sensor, Fan Speed and Occupancy Control 
//{ 0xA5, 0x10, 0x1D, "Room Operating Panel                                                            " , "Humidity, Humidity Set Point, Temperature Sensor, Fan Speed and Occupancy Control" },

// TITLE:
// DESC :
T_DATAFIELD A5101D_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,   100 , "HUM"      , "Humidity"},
{  8 , 8 ,     0 ,   250 ,     0 ,   100 , "HUMSP"    , "Humidity Set Point"},
{ 16 , 8 ,   250 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 25 , 3 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "Fan speed"},//Value: 0 = Auto 
                                                                     //Value: 1 = Speed 0 
                                                                     //Value: 2 = Speed 1 
                                                                     //Value: 3 = Speed 2 
                                                                     //Value: 4 = Speed 3 
                                                                     //Value: 5 = Speed 4 
                                                                     //Value: 6 = Speed 5 
                                                                     //Value: 7 = Off 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "OED"      , "Occupancy enable/disable"},//Value: 0 = Occupancy enabled 
                                                                                    //Value: 1 = Occupancy disabled 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OB"       , "Occupancy button"},//Value: 0 = Button pressed 
                                                                            //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5101D_CMD1_LRNB       0
#define A5101D_CMD1_HUM        1
#define A5101D_CMD1_HUMSP      2
#define A5101D_CMD1_TMP        3
#define A5101D_CMD1_FAN        4
#define A5101D_CMD1_OED        5
#define A5101D_CMD1_OB         6
#define A5101D_CMD1_NB_DATA    7
#define A5101D_CMD1_DATA_SIZE  4

T_DATAFIELD* A5101D_CASES [] = {
A5101D_CMD1 ,
{0 }
};

// function type :0x1E : see A5-10-1B 
//{ 0xA5, 0x10, 0x1E, "Room Operating Panel                                                            " , "see A5-10-1B                                                                    " },

T_DATAFIELD* A5101E_CASES [] = {
{0 }
};

// function type :0x1F : Temperature Sensor, Set Point, Fan Speed, Occupancy and Unoccupancy Control 
//{ 0xA5, 0x10, 0x1F, "Room Operating Panel                                                            " , "Temperature Sensor, Set Point, Fan Speed, Occupancy and Unoccupancy Control     " },

// TITLE:
// DESC :
T_DATAFIELD A5101F_CMD1 [] = {
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "Turn-switch for fan speed"},
{  8 , 8 ,     0 ,   255 ,     0 ,   255 , "SP"       , "Set Point"},
{ 16 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 25 , 1 ,     0 ,     0 ,     0 ,     0 , "TMP_F"    , "Temperature flag"},//Value: 1 = Temperature present 
                                                                            //Value: 0 = Temperature absent 
{ 26 , 1 ,     0 ,     0 ,     0 ,     0 , "SP_F"     , "Set point flag"},//Value: 1 = Set point present 
                                                                          //Value: 0 = Set point absent 
{ 27 , 1 ,     0 ,     0 ,     0 ,     0 , "FAN_F"    , "Fan speed flag"},//Value: 1 = Fan speed present 
                                                                          //Value: 0 = Fan speed absent 
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "UNOCC"    , "Unoccupancy"},//Value: 0 = Button pressed 
                                                                       //Value: 1 = Button released 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy"},//Value: 0 = Button pressed 
                                                                     //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5101F_CMD1_FAN        0
#define A5101F_CMD1_SP         1
#define A5101F_CMD1_TMP        2
#define A5101F_CMD1_TMP_F      3
#define A5101F_CMD1_SP_F       4
#define A5101F_CMD1_FAN_F      5
#define A5101F_CMD1_LRNB       6
#define A5101F_CMD1_UNOCC      7
#define A5101F_CMD1_OCC        8
#define A5101F_CMD1_NB_DATA    9
#define A5101F_CMD1_DATA_SIZE  4

T_DATAFIELD* A5101F_CASES [] = {
A5101F_CMD1 ,
{0 }
};

// function type :0x20 : Temperature and Set Point with Special Heating States 
//{ 0xA5, 0x10, 0x20, "Room Operating Panel                                                            " , "Temperature and Set Point with Special Heating States                           " },

// TITLE:
// DESC :
T_DATAFIELD A51020_CMD1 [] = {
{  0 , 8 ,     0 ,   255 ,     0 ,   255 , "SP"       , "Set Point"},
{ 16 , 8 ,     0 ,   250 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 25 , 2 ,     0 ,     0 ,     0 ,     0 , "SPM"      , "Set point mode"},//Value: 0 = Room temperature defined by SP 
                                                                          //Value: 1 = Frost protection 
                                                                          //Value: 2 = Automatic control (e.g. defined by time program) 
                                                                          //Value: 3 = Reserved 
{ 27 , 1 ,     0 ,     0 ,     0 ,     0 , "BATT"     , "Battery state"},//Value: 0 = Battery ok 
                                                                         //Value: 1 = Battery low 
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "ACT"      , "User activity"},//Value: 0 = No user action 
                                                                         //Value: 1 = User interaction 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51020_CMD1_SP         0
#define A51020_CMD1_TMP        1
#define A51020_CMD1_SPM        2
#define A51020_CMD1_BATT       3
#define A51020_CMD1_LRNB       4
#define A51020_CMD1_ACT        5
#define A51020_CMD1_NB_DATA    6
#define A51020_CMD1_DATA_SIZE  4

T_DATAFIELD* A51020_CASES [] = {
A51020_CMD1 ,
{0 }
};

// function type :0x21 : Temperature, Humidity and Set Point with Special Heating States 
//{ 0xA5, 0x10, 0x21, "Room Operating Panel                                                            " , "Temperature, Humidity and Set Point with Special Heating States                 " },

// TITLE:
// DESC :
T_DATAFIELD A51021_CMD1 [] = {
{  0 , 8 ,     0 ,   255 ,     0 ,   255 , "SP"       , "Set Point"},
{  8 , 8 ,     0 ,   250 ,     0 ,   100 , "HUM"      , "Humidity"},
{ 16 , 8 ,     0 ,   250 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 25 , 2 ,     0 ,     0 ,     0 ,     0 , "SPM"      , "Set point mode"},//Value: 0 = Room temperature defined by SP 
                                                                          //Value: 1 = Frost protection 
                                                                          //Value: 2 = Automatic control 
                                                                          //Value: 3 = Reserved 
{ 27 , 1 ,     0 ,     0 ,     0 ,     0 , "BATT"     , "Battery state"},//Value: 0 = Battery ok 
                                                                         //Value: 1 = Battery low 
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "ACT"      , "User activity"},//Value: 0 = No user action 
                                                                         //Value: 1 = User interaction 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51021_CMD1_SP         0
#define A51021_CMD1_HUM        1
#define A51021_CMD1_TMP        2
#define A51021_CMD1_SPM        3
#define A51021_CMD1_BATT       4
#define A51021_CMD1_LRNB       5
#define A51021_CMD1_ACT        6
#define A51021_CMD1_NB_DATA    7
#define A51021_CMD1_DATA_SIZE  4

T_DATAFIELD* A51021_CASES [] = {
A51021_CMD1 ,
{0 }
};

// function type :0x22 : Temperature, Setpoint, Humidity and Fan Speed 
//{ 0xA5, 0x10, 0x22, "Room Operating Panel                                                            " , "Temperature, Setpoint, Humidity and Fan Speed                                   " },

// TITLE:
// DESC :
T_DATAFIELD A51022_CMD1 [] = {
{  0 , 8 ,     0 ,   255 ,     0 ,   255 , "SP"       , "Relative Setpoint"},
{  8 , 8 ,     0 ,   250 ,     0 ,   100 , "HUM"      , "Humidity"},
{ 16 , 8 ,     0 ,   250 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 24 , 3 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "Fanspeed"},//Value: 0 = Auto 
                                                                    //Value: 1 = Speed 0 / OFF 
                                                                    //Value: 2 = Speed 1 
                                                                    //Value: 3 = Speed 2 
                                                                    //Value: 4 = Speed 3 
                                                                    //Value: 5 ... 7 = Reserved 
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51022_CMD1_SP         0
#define A51022_CMD1_HUM        1
#define A51022_CMD1_TMP        2
#define A51022_CMD1_FAN        3
#define A51022_CMD1_LRNB       4
#define A51022_CMD1_NB_DATA    5
#define A51022_CMD1_DATA_SIZE  4

T_DATAFIELD* A51022_CASES [] = {
A51022_CMD1 ,
{0 }
};

// function type :0x23 : Temperature, Setpoint, Humidity, Fan Speed and Occupancy 
//{ 0xA5, 0x10, 0x23, "Room Operating Panel                                                            " , "Temperature, Setpoint, Humidity, Fan Speed and Occupancy                        " },

// TITLE:
// DESC :
T_DATAFIELD A51023_CMD1 [] = {
{  0 , 8 ,     0 ,   255 ,     0 ,   255 , "SP"       , "Relative Setpoint"},
{  8 , 8 ,     0 ,   250 ,     0 ,   100 , "HUM"      , "Humidity"},
{ 16 , 8 ,     0 ,   250 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 24 , 3 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "Fanspeed"},//Value: 0 = Auto 
                                                                    //Value: 1 = Speed 0 / OFF 
                                                                    //Value: 2 = Speed 1 
                                                                    //Value: 3 = Speed 2 
                                                                    //Value: 4 = Speed 3 
                                                                    //Value: 5 ... 7 = Reserved 
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy"},//Value: 0 = Unoccupied 
                                                                     //Value: 1 = Occupied 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51023_CMD1_SP         0
#define A51023_CMD1_HUM        1
#define A51023_CMD1_TMP        2
#define A51023_CMD1_FAN        3
#define A51023_CMD1_LRNB       4
#define A51023_CMD1_OCC        5
#define A51023_CMD1_NB_DATA    6
#define A51023_CMD1_DATA_SIZE  4

T_DATAFIELD* A51023_CASES [] = {
A51023_CMD1 ,
{0 }
};

// function number :0x11 : Controller Status 
// function type :0x01 : Lighting Controller 
//{ 0xA5, 0x11, 0x01, "Controller Status                                                               " , "Lighting Controller                                                             " },

// TITLE:
// DESC :
T_DATAFIELD A51101_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,   510 , "ILL"      , "Illumination"},
{  8 , 8 ,     0 ,   255 ,     0 ,   255 , "ISP"      , "Illumination Set Point"},
{ 16 , 8 ,     0 ,   255 ,     0 ,   255 , "DIM"      , "Dimming Output Level"},
{ 24 , 1 ,     0 ,     0 ,     0 ,     0 , "REP"      , "Repeater"},//Value: 0 = disabled 
                                                                    //Value: 1 = enabled 
{ 25 , 1 ,     0 ,     0 ,     0 ,     0 , "PRT"      , "Power Relay Timer"},//Value: 0 = disabled 
                                                                             //Value: 1 = enabled 
{ 26 , 1 ,     0 ,     0 ,     0 ,     0 , "DHV"      , "Daylight Harvesting"},//Value: 0 = disabled 
                                                                               //Value: 1 = enabled 
{ 27 , 1 ,     0 ,     0 ,     0 ,     0 , "EDIM"     , "Dimming"},//Value: 0 = switching load 
                                                                   //Value: 1 = dimming load 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "MGC"      , "Magnet Contact"},//Value: 0 = open 
                                                                          //Value: 1 = closed 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy"},//Value: 0 = unoccupied 
                                                                     //Value: 1 = occupied 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "PWR"      , "Power Relay"},//Value: 0 = off 
                                                                       //Value: 1 = on 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51101_CMD1_LRNB       0
#define A51101_CMD1_ILL        1
#define A51101_CMD1_ISP        2
#define A51101_CMD1_DIM        3
#define A51101_CMD1_REP        4
#define A51101_CMD1_PRT        5
#define A51101_CMD1_DHV        6
#define A51101_CMD1_EDIM       7
#define A51101_CMD1_MGC        8
#define A51101_CMD1_OCC        9
#define A51101_CMD1_PWR        10
#define A51101_CMD1_NB_DATA    11
#define A51101_CMD1_DATA_SIZE  4

T_DATAFIELD* A51101_CASES [] = {
A51101_CMD1 ,
{0 }
};

// function type :0x02 : Temperature Controller Output 
//{ 0xA5, 0x11, 0x02, "Controller Status                                                               " , "Temperature Controller Output                                                   " },

// TITLE:
// DESC :
T_DATAFIELD A51102_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,   100 , "CVAR"     , "Control Variable"},
{  8 , 8 ,     0 ,     0 ,     0 ,     0 , "FAN"      , "FanStage"},//Value: 0 = Stage 0 Manual 
                                                                    //Value: 1 = Stage 1 Manual 
                                                                    //Value: 2 = Stage 2 Manual 
                                                                    //Value: 3 = Stage 3 Manual 
                                                                    //Value: 16 = Stage 0 Automatic 
                                                                    //Value: 17 = Stage 1 Automatic 
                                                                    //Value: 18 = Stage 2 Automatic 
                                                                    //Value: 19 = Stage 3 Automatic 
                                                                    //Value: 255 = Not Available 
{ 16 , 8 ,     0 ,   255 ,     0 ,    51 , "ASP"      , "Actual Setpoint"},
{ 24 , 1 ,     0 ,     0 ,     0 ,     0 , "ALR"      , "Alarm"},//Value: 0 = No alarm 
                                                                 //Value: 1 = Alarm 
{ 25 , 2 ,     0 ,     0 ,     0 ,     0 , "CTM"      , "Controller mode"},//Value: 1 = Heating 
                                                                           //Value: 2 = Cooling 
                                                                           //Value: 3 = Off 
{ 27 , 1 ,     0 ,     0 ,     0 ,     0 , "CST"      , "Controller state"},//Value: 0 = Automatic 
                                                                            //Value: 1 = Override 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "ERH"      , "Energy hold-off"},//Value: 0 = Normal 
                                                                           //Value: 1 = Energy hold-off/ Dew point 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "RO"       , "Room occupancy"},//Value: 0 = Occupied 
                                                                          //Value: 1 = Unoccupied 
                                                                          //Value: 2 = StandBy 
                                                                          //Value: 3 = Frost 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51102_CMD1_LRNB       0
#define A51102_CMD1_CVAR       1
#define A51102_CMD1_FAN        2
#define A51102_CMD1_ASP        3
#define A51102_CMD1_ALR        4
#define A51102_CMD1_CTM        5
#define A51102_CMD1_CST        6
#define A51102_CMD1_ERH        7
#define A51102_CMD1_RO         8
#define A51102_CMD1_NB_DATA    9
#define A51102_CMD1_DATA_SIZE  4

T_DATAFIELD* A51102_CASES [] = {
A51102_CMD1 ,
{0 }
};

// function type :0x03 : Blind Status 
//{ 0xA5, 0x11, 0x03, "Controller Status                                                               " , "Blind Status                                                                    " },

// TITLE:
// DESC :
T_DATAFIELD A51103_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   100 ,     0 ,   100 , "BSP"      , "Blind/shutter pos."},
{  8 , 1 ,     0 ,     0 ,     0 ,     0 , "AS"       , "Angle sign"},//Value: 0 = Positive sign 
                                                                      //Value: 1 = Negative sign 
{  9 , 7 ,     0 ,    90 ,     0 ,   180 , "AN"       , "Angle"},
{ 16 , 1 ,     0 ,     0 ,     0 ,     0 , "PVF"      , "Position value flag"},//Value: 0 = No Position value available 
                                                                               //Value: 1 = Position value available 
{ 17 , 1 ,     0 ,     0 ,     0 ,     0 , "AVF"      , "Angle value flag"},//Value: 0 = No Angle value available 
                                                                            //Value: 1 = Angle value available 
{ 18 , 2 ,     0 ,     0 ,     0 ,     0 , "ES"       , "Error state"},//Value: 0 = No error present 
                                                                       //Value: 1 = End-positions are not configured 
                                                                       //Value: 2 = Internal failure 
                                                                       //Value: 3 = Not used 
{ 20 , 2 ,     0 ,     0 ,     0 ,     0 , "EP"       , "End-position"},//Value: 0 = No End-position available 
                                                                        //Value: 1 = No End-position reached 
                                                                        //Value: 2 = Blind fully open 
                                                                        //Value: 3 = Blind fully closed 
{ 22 , 2 ,     0 ,     0 ,     0 ,     0 , "ST"       , "Status"},//Value: 0 = No Status available 
                                                                  //Value: 1 = Blind is stopped 
                                                                  //Value: 2 = Blind opens 
                                                                  //Value: 3 = Blind closes 
{ 24 , 1 ,     0 ,     0 ,     0 ,     0 , "SM"       , "Service Mode"},//Value: 0 = Normal mode 
                                                                        //Value: 1 = Service mode is activated (For example for maintenance) 
{ 25 , 1 ,     0 ,     0 ,     0 ,     0 , "MOTP"     , "Mode of the position"},//Value: 0 = Normal mode: 
                                                                                //Value: 1 = Inverse mode: 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51103_CMD1_LRNB       0
#define A51103_CMD1_BSP        1
#define A51103_CMD1_AS         2
#define A51103_CMD1_AN         3
#define A51103_CMD1_PVF        4
#define A51103_CMD1_AVF        5
#define A51103_CMD1_ES         6
#define A51103_CMD1_EP         7
#define A51103_CMD1_ST         8
#define A51103_CMD1_SM         9
#define A51103_CMD1_MOTP       10
#define A51103_CMD1_NB_DATA    11
#define A51103_CMD1_DATA_SIZE  4

T_DATAFIELD* A51103_CASES [] = {
A51103_CMD1 ,
{0 }
};

// function type :0x04 : Extended Lighting Status 
//{ 0xA5, 0x11, 0x04, "Controller Status                                                               " , "Extended Lighting Status                                                        " },

// TITLE:
// DESC :
T_DATAFIELD A51104_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "P1"       , "Parameter 1"},
{  8 , 8 ,     0 ,     0 ,     0 ,     0 , "P2"       , "Parameter 2"},
{ 16 , 8 ,     0 ,     0 ,     0 ,     0 , "P3"       , "Parameter 3"},
{ 24 , 1 ,     0 ,     0 ,     0 ,     0 , "SM"       , "Service Mode"},//Value: 0 = Normal mode 
                                                                        //Value: 1 = Service mode is activated. 
{ 25 , 1 ,     0 ,     0 ,     0 ,     0 , "OHF"      , "Operating hours flag"},//Value: 0 = No lamp operating hours available 
                                                                                //Value: 1 = Lamp operating hours available 
{ 26 , 2 ,     0 ,     0 ,     0 ,     0 , "ES"       , "Error state"},//Value: 0 = No error present 
                                                                       //Value: 1 = Lamp-failure 
                                                                       //Value: 2 = Internal failure 
                                                                       //Value: 3 = Failure on the external periphery 
{ 29 , 2 ,     0 ,     0 ,     0 ,     0 , "PM"       , "Parameter Mode"},//Value: 0 = 8 Bit Dimmer Value and Lamp operating hours 
                                                                          //Value: 1 = RGB Value 
                                                                          //Value: 2 = Energy metering value 
                                                                          //Value: 3 = Not used 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "ST"       , "Status"},//Value: 0 = Lighting off 
                                                                  //Value: 1 = Lighting on 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51104_CMD1_LRNB       0
#define A51104_CMD1_P1         1
#define A51104_CMD1_P2         2
#define A51104_CMD1_P3         3
#define A51104_CMD1_SM         4
#define A51104_CMD1_OHF        5
#define A51104_CMD1_ES         6
#define A51104_CMD1_PM         7
#define A51104_CMD1_ST         8
#define A51104_CMD1_NB_DATA    9
#define A51104_CMD1_DATA_SIZE  4

T_DATAFIELD* A51104_CASES [] = {
A51104_CMD1 ,
{0 }
};

// function type :0x05 : Dual-Channel Switch Actuator 
//{ 0xA5, 0x11, 0x05, "Controller Status                                                               " , "Dual-Channel Switch Actuator                                                    " },

// TITLE:
// DESC :
T_DATAFIELD A51105_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 0 = Request 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51105_CMD1_LRNB       0
#define A51105_CMD1_MT         1
#define A51105_CMD1_NB_DATA    2
#define A51105_CMD1_DATA_SIZE  4

// TITLE:
// DESC :
T_DATAFIELD A51105_CMD2 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 25 , 3 ,     0 ,     0 ,     0 ,     0 , "WM"       , "Working Mode"},//Value: 0b001 = mode 1 
{ 29 , 2 ,     0 ,     0 ,     0 ,     0 , "RS"       , "Relay Status"},//Value: 0b00 = CH1 off, CH2 off 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 1 = Status Report 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51105_CMD2_LRNB       0
#define A51105_CMD2_WM         1
#define A51105_CMD2_RS         2
#define A51105_CMD2_MT         3
#define A51105_CMD2_NB_DATA    4
#define A51105_CMD2_DATA_SIZE  4

T_DATAFIELD* A51105_CASES [] = {
A51105_CMD1 ,
A51105_CMD2 ,
{0 }
};

// function number :0x12 : Automated Meter Reading (AMR) 
// function type :0x00 : Counter 
//{ 0xA5, 0x12, 0x00, "Automated Meter Reading (AMR)                                                   " , "Counter                                                                         " },

// TITLE:
// DESC :
T_DATAFIELD A51200_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 ,24 ,     0 , 16777215 ,     0 ,     0 , "MR"       , "Meter reading"},
{ 24 , 4 ,     0 ,    15 ,     0 ,    15 , "CH"       , "Measurement channel"},
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "DT"       , "Data type (unit)"},//Value: 0 = Cumulative value 
                                                                            //Value: 1 = Current value 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "DIV"      , "Divisor (scale)"},//Value: 0 = x/1 
                                                                           //Value: 1 = x/10 
                                                                           //Value: 2 = x/100 
                                                                           //Value: 3 = x/1000 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51200_CMD1_LRNB       0
#define A51200_CMD1_MR         1
#define A51200_CMD1_CH         2
#define A51200_CMD1_DT         3
#define A51200_CMD1_DIV        4
#define A51200_CMD1_NB_DATA    5
#define A51200_CMD1_DATA_SIZE  4

T_DATAFIELD* A51200_CASES [] = {
A51200_CMD1 ,
{0 }
};

// function type :0x01 : Electricity 
//{ 0xA5, 0x12, 0x01, "Automated Meter Reading (AMR)                                                   " , "Electricity                                                                     " },

// TITLE:
// DESC :
T_DATAFIELD A51201_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 ,24 ,     0 , 16777215 ,     0 ,     0 , "MR"       , "Meter reading"},
{ 24 , 4 ,     0 ,    15 ,     0 ,    15 , "TI"       , "Tariff info"},
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "DT"       , "Data type (unit)"},//Value: 0 = Cumulative value 
                                                                            //Value: 1 = Current value 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "DIV"      , "Divisor (scale)"},//Value: 0 = x/1 
                                                                           //Value: 1 = x/10 
                                                                           //Value: 2 = x/100 
                                                                           //Value: 3 = x/1000 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51201_CMD1_LRNB       0
#define A51201_CMD1_MR         1
#define A51201_CMD1_TI         2
#define A51201_CMD1_DT         3
#define A51201_CMD1_DIV        4
#define A51201_CMD1_NB_DATA    5
#define A51201_CMD1_DATA_SIZE  4

T_DATAFIELD* A51201_CASES [] = {
A51201_CMD1 ,
{0 }
};

// function type :0x02 : Gas 
//{ 0xA5, 0x12, 0x02, "Automated Meter Reading (AMR)                                                   " , "Gas                                                                             " },

// TITLE:
// DESC :
T_DATAFIELD A51202_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 ,24 ,     0 , 16777215 ,     0 ,     0 , "MR"       , "meter reading"},
{ 24 , 4 ,     0 ,    15 ,     0 ,    15 , "TI"       , "Tariff info"},
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "DT"       , "data type (unit)"},//Value: 0 = Cumulative value 
                                                                            //Value: 1 = Current value 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "DIV"      , "divisor (scale)"},//Value: 0 = x/1 
                                                                           //Value: 1 = x/10 
                                                                           //Value: 2 = x/100 
                                                                           //Value: 3 = x/1000 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51202_CMD1_LRNB       0
#define A51202_CMD1_MR         1
#define A51202_CMD1_TI         2
#define A51202_CMD1_DT         3
#define A51202_CMD1_DIV        4
#define A51202_CMD1_NB_DATA    5
#define A51202_CMD1_DATA_SIZE  4

T_DATAFIELD* A51202_CASES [] = {
A51202_CMD1 ,
{0 }
};

// function type :0x03 : Water 
//{ 0xA5, 0x12, 0x03, "Automated Meter Reading (AMR)                                                   " , "Water                                                                           " },

// TITLE:
// DESC :
T_DATAFIELD A51203_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 ,24 ,     0 , 16777215 ,     0 ,     0 , "MR"       , "Meter reading"},
{ 24 , 4 ,     0 ,    15 ,     0 ,    15 , "TI"       , "Tariff info"},
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "DT"       , "Data type (unit)"},//Value: 0 = Cumulative value 
                                                                            //Value: 1 = Current value 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "DIV"      , "Divisor (scale)"},//Value: 0 = x/1 
                                                                           //Value: 1 = x/10 
                                                                           //Value: 2 = x/100 
                                                                           //Value: 3 = x/1000 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51203_CMD1_LRNB       0
#define A51203_CMD1_MR         1
#define A51203_CMD1_TI         2
#define A51203_CMD1_DT         3
#define A51203_CMD1_DIV        4
#define A51203_CMD1_NB_DATA    5
#define A51203_CMD1_DATA_SIZE  4

T_DATAFIELD* A51203_CASES [] = {
A51203_CMD1 ,
{0 }
};

// function type :0x04 : Temperature and Load Sensor 
//{ 0xA5, 0x12, 0x04, "Automated Meter Reading (AMR)                                                   " , "Temperature and Load Sensor                                                     " },

// TITLE:
// DESC :
T_DATAFIELD A51204_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 ,14 ,     0 , 16383 ,     0 , 16383 , "MR"       , "Meter reading"},
{ 16 , 8 ,     0 ,   255 ,   -40 ,    40 , "TMP"      , "Temperature"},
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "BL"       , "Battery Level"},//Value: 0 = 100-75% 
                                                                         //Value: 1 = 75-50% 
                                                                         //Value: 2 = 50-25% 
                                                                         //Value: 3 = 25-0% 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51204_CMD1_LRNB       0
#define A51204_CMD1_MR         1
#define A51204_CMD1_TMP        2
#define A51204_CMD1_BL         3
#define A51204_CMD1_NB_DATA    4
#define A51204_CMD1_DATA_SIZE  4

T_DATAFIELD* A51204_CASES [] = {
A51204_CMD1 ,
{0 }
};

// function type :0x05 : Temperature and Container Sensor 
//{ 0xA5, 0x12, 0x05, "Automated Meter Reading (AMR)                                                   " , "Temperature and Container Sensor                                                " },

// TITLE:
// DESC :
T_DATAFIELD A51205_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 1 ,     0 ,     0 ,     0 ,     0 , "PS0"      , "Position Sensor 0"},//Value: 0 = not possessed 
                                                                             //Value: 1 = possessed 
{  1 , 1 ,     0 ,     0 ,     0 ,     0 , "PS1"      , "Position Sensor 1"},//Value: 0 = not possessed 
                                                                             //Value: 1 = possessed 
{  2 , 1 ,     0 ,     0 ,     0 ,     0 , "PS2"      , "Position Sensor 2"},//Value: 0 = not possessed 
                                                                             //Value: 1 = possessed 
{  3 , 1 ,     0 ,     0 ,     0 ,     0 , "PS3"      , "Position Sensor 3"},//Value: 0 = not possessed 
                                                                             //Value: 1 = possessed 
{  4 , 1 ,     0 ,     0 ,     0 ,     0 , "PS4"      , "Position Sensor 4"},//Value: 0 = not possessed 
                                                                             //Value: 1 = possessed 
{  5 , 1 ,     0 ,     0 ,     0 ,     0 , "PS5"      , "Position Sensor 5"},//Value: 0 = not possessed 
                                                                             //Value: 1 = possessed 
{  6 , 1 ,     0 ,     0 ,     0 ,     0 , "PS6"      , "Position Sensor 6"},//Value: 0 = not possessed 
                                                                             //Value: 1 = possessed 
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "PS7"      , "Position Sensor 7"},//Value: 0 = not possessed 
                                                                             //Value: 1 = possessed 
{  8 , 1 ,     0 ,     0 ,     0 ,     0 , "PS8"      , "Position Sensor 8"},//Value: 0 = not possessed 
                                                                             //Value: 1 = possessed 
{  9 , 1 ,     0 ,     0 ,     0 ,     0 , "PS9"      , "Position Sensor 9"},//Value: 0 = not possessed 
                                                                             //Value: 1 = possessed 
{ 16 , 8 ,     0 ,   255 ,   -40 ,    40 , "TMP"      , "Temperature"},
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "BL"       , "Battery Level"},//Value: 0 = 100-75% 
                                                                         //Value: 1 = 75-50% 
                                                                         //Value: 2 = 50-25% 
                                                                         //Value: 3 = 25-0% 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51205_CMD1_LRNB       0
#define A51205_CMD1_PS0        1
#define A51205_CMD1_PS1        2
#define A51205_CMD1_PS2        3
#define A51205_CMD1_PS3        4
#define A51205_CMD1_PS4        5
#define A51205_CMD1_PS5        6
#define A51205_CMD1_PS6        7
#define A51205_CMD1_PS7        8
#define A51205_CMD1_PS8        9
#define A51205_CMD1_PS9        10
#define A51205_CMD1_TMP        11
#define A51205_CMD1_BL         12
#define A51205_CMD1_NB_DATA    13
#define A51205_CMD1_DATA_SIZE  4

T_DATAFIELD* A51205_CASES [] = {
A51205_CMD1 ,
{0 }
};

// function type :0x10 : Current meter 16 channels 
//{ 0xA5, 0x12, 0x10, "Automated Meter Reading (AMR)                                                   " , "Current meter 16 channels                                                       " },

// TITLE:
// DESC :
T_DATAFIELD A51210_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 ,24 ,     0 , 16777215 ,     0 ,     0 , "MR"       , "Meter reading"},
{ 24 , 4 ,     0 ,    15 ,     0 ,    15 , "CH"       , "Measurement channel"},
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "DT"       , "Data type (unit)"},//Value: 0 = Cumulative value 
                                                                            //Value: 1 = Current value 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "DIV"      , "Divisor (scale)"},//Value: 0 = x/1 
                                                                           //Value: 1 = x/10 
                                                                           //Value: 2 = x/100 
                                                                           //Value: 3 = x/1000 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51210_CMD1_LRNB       0
#define A51210_CMD1_MR         1
#define A51210_CMD1_CH         2
#define A51210_CMD1_DT         3
#define A51210_CMD1_DIV        4
#define A51210_CMD1_NB_DATA    5
#define A51210_CMD1_DATA_SIZE  4

T_DATAFIELD* A51210_CASES [] = {
A51210_CMD1 ,
{0 }
};

// function number :0x13 : Environmental Applications 
// function type :0x01 : Weather Station 
//{ 0xA5, 0x13, 0x01, "Environmental Applications                                                      " , "Weather Station                                                                 " },

// TITLE:
// DESC :
T_DATAFIELD A51301_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,   999 , "DWS"      , "Dawn sensor"},
{  8 , 8 ,     0 ,   255 ,   -40 ,    80 , "TMP"      , "Temperature"},
{ 16 , 8 ,     0 ,   255 ,     0 ,    70 , "WND"      , "Wind speed"},
{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "ID"       , "Identifier"},//Value: 0x1 = (null) 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "D_N"      , "Day / Night"},//Value: 0 = Day 
                                                                       //Value: 1 = Night 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "RAN"      , "Rain Indication"},//Value: 0 = No Rain 
                                                                           //Value: 1 = Rain 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51301_CMD1_LRNB       0
#define A51301_CMD1_DWS        1
#define A51301_CMD1_TMP        2
#define A51301_CMD1_WND        3
#define A51301_CMD1_ID         4
#define A51301_CMD1_D_N        5
#define A51301_CMD1_RAN        6
#define A51301_CMD1_NB_DATA    7
#define A51301_CMD1_DATA_SIZE  4

T_DATAFIELD* A51301_CASES [] = {
A51301_CMD1 ,
{0 }
};

// function type :0x02 : Sun Intensity 
//{ 0xA5, 0x13, 0x02, "Environmental Applications                                                      " , "Sun Intensity                                                                   " },

// TITLE:
// DESC :
T_DATAFIELD A51302_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,   150 , "SNW"      , "Sun - West"},
{  8 , 8 ,     0 ,   255 ,     0 ,   150 , "SNS"      , "Sun - South"},
{ 16 , 8 ,     0 ,   255 ,     0 ,   150 , "SNE"      , "Sun - East"},
{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "ID"       , "Identifier"},//Value: 0x2 = (null) 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "HEM"      , "Hemisphere"},//Value: 0 = North 
                                                                      //Value: 1 = South 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51302_CMD1_LRNB       0
#define A51302_CMD1_SNW        1
#define A51302_CMD1_SNS        2
#define A51302_CMD1_SNE        3
#define A51302_CMD1_ID         4
#define A51302_CMD1_HEM        5
#define A51302_CMD1_NB_DATA    6
#define A51302_CMD1_DATA_SIZE  4

T_DATAFIELD* A51302_CASES [] = {
A51302_CMD1 ,
{0 }
};

// function type :0x03 : Date Exchange 
//{ 0xA5, 0x13, 0x03, "Environmental Applications                                                      " , "Date Exchange                                                                   " },

// TITLE:
// DESC :
T_DATAFIELD A51303_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  3 , 5 ,     1 ,    31 ,     1 ,    31 , "DY"       , "Day"},
{ 12 , 4 ,     1 ,    12 ,     1 ,    12 , "MTH"      , "Month"},
{ 17 , 7 ,     0 ,    99 ,  2000 ,  2099 , "YR"       , "Year"},
{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "ID"       , "Identifier"},//Value: 0x3 = (null) 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "SRC"      , "Source"},//Value: 0 = Real Time Clock 
                                                                  //Value: 1 = GPS or equivalent (e.g. DCF77, WWV) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51303_CMD1_LRNB       0
#define A51303_CMD1_DY         1
#define A51303_CMD1_MTH        2
#define A51303_CMD1_YR         3
#define A51303_CMD1_ID         4
#define A51303_CMD1_SRC        5
#define A51303_CMD1_NB_DATA    6
#define A51303_CMD1_DATA_SIZE  4

T_DATAFIELD* A51303_CASES [] = {
A51303_CMD1 ,
{0 }
};

// function type :0x04 : Time and Day Exchange 
//{ 0xA5, 0x13, 0x04, "Environmental Applications                                                      " , "Time and Day Exchange                                                           " },

// TITLE:
// DESC :
T_DATAFIELD A51304_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "WDY"      , "Weekday"},//Value: 1 = Monday 
                                                                   //Value: 2 = Tuesday 
                                                                   //Value: 3 = Wednesday 
                                                                   //Value: 4 = Thursday 
                                                                   //Value: 5 = Friday 
                                                                   //Value: 6 = Saturday 
                                                                   //Value: 7 = Sunday 
{  3 , 5 ,     0 ,    23 ,     0 ,    23 , "HR"       , "Hour"},
{ 10 , 6 ,     0 ,    59 ,     0 ,    59 , "MIN"      , "Minute"},
{ 18 , 6 ,     0 ,    59 ,     0 ,    59 , "SEC"      , "Second"},
{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "ID"       , "Identifier"},//Value: 0x4 = (null) 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "TMF"      , "Time Format"},//Value: 0 = 24 hours 
                                                                       //Value: 1 = 12 hours 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "A_PM"     , "AM/PM"},//Value: 0 = AM 
                                                                 //Value: 1 = PM 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "SRC"      , "Source"},//Value: 0 = Real Time Clock 
                                                                  //Value: 1 = GPS or equivalent (e.g. DCF77, WWV) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51304_CMD1_LRNB       0
#define A51304_CMD1_WDY        1
#define A51304_CMD1_HR         2
#define A51304_CMD1_MIN        3
#define A51304_CMD1_SEC        4
#define A51304_CMD1_ID         5
#define A51304_CMD1_TMF        6
#define A51304_CMD1_A_PM       7
#define A51304_CMD1_SRC        8
#define A51304_CMD1_NB_DATA    9
#define A51304_CMD1_DATA_SIZE  4

T_DATAFIELD* A51304_CASES [] = {
A51304_CMD1 ,
{0 }
};

// function type :0x05 : Direction Exchange 
//{ 0xA5, 0x13, 0x05, "Environmental Applications                                                      " , "Direction Exchange                                                              " },

// TITLE:
// DESC :
T_DATAFIELD A51305_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   180 ,   -90 ,    90 , "ELV"      , "Elevation"},
{ 15 , 9 ,     0 ,   359 ,     0 ,   359 , "AZM"      , "Azimut"},
{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "ID"       , "Identifier"},//Value: 0x5 = (null) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51305_CMD1_LRNB       0
#define A51305_CMD1_ELV        1
#define A51305_CMD1_AZM        2
#define A51305_CMD1_ID         3
#define A51305_CMD1_NB_DATA    4
#define A51305_CMD1_DATA_SIZE  4

T_DATAFIELD* A51305_CASES [] = {
A51305_CMD1 ,
{0 }
};

// function type :0x06 : Geographic Position Exchange 
//{ 0xA5, 0x13, 0x06, "Environmental Applications                                                      " , "Geographic Position Exchange                                                    " },

// TITLE:
// DESC :
T_DATAFIELD A51306_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "LAT_MSB_" , "Latitude(MSB)"},
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "LOT_MSB_" , "Longitude(MSB)"},
{  8 , 8 ,     0 ,  4095 ,   -90 ,    90 , "LAT_LSB_" , "Latitude(LSB)"},
{ 16 , 8 ,     0 ,  4095 ,  -180 ,   180 , "LOT_LSB_" , "Longitude(LSB)"},
{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "ID"       , "Identifier"},//Value: 0x6 = (null) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51306_CMD1_LRNB       0
#define A51306_CMD1_LAT_MSB_   1
#define A51306_CMD1_LOT_MSB_   2
#define A51306_CMD1_LAT_LSB_   3
#define A51306_CMD1_LOT_LSB_   4
#define A51306_CMD1_ID         5
#define A51306_CMD1_NB_DATA    6
#define A51306_CMD1_DATA_SIZE  4

T_DATAFIELD* A51306_CASES [] = {
A51306_CMD1 ,
{0 }
};

// function type :0x07 : Wind Sensor 
//{ 0xA5, 0x13, 0x07, "Environmental Applications                                                      " , "Wind Sensor                                                                     " },

// TITLE:
// DESC :
T_DATAFIELD A51307_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "WD"       , "Wind Direction"},//Value: 0 = NNE 
                                                                          //Value: 1 = NE 
                                                                          //Value: 2 = ENE 
                                                                          //Value: 3 = E 
                                                                          //Value: 4 = ESE 
                                                                          //Value: 5 = SE 
                                                                          //Value: 6 = SSE 
                                                                          //Value: 7 = S 
                                                                          //Value: 8 = SSW 
                                                                          //Value: 9 = SW 
                                                                          //Value: 10 = WSW 
                                                                          //Value: 11 = W 
                                                                          //Value: 12 = WNW 
                                                                          //Value: 13 = NW 
                                                                          //Value: 14 = NNW 
                                                                          //Value: 15 = N 
{  8 , 8 ,     0 ,   255 ,     1 ,   200 , "AWS"      , "Average Wind Speed"},
{ 16 , 8 ,     0 ,   255 ,     1 ,   200 , "MWS"      , "Maximum Wind Speed"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "BS"       , "Battery Status"},//Value: 0 = Battery okay 
                                                                          //Value: 1 = Battery low 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51307_CMD1_LRNB       0
#define A51307_CMD1_WD         1
#define A51307_CMD1_AWS        2
#define A51307_CMD1_MWS        3
#define A51307_CMD1_BS         4
#define A51307_CMD1_NB_DATA    5
#define A51307_CMD1_DATA_SIZE  4

T_DATAFIELD* A51307_CASES [] = {
A51307_CMD1 ,
{0 }
};

// function type :0x08 : Rain Sensor 
//{ 0xA5, 0x13, 0x08, "Environmental Applications                                                      " , "Rain Sensor                                                                     " },

// TITLE:
// DESC :
T_DATAFIELD A51308_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  1 , 1 ,     0 ,     0 ,     0 ,     0 , "RAS"      , "Rainfall Adjust Sign"},//Value: 0 = Negative 
                                                                                //Value: 1 = Positive 
{  2 , 6 ,     0 ,     0 ,     0 ,     0 , "RFA"      , "Rainfall Adjust"},
{  8 ,16 ,     0 , 65535 ,     0 , 65535 , "RFC"      , "Rainfall Count"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "BS"       , "Battery Status"},//Value: 0 = Battery okay 
                                                                          //Value: 1 = Battery low 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51308_CMD1_LRNB       0
#define A51308_CMD1_RAS        1
#define A51308_CMD1_RFA        2
#define A51308_CMD1_RFC        3
#define A51308_CMD1_BS         4
#define A51308_CMD1_NB_DATA    5
#define A51308_CMD1_DATA_SIZE  4

T_DATAFIELD* A51308_CASES [] = {
A51308_CMD1 ,
{0 }
};

// function type :0x10 : Sun position and radiation 
//{ 0xA5, 0x13, 0x10, "Environmental Applications                                                      " , "Sun position and radiation                                                      " },

// TITLE:
// DESC :
T_DATAFIELD A51310_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "D_N"      , "Day / Night"},//Value: 0 = Day 
                                                                       //Value: 1 = Night 
{  0 , 7 ,     0 ,    90 ,     0 ,    90 , "SNE"      , "Sun Elevation"},
{  8 , 8 ,     0 ,   180 ,   -90 ,    90 , "SNA"      , "Sun Azimuth"},
{ 16 , 8 ,     0 ,     0 ,     0 ,     0 , "SRA__MSB_" , "Solar Radiation (MSB)"},
{ 29 , 3 ,     0 ,  2000 ,     0 ,  2000 , "SRA__LSB_" , "Solar Radiation (LSB)"},
{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "ID"       , "Identifier"},//Value: 0x7 = (null) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51310_CMD1_LRNB       0
#define A51310_CMD1_D_N        1
#define A51310_CMD1_SNE        2
#define A51310_CMD1_SNA        3
#define A51310_CMD1_SRA__MSB_  4
#define A51310_CMD1_SRA__LSB_  5
#define A51310_CMD1_ID         6
#define A51310_CMD1_NB_DATA    7
#define A51310_CMD1_DATA_SIZE  4

T_DATAFIELD* A51310_CASES [] = {
A51310_CMD1 ,
{0 }
};

// function number :0x14 : Multi-Func Sensor 
// function type :0x01 : Single Input Contact (Window/Door), Supply voltage monitor 
//{ 0xA5, 0x14, 0x01, "Multi-Func Sensor                                                               " , "Single Input Contact (Window/Door), Supply voltage monitor                      " },

// TITLE:
// DESC :
T_DATAFIELD A51401_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,     5 , "SVC"      , "Supply voltage"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "CT"       , "Contact"},//Value: 0b0 = Contact closed 
                                                                   //Value: 0b1 = Contact open 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51401_CMD1_LRNB       0
#define A51401_CMD1_SVC        1
#define A51401_CMD1_CT         2
#define A51401_CMD1_NB_DATA    3
#define A51401_CMD1_DATA_SIZE  4

T_DATAFIELD* A51401_CASES [] = {
A51401_CMD1 ,
{0 }
};

// function type :0x02 : Single Input Contact (Window/Door), Supply voltage monitor and Illumination 
//{ 0xA5, 0x14, 0x02, "Multi-Func Sensor                                                               " , "Single Input Contact (Window/Door), Supply voltage monitor and Illumination     " },

// TITLE:
// DESC :
T_DATAFIELD A51402_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,     5 , "SVC"      , "Supply voltage"},
{  8 , 8 ,     0 ,   250 ,     0 ,  1000 , "ILL"      , "Illumination"},
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "CT"       , "Contact"},//Value: 0b0 = Contact closed 
                                                                   //Value: 0b1 = Contact open 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51402_CMD1_LRNB       0
#define A51402_CMD1_SVC        1
#define A51402_CMD1_ILL        2
#define A51402_CMD1_CT         3
#define A51402_CMD1_NB_DATA    4
#define A51402_CMD1_DATA_SIZE  4

T_DATAFIELD* A51402_CASES [] = {
A51402_CMD1 ,
{0 }
};

// function type :0x03 : Single Input Contact (Window/Door), Supply voltage monitor and Vibration 
//{ 0xA5, 0x14, 0x03, "Multi-Func Sensor                                                               " , "Single Input Contact (Window/Door), Supply voltage monitor and Vibration        " },

// TITLE:
// DESC :
T_DATAFIELD A51403_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,     5 , "SVC"      , "Supply voltage"},
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "VIB"      , "Vibration"},//Value: 0b0 = No vibration detected 
                                                                     //Value: 0b1 = Vibration detected 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "CT"       , "Contact"},//Value: 0b0 = Contact closed 
                                                                   //Value: 0b1 = Contact open 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51403_CMD1_LRNB       0
#define A51403_CMD1_SVC        1
#define A51403_CMD1_VIB        2
#define A51403_CMD1_CT         3
#define A51403_CMD1_NB_DATA    4
#define A51403_CMD1_DATA_SIZE  4

T_DATAFIELD* A51403_CASES [] = {
A51403_CMD1 ,
{0 }
};

// function type :0x04 : Single Input Contact (Window/Door), Supply voltage monitor, Vibration and Illumination 
//{ 0xA5, 0x14, 0x04, "Multi-Func Sensor                                                               " , "Single Input Contact (Window/Door), Supply voltage monitor, Vibration and Illumination" },

// TITLE:
// DESC :
T_DATAFIELD A51404_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,     5 , "SVC"      , "Supply voltage"},
{  8 , 8 ,     0 ,   250 ,     0 ,  1000 , "ILL"      , "Illumination"},
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "VIB"      , "Vibration"},//Value: 0b0 = No vibration detected 
                                                                     //Value: 0b1 = Vibration detected 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "CT"       , "Contact"},//Value: 0b0 = Contact closed 
                                                                   //Value: 0b1 = Contact open 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51404_CMD1_LRNB       0
#define A51404_CMD1_SVC        1
#define A51404_CMD1_ILL        2
#define A51404_CMD1_VIB        3
#define A51404_CMD1_CT         4
#define A51404_CMD1_NB_DATA    5
#define A51404_CMD1_DATA_SIZE  4

T_DATAFIELD* A51404_CASES [] = {
A51404_CMD1 ,
{0 }
};

// function type :0x05 : Vibration/Tilt, Supply voltage monitor 
//{ 0xA5, 0x14, 0x05, "Multi-Func Sensor                                                               " , "Vibration/Tilt, Supply voltage monitor                                          " },

// TITLE:
// DESC :
T_DATAFIELD A51405_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,     5 , "SVC"      , "Supply voltage"},
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "VIB"      , "Vibration"},//Value: 0b0 = No vibration detected 
                                                                     //Value: 0b1 = Vibration detected 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51405_CMD1_LRNB       0
#define A51405_CMD1_SVC        1
#define A51405_CMD1_VIB        2
#define A51405_CMD1_NB_DATA    3
#define A51405_CMD1_DATA_SIZE  4

T_DATAFIELD* A51405_CASES [] = {
A51405_CMD1 ,
{0 }
};

// function type :0x06 : Vibration/Tilt, Illumination and Supply voltage monitor 
//{ 0xA5, 0x14, 0x06, "Multi-Func Sensor                                                               " , "Vibration/Tilt, Illumination and Supply voltage monitor                         " },

// TITLE:
// DESC :
T_DATAFIELD A51406_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   250 ,     0 ,     5 , "SVC"      , "Supply voltage"},
{  8 , 8 ,     0 ,   250 ,     0 ,  1000 , "ILL"      , "Illumination"},
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "VIB"      , "Vibration"},//Value: 0b0 = No vibration detected 
                                                                     //Value: 0b1 = Vibration detected 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51406_CMD1_LRNB       0
#define A51406_CMD1_SVC        1
#define A51406_CMD1_ILL        2
#define A51406_CMD1_VIB        3
#define A51406_CMD1_NB_DATA    4
#define A51406_CMD1_DATA_SIZE  4

T_DATAFIELD* A51406_CASES [] = {
A51406_CMD1 ,
{0 }
};

// function number :0x20 : HVAC Components 
// function type :0x01 : Battery Powered Actuator 
//{ 0xA5, 0x20, 0x01, "HVAC Components                                                                 " , "Battery Powered Actuator                                                        " },

// TITLE:
// DESC :
T_DATAFIELD A52001_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   100 ,     0 ,   100 , "CV"       , "Current Value"},
{  8 , 1 ,     0 ,     0 ,     0 ,     0 , "SO"       , "Service On"},//Value: 1 = on 
{  9 , 1 ,     0 ,     0 ,     0 ,     0 , "ENIE"     , "Energy input enabled"},//Value: 1 = true 
{ 10 , 1 ,     0 ,     0 ,     0 ,     0 , "ES"       , "Energy Storage"},//Value: 1 = true 
{ 11 , 1 ,     0 ,     0 ,     0 ,     0 , "BCAP"     , "Battery capacity"},//Value: 0 = true 
{ 12 , 1 ,     0 ,     0 ,     0 ,     0 , "CCO"      , "Contact, cover open"},//Value: 1 = true 
{ 13 , 1 ,     0 ,     0 ,     0 ,     0 , "FTS"      , "Failure temperature sensor, out off range"},//Value: 1 = true 
{ 14 , 1 ,     0 ,     0 ,     0 ,     0 , "DWO"      , "Detection, window open"},//Value: 1 = true 
{ 15 , 1 ,     0 ,     0 ,     0 ,     0 , "ACO"      , "Actuator obstructed"},//Value: 1 = true 
{ 16 , 8 ,     0 ,   255 ,     0 ,    40 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52001_CMD1_LRNB       0
#define A52001_CMD1_CV         1
#define A52001_CMD1_SO         2
#define A52001_CMD1_ENIE       3
#define A52001_CMD1_ES         4
#define A52001_CMD1_BCAP       5
#define A52001_CMD1_CCO        6
#define A52001_CMD1_FTS        7
#define A52001_CMD1_DWO        8
#define A52001_CMD1_ACO        9
#define A52001_CMD1_TMP        10
#define A52001_CMD1_NB_DATA    11
#define A52001_CMD1_DATA_SIZE  3

// TITLE:
// DESC :
T_DATAFIELD A52001_CMD2 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   100 ,     0 ,   100 , "SP"       , "Valve position or Temperature Setpoint"},
{  8 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature from RCU"},
{ 16 , 1 ,     0 ,     0 ,     0 ,     0 , "RIN"      , "Run init sequence"},//Value: 1 = true 
{ 17 , 1 ,     0 ,     0 ,     0 ,     0 , "LFS"      , "Lift set"},//Value: 1 = true 
{ 18 , 1 ,     0 ,     0 ,     0 ,     0 , "VO"       , "Valve open / maintenance"},//Value: 1 = true 
{ 19 , 1 ,     0 ,     0 ,     0 ,     0 , "VC"       , "Valve closed"},//Value: 1 = true 
{ 20 , 1 ,     0 ,     0 ,     0 ,     0 , "SB"       , "Summer bit, Reduction of energy consumption"},//Value: 1 = true 
{ 21 , 1 ,     0 ,     0 ,     0 ,     0 , "SPS"      , "Set Point Selection"},//Value: 0 = Valve position (0-100%). Unit respond to controller. 
                                                                               //Value: 1 = Temperature set point 0...40øC. Unit respond to room sensor and use internal PI loop. 
{ 22 , 1 ,     0 ,     0 ,     0 ,     0 , "SPN"      , "Set point inverse"},//Value: 1 = true 
{ 23 , 1 ,     0 ,     0 ,     0 ,     0 , "RCU"      , "Select function"},//Value: 0 = RCU 
                                                                           //Value: 1 = service on 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52001_CMD2_LRNB       0
#define A52001_CMD2_SP         1
#define A52001_CMD2_TMP        2
#define A52001_CMD2_RIN        3
#define A52001_CMD2_LFS        4
#define A52001_CMD2_VO         5
#define A52001_CMD2_VC         6
#define A52001_CMD2_SB         7
#define A52001_CMD2_SPS        8
#define A52001_CMD2_SPN        9
#define A52001_CMD2_RCU        10
#define A52001_CMD2_NB_DATA    11
#define A52001_CMD2_DATA_SIZE  3

T_DATAFIELD* A52001_CASES [] = {
A52001_CMD1 ,
A52001_CMD2 ,
{0 }
};

// function type :0x02 : Basic Actuator 
//{ 0xA5, 0x20, 0x02, "HVAC Components                                                                 " , "Basic Actuator                                                                  " },

// TITLE:
// DESC :
T_DATAFIELD A52002_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   100 ,     0 ,   100 , "AV"       , "Actual Value"},
{ 22 , 1 ,     0 ,     0 ,     0 ,     0 , "SPI"      , "Set point inverse"},//Value: 1 = true 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52002_CMD1_LRNB       0
#define A52002_CMD1_AV         1
#define A52002_CMD1_SPI        2
#define A52002_CMD1_NB_DATA    3
#define A52002_CMD1_DATA_SIZE  3

// TITLE:
// DESC :
T_DATAFIELD A52002_CMD2 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   100 ,     0 ,   100 , "VSP"      , "Valve Set point"},
{ 22 , 1 ,     0 ,     0 ,     0 ,     0 , "VSP1"     , "Set point inverse"},//Value: 1 = true 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52002_CMD2_LRNB       0
#define A52002_CMD2_VSP        1
#define A52002_CMD2_VSP1       2
#define A52002_CMD2_NB_DATA    3
#define A52002_CMD2_DATA_SIZE  3

T_DATAFIELD* A52002_CASES [] = {
A52002_CMD1 ,
A52002_CMD2 ,
{0 }
};

// function type :0x03 : Line powered Actuator 
//{ 0xA5, 0x20, 0x03, "HVAC Components                                                                 " , "Line powered Actuator                                                           " },

// TITLE:
// DESC :
T_DATAFIELD A52003_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   100 ,     0 ,   100 , "AV"       , "Actual valve"},
{ 16 , 8 ,     0 ,   255 ,     0 ,    40 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52003_CMD1_LRNB       0
#define A52003_CMD1_AV         1
#define A52003_CMD1_TMP        2
#define A52003_CMD1_NB_DATA    3
#define A52003_CMD1_DATA_SIZE  3

// TITLE:
// DESC :
T_DATAFIELD A52003_CMD2 [] = {
{ 22 , 1 ,     0 ,     0 ,     0 ,     0 , "Set_Point_Inverse" , "Set Point Inverse"},//Value: 1 = true 
{ 21 , 1 ,     0 ,     0 ,     0 ,     0 , "SPS"      , "Set Point Selection"},//Value: 0 = Actuator Setpoint (0-100%); Unit respond to controller. 
                                                                               //Value: 1 = Temperature Setpoint 0...+40øC; Unit respond to room sensor and use internal PI loop. 
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   100 ,     0 ,   100 , "ATS"      , "Actuator or Temperature Setpoint"},
{  8 , 8 ,   255 ,     0 ,     0 ,    40 , "TMPRC"    , "Temperature from RCU"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52003_CMD2_Set_Point_Inverse 0
#define A52003_CMD2_SPS        1
#define A52003_CMD2_LRNB       2
#define A52003_CMD2_ATS        3
#define A52003_CMD2_TMPRC      4
#define A52003_CMD2_NB_DATA    5
#define A52003_CMD2_DATA_SIZE  2

T_DATAFIELD* A52003_CASES [] = {
A52003_CMD1 ,
A52003_CMD2 ,
{0 }
};

// function type :0x04 : Heating Radiator Valve Actuating Drive with Feed and Room Temperature Measurement, Local Set Point Control and Display 
//{ 0xA5, 0x20, 0x04, "HVAC Components                                                                 " , "Heating Radiator Valve Actuating Drive with Feed and Room Temperature Measurement, Local Set Point Control and Display" },

// TITLE:
// DESC :
T_DATAFIELD A52004_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   100 ,     0 ,   100 , "CP"       , "Current Position"},
{  8 , 8 ,     0 ,   255 ,    20 ,    10 , "FTS"      , "Feed Temperature OR Temperature Set Point"},
{ 16 , 8 ,     0 ,     0 ,     0 ,     0 , "TMPFC"    , "Room Temperature OR Failure Code"},
{ 24 , 1 ,     0 ,     0 ,     0 ,     0 , "MST"      , "Measurement Status"},//Value: 0 = Active 
                                                                              //Value: 1 = Inactive 
{ 25 , 1 ,     0 ,     0 ,     0 ,     0 , "STR"      , "Status Request"},//Value: 0 = No change 
                                                                          //Value: 1 = Status requested 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "BLS"      , "Button Lock Status"},//Value: 0 = Unlocked 
                                                                              //Value: 1 = Locked 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "TS"       , "Temperature Selection"},//Value: 0 = Feed temperature 
                                                                                 //Value: 1 = Temperature set point 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "FL"       , "Failure"},//Value: 0 = No failure (TMP is transmitted) 
                                                                   //Value: 1 = failure (FC is transmitted) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52004_CMD1_LRNB       0
#define A52004_CMD1_CP         1
#define A52004_CMD1_FTS        2
#define A52004_CMD1_TMPFC      3
#define A52004_CMD1_MST        4
#define A52004_CMD1_STR        5
#define A52004_CMD1_BLS        6
#define A52004_CMD1_TS         7
#define A52004_CMD1_FL         8
#define A52004_CMD1_NB_DATA    9
#define A52004_CMD1_DATA_SIZE  4

// TITLE:
// DESC :
T_DATAFIELD A52004_CMD2 [] = {
{  0 , 8 ,     0 ,   100 ,     0 ,   100 , "POS"      , "Valve Position"},
{  8 , 8 ,     0 ,   255 ,    10 ,    30 , "TSP"      , "Temperature Set Point"},
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 17 , 1 ,     0 ,     0 ,     0 ,     0 , "MC"       , "Measurement Control"},//Value: 0 = Enable 
                                                                               //Value: 1 = Disable 
{ 18 , 6 ,     0 ,     0 ,     0 ,     0 , "WUC"      , "Wake-up Cycle"},//Value: 0 = 10 sec 
                                                                         //Value: 1 = 60 sec 
                                                                         //Value: 2 = 90 sec 
                                                                         //Value: 3 = 120 sec 
                                                                         //Value: 4 = 150 sec 
                                                                         //Value: 5 = 180 sec 
                                                                         //Value: 6 = 210 sec 
                                                                         //Value: 7 = 240 sec 
                                                                         //Value: 8 = 270 sec 
                                                                         //Value: 9 = 300 sec (5 min) 
                                                                         //Value: 10 = 330 sec 
                                                                         //Value: 11 = 360 sec 
                                                                         //Value: 12 = 390 sec 
                                                                         //Value: 13 = 420 sec 
                                                                         //Value: 14 = 450 sec 
                                                                         //Value: 15 = 480 sec 
                                                                         //Value: 16 = 510 sec 
                                                                         //Value: 17 = 540 sec 
                                                                         //Value: 18 = 570 sec 
                                                                         //Value: 19 = 600 sec (10 min) 
                                                                         //Value: 20 = 630 sec 
                                                                         //Value: 21 = 660 sec 
                                                                         //Value: 22 = 690 sec 
                                                                         //Value: 23 = 720 sec 
                                                                         //Value: 24 = 750 sec 
                                                                         //Value: 25 = 780 sec 
                                                                         //Value: 26 = 810 sec 
                                                                         //Value: 27 = 840 sec 
                                                                         //Value: 28 = 870 sec 
                                                                         //Value: 29 = 900 sec (15 min) 
                                                                         //Value: 30 = 930 sec 
                                                                         //Value: 31 = 960 sec 
                                                                         //Value: 32 = 990 sec 
                                                                         //Value: 33 = 1020 sec 
                                                                         //Value: 34 = 1050 sec 
                                                                         //Value: 35 = 1080 sec 
                                                                         //Value: 36 = 1110 sec 
                                                                         //Value: 37 = 1140 sec 
                                                                         //Value: 38 = 1170 sec 
                                                                         //Value: 39 = 1200 sec (20 min) 
                                                                         //Value: 40 = 1230 sec 
                                                                         //Value: 41 = 1260 sec 
                                                                         //Value: 42 = 1290 sec 
                                                                         //Value: 43 = 1320 sec 
                                                                         //Value: 44 = 1350 sec 
                                                                         //Value: 45 = 1380 sec 
                                                                         //Value: 46 = 1410 sec 
                                                                         //Value: 47 = 1440 sec 
                                                                         //Value: 48 = 1470 sec 
                                                                         //Value: 49 = 1500 sec (25 min) 
                                                                         //Value: 50 = 3 hrs 
                                                                         //Value: 51 = 6 hrs 
                                                                         //Value: 52 = 9 hrs 
                                                                         //Value: 53 = 12 hrs 
                                                                         //Value: 54 = 15 hrs 
                                                                         //Value: 55 = 18 hrs 
                                                                         //Value: 56 = 21 hrs 
                                                                         //Value: 57 = 24 hrs 
                                                                         //Value: 58 = 27 hrs 
                                                                         //Value: 59 = 30 hrs 
                                                                         //Value: 60 = 33 hrs 
                                                                         //Value: 61 = 36 hrs 
                                                                         //Value: 62 = 39 hrs 
                                                                         //Value: 63 = 42 hrs (max) 
{ 26 , 2 ,     0 ,     0 ,     0 ,     0 , "DSO"      , "Display Orientation"},//Value: 0 = 0ø 
                                                                               //Value: 1 = 90ø 
                                                                               //Value: 2 = 180ø 
                                                                               //Value: 3 = 270ø 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "BLC"      , "Button Lock Control"},//Value: 0 = Unlocked 
                                                                               //Value: 1 = Locked 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "SER"      , "Service Command"},//Value: 0 = No change 
                                                                           //Value: 1 = Open valve 
                                                                           //Value: 2 = Run initialisation 
                                                                           //Value: 3 = Close valve 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52004_CMD2_POS        0
#define A52004_CMD2_TSP        1
#define A52004_CMD2_LRNB       2
#define A52004_CMD2_MC         3
#define A52004_CMD2_WUC        4
#define A52004_CMD2_DSO        5
#define A52004_CMD2_BLC        6
#define A52004_CMD2_SER        7
#define A52004_CMD2_NB_DATA    8
#define A52004_CMD2_DATA_SIZE  4

T_DATAFIELD* A52004_CASES [] = {
A52004_CMD1 ,
A52004_CMD2 ,
{0 }
};

// function type :0x10 : Generic HVAC Interface 
//{ 0xA5, 0x20, 0x10, "HVAC Components                                                                 " , "Generic HVAC Interface                                                          " },

// TITLE:
// DESC :
T_DATAFIELD A52010_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "MD"       , "Mode"},//Value: 0 = Auto 
                                                                //Value: 1 = Heat 
                                                                //Value: 2 = Morning Warmup 
                                                                //Value: 3 = Cool 
                                                                //Value: 4 = Night Purge 
                                                                //Value: 5 = Precool 
                                                                //Value: 6 = Off 
                                                                //Value: 7 = Test 
                                                                //Value: 8 = Emergency Heat 
                                                                //Value: 9 = Fan only 
                                                                //Value: 10 = Free cool 
                                                                //Value: 11 = Ice 
                                                                //Value: 12 = Max heat 
                                                                //Value: 13 = Economic heat/cool 
                                                                //Value: 14 = Dehumidification (dry) 
                                                                //Value: 15 = Calibration 
                                                                //Value: 16 = Emergency cool 
                                                                //Value: 17 = Emergency steam 
                                                                //Value: 18 = max cool 
                                                                //Value: 19 = Hvc load 
                                                                //Value: 20 = no load 

{  8 , 4 ,     0 ,     0 ,     0 ,     0 , "VPS"      , "Vane position"},//Value: 0 = Auto 
                                                                         //Value: 1 = Horizontal 
                                                                         //Value: 2 = Pos2 
                                                                         //Value: 3 = Pos3 
                                                                         //Value: 4 = Pos4 
                                                                         //Value: 5 = Vertical 
                                                                         //Value: 6 = Swing 

{ 12 , 4 ,     0 ,     0 ,     0 ,     0 , "FANSP"    , "Fan Speed"},//Value: 0 = Auto 

{ 16 , 8 ,     0 ,   100 ,     0 ,   100 , "CVAR"     , "Control variable"},
{ 29 , 2 ,     0 ,     0 ,     0 ,     0 , "RO"       , "Room occupancy"},//Value: 0 = Occupied 
                                                                          //Value: 1 = StandBy (waiting to perform action) 
                                                                          //Value: 2 = Unoccupied (action performed) 
                                                                          //Value: 3 = Off (no occupancy and no action) 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "O_I"      , "On/Off"},//Value: 0 = off (the unit is not running) 
                                                                  //Value: 1 = on 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52010_CMD1_LRNB       0
#define A52010_CMD1_MD         1
#define A52010_CMD1_VPS        2
#define A52010_CMD1_FANSP      3
#define A52010_CMD1_CVAR       4
#define A52010_CMD1_RO         5
#define A52010_CMD1_O_I        6
#define A52010_CMD1_NB_DATA    7
#define A52010_CMD1_DATA_SIZE  4

// TITLE:
// DESC :
T_DATAFIELD A52010_CMD2 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "MD"       , "Mode"},//Value: 0 = Auto 
                                                                //Value: 1 = Heat 
                                                                //Value: 2 = Morning Warmup 
                                                                //Value: 3 = Cool 
                                                                //Value: 4 = Night Purge 
                                                                //Value: 5 = Precool 
                                                                //Value: 6 = Off 
                                                                //Value: 7 = Test 
                                                                //Value: 8 = Emergency Heat 
                                                                //Value: 9 = Fan only 
                                                                //Value: 10 = Free cool 
                                                                //Value: 11 = Ice 
                                                                //Value: 12 = Max heat 
                                                                //Value: 13 = Economic heat/cool 
                                                                //Value: 14 = Dehumidification (dry) 
                                                                //Value: 15 = Calibration 
                                                                //Value: 16 = Emergency cool 
                                                                //Value: 17 = Emergency steam 
                                                                //Value: 18 = max cool 
                                                                //Value: 19 = Hvc load 
                                                                //Value: 20 = no load 

{  8 , 4 ,     0 ,     0 ,     0 ,     0 , "VPS"      , "Vane position"},//Value: 0 = Auto 
                                                                         //Value: 1 = Horizontal 
                                                                         //Value: 2 = Pos2 
                                                                         //Value: 3 = Pos3 
                                                                         //Value: 4 = Pos4 
                                                                         //Value: 5 = Vertical 
                                                                         //Value: 6 = Swing 

{ 12 , 4 ,     0 ,     0 ,     0 ,     0 , "FANSP"    , "Fan Speed"},//Value: 0 = Auto 

{ 16 , 8 ,     0 ,   100 ,     0 ,   100 , "CVAR"     , "Control variable"},
{ 29 , 2 ,     0 ,     0 ,     0 ,     0 , "RO"       , "Room occupancy"},//Value: 0 = Occupied 
                                                                          //Value: 1 = StandBy (waiting to perform action) 
                                                                          //Value: 2 = Unoccupied (action performed) 
                                                                          //Value: 3 = Off (no occupancy and no action) 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "O_I"      , "On/Off"},//Value: 0 = off 
                                                                  //Value: 1 = on 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52010_CMD2_LRNB       0
#define A52010_CMD2_MD         1
#define A52010_CMD2_VPS        2
#define A52010_CMD2_FANSP      3
#define A52010_CMD2_CVAR       4
#define A52010_CMD2_RO         5
#define A52010_CMD2_O_I        6
#define A52010_CMD2_NB_DATA    7
#define A52010_CMD2_DATA_SIZE  4

T_DATAFIELD* A52010_CASES [] = {
A52010_CMD1 ,
A52010_CMD2 ,
{0 }
};

// function type :0x11 : Generic HVAC Interface - Error Control 
//{ 0xA5, 0x20, 0x11, "HVAC Components                                                                 " , "Generic HVAC Interface - Error Control                                          " },

// TITLE:
// DESC :
T_DATAFIELD A52011_CMD1 [] = {
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "DRC"      , "Disable remote controller"},//Value: 0 = Enable Remote controller 
                                                                                     //Value: 1 = Disable Remote controller 
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 23 , 1 ,     0 ,     0 ,     0 ,     0 , "EXDS"     , "External disablement"},//Value: 0 = Not disabled 
                                                                                //Value: 1 = Disabled 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "WC"       , "Window contact"},//Value: 0 = Windows opened 
                                                                          //Value: 1 = Windows closed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52011_CMD1_DRC        0
#define A52011_CMD1_LRNB       1
#define A52011_CMD1_EXDS       2
#define A52011_CMD1_WC         3
#define A52011_CMD1_NB_DATA    4
#define A52011_CMD1_DATA_SIZE  4

// TITLE:
// DESC :
T_DATAFIELD A52011_CMD2 [] = {
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "RCD"      , "Remote controller Disablement"},//Value: 0 = Remote controller enabled 
                                                                                         //Value: 1 = Remote controller disabled 
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 ,16 ,     0 , 65535 ,     0 , 65535 , "ERR"      , "Error Code"},
{ 16 , 4 ,     0 ,     0 ,     0 ,     0 , "RES"      , "Reserved"},//Value: (null) = Reserved 
{ 20 , 1 ,     0 ,     0 ,     0 ,     0 , "OD"       , "Other disablement"},//Value: 0 = Not disabled 
                                                                             //Value: 1 = Disabled 
{ 21 , 1 ,     0 ,     0 ,     0 ,     0 , "WCD"      , "Window contact disablement"},//Value: 0 = Not disabled 
                                                                                      //Value: 1 = Disabled 
{ 22 , 1 ,     0 ,     0 ,     0 ,     0 , "KCD"      , "Key card disablement"},//Value: 0 = Not disabled 
                                                                                //Value: 1 = Disabled 
{ 23 , 1 ,     0 ,     0 ,     0 ,     0 , "ED"       , "External disablement"},//Value: 0 = Not disabled 
                                                                                //Value: 1 = Disabled 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "WC"       , "Window contact"},//Value: 0 = Windows opened 
                                                                          //Value: 1 = Windows closed 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "AS"       , "Alarm State"},//Value: 0 = Ok 
                                                                       //Value: 1 = Error 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52011_CMD2_RCD        0
#define A52011_CMD2_LRNB       1
#define A52011_CMD2_ERR        2
#define A52011_CMD2_RES        3
#define A52011_CMD2_OD         4
#define A52011_CMD2_WCD        5
#define A52011_CMD2_KCD        6
#define A52011_CMD2_ED         7
#define A52011_CMD2_WC         8
#define A52011_CMD2_AS         9
#define A52011_CMD2_NB_DATA    10
#define A52011_CMD2_DATA_SIZE  4

T_DATAFIELD* A52011_CASES [] = {
A52011_CMD1 ,
A52011_CMD2 ,
{0 }
};

// function type :0x12 : Temperature Controller Input 
//{ 0xA5, 0x20, 0x12, "HVAC Components                                                                 " , "Temperature Controller Input                                                    " },

// TITLE:
// DESC :
T_DATAFIELD A52012_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,   100 , "CV"       , "Control Variable override"},
{  8 , 8 ,     0 ,     0 ,     0 ,     0 , "FANOR"    , "FanStage override"},//Value: 0 = Stage 0 
                                                                             //Value: 1 = Stage 1 
                                                                             //Value: 2 = Stage 2 
                                                                             //Value: 3 = Stage 3 
                                                                             //Value: 31 = auto 
                                                                             //Value: 255 = not available 
{ 16 , 8 ,     0 ,   255 ,   -10 ,    10 , "SPS"      , "Setpoint shift"},
{ 24 , 1 ,     0 ,     0 ,     0 ,     0 , "FANOR1"   , "Fan override"},//Value: 0 = Automatic 
                                                                        //Value: 1 = Override Fan DB2 
{ 25 , 2 ,     0 ,     0 ,     0 ,     0 , "CTM"      , "Controller mode"},//Value: 0 = Auto mode 
                                                                           //Value: 1 = Heating 
                                                                           //Value: 2 = Cooling 
                                                                           //Value: 3 = Off 
{ 27 , 1 ,     0 ,     0 ,     0 ,     0 , "CST"      , "Controller state"},//Value: 0 = Automatic 
                                                                            //Value: 1 = Override control variable DB3 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "ERH"      , "Energy hold-off / Dew point"},//Value: 0 = Normal 
                                                                                       //Value: 1 = Energy hold-off/ Dew point 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "RO"       , "Room occupancy"},//Value: 0 = Occupied 
                                                                          //Value: 1 = Unoccupied 
                                                                          //Value: 2 = StandBy 
                                                                          //Value: 3 = Frost 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52012_CMD1_LRNB       0
#define A52012_CMD1_CV         1
#define A52012_CMD1_FANOR      2
#define A52012_CMD1_SPS        3
#define A52012_CMD1_FANOR1     4
#define A52012_CMD1_CTM        5
#define A52012_CMD1_CST        6
#define A52012_CMD1_ERH        7
#define A52012_CMD1_RO         8
#define A52012_CMD1_NB_DATA    9
#define A52012_CMD1_DATA_SIZE  4

T_DATAFIELD* A52012_CASES [] = {
A52012_CMD1 ,
{0 }
};

// function number :0x30 : Digital Input 
// function type :0x01 : Single Input Contact, Battery Monitor 
//{ 0xA5, 0x30, 0x01, "Digital Input                                                                   " , "Single Input Contact, Battery Monitor                                           " },

// TITLE:
// DESC :
T_DATAFIELD A53001_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  8 , 8 ,     0 ,     0 ,     0 ,     0 , "SVC"      , "Supply voltage"},
{ 16 , 8 ,     0 ,     0 ,     0 ,     0 , "IPS"      , "Input State"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53001_CMD1_LRNB       0
#define A53001_CMD1_SVC        1
#define A53001_CMD1_IPS        2
#define A53001_CMD1_NB_DATA    3
#define A53001_CMD1_DATA_SIZE  3

T_DATAFIELD* A53001_CASES [] = {
A53001_CMD1 ,
{0 }
};

// function type :0x02 : Single Input Contact 
//{ 0xA5, 0x30, 0x02, "Digital Input                                                                   " , "Single Input Contact                                                            " },

// TITLE:
// DESC :
T_DATAFIELD A53002_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "IPS"      , "Input State"},//Value: 0 = Contact closed 
                                                                       //Value: 1 = Contact open 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53002_CMD1_LRNB       0
#define A53002_CMD1_IPS        1
#define A53002_CMD1_NB_DATA    2
#define A53002_CMD1_DATA_SIZE  4

T_DATAFIELD* A53002_CASES [] = {
A53002_CMD1 ,
{0 }
};

// function type :0x03 : 4 Digital Inputs, Wake and Temperature 
//{ 0xA5, 0x30, 0x03, "Digital Input                                                                   " , "4 Digital Inputs, Wake and Temperature                                          " },

// TITLE:
// DESC :
T_DATAFIELD A53003_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  8 , 8 ,   255 ,     0 ,     0 ,    40 , "TMP"      , "Temperature"},
{ 19 , 1 ,     0 ,     0 ,     0 ,     0 , "WA0"      , "Status of Wake"},//Value: 0 = Low 
                                                                          //Value: 1 = High 
{ 20 , 1 ,     0 ,     0 ,     0 ,     0 , "DI3"      , "Digital Input 3"},//Value: 0 = Low 
                                                                           //Value: 1 = High 
{ 21 , 1 ,     0 ,     0 ,     0 ,     0 , "DI2"      , "Digital Input 2"},//Value: 0 = Low 
                                                                           //Value: 1 = High 
{ 22 , 1 ,     0 ,     0 ,     0 ,     0 , "DI1"      , "Digital Input 1"},//Value: 0 = Low 
                                                                           //Value: 1 = High 
{ 23 , 1 ,     0 ,     0 ,     0 ,     0 , "DI0"      , "Digital Input 0"},//Value: 0 = Low 
                                                                           //Value: 1 = High 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53003_CMD1_LRNB       0
#define A53003_CMD1_TMP        1
#define A53003_CMD1_WA0        2
#define A53003_CMD1_DI3        3
#define A53003_CMD1_DI2        4
#define A53003_CMD1_DI1        5
#define A53003_CMD1_DI0        6
#define A53003_CMD1_NB_DATA    7
#define A53003_CMD1_DATA_SIZE  3

T_DATAFIELD* A53003_CASES [] = {
A53003_CMD1 ,
{0 }
};

// function type :0x04 : 3 Digital Inputs, 1 Digital Input 8 Bits 
//{ 0xA5, 0x30, 0x04, "Digital Input                                                                   " , "3 Digital Inputs, 1 Digital Input 8 Bits                                        " },

// TITLE:
// DESC :
T_DATAFIELD A53004_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{ 16 , 8 ,     0 ,   255 ,     0 ,   255 , "DV0"      , "Digital value-input"},
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "DI2"      , "Digital Input 2"},//Value: 0 = Low 
                                                                           //Value: 1 = High 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "DI1"      , "Digital Input 1"},//Value: 0 = Low 
                                                                           //Value: 1 = High 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "DI0"      , "Digital Input 0"},//Value: 0 = Low 
                                                                           //Value: 1 = High 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53004_CMD1_LRNB       0
#define A53004_CMD1_DV0        1
#define A53004_CMD1_DI2        2
#define A53004_CMD1_DI1        3
#define A53004_CMD1_DI0        4
#define A53004_CMD1_NB_DATA    5
#define A53004_CMD1_DATA_SIZE  4

T_DATAFIELD* A53004_CASES [] = {
A53004_CMD1 ,
{0 }
};

// function type :0x05 : Single Input Contact, Retransmission, Battery Monitor 
//{ 0xA5, 0x30, 0x05, "Digital Input                                                                   " , "Single Input Contact, Retransmission, Battery Monitor                           " },

// TITLE:
// DESC :
T_DATAFIELD A53005_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  8 , 8 ,     0 ,   255 ,     0 ,     3 , "VDD"      , "Supply voltage"},
{ 16 , 1 ,     0 ,     0 ,     0 ,     0 , "ST"       , "Signal type"},//Value: 0 = Normal signal 
                                                                       //Value: 1 = Heart beat signal 
{ 17 , 7 ,     0 ,     0 ,     0 ,     0 , "IOS"      , "Index of Signals"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53005_CMD1_LRNB       0
#define A53005_CMD1_VDD        1
#define A53005_CMD1_ST         2
#define A53005_CMD1_IOS        3
#define A53005_CMD1_NB_DATA    4
#define A53005_CMD1_DATA_SIZE  3

T_DATAFIELD* A53005_CASES [] = {
A53005_CMD1 ,
{0 }
};

// function number :0x37 : Energy Management 
// function type :0x01 : Demand Response 
//{ 0xA5, 0x37, 0x01, "Energy Management                                                               " , "Demand Response                                                                 " },

// TITLE:
// DESC :
T_DATAFIELD A53701_CMD1 [] = {
{ 24 , 4 ,     0 ,    15 ,     0 ,    15 , "DRL"      , "DR Level"},
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,   255 ,     0 ,   255 , "TMPD"     , "Temporary default"},
{  8 , 1 ,     0 ,     0 ,     0 ,     0 , "SPWRU"    , "Absolute/relative power usage"},//Value: 0 = Absolute power usage. Interpret DB_2.BIT_6...DB_2.BIT_0 as a percentage of the maximum power use. 
                                                                                         //Value: 1 = Relative power usage. Interpret DB_2.BIT_6...DB_2.BIT_0 as a percentage of the current power use. 
{  9 , 7 ,     0 ,   100 ,     0 ,   100 , "PWRU"     , "Power Usage"},
{ 16 , 8 ,     1 ,   255 ,    15 ,  3825 , "TMOS"     , "Timeout Setting"},
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "RSD"      , "Random start delay"},//Value: 0 = False 
                                                                              //Value: 1 = True 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "RED"      , "Randomized end delay"},//Value: 0 = False 
                                                                                //Value: 1 = True 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "MPWRU"    , "Max/Min Power Usage for Default DR State"},//Value: 0 = Minimum Power usage 
                                                                                                    //Value: 1 = Maximum Power usage 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53701_CMD1_DRL        0
#define A53701_CMD1_LRNB       1
#define A53701_CMD1_TMPD       2
#define A53701_CMD1_SPWRU      3
#define A53701_CMD1_PWRU       4
#define A53701_CMD1_TMOS       5
#define A53701_CMD1_RSD        6
#define A53701_CMD1_RED        7
#define A53701_CMD1_MPWRU      8
#define A53701_CMD1_NB_DATA    9
#define A53701_CMD1_DATA_SIZE  4

T_DATAFIELD* A53701_CASES [] = {
A53701_CMD1 ,
{0 }
};

// function number :0x38 : Central Command 
// function type :0x08 : Gateway 
//{ 0xA5, 0x38, 0x08, "Central Command                                                                 " , "Gateway                                                                         " },

// TITLE:0x01 Switching
// DESC :
T_DATAFIELD A53808_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "COM"      , "Command"},//Value: 0x01 = (null) 
{  8 ,16 ,     1 , 65535 ,     0 ,  6554 , "TIM"      , "Time"},
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "LCK"      , "Lock/Unlock"},//Value: 0 = Unlock 
                                                                       //Value: 1 = Lock 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "DEL"      , "Delay or duration"},//Value: 0 = Duration 
                                                                             //Value: 1 = Delay 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "SW"       , "Switching Command"},//Value: 0 = Off 
                                                                             //Value: 1 = On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53808_CMD1_LRNB       0
#define A53808_CMD1_COM        1
#define A53808_CMD1_TIM        2
#define A53808_CMD1_LCK        3
#define A53808_CMD1_DEL        4
#define A53808_CMD1_SW         5
#define A53808_CMD1_NB_DATA    6
#define A53808_CMD1_DATA_SIZE  4

// TITLE:0x02 Dimming
// DESC :REMARK:
T_DATAFIELD A53808_CMD2 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "COM"      , "Command"},//Value: 0x02 = (null) 
{  8 , 8 ,     0 ,   255 ,     0 ,   100 , "EDIM"     , "Dimming value"},
{ 16 , 8 ,     0 ,   255 ,     0 ,   255 , "RMP"      , "Ramping time"},
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "EDIM_R"   , "Dimming Range"},//Value: 0 = Absolute value 
                                                                         //Value: 1 = Relative value 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "STR"      , "Store final value"},//Value: 0 = No 
                                                                             //Value: 1 = Yes 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "SW"       , "Switching Command"},//Value: 0 = Off 
                                                                             //Value: 1 = On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53808_CMD2_LRNB       0
#define A53808_CMD2_COM        1
#define A53808_CMD2_EDIM       2
#define A53808_CMD2_RMP        3
#define A53808_CMD2_EDIM_R     4
#define A53808_CMD2_STR        5
#define A53808_CMD2_SW         6
#define A53808_CMD2_NB_DATA    7
#define A53808_CMD2_DATA_SIZE  4

// TITLE:0x03 Setpoint shift
// DESC :
T_DATAFIELD A53808_CMD3 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "COM"      , "Command"},//Value: 0x03 = (null) 
{ 16 , 8 ,     0 ,   255 ,   -13 ,    13 , "SP"       , "Setpoint"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53808_CMD3_LRNB       0
#define A53808_CMD3_COM        1
#define A53808_CMD3_SP         2
#define A53808_CMD3_NB_DATA    3
#define A53808_CMD3_DATA_SIZE  3

// TITLE:0x04 Basic Setpoint
// DESC :
T_DATAFIELD A53808_CMD4 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "COM"      , "Command"},//Value: 0x04 = (null) 
{ 16 , 8 ,     0 ,   255 ,     0 ,    51 , "BSP"      , "Basic Setpoint"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53808_CMD4_LRNB       0
#define A53808_CMD4_COM        1
#define A53808_CMD4_BSP        2
#define A53808_CMD4_NB_DATA    3
#define A53808_CMD4_DATA_SIZE  3

// TITLE:0x05 Control variable
// DESC :
T_DATAFIELD A53808_CMD5 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "COM"      , "Command"},//Value: 0x05 = (null) 
{ 16 , 8 ,     0 ,   255 ,     0 ,   100 , "CVOV"     , "Control variable override"},
{ 25 , 2 ,     0 ,     0 ,     0 ,     0 , "CM"       , "Controller mode"},//Value: 0 = Automatic mode selection 
                                                                           //Value: 1 = Heating 
                                                                           //Value: 2 = Cooling 
                                                                           //Value: 3 = Off 
{ 27 , 1 ,     0 ,     0 ,     0 ,     0 , "CS"       , "Controller state"},//Value: 0 = Automatic 
                                                                            //Value: 1 = Override 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "ENHO"     , "Energy hold off"},//Value: 0 = Normal 
                                                                           //Value: 1 = Energy holdoff/ Dew point 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "RMOCC"    , "Room occupancy"},//Value: 0 = Occupied 
                                                                          //Value: 1 = Unoccupied 
                                                                          //Value: 2 = Standby 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53808_CMD5_LRNB       0
#define A53808_CMD5_COM        1
#define A53808_CMD5_CVOV       2
#define A53808_CMD5_CM         3
#define A53808_CMD5_CS         4
#define A53808_CMD5_ENHO       5
#define A53808_CMD5_RMOCC      6
#define A53808_CMD5_NB_DATA    7
#define A53808_CMD5_DATA_SIZE  4

// TITLE:0x06 Fan stage
// DESC :
T_DATAFIELD A53808_CMD6 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "COM"      , "Command"},//Value: 0x06 = (null) 
{ 16 , 8 ,     0 ,     0 ,     0 ,     0 , "FO"       , "FanStage override"},//Value: 0 = Stage 0 
                                                                             //Value: 1 = Stage 1 
                                                                             //Value: 2 = Stage 2 
                                                                             //Value: 3 = Stage 3 
                                                                             //Value: 255 = Auto 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53808_CMD6_LRNB       0
#define A53808_CMD6_COM        1
#define A53808_CMD6_FO         2
#define A53808_CMD6_NB_DATA    3
#define A53808_CMD6_DATA_SIZE  3

// TITLE:0x07 Blind Central Command
// DESC :
T_DATAFIELD A53808_CMD7 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "COM"      , "Command"},//Value: 0x07 = Shutters / Blinds 
{  8 , 8 ,     0 ,     0 ,     0 ,     0 , "P1"       , "Parameter 1"},
{ 16 , 8 ,     0 ,     0 ,     0 ,     0 , "P2"       , "Parameter 2"},
{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "FUNC"     , "Function"},//Value: 0 = Do nothing, status request 
                                                                    //Value: 1 = Blind stops 
                                                                    //Value: 2 = Blind opens 
                                                                    //Value: 3 = Blind closes 
                                                                    //Value: 4 = Blind drives to position with angle value (see remark 2) 
                                                                    //Value: 5 = Blind opens for time (position value) and angle (angle value) 
                                                                    //Value: 6 = Blind closes for time (position value) and angle (angle value) 
                                                                    //Value: 7 = Set Runtime parameters (see remark 3) 
                                                                    //Value: 8 = Set angle configuration (see remark 3) 
                                                                    //Value: 9 = Set Min, Max values (see remark 4) 
                                                                    //Value: 10 = Set slat angle for SHUT and OPEN position (see remark 5) 
                                                                    //Value: 11 = Set position logic (see remark 6) 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "SSF"      , "Send status flag"},//Value: 0 = Send new status of device 
                                                                            //Value: 1 = Send no status (e.g. Global central commands) 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "PAF"      , "Pos. and Angle flag"},//Value: 0 = No Angle and position value available 
                                                                               //Value: 1 = Angle and position value available 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "SMF"      , "Service Mode Flag"},//Value: 0 = Normal operation 
                                                                             //Value: 1 = Service mode: The module disables all senders, except this sender, which has set the service mode. (For example for maintenance) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53808_CMD7_LRNB       0
#define A53808_CMD7_COM        1
#define A53808_CMD7_P1         2
#define A53808_CMD7_P2         3
#define A53808_CMD7_FUNC       4
#define A53808_CMD7_SSF        5
#define A53808_CMD7_PAF        6
#define A53808_CMD7_SMF        7
#define A53808_CMD7_NB_DATA    8
#define A53808_CMD7_DATA_SIZE  4

T_DATAFIELD* A53808_CASES [] = {
A53808_CMD1 ,
A53808_CMD2 ,
A53808_CMD3 ,
A53808_CMD4 ,
A53808_CMD5 ,
A53808_CMD6 ,
A53808_CMD7 ,
{0 }
};

// function type :0x09 : Extended Lighting-Control 
//{ 0xA5, 0x38, 0x09, "Central Command                                                                 " , "Extended Lighting-Control                                                       " },

// TITLE:
// DESC :
T_DATAFIELD A53809_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "P1"       , "Parameter 1"},
{  8 , 8 ,     0 ,     0 ,     0 ,     0 , "P2"       , "Parameter 2"},
{ 16 , 8 ,     0 ,     0 ,     0 ,     0 , "P3"       , "Parameter 3"},
{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "FUNC"     , "Function"},//Value: 0 = Do nothing, status request 
                                                                    //Value: 1 = Switched off 
                                                                    //Value: 2 = Switched on (Memory value) 
                                                                    //Value: 3 = Dimming up with ramping time 
                                                                    //Value: 4 = Dimming down with ramping time 
                                                                    //Value: 5 = Dimming stops 
                                                                    //Value: 6 = Set dimmer-value and ramping time 
                                                                    //Value: 7 = Set RGB values (see remark 1) 
                                                                    //Value: 8 = Scene function (see remark 2) 
                                                                    //Value: 9 = Set minimal and maximal dimmer-value (see remark 3) 
                                                                    //Value: 10 = Set the operating hours of the lamp (see remark 4) 
                                                                    //Value: 11 = Locking local operations (see remark 5) 
                                                                    //Value: 12 = Set a new value for the energy metering (overwrite the actual value with the selected unit) 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "SSF"      , "Send status flag"},//Value: 0 = Send new status of device 
                                                                            //Value: 1 = Send no status (e.g. Global central commands) 
{ 30 , 1 ,     0 ,     0 ,     0 ,     0 , "SFV"      , "Store final value"},//Value: 0 = No 
                                                                             //Value: 1 = Yes 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "SMF"      , "Service Mode Flag"},//Value: 0 = Normal operation 
                                                                             //Value: 1 = Service mode: The module disables all senders, except this sender, which has set the service mode. (For example for maintenance) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53809_CMD1_LRNB       0
#define A53809_CMD1_P1         1
#define A53809_CMD1_P2         2
#define A53809_CMD1_P3         3
#define A53809_CMD1_FUNC       4
#define A53809_CMD1_SSF        5
#define A53809_CMD1_SFV        6
#define A53809_CMD1_SMF        7
#define A53809_CMD1_NB_DATA    8
#define A53809_CMD1_DATA_SIZE  4

T_DATAFIELD* A53809_CASES [] = {
A53809_CMD1 ,
{0 }
};

// function number :0x3F : Universal 
// function type :0x00 : Radio Link Test 
//{ 0xA5, 0x3F, 0x00, "Universal                                                                       " , "Radio Link Test                                                                 " },

// TITLE:RLT_MasterTest_4BS
// DESC :This is the 4BS message sent by the RLT Master during a radio link test communication
T_DATAFIELD A53F00_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 ,28 ,     0 ,     0 ,     0 ,     0 , "Not_used" , "Not used"},//Value: 0 = (null) 
{ 29 , 2 ,     0 ,     0 ,     0 ,     0 , "MSGID"    , "MSG_ID"},//Value: 2 = (null) 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "MSGS"     , "MSG-Source"},//Value: 0 = RLT-Master 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53F00_CMD1_LRNB       0
#define A53F00_CMD1_Not_used   1
#define A53F00_CMD1_MSGID      2
#define A53F00_CMD1_MSGS       3
#define A53F00_CMD1_NB_DATA    4
#define A53F00_CMD1_DATA_SIZE  4

// TITLE:RLT_SlaveTest_4BS
// DESC :This is the 4BS message sent by the RLT Slave in reply to an RLT_MasterTest_4BS message.
T_DATAFIELD A53F00_CMD2 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 2 ,     0 ,     0 ,     0 ,     0 , "STCNT"    , "Sub-Telegram Counter"},//Value: 0 = not supported 
{  2 , 6 ,     0 ,     0 ,     0 ,     0 , "RSLV"     , "RSSI Level in dBm"},//Value: 0x00 = not supported 
                                                                             //Value: 0x01 = =-31 
                                                                             //Value: 0x02 = -32 
                                                                             //Value: 0x3F = =-93 
{  8 , 8 ,     0 ,     0 ,     0 ,     0 , "RSLV1"    , "Sub-Telegram Counter/RSSI Level in dBm"},//Value: (null) = See prev 
{ 16 , 8 ,     0 ,     0 ,     0 ,     0 , "RSLV2"    , "Sub-Telegram Counter/RSSI Level in dBm"},//Value: (null) = See prev 
{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "RSLV3"    , "RSSI Level in dBm"},//Value: 0x00 = not supported 
                                                                             //Value: 0x01 = = -31 
                                                                             //Value: 0x02 = -32...-37 
                                                                             //Value: 0x03 = -38...-43 
                                                                             //Value: 0x04 = -44...-49 
                                                                             //Value: 0x05 = -50...-55 
                                                                             //Value: 0x06 = -56...-61 
                                                                             //Value: 0x07 = -62...-67 
                                                                             //Value: 0x08 = -68...-73 
                                                                             //Value: 0x09 = -74...-79 
                                                                             //Value: 0x0A = -80...-85 
                                                                             //Value: 0x0B = = -92 
{ 29 , 2 ,     0 ,     0 ,     0 ,     0 , "MSGID"    , "MSG_ID"},//Value: 2 = (null) 
{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "MSGS"     , "MSG-Source"},//Value: 1 = RLT-Slave 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53F00_CMD2_LRNB       0
#define A53F00_CMD2_STCNT      1
#define A53F00_CMD2_RSLV       2
#define A53F00_CMD2_RSLV1      3
#define A53F00_CMD2_RSLV2      4
#define A53F00_CMD2_RSLV3      5
#define A53F00_CMD2_MSGID      6
#define A53F00_CMD2_MSGS       7
#define A53F00_CMD2_NB_DATA    8
#define A53F00_CMD2_DATA_SIZE  4

// TITLE:RLT_MasterTest_1BS
// DESC :This is the 1BS message sent by the RLT Master during a radio link test communication.
T_DATAFIELD A53F00_CMD3 [] = {
{  4 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "MC_MSB"   , "RLT MSG-Counter MSB"},//Value: (null) = (null) 
{  5 , 2 ,     0 ,     0 ,     0 ,     0 , "MC_LSB"   , "RLT MSG-Counter LSB"},//Value: (null) = (null) 
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "MSGS"     , "MSG-Source"},//Value: 0 = RLT Master 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53F00_CMD3_LRNB       0
#define A53F00_CMD3_MC_MSB     1
#define A53F00_CMD3_MC_LSB     2
#define A53F00_CMD3_MSGS       3
#define A53F00_CMD3_NB_DATA    4
#define A53F00_CMD3_DATA_SIZE  1

// TITLE:RLT_SlaveTest_1BS
// DESC :This is the 1BS message sent by the RLT Slave in reply to an RLT_MasterTest_1BS message.
T_DATAFIELD A53F00_CMD4 [] = {
{  4 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "MC_MSB"   , "RLT MSG-Counter MSB"},//Value: (null) = (null) 
{  5 , 2 ,     0 ,     0 ,     0 ,     0 , "MC_LSB"   , "RLT MSG-Counter LSB"},//Value: (null) = (null) 
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "MSGS"     , "MSG-Source"},//Value: 1 = RLT-Slave 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53F00_CMD4_LRNB       0
#define A53F00_CMD4_MC_MSB     1
#define A53F00_CMD4_MC_LSB     2
#define A53F00_CMD4_MSGS       3
#define A53F00_CMD4_NB_DATA    4
#define A53F00_CMD4_DATA_SIZE  1

T_DATAFIELD* A53F00_CASES [] = {
A53F00_CMD1 ,
A53F00_CMD2 ,
A53F00_CMD3 ,
A53F00_CMD4 ,
{0 }
};

// function type :0x7F : Universal 
//{ 0xA5, 0x3F, 0x7F, "Universal                                                                       " , "Universal                                                                       " },

// TITLE:
// DESC :
T_DATAFIELD A53F7F_CMD1 [] = {
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "LRNB"     , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                                   //Value: 1 = Data telegram 
{  0 ,28 ,     0 ,     0 ,     0 ,     0 , "undef"    , "undefined"},
{ 29 , 3 ,     0 ,     0 ,     0 ,     0 , "undef1"   , "undefined"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53F7F_CMD1_LRNB       0
#define A53F7F_CMD1_undef      1
#define A53F7F_CMD1_undef1     2
#define A53F7F_CMD1_NB_DATA    3
#define A53F7F_CMD1_DATA_SIZE  4

T_DATAFIELD* A53F7F_CASES [] = {
A53F7F_CMD1 ,
{0 }
};

// function number :0x00 : Room Control Panel (RCP) 
// function type :0x01 : RCP with Temperature Measurement and Display (BI-DIR) 
//{ 0xD2, 0x00, 0x01, "Room Control Panel (RCP)                                                        " , "RCP with Temperature Measurement and Display (BI-DIR)                           " },

// TITLE:Message type A / ID 01 (First User Action on RCP)
// DESC :Direction: Sensor -> Gateway
T_DATAFIELD D20001_CMD1 [] = {
{  5 , 3 ,     0 ,     0 ,     0 ,     0 , "MI"       , "MsgId"},//Value: 1 = Message Id 
{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "KP"       , "User Action"},//Value: 0x00 = not used 
                                                                       //Value: 0x01 = Presence 
                                                                       //Value: 0x02 = Temperature Set Point "down" or "-" 
                                                                       //Value: 0x03 = not used 
                                                                       //Value: 0x04 = not used 
                                                                       //Value: 0x05 = Temperature Set Point "up" or "+" 
                                                                       //Value: 0x06 = Fan 

{  8 , 1 ,     0 ,     0 ,     0 ,     0 , "CV"       , "ConfigValid"},//Value: 0x00 = Configuration data not valid (e.g. never received message of type E) 
                                                                       //Value: 0x01 = Configuration data valid 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20001_CMD1_MI         0
#define D20001_CMD1_KP         1
#define D20001_CMD1_CV         2
#define D20001_CMD1_NB_DATA    3
#define D20001_CMD1_DATA_SIZE  2

// TITLE:Message Type B / ID 02 (Display Content)
// DESC :Direction: Gateway -> Sensor
T_DATAFIELD D20001_CMD2 [] = {
{  5 , 3 ,     0 ,     0 ,     0 ,     0 , "MI"       , "MsgId"},//Value: 2 = Message Id 
{  4 , 1 ,     0 ,     0 ,     0 ,     0 , "MD"       , "MoreData"},//Value: 0x00 = no more data 
                                                                    //Value: 0x01 = more data will follow after T2+ 
{  1 , 3 ,     0 ,     0 ,     0 ,     0 , "F"        , "Fan"},//Value: 0x00 = Do not display 
                                                               //Value: 0x01 = Speed Level 0 
                                                               //Value: 0x02 = Speed Level 1 
                                                               //Value: 0x03 = Speed Level 2 
                                                               //Value: 0x04 = Speed Level 3 

{  0 , 1 ,     0 ,     0 ,     0 ,     0 , "M"        , "Fan manual"},//Value: 0 = Auto 
                                                                      //Value: 1 = Fan manual 
{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "TA"       , "Figure A Type"},//Value: 0x00 = Do not display 
                                                                         //Value: 0x01 = Room Temperature 
                                                                         //Value: 0x02 = Room Temperature 
                                                                         //Value: 0x03 = Nominal Temperature 
                                                                         //Value: 0x04 = Nominal Temperature 
                                                                         //Value: 0x05 = Delta Temperature Set Point 
                                                                         //Value: 0x06 = Delta Temperature Set Point 
                                                                         //Value: 0x07 = Delta Temperature Set Point(graphic) 
                                                                         //Value: 0x08 = Time 00:00 to 23:59 [24h] 
                                                                         //Value: 0x09 = Time 00:00 to 11:59 [AM] 
                                                                         //Value: 0x0A = Time 00:00 to 11:59 [PM] 
                                                                         //Value: 0x0B = Date 01.01 to 31.12 [DD.MM] 
                                                                         //Value: 0x0C = Date 01.01 to 12.31 [MM.DD] 
                                                                         //Value: 0x0D = Illumination (linear) 0 to 9999 
                                                                         //Value: 0x0E = Percentage 0 to 100 
                                                                         //Value: 0x0F = Parts per Million 0 to 9999 
                                                                         //Value: 0x10 = Relative Humidity 0 to 100 

{  8 , 3 ,     0 ,     0 ,     0 ,     0 , "PR"       , "Presence"},//Value: 0x00 = Do not display 
                                                                    //Value: 0x01 = Present 
                                                                    //Value: 0x02 = Not present 
                                                                    //Value: 0x03 = Night time reduction 

{ 16 ,16 ,     0 ,     0 ,     0 ,     0 , "ZA"       , "Figure A Value"},
{ 39 , 1 ,     0 ,     0 ,     0 ,     0 , "Sa"       , "Heating"},//Value: 0x0 = Off 
                                                                   //Value: 0x1 = On 
{ 38 , 1 ,     0 ,     0 ,     0 ,     0 , "Sb"       , "Cooling"},//Value: 0x0 = Off 
                                                                   //Value: 0x1 = On 
{ 37 , 1 ,     0 ,     0 ,     0 ,     0 , "Sc"       , "Dew-Point"},//Value: 0x0 = Warning 
                                                                     //Value: 0x1 = No warning 
{ 36 , 1 ,     0 ,     0 ,     0 ,     0 , "Sd"       , "Window"},//Value: 0x0 = Closed 
                                                                  //Value: 0x1 = Opened 
{ 35 , 1 ,     0 ,     0 ,     0 ,     0 , "Se"       , "User Notification"},//Value: 0x0 = Off 
                                                                             //Value: 0x1 = On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20001_CMD2_MI         0
#define D20001_CMD2_MD         1
#define D20001_CMD2_F          2
#define D20001_CMD2_M          3
#define D20001_CMD2_TA         4
#define D20001_CMD2_PR         5
#define D20001_CMD2_ZA         6
#define D20001_CMD2_Sa         7
#define D20001_CMD2_Sb         8
#define D20001_CMD2_Sc         9
#define D20001_CMD2_Sd         10
#define D20001_CMD2_Se         11
#define D20001_CMD2_NB_DATA    12
#define D20001_CMD2_DATA_SIZE  5

// TITLE:Message Type C / ID 03 (Repeated User Action on RCP)
// DESC :Direction: Sensor -> Gateway
T_DATAFIELD D20001_CMD3 [] = {
{  5 , 3 ,     0 ,     0 ,     0 ,     0 , "MI"       , "MsgId"},//Value: 3 = Message Id 
{  1 , 3 ,     0 ,     0 ,     0 ,     0 , "F"        , "Fan"},//Value: 0x00 = no change 
                                                               //Value: 0x01 = Speed Level 0 
                                                               //Value: 0x02 = Speed Level 1 
                                                               //Value: 0x03 = Speed Level 2 
                                                               //Value: 0x04 = Speed Level 3 
                                                               //Value: 0x05 = Speed Level Auto 

{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "TA"       , "Set Point A Type"},//Value: 0x00 = no change 

{  8 , 3 ,     0 ,     0 ,     0 ,     0 , "PR"       , "Presence"},//Value: 0x00 = no change 
                                                                    //Value: 0x01 = Present 
                                                                    //Value: 0x02 = Not present 
                                                                    //Value: 0x03 = Night time reduction 

{ 16 ,16 , -1270 ,  1270 ,   -13 ,    13 , "ZA"       , "Set Point A Value"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20001_CMD3_MI         0
#define D20001_CMD3_F          1
#define D20001_CMD3_TA         2
#define D20001_CMD3_PR         3
#define D20001_CMD3_ZA         4
#define D20001_CMD3_NB_DATA    5
#define D20001_CMD3_DATA_SIZE  4

// TITLE:Message Type D / ID 04 (Measurement Result)
// DESC :Direction: Sensor -> Gateway
T_DATAFIELD D20001_CMD4 [] = {
{  5 , 3 ,     0 ,     0 ,     0 ,     0 , "MI"       , "MsgId"},//Value: 4 = Message Id 
{  8 , 8 ,     0 ,  4000 ,     0 ,    40 , "VA__LSB_" , "Channel A Value"},
{ 20 , 4 ,     0 ,     0 ,     0 ,     0 , "VA__MSB_" , "Channel A Value"},
{ 16 , 4 ,     0 ,     0 ,     0 ,     0 , "TA"       , "Channel A Type"},//Value: 0x00 = Temperature [øC] 

{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20001_CMD4_MI         0
#define D20001_CMD4_VA__LSB_   1
#define D20001_CMD4_VA__MSB_   2
#define D20001_CMD4_TA         3
#define D20001_CMD4_NB_DATA    4
#define D20001_CMD4_DATA_SIZE  3

// TITLE:Message Type E / ID 05 (Sensor Configuration)
// DESC :Direction: Gateway -> Sensor
T_DATAFIELD D20001_CMD5 [] = {
{  5 , 3 ,     0 ,     0 ,     0 ,     0 , "MI"       , "MsgId"},//Value: 5 = Message Id 
{  4 , 1 ,     0 ,     0 ,     0 ,     0 , "MD"       , "MoreData"},//Value: 0x0 = no more data 
                                                                    //Value: 0x1 = more data will follow after T2+ 
{  9 , 7 ,     0 ,     0 ,     0 ,     0 , "SPR"      , "Set Point Range Limit"},//Value: 0x00 = Set Point disabled 

{ 17 , 7 ,     0 ,     0 ,     0 ,     0 , "SPS"      , "Set PointSteps"},//Value: 0x00 = Set Point disabled 

{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "TT__LSB_" , "Temperature Measurement Timing"},//Value: 0x00 = Temperature measurement disabled 

{ 38 , 2 ,     0 ,     0 ,     0 ,     0 , "TT__MSB_" , "Temperature Measurement Timing"},
{ 35 , 3 ,     0 ,     0 ,     0 ,     0 , "F"        , "Fan"},//Value: 0x0 = Fan Speed disabled 

{ 32 , 3 ,     0 ,     0 ,     0 ,     0 , "PR"       , "Presence"},//Value: 0x0 = Presence disabled 

{ 45 , 3 ,     0 ,     0 ,     0 ,     0 , "KA"       , "Keep Alive Timing"},//Value: 0x0 = Transmission of measurement result with each Temperature measurement 

{ 40 , 4 ,     0 ,     0 ,     0 ,     3 , "ST"       , "Significant Temperature Difference"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20001_CMD5_MI         0
#define D20001_CMD5_MD         1
#define D20001_CMD5_SPR        2
#define D20001_CMD5_SPS        3
#define D20001_CMD5_TT__LSB_   4
#define D20001_CMD5_TT__MSB_   5
#define D20001_CMD5_F          6
#define D20001_CMD5_PR         7
#define D20001_CMD5_KA         8
#define D20001_CMD5_ST         9
#define D20001_CMD5_NB_DATA    10
#define D20001_CMD5_DATA_SIZE  6

T_DATAFIELD* D20001_CASES [] = {
D20001_CMD1 ,
D20001_CMD2 ,
D20001_CMD3 ,
D20001_CMD4 ,
D20001_CMD5 ,
{0 }
};

// function number :0x01 : Electronic switches and dimmers with Energy Measurement and Local Control 
// function type :0x00 : Type 0x00 
//{ 0xD2, 0x01, 0x00, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x00                                                                       " },

// TITLE:CMD 0x1 - Actuator Set Output
// DESC :This message is sent to an actuator. It controls switching / dimming of one or all channels of an actuator.
T_DATAFIELD D20100_CMD1 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x01 = ID 01 
{  8 , 3 ,     0 ,     0 ,     0 ,     0 , "DV"       , "Dim value"},//Value: 0x00 = Switch to new output value 
                                                                     //Value: 0x01 = Dim to new output value - dim timer 1 
                                                                     //Value: 0x02 = Dim to new output value - dim timer 2 
                                                                     //Value: 0x03 = Dim to new output value - dim timer 3 
                                                                     //Value: 0x04 = Stop dimming 

{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "I_O"      , "I/O channel"},
{ 17 , 7 ,     0 ,     0 ,     0 ,     0 , "OV"       , "Output value"},//Value: 0x00 = Output value 0% or OFF 

{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD1_CMD        0
#define D20100_CMD1_DV         1
#define D20100_CMD1_I_O        2
#define D20100_CMD1_OV         3
#define D20100_CMD1_NB_DATA    4
#define D20100_CMD1_DATA_SIZE  3

// TITLE:CMD 0x2 - Actuator Set Local
// DESC :This message is sent to an actuator. It configures one or all channels of an actuator.
T_DATAFIELD D20100_CMD2 [] = {
{  0 , 1 ,     0 ,     0 ,     0 ,     0 , "d_e"      , "Taught-in devices"},//Value: 0b0 = Disable taught-in devices (with different EEP) 
                                                                             //Value: 0b1 = Enable taught-in devices (with different EEP) 
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x02 = ID 02 
{  8 , 1 ,     0 ,     0 ,     0 ,     0 , "OC"       , "Over current shut down"},//Value: 0b0 = Over current shut down: static off 
                                                                                  //Value: 0b1 = Over current shut down: automatic restart 
{  9 , 1 ,     0 ,     0 ,     0 ,     0 , "RO"       , "reset over current shut down"},//Value: 0b0 = Reset over current shut down: not active 
                                                                                        //Value: 0b1 = Reset over current shut down: trigger signal 
{ 10 , 1 ,     0 ,     0 ,     0 ,     0 , "LC"       , "Local control"},//Value: 0b0 = Disable local control 
                                                                         //Value: 0b1 = Enable local control 
{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "I_O"      , "I/O channel"},
{ 20 , 4 ,     0 ,     0 ,     0 ,     0 , "DT3"      , "Dim timer 3"},//Value: 0x00 = Not used 

{ 28 , 4 ,     0 ,     0 ,     0 ,     0 , "DT1"      , "Dim timer 1"},//Value: 0x00 = Not used 

{ 16 , 4 ,     0 ,     0 ,     0 ,     0 , "DT2"      , "Dim timer 2"},//Value: 0x00 = Not used 

{ 24 , 1 ,     0 ,     0 ,     0 ,     0 , "d_n"      , "User interface indication"},//Value: 0b0 = User interface indication: day operation 
                                                                                     //Value: 0b1 = User interface indication: night operation 
{ 25 , 1 ,     0 ,     0 ,     0 ,     0 , "PF"       , "Power Failure"},//Value: 0b0 = Disable Power Failure Detection 
                                                                         //Value: 0b1 = Enable Power Failure Detection 
{ 26 , 2 ,     0 ,     0 ,     0 ,     0 , "DS"       , "Default state"},//Value: 0b00 = Default state: 0% or OFF 
                                                                         //Value: 0b01 = Default state: 100% or ON 
                                                                         //Value: 0b10 = Default state: remember previous state 
                                                                         //Value: 0b11 = Not used 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD2_d_e        0
#define D20100_CMD2_CMD        1
#define D20100_CMD2_OC         2
#define D20100_CMD2_RO         3
#define D20100_CMD2_LC         4
#define D20100_CMD2_I_O        5
#define D20100_CMD2_DT3        6
#define D20100_CMD2_DT1        7
#define D20100_CMD2_DT2        8
#define D20100_CMD2_d_n        9
#define D20100_CMD2_PF         10
#define D20100_CMD2_DS         11
#define D20100_CMD2_NB_DATA    12
#define D20100_CMD2_DATA_SIZE  4

// TITLE:CMD 0x3 - Actuator Status Query
// DESC :This message is sent to an actuator. It requests the status of one or all channels of an actuator.
T_DATAFIELD D20100_CMD3 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x03 = ID 03 
{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "I_O"      , "I/O channel"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD3_CMD        0
#define D20100_CMD3_I_O        1
#define D20100_CMD3_NB_DATA    2
#define D20100_CMD3_DATA_SIZE  2

// TITLE:CMD 0x4 - Actuator Status Response
// DESC :This message is sent by an actuator if one of the following events occurs:
T_DATAFIELD D20100_CMD4 [] = {
{  0 , 1 ,     0 ,     0 ,     0 ,     0 , "PF"       , "Power Failure"},//Value: 0b0 = Power Failure Detection disabled/not supported 
                                                                         //Value: 0b1 = Power Failure Detection enabled 
{  1 , 1 ,     0 ,     0 ,     0 ,     0 , "PFD"      , "Power Failure Detection"},//Value: 0b0 = Power Failure not detected/not supported/disabled 
                                                                                   //Value: 0b1 = Power Failure Detected 
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x04 = ID 04 
{  8 , 1 ,     0 ,     0 ,     0 ,     0 , "OC"       , "Over current switch off"},//Value: 0b0 = Over current switch off: ready / not supported 
                                                                                   //Value: 0b1 = Over current switch off: executed 
{  9 , 2 ,     0 ,     0 ,     0 ,     0 , "EL"       , "Error level"},//Value: 0b00 = Error level 0: hardware OK 
                                                                       //Value: 0b01 = Error level 1: hardware warning 
                                                                       //Value: 0b10 = Error level 2: hardware failure 
                                                                       //Value: 0b11 = Error level not supported 
{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "I_O"      , "I/O channel"},
{ 16 , 1 ,     0 ,     0 ,     0 ,     0 , "LC"       , "Local control"},//Value: 0b0 = Local control disabled / not supported 
                                                                         //Value: 0b1 = Local control enabled 
{ 17 , 7 ,     0 ,     0 ,     0 ,     0 , "OV"       , "Output value"},//Value: 0x00 = Output value 0% or OFF 

{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD4_PF         0
#define D20100_CMD4_PFD        1
#define D20100_CMD4_CMD        2
#define D20100_CMD4_OC         3
#define D20100_CMD4_EL         4
#define D20100_CMD4_I_O        5
#define D20100_CMD4_LC         6
#define D20100_CMD4_OV         7
#define D20100_CMD4_NB_DATA    8
#define D20100_CMD4_DATA_SIZE  3

// TITLE:CMD 0x5 - Actuator Set Measurement
// DESC :The command defines values at offset 32 and at offset 40 which are the limits for the transmission periodicity of messages. MIT must not be set to 0, MAT >= MIT.
T_DATAFIELD D20100_CMD5 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x05 = ID 05 
{  8 , 1 ,     0 ,     0 ,     0 ,     0 , "RM"       , "Report measurement"},//Value: 0b0 = Report measurement: query only 
                                                                              //Value: 0b1 = Report measurement: query / auto reporting 
{  9 , 1 ,     0 ,     0 ,     0 ,     0 , "RE"       , "Reset measurement"},//Value: 0b0 = Reset measurement: not active 
                                                                             //Value: 0b1 = Reset measurement: trigger signal 
{ 10 , 1 ,     0 ,     0 ,     0 ,     0 , "e_p"      , "Measurement mode"},//Value: 0b0 = Energy measurement 
                                                                            //Value: 0b1 = Power measurement 
{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "I_O"      , "I/O channel"},
{ 16 , 4 ,     0 ,  4095 ,     0 ,  4095 , "MD_LSB"   , "Measurement delta to be reported (LSB)"},
{ 24 , 8 ,     0 ,  4095 ,     0 ,  4095 , "MD_MSB"   , "Measurement delta to be reported (MSB)"},
{ 21 , 3 ,     0 ,     0 ,     0 ,     0 , "UN"       , "Unit"},//Value: 0x00 = Energy [Ws] 
                                                                //Value: 0x01 = Energy [Wh] 
                                                                //Value: 0x02 = Energy [KWh] 
                                                                //Value: 0x03 = Power [W] 
                                                                //Value: 0x04 = Power [KW] 

{ 32 , 8 ,     0 ,     0 ,     0 ,     0 , "MAT"      , "Maximum time between two subsequent actuator messages"},
{ 40 , 8 ,     0 ,     0 ,     0 ,     0 , "MIT"      , "Minimum time between two subsequent actuator messages"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD5_CMD        0
#define D20100_CMD5_RM         1
#define D20100_CMD5_RE         2
#define D20100_CMD5_e_p        3
#define D20100_CMD5_I_O        4
#define D20100_CMD5_MD_LSB     5
#define D20100_CMD5_MD_MSB     6
#define D20100_CMD5_UN         7
#define D20100_CMD5_MAT        8
#define D20100_CMD5_MIT        9
#define D20100_CMD5_NB_DATA    10
#define D20100_CMD5_DATA_SIZE  6

// TITLE:CMD 0x6 - Actuator Measurement Query
// DESC :This message is sent to an actuator. The actuator replies with an Actuator Measurement Response message.
T_DATAFIELD D20100_CMD6 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x06 = ID 06 
{ 10 , 1 ,     0 ,     0 ,     0 ,     0 , "qu"       , "Query"},//Value: 0b0 = Query energy 
                                                                 //Value: 0b1 = Query power 
{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "I_O"      , "I/O channel"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD6_CMD        0
#define D20100_CMD6_qu         1
#define D20100_CMD6_I_O        2
#define D20100_CMD6_NB_DATA    3
#define D20100_CMD6_DATA_SIZE  2

// TITLE:CMD 0x7 - Actuator Measurement Response
// DESC :This message is sent by an actuator if one of the following events occurs:
T_DATAFIELD D20100_CMD7 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x07 = ID 07 
{  8 , 3 ,     0 ,     0 ,     0 ,     0 , "UN"       , "Unit"},//Value: 0x00 = Energy [Ws] 
                                                                //Value: 0x01 = Energy [Wh] 
                                                                //Value: 0x02 = Energy [KWh] 
                                                                //Value: 0x03 = Power [W] 
                                                                //Value: 0x04 = Power [KW] 

{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "I_O"      , "I/O channel"},
{ 16 ,32 ,     0 , 4294967295 ,     0 ,     0 , "MV"       , "Measurement value (4 bytes)"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD7_CMD        0
#define D20100_CMD7_UN         1
#define D20100_CMD7_I_O        2
#define D20100_CMD7_MV         3
#define D20100_CMD7_NB_DATA    4
#define D20100_CMD7_DATA_SIZE  6

// TITLE:CMD 0x8 - Actuator Set Pilot Wire Mode
// DESC :
T_DATAFIELD D20100_CMD8 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x08 = ID 08 
{ 13 , 3 ,     0 ,     0 ,     0 ,     0 , "PM"       , "Pilotwire mode"},//Value: 0x00 = Off 
                                                                          //Value: 0x01 = Comfort 
                                                                          //Value: 0x02 = Eco 
                                                                          //Value: 0x03 = Anti-freeze 
                                                                          //Value: 0x04 = Comfort-1 
                                                                          //Value: 0x05 = Comfort-2 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD8_CMD        0
#define D20100_CMD8_PM         1
#define D20100_CMD8_NB_DATA    2
#define D20100_CMD8_DATA_SIZE  2

// TITLE:CMD 0x9 - Actuator Pilot Wire Mode Query
// DESC :
T_DATAFIELD D20100_CMD9 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x09 = ID 09 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD9_CMD        0
#define D20100_CMD9_NB_DATA    1
#define D20100_CMD9_DATA_SIZE  1

// TITLE:CMD 0xA - Actuator Pilot Wire Mode Response
// DESC :
T_DATAFIELD D20100_CMD10 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x0A = ID 0A 
{ 13 , 3 ,     0 ,     0 ,     0 ,     0 , "PM"       , "Pilotwire mode"},//Value: 0x00 = Off 
                                                                          //Value: 0x01 = Comfort 
                                                                          //Value: 0x02 = Eco 
                                                                          //Value: 0x03 = Anti-freeze 
                                                                          //Value: 0x04 = Comfort-1 
                                                                          //Value: 0x05 = Comfort-2 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD10_CMD        0
#define D20100_CMD10_PM         1
#define D20100_CMD10_NB_DATA    2
#define D20100_CMD10_DATA_SIZE  2

// TITLE:CMD 0xB - Actuator Set External Interface Settings
// DESC :
T_DATAFIELD D20100_CMD11 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x0B = ID 0B 
{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "I_O"      , "I/O channel"},
{ 16 ,16 ,     0 ,     0 ,     0 ,     0 , "AOT"      , "Auto OFF Timer"},//Value: 0x0000 = Timer deactivated 

{ 32 ,16 ,     0 ,     0 ,     0 ,     0 , "DOT"      , "Delay OFF Timer"},//Value: 0x0000 = Timer deactivated 

{ 48 , 2 ,     0 ,     0 ,     0 ,     0 , "EBM"      , "External Switch/Push Button"},//Value: 0b00 = Not applicable 
                                                                                       //Value: 0b01 = External Switch 
                                                                                       //Value: 0b10 = External Push Button 
                                                                                       //Value: 0b11 = Auto detect 
{ 50 , 1 ,     0 ,     0 ,     0 ,     0 , "SWT"      , "2-state switch"},//Value: 0b00 = Change of key state sets ON or OFF 
                                                                          //Value: 0b01 = Specific ON/OFF positions. 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD11_CMD        0
#define D20100_CMD11_I_O        1
#define D20100_CMD11_AOT        2
#define D20100_CMD11_DOT        3
#define D20100_CMD11_EBM        4
#define D20100_CMD11_SWT        5
#define D20100_CMD11_NB_DATA    6
#define D20100_CMD11_DATA_SIZE  7

// TITLE:CMD 0xC - Actuator External Interface Settings Query
// DESC :
T_DATAFIELD D20100_CMD12 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x0C = ID 0C 
{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "I_O"      , "I/O channel"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD12_CMD        0
#define D20100_CMD12_I_O        1
#define D20100_CMD12_NB_DATA    2
#define D20100_CMD12_DATA_SIZE  2

// TITLE:CMD 0xD - Actuator External Interface Settings Response
// DESC :
T_DATAFIELD D20100_CMD13 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x0D = ID 0D 
{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "I_O"      , "I/O channel"},
{ 16 ,16 ,     0 ,     0 ,     0 ,     0 , "AOT"      , "Auto OFF Timer"},//Value: 0x0000 = Timer deactivated 

{ 32 ,16 ,     0 ,     0 ,     0 ,     0 , "DOT"      , "Delay OFF Timer"},//Value: 0x0000 = Timer deactivated 

{ 48 , 2 ,     0 ,     0 ,     0 ,     0 , "EBM"      , "External Switch/Push Button"},//Value: 0b00 = Not applicable 
                                                                                       //Value: 0b01 = External Switch 
                                                                                       //Value: 0b10 = External Push Button 
                                                                                       //Value: 0b11 = Auto detect 
{ 50 , 1 ,     0 ,     0 ,     0 ,     0 , "SWT"      , "2-state switch"},//Value: 0b00 = Change of key state sets ON or OFF 
                                                                          //Value: 0b01 = Specific ON/OFF positions. 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD13_CMD        0
#define D20100_CMD13_I_O        1
#define D20100_CMD13_AOT        2
#define D20100_CMD13_DOT        3
#define D20100_CMD13_EBM        4
#define D20100_CMD13_SWT        5
#define D20100_CMD13_NB_DATA    6
#define D20100_CMD13_DATA_SIZE  7

T_DATAFIELD* D20100_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2, 0x01, 0x01, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x01 (description: see table)                                              " },

T_DATAFIELD* D20101_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x02 : Type 0x02 (description: see table) 
//{ 0xD2, 0x01, 0x02, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x02 (description: see table)                                              " },

T_DATAFIELD* D20102_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x03 : Type 0x03 (description: see table) 
//{ 0xD2, 0x01, 0x03, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x03 (description: see table)                                              " },

T_DATAFIELD* D20103_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x04 : Type 0x04 (description: see table) 
//{ 0xD2, 0x01, 0x04, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x04 (description: see table)                                              " },

T_DATAFIELD* D20104_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x05 : Type 0x05 (description: see table) 
//{ 0xD2, 0x01, 0x05, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x05 (description: see table)                                              " },

T_DATAFIELD* D20105_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x06 : Type 0x06 (description: see table) 
//{ 0xD2, 0x01, 0x06, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x06 (description: see table)                                              " },

T_DATAFIELD* D20106_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x07 : Type 0x07 (description: see table) 
//{ 0xD2, 0x01, 0x07, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x07 (description: see table)                                              " },

T_DATAFIELD* D20107_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x08 : Type 0x08 (description: see table) 
//{ 0xD2, 0x01, 0x08, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x08 (description: see table)                                              " },

T_DATAFIELD* D20108_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x09 : Type 0x09 (description: see table) 
//{ 0xD2, 0x01, 0x09, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x09 (description: see table)                                              " },

T_DATAFIELD* D20109_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x0A : Type 0x0A (description: see table) 
//{ 0xD2, 0x01, 0x0A, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0A (description: see table)                                              " },

T_DATAFIELD* D2010A_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x0B : Type 0x0B (description: see table) 
//{ 0xD2, 0x01, 0x0B, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0B (description: see table)                                              " },

T_DATAFIELD* D2010B_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x0C : Type 0x0C 
//{ 0xD2, 0x01, 0x0C, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0C                                                                       " },

T_DATAFIELD* D2010C_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x0D : Type 0x0D 
//{ 0xD2, 0x01, 0x0D, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0D                                                                       " },

T_DATAFIELD* D2010D_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x0E : Type 0x0E 
//{ 0xD2, 0x01, 0x0E, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0E                                                                       " },

T_DATAFIELD* D2010E_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x0F : Type 0x0F 
//{ 0xD2, 0x01, 0x0F, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0F                                                                       " },

T_DATAFIELD* D2010F_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x10 : Type 0x10 (description: see table) 
//{ 0xD2, 0x01, 0x10, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x10 (description: see table)                                              " },

T_DATAFIELD* D20110_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x11 : Type 0x11 (description: see table) 
//{ 0xD2, 0x01, 0x11, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x11 (description: see table)                                              " },

T_DATAFIELD* D20111_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function type :0x12 : Type 0x12 
//{ 0xD2, 0x01, 0x12, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x12                                                                       " },

T_DATAFIELD* D20112_CASES [] = {
D20100_CMD1 ,
D20100_CMD2 ,
D20100_CMD3 ,
D20100_CMD4 ,
D20100_CMD5 ,
D20100_CMD6 ,
D20100_CMD7 ,
D20100_CMD8 ,
D20100_CMD9 ,
D20100_CMD10 ,
D20100_CMD11 ,
D20100_CMD12 ,
D20100_CMD13 ,
{0 }
};

// function number :0x02 : Sensors for Temperature, Illumination, Occupancy And Smoke 
// function type :0x00 : Type 0x00 
//{ 0xD2, 0x02, 0x00, "Sensors for Temperature, Illumination, Occupancy And Smoke                      " , "Type 0x00                                                                       " },

// TITLE:CMD 0x1 - Sensor Measurement
// DESC :This message is sent by a sensor if one of the following events occurs:
T_DATAFIELD D20200_CMD1 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x01 = ID 01 
{  8 , 3 ,     0 ,     0 ,     0 ,     0 , "type"     , "Measurement type"},//Value: 0x00 = Temperature (0.65535: -40 to +120øC) 
                                                                            //Value: 0x01 = Illumination (0.65535: 0 to 2047lx) 
                                                                            //Value: 0x02 = Occupancy (0: not detected; 1: detected) 
                                                                            //Value: 0x03 = Smoke 
{ 16 ,16 ,     0 , 65535 ,     0 ,     0 , "MV"       , "Measurement value (2 bytes)"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20200_CMD1_CMD        0
#define D20200_CMD1_type       1
#define D20200_CMD1_MV         2
#define D20200_CMD1_NB_DATA    3
#define D20200_CMD1_DATA_SIZE  4

// TITLE:CMD 0x2 - Sensor Test/Trigger
// DESC :This message is sent to a sensor. It causes the sensor to enter self-test mode or trigger an alarm (if supported).
T_DATAFIELD D20200_CMD2 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x02 = ID 02 
{  8 , 1 ,     0 ,     0 ,     0 ,     0 , "ST"       , "Self-test"},//Value: 0b0 = Self-test mode 
                                                                     //Value: 0b1 = Normal operation 
{  9 , 1 ,     0 ,     0 ,     0 ,     0 , "TA"       , "Trigger alarm"},//Value: 0b0 = Trigger alarm 
                                                                         //Value: 0b1 = Normal operation 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20200_CMD2_CMD        0
#define D20200_CMD2_ST         1
#define D20200_CMD2_TA         2
#define D20200_CMD2_NB_DATA    3
#define D20200_CMD2_DATA_SIZE  2

// TITLE:CMD 0x3 - Actuator Set Measurement
// DESC :This message is sent to a sensor. It configures the measurement behaviour of the sensor.
T_DATAFIELD D20200_CMD3 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x03 = ID 03 
{  8 , 1 ,     0 ,     0 ,     0 ,     0 , "RM"       , "Report measurement"},//Value: 0b0 = Report measurement: query only 
                                                                              //Value: 0b1 = Report measurement: query / auto reporting 
{ 16 , 4 ,     0 ,  4095 ,     0 ,  4095 , "MD_LSB"   , "Measurement delta to be reported (LSB)"},
{ 24 , 8 ,     0 ,  4095 ,     0 ,  4095 , "MD_MSB"   , "Measurement delta to be reported (MSB)"},
{ 21 , 3 ,     0 ,     0 ,     0 ,     0 , "UN"       , "Unit"},//Value: 0x00 = Temperature (øC) 
                                                                //Value: 0x01 = Illumination (lx) 

{ 32 , 8 ,     0 ,   255 ,    10 ,  2550 , "MAT"      , "Maximum time between two subsequent Actuator"},
{ 40 , 8 ,     0 ,   255 ,     0 ,   255 , "MIT"      , "Minimum time between two subsequent Actuator"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20200_CMD3_CMD        0
#define D20200_CMD3_RM         1
#define D20200_CMD3_MD_LSB     2
#define D20200_CMD3_MD_MSB     3
#define D20200_CMD3_UN         4
#define D20200_CMD3_MAT        5
#define D20200_CMD3_MIT        6
#define D20200_CMD3_NB_DATA    7
#define D20200_CMD3_DATA_SIZE  6

// TITLE:CMD 0x4 - Sensor Measurement Query
// DESC :This message is sent to a sensor. The sensor replies with an Sensor Measurement message.
T_DATAFIELD D20200_CMD4 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x04 = ID 04 
{  8 , 3 ,     0 ,     0 ,     0 ,     0 , "qu"       , "Query"},//Value: 0x0 = Query temperature 
                                                                 //Value: 0x1 = Query illumination 
                                                                 //Value: 0x2 = Query occupancy 
                                                                 //Value: 0x3 = Query smoke 

{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20200_CMD4_CMD        0
#define D20200_CMD4_qu         1
#define D20200_CMD4_NB_DATA    2
#define D20200_CMD4_DATA_SIZE  2

T_DATAFIELD* D20200_CASES [] = {
D20200_CMD1 ,
D20200_CMD2 ,
D20200_CMD3 ,
D20200_CMD4 ,
{0 }
};

// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2, 0x02, 0x01, "Sensors for Temperature, Illumination, Occupancy And Smoke                      " , "Type 0x01 (description: see table)                                              " },

T_DATAFIELD* D20201_CASES [] = {
D20200_CMD1 ,
D20200_CMD2 ,
D20200_CMD3 ,
D20200_CMD4 ,
{0 }
};

// function type :0x02 : Type 0x02 (description: see table) 
//{ 0xD2, 0x02, 0x02, "Sensors for Temperature, Illumination, Occupancy And Smoke                      " , "Type 0x02 (description: see table)                                              " },

T_DATAFIELD* D20202_CASES [] = {
D20200_CMD1 ,
D20200_CMD2 ,
D20200_CMD3 ,
D20200_CMD4 ,
{0 }
};

// function number :0x03 : Light, Switching + Blind Control 
// function type :0x00 : Type 0x00 
//{ 0xD2, 0x03, 0x00, "Light, Switching + Blind Control                                                " , "Type 0x00                                                                       " },

// TITLE:
// DESC :The encrypted telegram has the R-ORG 0x30. The payload (4 bits) is encrypted. That telegram can be repeated. After decryption and the authentication of the CMAC, the telegram turns into a non-encrypted EnOcean telegram with the R-ORG 0x32. The payload will be expanded to 8 bits (4 MSB set to zero) and can then be interpreted as described in the telegram definition table.
T_DATAFIELD D20300_CMD1 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "RI2"      , "Rocker Information"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20300_CMD1_RI2        0
#define D20300_CMD1_NB_DATA    1
#define D20300_CMD1_DATA_SIZE  1

T_DATAFIELD* D20300_CASES [] = {
D20300_CMD1 ,
{0 }
};

// function type :0x10 : Mechanical Handle 
//{ 0xD2, 0x03, 0x10, "Light, Switching + Blind Control                                                " , "Mechanical Handle                                                               " },

// TITLE:
// DESC :
T_DATAFIELD D20310_CMD1 [] = {
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "WIN"      , "Window handle, decrypted data"},//Value: 0b00000001 = (null) 
                                                                                         //Value: 0b00000010 = (null) 
                                                                                         //Value: 0b00000011 = (null) 
                                                                                         //Value: 0b00000100 = (null) 
                                                                                         //Value: 0b00000011 = (null) 
                                                                                         //Value: 0b00000010 = (null) 
                                                                                         //Value: 0b00000011 = (null) 
                                                                                         //Value: 0b00000100 = (null) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20310_CMD1_WIN        0
#define D20310_CMD1_NB_DATA    1
#define D20310_CMD1_DATA_SIZE  1

T_DATAFIELD* D20310_CASES [] = {
D20310_CMD1 ,
{0 }
};

// function type :0x20 : Beacon with Vibration Detection 
//{ 0xD2, 0x03, 0x20, "Light, Switching + Blind Control                                                " , "Beacon with Vibration Detection                                                 " },

// TITLE:
// DESC :
T_DATAFIELD D20320_CMD1 [] = {
{  0 , 1 ,     0 ,     0 ,     0 ,     0 , "ES"       , "Energy Supply"},//Value: 0 = Battery supply 
                                                                         //Value: 1 = Vibration generator supply 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20320_CMD1_ES         0
#define D20320_CMD1_NB_DATA    1
#define D20320_CMD1_DATA_SIZE  1

T_DATAFIELD* D20320_CASES [] = {
D20320_CMD1 ,
{0 }
};

// function number :0x04 : CO2, Humidity, Temperature, Day/Night and Autonomy 
// function type :0x00 : Type 0x00 
//{ 0xD2, 0x04, 0x00, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x00                                                                       " },

// TITLE:
// DESC :The manufacturer will indicate emission rates versus battery autonomy and day night status.
T_DATAFIELD D20400_CMD1 [] = {
{  0 , 8 ,     0 ,   255 ,     0 ,  2000 , "CO2"      , "CO2"},
{  8 , 8 ,     0 ,   200 ,     0 ,   100 , "HUM"      , "Humidity"},
{ 16 , 8 ,     0 ,   255 ,     0 ,    51 , "TMP"      , "Temperature"},
{ 24 , 1 ,     0 ,     0 ,     0 ,     0 , "DN"       , "Day/Night"},//Value: 0 = Day 
                                                                     //Value: 1 = Night 
{ 25 , 3 ,     0 ,     0 ,     0 ,     0 , "BA"       , "Battery autonomy"},//Value: 0 = 100 - 87.5 % 
                                                                            //Value: 1 = 87.5 - 75 % 
                                                                            //Value: 2 = 75 - 62.5 % 
                                                                            //Value: 3 = 62.5 - 50 % 
                                                                            //Value: 4 = 50 - 37.5 % 
                                                                            //Value: 5 = 37.5 - 25 % 
                                                                            //Value: 6 = 25 - 12.5 % 
                                                                            //Value: 7 = 12.5 - 0 % 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20400_CMD1_CO2        0
#define D20400_CMD1_HUM        1
#define D20400_CMD1_TMP        2
#define D20400_CMD1_DN         3
#define D20400_CMD1_BA         4
#define D20400_CMD1_NB_DATA    5
#define D20400_CMD1_DATA_SIZE  4

T_DATAFIELD* D20400_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2, 0x04, 0x01, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x01 (description: see table)                                              " },

T_DATAFIELD* D20401_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function type :0x02 : Type 0x02 (description: see table) 
//{ 0xD2, 0x04, 0x02, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x02 (description: see table)                                              " },

T_DATAFIELD* D20402_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function type :0x03 : Type 0x03 (description: see table) 
//{ 0xD2, 0x04, 0x03, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x03 (description: see table)                                              " },

T_DATAFIELD* D20403_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function type :0x04 : Type 0x04 (description: see table) 
//{ 0xD2, 0x04, 0x04, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x04 (description: see table)                                              " },

T_DATAFIELD* D20404_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function type :0x05 : Type 0x05 (description: see table) 
//{ 0xD2, 0x04, 0x05, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x05 (description: see table)                                              " },

T_DATAFIELD* D20405_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function type :0x06 : Type 0x06 (description: see table) 
//{ 0xD2, 0x04, 0x06, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x06 (description: see table)                                              " },

T_DATAFIELD* D20406_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function type :0x07 : Type 0x07 (description: see table) 
//{ 0xD2, 0x04, 0x07, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x07 (description: see table)                                              " },

T_DATAFIELD* D20407_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function type :0x08 : Type 0x08 (description: see table) 
//{ 0xD2, 0x04, 0x08, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x08 (description: see table)                                              " },

T_DATAFIELD* D20408_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function type :0x09 : Type 0x09 (description: see table) 
//{ 0xD2, 0x04, 0x09, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x09 (description: see table)                                              " },

T_DATAFIELD* D20409_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function type :0x10 : Type 0x10 (description: see table) 
//{ 0xD2, 0x04, 0x10, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x10 (description: see table)                                              " },

T_DATAFIELD* D20410_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function type :0x1A : Type 0x1A (description: see table) 
//{ 0xD2, 0x04, 0x1A, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1A (description: see table)                                              " },

T_DATAFIELD* D2041A_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function type :0x1B : Type 0x1B (description: see table) 
//{ 0xD2, 0x04, 0x1B, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1B (description: see table)                                              " },

T_DATAFIELD* D2041B_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function type :0x1C : Type 0x1C (description: see table) 
//{ 0xD2, 0x04, 0x1C, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1C (description: see table)                                              " },

T_DATAFIELD* D2041C_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function type :0x1D : Type 0x1D (description: see table) 
//{ 0xD2, 0x04, 0x1D, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1D (description: see table)                                              " },

T_DATAFIELD* D2041D_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function type :0x1E : Type 0x1E (description: see table) 
//{ 0xD2, 0x04, 0x1E, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1E (description: see table)                                              " },

T_DATAFIELD* D2041E_CASES [] = {
D20400_CMD1 ,
{0 }
};

// function number :0x05 : Blinds Control for Position and Angle 
// function type :0x00 : Type 0x00 
//{ 0xD2, 0x05, 0x00, "Blinds Control for Position and Angle                                           " , "Type 0x00                                                                       " },

// TITLE:CMD 1 - Go to Position and Angle
// DESC :Once the actuator is configured either by the "Set Parameters" command or through manual configuration (using local buttons) the position of the blinds can be controlled with this command.
T_DATAFIELD D20500_CMD1 [] = {
{  1 , 7 ,     0 ,     0 ,     0 ,     0 , "POS"      , "Position"},
{  9 , 7 ,     0 ,     0 ,     0 ,     0 , "ANG"      , "Angle"},
{ 17 , 3 ,     0 ,     0 ,     0 ,     0 , "REPO"     , "Repositioning"},//Value: 0 = Go directly to POS/ANG 
                                                                         //Value: 1 = Go up (0%), then to POS/ANG 
                                                                         //Value: 2 = Go down (100%), then to POS/ANG 
                                                                         //Value: 3 ... 7 = Reserved 
{ 21 , 3 ,     0 ,     0 ,     0 ,     0 , "LOCK"     , "Locking modes"},//Value: 0 = Do not change 
                                                                         //Value: 1 = Set blockage mode 
                                                                         //Value: 2 = Set alarm mode 
                                                                         //Value: 3 ... 6 = Reserved 
                                                                         //Value: 7 = Deblockage 
{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "CHN"      , "Channel"},//Value: 0 = Channel 1 
{ 28 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 1 = Goto command 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20500_CMD1_POS        0
#define D20500_CMD1_ANG        1
#define D20500_CMD1_REPO       2
#define D20500_CMD1_LOCK       3
#define D20500_CMD1_CHN        4
#define D20500_CMD1_CMD        5
#define D20500_CMD1_NB_DATA    6
#define D20500_CMD1_DATA_SIZE  4

// TITLE:CMD 2 - Stop
// DESC :This command immediately stops a running blind motor. It has no effect when the actuator is in "blockage" or "alarm" mode, i.e. it will not stop an eventual "go up" or "go down" alarm action.
T_DATAFIELD D20500_CMD2 [] = {
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "CHN"      , "Channel"},//Value: 0 = Channel 1 
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 2 = Stop command 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20500_CMD2_CHN        0
#define D20500_CMD2_CMD        1
#define D20500_CMD2_NB_DATA    2
#define D20500_CMD2_DATA_SIZE  1

// TITLE:CMD 3 - Query Position and Angle
// DESC :This command requests the actuator to return a "reply" command.
T_DATAFIELD D20500_CMD3 [] = {
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "CHN"      , "Channel"},//Value: 0 = Channel 1 
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 3 = Query command 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20500_CMD3_CHN        0
#define D20500_CMD3_CMD        1
#define D20500_CMD3_NB_DATA    2
#define D20500_CMD3_DATA_SIZE  1

// TITLE:CMD 4 - Reply Position and Angle
// DESC :Either upon request ("Query" command) or after an internal trigger (see EEP Properties) the actuator sends this command to inform about its current state.
T_DATAFIELD D20500_CMD4 [] = {
{  1 , 7 ,     0 ,     0 ,     0 ,     0 , "POS"      , "Position"},
{  9 , 7 ,     0 ,     0 ,     0 ,     0 , "ANG"      , "Angle"},
{ 21 , 3 ,     0 ,     0 ,     0 ,     0 , "LOCK"     , "Locking modes"},//Value: 0 = Normal (no lock) 
                                                                         //Value: 1 = Blockage mode 
                                                                         //Value: 2 = Alarm mode 
                                                                         //Value: 3 ... 7 = Reserved 
{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "CHN"      , "Channel"},//Value: 0 = Channel 1 
{ 28 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 4 = Reply command 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20500_CMD4_POS        0
#define D20500_CMD4_ANG        1
#define D20500_CMD4_LOCK       2
#define D20500_CMD4_CHN        3
#define D20500_CMD4_CMD        4
#define D20500_CMD4_NB_DATA    5
#define D20500_CMD4_DATA_SIZE  4

// TITLE:CMD 5 - Set parameters
// DESC :This command sets one or multiple configuration parameters of the actuator. When a parameter value is set to "-> no change" this parameter will not be modified. The VERT and ROT parameters describe the duration needed by the motor for a full run of the blind, or for a complete turn of the slats, respectively. They have to be measured on site and assigned to the actuator.
T_DATAFIELD D20500_CMD5 [] = {
{  1 ,15 ,     0 ,     0 ,     0 ,     0 , "VERT"     , "Set vertical"},
{ 16 , 8 ,     0 ,     0 ,     0 ,     0 , "ROT"      , "Set rotation"},
{ 29 , 3 ,     0 ,     0 ,     0 ,     0 , "AA"       , "Set alarm action"},//Value: 0 = No action 
                                                                            //Value: 1 = Immediate stop 
                                                                            //Value: 2 = Go up (0%) 
                                                                            //Value: 3 = Go down (100%) 
                                                                            //Value: 4 ... 6 = Reserved 
                                                                            //Value: 7 = -> No change 
{ 32 , 4 ,     0 ,     0 ,     0 ,     0 , "CHN"      , "Channel"},//Value: 0 = Channel 1 
{ 36 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 5 = Set parameters command 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20500_CMD5_VERT       0
#define D20500_CMD5_ROT        1
#define D20500_CMD5_AA         2
#define D20500_CMD5_CHN        3
#define D20500_CMD5_CMD        4
#define D20500_CMD5_NB_DATA    5
#define D20500_CMD5_DATA_SIZE  5

T_DATAFIELD* D20500_CASES [] = {
D20500_CMD1 ,
D20500_CMD2 ,
D20500_CMD3 ,
D20500_CMD4 ,
D20500_CMD5 ,
{0 }
};

// function number :0x06 : Multisensor Window Handle 
// function type :0x01 : Alarm, Position Sensor, Vacation Mode, Optional Sensors 
//{ 0xD2, 0x06, 0x01, "Multisensor Window Handle                                                       " , "Alarm, Position Sensor, Vacation Mode, Optional Sensors                         " },

// TITLE:Message Type 0x00: Sensor Values
// DESC :
T_DATAFIELD D20601_CMD1 [] = {
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 0x00 = Message Type Sensor Values 
{  8 , 4 ,     0 ,     0 ,     0 ,     0 , "BAL"      , "Burglary Alarm"},//Value: 0x0 = Burglary Alarm Not Triggered 
                                                                          //Value: 0x1 = Burglary Alarm Triggered 

{ 12 , 4 ,     0 ,     0 ,     0 ,     0 , "PPAL"     , "Protection Plus Alarm"},//Value: 0x0 = Protection Plus Alarm Not Triggered 
                                                                                 //Value: 0x1 = Protection Plus Alarm Triggered 

{ 16 , 4 ,     0 ,     0 ,     0 ,     0 , "HP"       , "Handle Position"},//Value: 0x0 = Handle Position Undefined 
                                                                           //Value: 0x1 = Handle Up 
                                                                           //Value: 0x2 = Handle Down 
                                                                           //Value: 0x3 = Handle Left 
                                                                           //Value: 0x4 = Handle Right 

{ 20 , 4 ,     0 ,     0 ,     0 ,     0 , "WS"       , "Window State"},//Value: 0x0 = Window State Undefined 
                                                                        //Value: 0x1 = Window Not Tilted 
                                                                        //Value: 0x2 = Window Tilted 

{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "BR"       , "Button Right"},//Value: 0x0 = No Change 
                                                                        //Value: 0x1 = Button Pressed 
                                                                        //Value: 0x2 = Button Released 

{ 28 , 4 ,     0 ,     0 ,     0 ,     0 , "BL"       , "Button Left"},//Value: 0x0 = No Change 
                                                                       //Value: 0x1 = Button Pressed 
                                                                       //Value: 0x2 = Button Released 

{ 32 , 4 ,     0 ,     0 ,     0 ,     0 , "M"        , "Motion"},//Value: 0x0 = Motion Not Triggered 
                                                                  //Value: 0x1 = Motion Triggered 

{ 36 , 4 ,     0 ,     0 ,     0 ,     0 , "V"        , "Vacation Mode"},//Value: 0x0 = No Change 
                                                                         //Value: 0x1 = Vacation Mode Locally Switched On 
                                                                         //Value: 0x2 = Vacation Mode Locally Switched Off 

{ 40 , 8 ,     0 ,     0 ,     0 ,     0 , "T"        , "Temperature"},
{ 48 , 8 ,     0 ,     0 ,     0 ,     0 , "H"        , "Humidity"},
{ 56 ,16 ,     0 ,     0 ,     0 ,     0 , "I"        , "Illumination"},
{ 72 , 5 ,     0 ,     0 ,     0 ,     0 , "BS"       , "Battery State"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20601_CMD1_MT         0
#define D20601_CMD1_BAL        1
#define D20601_CMD1_PPAL       2
#define D20601_CMD1_HP         3
#define D20601_CMD1_WS         4
#define D20601_CMD1_BR         5
#define D20601_CMD1_BL         6
#define D20601_CMD1_M          7
#define D20601_CMD1_V          8
#define D20601_CMD1_T          9
#define D20601_CMD1_H          10
#define D20601_CMD1_I          11
#define D20601_CMD1_BS         12
#define D20601_CMD1_NB_DATA    13
#define D20601_CMD1_DATA_SIZE  10

// TITLE:Message Type 0x10: Configuration Report
// DESC :
T_DATAFIELD D20601_CMD2 [] = {
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 0x10 = Message Type Configuration Report 
{  8 , 1 ,     0 ,     0 ,     0 ,     0 , "VMR"      , "Vacation Mode"},//Value: 0x0 = Vacation Mode is Off 
                                                                         //Value: 0x1 = Vacation Mode is On 
{  9 , 1 ,     0 ,     0 ,     0 ,     0 , "HCCR"     , "Handle Closed Click"},//Value: 0x0 = Handle Closed Click Feature is Disabled 
                                                                               //Value: 0x1 = Handle Closed Click Feature is Enabled 
{ 10 , 1 ,     0 ,     0 ,     0 ,     0 , "BLCR"     , "Battery Low Click"},//Value: 0x0 = Battery Low Click Feature is Disabled 
                                                                             //Value: 0x1 = Battery Low Click Feature is Enabled 
{ 16 ,16 ,     0 ,     0 ,     0 ,     0 , "SUIR"     , "Sensor Update Interval"},
{ 32 , 8 ,     0 ,     0 ,     0 ,     0 , "VBIR"     , "Vacation Blink Interval"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20601_CMD2_MT         0
#define D20601_CMD2_VMR        1
#define D20601_CMD2_HCCR       2
#define D20601_CMD2_BLCR       3
#define D20601_CMD2_SUIR       4
#define D20601_CMD2_VBIR       5
#define D20601_CMD2_NB_DATA    6
#define D20601_CMD2_DATA_SIZE  5

// TITLE:Message Type 0x20: Log Data 01
// DESC :
T_DATAFIELD D20601_CMD3 [] = {
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 0x20 = Message Type Log Data 01 
{  8 ,32 ,     0 ,     0 ,     0 ,     0 , "PON"      , "Power Ons"},
{ 40 ,32 ,     0 ,     0 ,     0 ,     0 , "ALL"      , "Alarms"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20601_CMD3_MT         0
#define D20601_CMD3_PON        1
#define D20601_CMD3_ALL        2
#define D20601_CMD3_NB_DATA    3
#define D20601_CMD3_DATA_SIZE  9

// TITLE:Message Type 0x21: Log Data 02
// DESC :
T_DATAFIELD D20601_CMD4 [] = {
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 0x21 = Message Type Log Data 02 
{  8 ,32 ,     0 ,     0 ,     0 ,     0 , "HMC"      , "Handle Movements Closed"},
{ 40 ,32 ,     0 ,     0 ,     0 ,     0 , "HMO"      , "Handle Movements Opened"},
{ 72 ,32 ,     0 ,     0 ,     0 ,     0 , "HMT"      , "Handle Movements Tilted"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20601_CMD4_MT         0
#define D20601_CMD4_HMC        1
#define D20601_CMD4_HMO        2
#define D20601_CMD4_HMT        3
#define D20601_CMD4_NB_DATA    4
#define D20601_CMD4_DATA_SIZE  13

// TITLE:Message Type 0x22: Log Data 03
// DESC :
T_DATAFIELD D20601_CMD5 [] = {
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 0x22 = Message Type Log Data 03 
{  8 ,32 ,     0 ,     0 ,     0 ,     0 , "WT"       , "Window Tilts"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20601_CMD5_MT         0
#define D20601_CMD5_WT         1
#define D20601_CMD5_NB_DATA    2
#define D20601_CMD5_DATA_SIZE  5

// TITLE:Message Type 0x23: Log Data 04
// DESC :
T_DATAFIELD D20601_CMD6 [] = {
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 0x23 = Message Type Log Data 04 
{  8 ,32 ,     0 ,     0 ,     0 ,     0 , "BRP"      , "Button Right Presses"},
{ 40 ,32 ,     0 ,     0 ,     0 ,     0 , "BLP"      , "Button Left Presses"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20601_CMD6_MT         0
#define D20601_CMD6_BRP        1
#define D20601_CMD6_BLP        2
#define D20601_CMD6_NB_DATA    3
#define D20601_CMD6_DATA_SIZE  9

// TITLE:Message Type 0x80: Control and Settings
// DESC :
T_DATAFIELD D20601_CMD7 [] = {
{  0 , 8 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 0x80 = Message Type Control and Settings 
{  8 , 1 ,     0 ,     0 ,     0 ,     0 , "GCS"      , "Get Configuration Settings"},//Value: 0x0 = No Change 
                                                                                      //Value: 0x1 = Start Transmission 
{  9 , 1 ,     0 ,     0 ,     0 ,     0 , "GLD"      , "Get Log Data"},//Value: 0x0 = No Change 
                                                                        //Value: 0x1 = Start Transmission 
{ 10 , 1 ,     0 ,     0 ,     0 ,     0 , "VMS"      , "Vacation Mode"},//Value: 0x0 = Switch Vacation Mode Off 
                                                                         //Value: 0x1 = Switch Vacation Mode On 
{ 11 , 2 ,     0 ,     0 ,     0 ,     0 , "HCCS"     , "Handle Closed Click"},//Value: 0x0 = No Change 
                                                                               //Value: 0x1 = Disable Handle Closed Click Feature 
                                                                               //Value: 0x2 = Enable Handle Closed Click Feature 
                                                                               //Value: 0x3 = Reserved 
{ 13 , 2 ,     0 ,     0 ,     0 ,     0 , "BLCS"     , "Battery Low Click"},//Value: 0x0 = No Change 
                                                                             //Value: 0x1 = Disable Battery Low Click Feature 
                                                                             //Value: 0x2 = Enable Battery Low Click Feature 
                                                                             //Value: 0x3 = Reserved 
{ 16 ,16 ,     0 ,     0 ,     0 ,     0 , "SUIS"     , "Sensor Update Interval"},//Value: 0x0000 = No Change 

{ 32 , 8 ,     0 ,     0 ,     0 ,     0 , "VBIS"     , "Vacation Blink Interval"},//Value: 0x00 = No Change 

{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20601_CMD7_MT         0
#define D20601_CMD7_GCS        1
#define D20601_CMD7_GLD        2
#define D20601_CMD7_VMS        3
#define D20601_CMD7_HCCS       4
#define D20601_CMD7_BLCS       5
#define D20601_CMD7_SUIS       6
#define D20601_CMD7_VBIS       7
#define D20601_CMD7_NB_DATA    8
#define D20601_CMD7_DATA_SIZE  5

T_DATAFIELD* D20601_CASES [] = {
D20601_CMD1 ,
D20601_CMD2 ,
D20601_CMD3 ,
D20601_CMD4 ,
D20601_CMD5 ,
D20601_CMD6 ,
D20601_CMD7 ,
{0 }
};

// function number :0x10 : Room Control Panels with Temperature & Fan Speed Control, Room Status Information and Time Program 
// function type :0x00 : Type 0x00 
//{ 0xD2, 0x10, 0x00, "Room Control Panels with Temperature & Fan Speed Control, Room Status Information and Time Program" , "Type 0x00                                                                       " },

// TITLE:General Message
// DESC :
T_DATAFIELD D21000_CMD1 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message identifier"},//Value: 0 = General Message 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MCF"      , "Message continuation flag"},//Value: 3 = Reserved 
{ 10 , 3 ,     0 ,     0 ,     0 ,     0 , "IRC"      , "Information request classifier"},//Value: 7 = Reserved 
{ 13 , 2 ,     0 ,     0 ,     0 ,     0 , "FBC"      , "Feedback classifier"},//Value: 3 = Reserved 
{ 15 , 1 ,     0 ,     0 ,     0 ,     0 , "GMT"      , "General message type"},//Value: 1 = Information request 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21000_CMD1_MID        0
#define D21000_CMD1_MCF        1
#define D21000_CMD1_IRC        2
#define D21000_CMD1_FBC        3
#define D21000_CMD1_GMT        4
#define D21000_CMD1_NB_DATA    5
#define D21000_CMD1_DATA_SIZE  2

// TITLE:Data Message
// DESC :
T_DATAFIELD D21000_CMD2 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message identifier"},//Value: 1 = Data Message 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MCF"      , "Message continuation flag"},//Value: 3 = Reserved 
{  8 , 8 ,     0 ,   255 ,     0 ,   100 , "HUM"      , "Humidity"},
{ 16 , 1 ,     0 ,     0 ,     0 ,     0 , "HVF"      , "Humidity validity flag"},//Value: 1 = Valid value 
{ 17 , 7 ,     0 ,   100 ,     0 ,   100 , "FS"       , "Fan speed control"},
{ 24 , 1 ,     0 ,     0 ,     0 ,     0 , "FSV"      , "Fan speed validity flag"},//Value: 1 = Valid value 
{ 25 , 1 ,     0 ,     0 ,     0 ,     0 , "FSM"      , "Fan speed mode"},//Value: 1 = Individual fan speed control 
{ 27 , 1 ,     0 ,     0 ,     0 ,     0 , "CW2"      , "Custom warning 2"},//Value: 1 = True 
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "CW1"      , "Custom warning 1"},//Value: 1 = True 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "MW"       , "Mold warning"},//Value: 1 = True 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "WOD"      , "Window open detection"},//Value: 3 = Reserved 
{ 33 , 2 ,     0 ,     0 ,     0 ,     0 , "BS"       , "Battery status"},//Value: 3 = Critical 
{ 35 , 1 ,     0 ,     0 ,     0 ,     0 , "SPS"      , "Solar-powered status"},//Value: 1 = Not solar-powered 
{ 36 , 2 ,     0 ,     0 ,     0 ,     0 , "PIR"      , "PIR status"},//Value: 3 = Locked 
{ 38 , 2 ,     0 ,     0 ,     0 ,     0 , "OBS"      , "Occupancy button status"},//Value: 3 = Reserved 
{ 40 , 2 ,     0 ,     0 ,     0 ,     0 , "COO"      , "Cooling"},//Value: 3 = Automatic 
{ 42 , 2 ,     0 ,     0 ,     0 ,     0 , "HEA"      , "Heating"},//Value: 3 = Automatic 
{ 44 , 2 ,     0 ,     0 ,     0 ,     0 , "RCM"      , "Room control mode"},//Value: 3 = Building protection 
{ 46 , 1 ,     0 ,     0 ,     0 ,     0 , "SPV"      , "Temperature set point validity"},//Value: 1 = Valid value 
{ 47 , 1 ,     0 ,     0 ,     0 ,     0 , "TPV"      , "Temperature validity"},//Value: 1 = Valid value 
{ 48 , 8 ,     0 ,   255 ,     0 ,    40 , "TSP"      , "Temperature set point"},
{ 56 , 8 ,     0 ,   255 ,     0 ,    40 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21000_CMD2_MID        0
#define D21000_CMD2_MCF        1
#define D21000_CMD2_HUM        2
#define D21000_CMD2_HVF        3
#define D21000_CMD2_FS         4
#define D21000_CMD2_FSV        5
#define D21000_CMD2_FSM        6
#define D21000_CMD2_CW2        7
#define D21000_CMD2_CW1        8
#define D21000_CMD2_MW         9
#define D21000_CMD2_WOD        10
#define D21000_CMD2_BS         11
#define D21000_CMD2_SPS        12
#define D21000_CMD2_PIR        13
#define D21000_CMD2_OBS        14
#define D21000_CMD2_COO        15
#define D21000_CMD2_HEA        16
#define D21000_CMD2_RCM        17
#define D21000_CMD2_SPV        18
#define D21000_CMD2_TPV        19
#define D21000_CMD2_TSP        20
#define D21000_CMD2_TMP        21
#define D21000_CMD2_NB_DATA    22
#define D21000_CMD2_DATA_SIZE  8

// TITLE:Configuration Message
// DESC :
T_DATAFIELD D21000_CMD3 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message identifier"},//Value: 2 = Configuration Message 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MCF"      , "Message continuation flag"},//Value: 3 = Reserved 
{  8 , 1 ,     0 ,     0 ,     0 ,     0 , "PSL"      , "PIR status lock"},//Value: 1 = Unlocked 
{  9 , 1 ,     0 ,     0 ,     0 ,     0 , "TSL"      , "Temperature scale lock"},//Value: 1 = Unlocked 
{ 10 , 1 ,     0 ,     0 ,     0 ,     0 , "DCL"      , "Display content lock"},//Value: 1 = Unlocked 
{ 11 , 1 ,     0 ,     0 ,     0 ,     0 , "DTL"      , "Date / time lock"},//Value: 1 = Unlocked 
{ 12 , 1 ,     0 ,     0 ,     0 ,     0 , "TPL"      , "Time program lock"},//Value: 1 = Unlocked 
{ 13 , 1 ,     0 ,     0 ,     0 ,     0 , "OBL"      , "Occupancy button lock"},//Value: 1 = Unlocked 
{ 14 , 1 ,     0 ,     0 ,     0 ,     0 , "SPL"      , "Temperature set point lock"},//Value: 1 = Unlocked 
{ 15 , 1 ,     0 ,     0 ,     0 ,     0 , "FSL"      , "Fan speed lock"},//Value: 1 = Unlocked 
{ 16 , 6 ,     0 ,     0 ,     0 ,     0 , "RCI"      , "Radio communication interval"},//Value: 63 = 24 hours 
{ 22 , 1 ,     0 ,     0 ,     0 ,     0 , "KL"       , "Key lock"},//Value: 1 = Unlocked 
{ 24 , 3 ,     0 ,     0 ,     0 ,     0 , "DC"       , "Display content"},//Value: 7 = Humidity 
{ 27 , 2 ,     0 ,     0 ,     0 ,     0 , "TS"       , "Temperature scale"},//Value: 3 = ø Fahrenheit 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "DST"      , "Daylight saving time flag"},//Value: 1 = Not supported 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "TN"       , "Time notation"},//Value: 3 = 12 h 
{ 32 , 5 ,     1 ,    31 ,     1 ,    31 , "DAY"      , "Day"},
{ 37 , 4 ,     1 ,    12 ,     1 ,    12 , "MON"      , "Month"},
{ 41 , 7 ,     0 ,   127 ,  2000 ,  2127 , "YR"       , "Year"},
{ 48 , 6 ,     0 ,    59 ,     0 ,    59 , "MIN"      , "Minute"},
{ 56 , 5 ,     0 ,    23 ,     0 ,    23 , "HR"       , "Hour"},
{ 63 , 1 ,     0 ,     0 ,     0 ,     0 , "DTU"      , "Date / time update flag"},//Value: 1 = Update 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21000_CMD3_MID        0
#define D21000_CMD3_MCF        1
#define D21000_CMD3_PSL        2
#define D21000_CMD3_TSL        3
#define D21000_CMD3_DCL        4
#define D21000_CMD3_DTL        5
#define D21000_CMD3_TPL        6
#define D21000_CMD3_OBL        7
#define D21000_CMD3_SPL        8
#define D21000_CMD3_FSL        9
#define D21000_CMD3_RCI        10
#define D21000_CMD3_KL         11
#define D21000_CMD3_DC         12
#define D21000_CMD3_TS         13
#define D21000_CMD3_DST        14
#define D21000_CMD3_TN         15
#define D21000_CMD3_DAY        16
#define D21000_CMD3_MON        17
#define D21000_CMD3_YR         18
#define D21000_CMD3_MIN        19
#define D21000_CMD3_HR         20
#define D21000_CMD3_DTU        21
#define D21000_CMD3_NB_DATA    22
#define D21000_CMD3_DATA_SIZE  8

// TITLE:Room Control Setup
// DESC :
T_DATAFIELD D21000_CMD4 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message identifier"},//Value: 3 = Room Control Setup 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MCF"      , "Message continuation flag"},//Value: 3 = Reserved 
{  8 , 8 ,     0 ,   255 ,     0 ,    40 , "SPB"      , "Temperature set point building protection mode"},
{ 16 , 8 ,     0 ,   255 ,     0 ,    40 , "SPP"      , "Temperature set point pre-comfort mode"},
{ 24 , 8 ,     0 ,   255 ,     0 ,    40 , "SPE"      , "Temperature set point economy mode"},
{ 32 , 8 ,     0 ,   255 ,     0 ,    40 , "SPC"      , "Temperature set point comfort mode"},
{ 44 , 1 ,     0 ,     0 ,     0 ,     0 , "SFB"      , "Temperature set point flag building protection mode"},//Value: 1 = Valid value 
{ 45 , 1 ,     0 ,     0 ,     0 ,     0 , "SFP"      , "Temperature set point flag pre-comfort mode"},//Value: 1 = Valid value 
{ 46 , 1 ,     0 ,     0 ,     0 ,     0 , "SFE"      , "Temperature set point flag economy mode"},//Value: 1 = Valid value 
{ 47 , 1 ,     0 ,     0 ,     0 ,     0 , "SFC"      , "Temperature set point flag comfort mode"},//Value: 1 = Valid value 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21000_CMD4_MID        0
#define D21000_CMD4_MCF        1
#define D21000_CMD4_SPB        2
#define D21000_CMD4_SPP        3
#define D21000_CMD4_SPE        4
#define D21000_CMD4_SPC        5
#define D21000_CMD4_SFB        6
#define D21000_CMD4_SFP        7
#define D21000_CMD4_SFE        8
#define D21000_CMD4_SFC        9
#define D21000_CMD4_NB_DATA    10
#define D21000_CMD4_DATA_SIZE  6

// TITLE:Time Program Setup
// DESC :
T_DATAFIELD D21000_CMD5 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message identifier"},//Value: 4 = Time Program Setup 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MCF"      , "Message continuation flag"},//Value: 3 = Reserved 
{ 10 , 6 ,     0 ,    59 ,     0 ,    59 , "ETM"      , "End time: Minute"},
{ 19 , 5 ,     0 ,    23 ,     0 ,    23 , "ETH"      , "End time: Hour"},
{ 26 , 6 ,     0 ,    59 ,     0 ,    59 , "STM"      , "Start time: Minute"},
{ 35 , 5 ,     0 ,    23 ,     0 ,    23 , "STH"      , "Start time: Hour"},
{ 40 , 4 ,     0 ,     0 ,     0 ,     0 , "PER"      , "Period"},//Value: 15 = Friday - Monday 
{ 44 , 2 ,     0 ,     0 ,     0 ,     0 , "RCM"      , "Room control mode"},//Value: 3 = Building protection 
{ 47 , 1 ,     0 ,     0 ,     0 ,     0 , "TPD"      , "Time program deletion"},//Value: 1 = Deletion 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21000_CMD5_MID        0
#define D21000_CMD5_MCF        1
#define D21000_CMD5_ETM        2
#define D21000_CMD5_ETH        3
#define D21000_CMD5_STM        4
#define D21000_CMD5_STH        5
#define D21000_CMD5_PER        6
#define D21000_CMD5_RCM        7
#define D21000_CMD5_TPD        8
#define D21000_CMD5_NB_DATA    9
#define D21000_CMD5_DATA_SIZE  6

T_DATAFIELD* D21000_CASES [] = {
D21000_CMD1 ,
D21000_CMD2 ,
D21000_CMD3 ,
D21000_CMD4 ,
D21000_CMD5 ,
{0 }
};

// function type :0x01 : Type 0x01 
//{ 0xD2, 0x10, 0x01, "Room Control Panels with Temperature & Fan Speed Control, Room Status Information and Time Program" , "Type 0x01                                                                       " },

// TITLE:General Message
// DESC :
T_DATAFIELD D21001_CMD1 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message identifier"},//Value: 0 = General Message 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MCF"      , "Message continuation flag"},//Value: 3 = Reserved 
{ 10 , 3 ,     0 ,     0 ,     0 ,     0 , "IRC"      , "Information request classifier"},//Value: 7 = Reserved 
{ 13 , 2 ,     0 ,     0 ,     0 ,     0 , "FBC"      , "Feedback classifier"},//Value: 3 = Reserved 
{ 15 , 1 ,     0 ,     0 ,     0 ,     0 , "GMT"      , "General message type"},//Value: 1 = Information request 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21001_CMD1_MID        0
#define D21001_CMD1_MCF        1
#define D21001_CMD1_IRC        2
#define D21001_CMD1_FBC        3
#define D21001_CMD1_GMT        4
#define D21001_CMD1_NB_DATA    5
#define D21001_CMD1_DATA_SIZE  2

// TITLE:Data Message
// DESC :
T_DATAFIELD D21001_CMD2 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message identifier"},//Value: 1 = Data Message 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MCF"      , "Message continuation flag"},//Value: 3 = Reserved 
{ 27 , 1 ,     0 ,     0 ,     0 ,     0 , "CW2"      , "Custom warning 2"},//Value: 1 = True 
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "CW1"      , "Custom warning 1"},//Value: 1 = True 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "WOD"      , "Window open detection"},//Value: 3 = Reserved 
{ 33 , 2 ,     0 ,     0 ,     0 ,     0 , "BS"       , "Battery status"},//Value: 3 = Critical 
{ 38 , 2 ,     0 ,     0 ,     0 ,     0 , "OBS"      , "Occupancy button status"},//Value: 3 = Reserved 
{ 44 , 2 ,     0 ,     0 ,     0 ,     0 , "RCM"      , "Room control mode"},//Value: 3 = Building protection 
{ 46 , 1 ,     0 ,     0 ,     0 ,     0 , "SPV"      , "Temperature set point validity"},//Value: 1 = Valid value 
{ 47 , 1 ,     0 ,     0 ,     0 ,     0 , "TPV"      , "Temperature validity"},//Value: 1 = Valid value 
{ 48 , 8 ,     0 ,   255 ,     0 ,    40 , "TSP"      , "Temperature set point"},
{ 56 , 8 ,     0 ,   255 ,     0 ,    40 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21001_CMD2_MID        0
#define D21001_CMD2_MCF        1
#define D21001_CMD2_CW2        2
#define D21001_CMD2_CW1        3
#define D21001_CMD2_WOD        4
#define D21001_CMD2_BS         5
#define D21001_CMD2_OBS        6
#define D21001_CMD2_RCM        7
#define D21001_CMD2_SPV        8
#define D21001_CMD2_TPV        9
#define D21001_CMD2_TSP        10
#define D21001_CMD2_TMP        11
#define D21001_CMD2_NB_DATA    12
#define D21001_CMD2_DATA_SIZE  8

// TITLE:Configuration Message
// DESC :
T_DATAFIELD D21001_CMD3 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message identifier"},//Value: 2 = Configuration Message 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MCF"      , "Message continuation flag"},//Value: 3 = Reserved 
{  9 , 1 ,     0 ,     0 ,     0 ,     0 , "TSL"      , "Temperature scale lock"},//Value: 1 = Unlocked 
{ 10 , 1 ,     0 ,     0 ,     0 ,     0 , "DCL"      , "Display content lock"},//Value: 1 = Unlocked 
{ 11 , 1 ,     0 ,     0 ,     0 ,     0 , "DTL"      , "Date / time lock"},//Value: 1 = Unlocked 
{ 12 , 1 ,     0 ,     0 ,     0 ,     0 , "TPL"      , "Time program lock"},//Value: 1 = Unlocked 
{ 13 , 1 ,     0 ,     0 ,     0 ,     0 , "OBL"      , "Occupancy button lock"},//Value: 1 = Unlocked 
{ 14 , 1 ,     0 ,     0 ,     0 ,     0 , "SPL"      , "Temperature set point lock"},//Value: 1 = Unlocked 
{ 16 , 6 ,     0 ,     0 ,     0 ,     0 , "RCI"      , "Radio communication interval"},//Value: 63 = 24 hours 
{ 22 , 1 ,     0 ,     0 ,     0 ,     0 , "KL"       , "Key lock"},//Value: 1 = Unlocked 
{ 24 , 3 ,     0 ,     0 ,     0 ,     0 , "DC"       , "Display content"},//Value: 7 = Humidity 
{ 27 , 2 ,     0 ,     0 ,     0 ,     0 , "TS"       , "Temperature scale"},//Value: 3 = ø Fahrenheit 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "DST"      , "Daylight saving time flag"},//Value: 1 = Not supported 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "TN"       , "Time notation"},//Value: 3 = 12 h 
{ 32 , 5 ,     1 ,    31 ,     1 ,    31 , "DAY"      , "Day"},
{ 37 , 4 ,     1 ,    12 ,     1 ,    12 , "MON"      , "Month"},
{ 41 , 7 ,     0 ,   127 ,  2000 ,  2127 , "YR"       , "Year"},
{ 48 , 6 ,     0 ,    59 ,     0 ,    59 , "MIN"      , "Minute"},
{ 56 , 5 ,     0 ,    23 ,     0 ,    23 , "HR"       , "Hour"},
{ 63 , 1 ,     0 ,     0 ,     0 ,     0 , "DTU"      , "Date / time update flag"},//Value: 1 = Update 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21001_CMD3_MID        0
#define D21001_CMD3_MCF        1
#define D21001_CMD3_TSL        2
#define D21001_CMD3_DCL        3
#define D21001_CMD3_DTL        4
#define D21001_CMD3_TPL        5
#define D21001_CMD3_OBL        6
#define D21001_CMD3_SPL        7
#define D21001_CMD3_RCI        8
#define D21001_CMD3_KL         9
#define D21001_CMD3_DC         10
#define D21001_CMD3_TS         11
#define D21001_CMD3_DST        12
#define D21001_CMD3_TN         13
#define D21001_CMD3_DAY        14
#define D21001_CMD3_MON        15
#define D21001_CMD3_YR         16
#define D21001_CMD3_MIN        17
#define D21001_CMD3_HR         18
#define D21001_CMD3_DTU        19
#define D21001_CMD3_NB_DATA    20
#define D21001_CMD3_DATA_SIZE  8

// TITLE:Room Control Setup
// DESC :
T_DATAFIELD D21001_CMD4 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message identifier"},//Value: 3 = Room Control Setup 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MCF"      , "Message continuation flag"},//Value: 3 = Reserved 
{  8 , 8 ,     0 ,   255 ,     0 ,    40 , "SPB"      , "Temperature set point building protection mode"},
{ 24 , 8 ,     0 ,   255 ,     0 ,    40 , "SPE"      , "Temperature set point economy mode"},
{ 32 , 8 ,     0 ,   255 ,     0 ,    40 , "SPC"      , "Temperature set point comfort mode"},
{ 44 , 1 ,     0 ,     0 ,     0 ,     0 , "SFB"      , "Temperature set point flag building protection mode"},//Value: 1 = Valid value 
{ 46 , 1 ,     0 ,     0 ,     0 ,     0 , "SFE"      , "Temperature set point flag economy mode"},//Value: 1 = Valid value 
{ 47 , 1 ,     0 ,     0 ,     0 ,     0 , "SFC"      , "Temperature set point flag comfort mode"},//Value: 1 = Valid value 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21001_CMD4_MID        0
#define D21001_CMD4_MCF        1
#define D21001_CMD4_SPB        2
#define D21001_CMD4_SPE        3
#define D21001_CMD4_SPC        4
#define D21001_CMD4_SFB        5
#define D21001_CMD4_SFE        6
#define D21001_CMD4_SFC        7
#define D21001_CMD4_NB_DATA    8
#define D21001_CMD4_DATA_SIZE  6

// TITLE:Time Program Setup
// DESC :
T_DATAFIELD D21001_CMD5 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message identifier"},//Value: 4 = Time Program Setup 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MCF"      , "Message continuation flag"},//Value: 3 = Reserved 
{ 10 , 6 ,     0 ,    59 ,     0 ,    59 , "ETM"      , "End time: Minute"},
{ 19 , 5 ,     0 ,    23 ,     0 ,    23 , "ETH"      , "End time: Hour"},
{ 26 , 6 ,     0 ,    59 ,     0 ,    59 , "STM"      , "Start time: Minute"},
{ 35 , 5 ,     0 ,    23 ,     0 ,    23 , "STH"      , "Start time: Hour"},
{ 40 , 4 ,     0 ,     0 ,     0 ,     0 , "PER"      , "Period"},//Value: 15 = Friday - Monday 
{ 44 , 2 ,     0 ,     0 ,     0 ,     0 , "RCM"      , "Room control mode"},//Value: 3 = Building protection 
{ 47 , 1 ,     0 ,     0 ,     0 ,     0 , "TPD"      , "Time program deletion"},//Value: 1 = Deletion 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21001_CMD5_MID        0
#define D21001_CMD5_MCF        1
#define D21001_CMD5_ETM        2
#define D21001_CMD5_ETH        3
#define D21001_CMD5_STM        4
#define D21001_CMD5_STH        5
#define D21001_CMD5_PER        6
#define D21001_CMD5_RCM        7
#define D21001_CMD5_TPD        8
#define D21001_CMD5_NB_DATA    9
#define D21001_CMD5_DATA_SIZE  6

T_DATAFIELD* D21001_CASES [] = {
D21001_CMD1 ,
D21001_CMD2 ,
D21001_CMD3 ,
D21001_CMD4 ,
D21001_CMD5 ,
{0 }
};

// function type :0x02 : Type 0x02 
//{ 0xD2, 0x10, 0x02, "Room Control Panels with Temperature & Fan Speed Control, Room Status Information and Time Program" , "Type 0x02                                                                       " },

// TITLE:General Message
// DESC :
T_DATAFIELD D21002_CMD1 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message identifier"},//Value: 0 = General Message 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MCF"      , "Message continuation flag"},//Value: 3 = Reserved 
{ 10 , 3 ,     0 ,     0 ,     0 ,     0 , "IRC"      , "Information request classifier"},//Value: 7 = Reserved 
{ 13 , 2 ,     0 ,     0 ,     0 ,     0 , "FBC"      , "Feedback classifier"},//Value: 3 = Reserved 
{ 15 , 1 ,     0 ,     0 ,     0 ,     0 , "GMT"      , "General message type"},//Value: 1 = Information request 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21002_CMD1_MID        0
#define D21002_CMD1_MCF        1
#define D21002_CMD1_IRC        2
#define D21002_CMD1_FBC        3
#define D21002_CMD1_GMT        4
#define D21002_CMD1_NB_DATA    5
#define D21002_CMD1_DATA_SIZE  2

// TITLE:Data Message
// DESC :
T_DATAFIELD D21002_CMD2 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message identifier"},//Value: 1 = Data Message 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MCF"      , "Message continuation flag"},//Value: 3 = Reserved 
{ 27 , 1 ,     0 ,     0 ,     0 ,     0 , "CW2"      , "Custom warning 2"},//Value: 1 = True 
{ 28 , 1 ,     0 ,     0 ,     0 ,     0 , "CW1"      , "Custom warning 1"},//Value: 1 = True 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "WOD"      , "Window open detection"},//Value: 3 = Reserved 
{ 33 , 2 ,     0 ,     0 ,     0 ,     0 , "BS"       , "Battery status"},//Value: 3 = Critical 
{ 35 , 1 ,     0 ,     0 ,     0 ,     0 , "SPS"      , "Solar-powered status"},//Value: 1 = Not solar-powered 
{ 36 , 2 ,     0 ,     0 ,     0 ,     0 , "PIR"      , "PIR status"},//Value: 3 = Locked 
{ 38 , 2 ,     0 ,     0 ,     0 ,     0 , "OBS"      , "Occupancy button status"},//Value: 3 = Reserved 
{ 44 , 2 ,     0 ,     0 ,     0 ,     0 , "RCM"      , "Room control mode"},//Value: 3 = Building protection 
{ 46 , 1 ,     0 ,     0 ,     0 ,     0 , "SPV"      , "Temperature set point validity"},//Value: 1 = Valid value 
{ 47 , 1 ,     0 ,     0 ,     0 ,     0 , "TPV"      , "Temperature validity"},//Value: 1 = Valid value 
{ 48 , 8 ,     0 ,   255 ,     0 ,    40 , "TSP"      , "Temperature set point"},
{ 56 , 8 ,     0 ,   255 ,     0 ,    40 , "TMP"      , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21002_CMD2_MID        0
#define D21002_CMD2_MCF        1
#define D21002_CMD2_CW2        2
#define D21002_CMD2_CW1        3
#define D21002_CMD2_WOD        4
#define D21002_CMD2_BS         5
#define D21002_CMD2_SPS        6
#define D21002_CMD2_PIR        7
#define D21002_CMD2_OBS        8
#define D21002_CMD2_RCM        9
#define D21002_CMD2_SPV        10
#define D21002_CMD2_TPV        11
#define D21002_CMD2_TSP        12
#define D21002_CMD2_TMP        13
#define D21002_CMD2_NB_DATA    14
#define D21002_CMD2_DATA_SIZE  8

// TITLE:Configuration Message
// DESC :
T_DATAFIELD D21002_CMD3 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message identifier"},//Value: 2 = Configuration Message 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MCF"      , "Message continuation flag"},//Value: 3 = Reserved 
{  8 , 1 ,     0 ,     0 ,     0 ,     0 , "PSL"      , "PIR status lock"},//Value: 1 = Unlocked 
{ 10 , 1 ,     0 ,     0 ,     0 ,     0 , "DCL"      , "Display content lock"},//Value: 1 = Unlocked 
{ 11 , 1 ,     0 ,     0 ,     0 ,     0 , "DTL"      , "Date / time lock"},//Value: 1 = Unlocked 
{ 12 , 1 ,     0 ,     0 ,     0 ,     0 , "TPL"      , "Time program lock"},//Value: 1 = Unlocked 
{ 13 , 1 ,     0 ,     0 ,     0 ,     0 , "OBL"      , "Occupancy button lock"},//Value: 1 = Unlocked 
{ 16 , 6 ,     0 ,     0 ,     0 ,     0 , "RCI"      , "Radio communication interval"},//Value: 63 = 24 hours 
{ 24 , 3 ,     0 ,     0 ,     0 ,     0 , "DC"       , "Display content"},//Value: 7 = Humidity 
{ 27 , 2 ,     0 ,     0 ,     0 ,     0 , "TS"       , "Temperature scale"},//Value: 3 = ø Fahrenheit 
{ 29 , 1 ,     0 ,     0 ,     0 ,     0 , "DST"      , "Daylight saving time flag"},//Value: 1 = Not supported 
{ 30 , 2 ,     0 ,     0 ,     0 ,     0 , "TN"       , "Time notation"},//Value: 3 = 12 h 
{ 32 , 5 ,     1 ,    31 ,     1 ,    31 , "DAY"      , "Day"},
{ 37 , 4 ,     1 ,    12 ,     1 ,    12 , "MON"      , "Month"},
{ 41 , 7 ,     0 ,   127 ,  2000 ,  2127 , "YR"       , "Year"},
{ 48 , 6 ,     0 ,    59 ,     0 ,    59 , "MIN"      , "Minute"},
{ 56 , 5 ,     0 ,    23 ,     0 ,    23 , "HR"       , "Hour"},
{ 63 , 1 ,     0 ,     0 ,     0 ,     0 , "DTU"      , "Date / time update flag"},//Value: 1 = Update 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21002_CMD3_MID        0
#define D21002_CMD3_MCF        1
#define D21002_CMD3_PSL        2
#define D21002_CMD3_DCL        3
#define D21002_CMD3_DTL        4
#define D21002_CMD3_TPL        5
#define D21002_CMD3_OBL        6
#define D21002_CMD3_RCI        7
#define D21002_CMD3_DC         8
#define D21002_CMD3_TS         9
#define D21002_CMD3_DST        10
#define D21002_CMD3_TN         11
#define D21002_CMD3_DAY        12
#define D21002_CMD3_MON        13
#define D21002_CMD3_YR         14
#define D21002_CMD3_MIN        15
#define D21002_CMD3_HR         16
#define D21002_CMD3_DTU        17
#define D21002_CMD3_NB_DATA    18
#define D21002_CMD3_DATA_SIZE  8

// TITLE:Room Control Setup
// DESC :
T_DATAFIELD D21002_CMD4 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message identifier"},//Value: 3 = Room Control Setup 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MCF"      , "Message continuation flag"},//Value: 3 = Reserved 
{ 24 , 8 ,     0 ,   255 ,     0 ,    40 , "SPE"      , "Temperature set point economy mode"},
{ 32 , 8 ,     0 ,   255 ,     0 ,    40 , "SPC"      , "Temperature set point comfort mode"},
{ 46 , 1 ,     0 ,     0 ,     0 ,     0 , "SFE"      , "Temperature set point flag economy mode"},//Value: 1 = Valid value 
{ 47 , 1 ,     0 ,     0 ,     0 ,     0 , "SFC"      , "Temperature set point flag comfort mode"},//Value: 1 = Valid value 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21002_CMD4_MID        0
#define D21002_CMD4_MCF        1
#define D21002_CMD4_SPE        2
#define D21002_CMD4_SPC        3
#define D21002_CMD4_SFE        4
#define D21002_CMD4_SFC        5
#define D21002_CMD4_NB_DATA    6
#define D21002_CMD4_DATA_SIZE  6

T_DATAFIELD* D21002_CASES [] = {
D21002_CMD1 ,
D21002_CMD2 ,
D21002_CMD3 ,
D21002_CMD4 ,
{0 }
};

// function number :0x11 : Bidirectional Room Operating Panel 
// function type :0x01 : Type 0x01 
//{ 0xD2, 0x11, 0x01, "Bidirectional Room Operating Panel                                              " , "Type 0x01                                                                       " },

// TITLE:Message type A / ID 0 (First switch press after sleep-mode, request new data)
// DESC :Direction: Sensor -> Gateway
T_DATAFIELD D21101_CMD1 [] = {
{  0 , 1 ,     0 ,     0 ,     0 ,     0 , "SPT"      , "Setpoint type"},//Value: 0 = Temperature correction 
                                                                         //Value: 1 = Temperature setpoint 
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message ID"},//Value: 0 = ID-0 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21101_CMD1_SPT        0
#define D21101_CMD1_MID        1
#define D21101_CMD1_NB_DATA    2
#define D21101_CMD1_DATA_SIZE  1

// TITLE:Message type B / ID 1 (Override device parameter, reply to data request)
// DESC :Direction: Gateway -> Sensor
T_DATAFIELD D21101_CMD2 [] = {
{  0 , 1 ,     0 ,     0 ,     0 ,     0 , "SPT"      , "Set Setpoint type"},//Value: 0 = Temperature correction 
                                                                             //Value: 1 = Temperature setpoint 
{  1 , 1 ,     0 ,     0 ,     0 ,     0 , "DHS"      , "Display heating symbol"},//Value: 0 = Heating symbol off 
                                                                                  //Value: 1 = Heating symbol on 
{  2 , 1 ,     0 ,     0 ,     0 ,     0 , "DCS"      , "Display cooling symbol"},//Value: 0 = Cooling symbol off 
                                                                                  //Value: 1 = Cooling symbol on 
{  3 , 1 ,     0 ,     0 ,     0 ,     0 , "SSW"      , "Display  window open  symbol"},//Value: 0 = "Window open" symbol off 
                                                                                        //Value: 1 = "Window open" symbol on 
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message ID"},//Value: 0 = ID-0 
{  8 , 8 ,     0 ,     0 ,     0 ,     0 , "OSO"      , "Temperature correction"},
{ 16 , 8 ,     0 ,     0 ,     0 ,     0 , "BSP"      , "Basesetpoint"},
{ 24 , 4 ,     0 ,     0 ,     0 ,     0 , "COA"      , "Valid temperature correction"},//Value: 0 = Reserved 
                                                                                        //Value: 1 = -1 . +1 K 
                                                                                        //Value: 2 = -2 . +2 K 
                                                                                        //Value: 3 = -3 . +3 K 
                                                                                        //Value: 4 = -4 . +4 K 
                                                                                        //Value: 5 = -5 . +5 K 
                                                                                        //Value: 6 = -6 . +6 K 
                                                                                        //Value: 7 = -7 . +7 K 
                                                                                        //Value: 8 = -8 . +8 K 
                                                                                        //Value: 9 = -9 . +9 K 
                                                                                        //Value: 10 = -10 . +10 K 

{ 28 , 3 ,     0 ,     0 ,     0 ,     0 , "OFS"      , "Fan Speed"},//Value: 0 = Auto 
                                                                     //Value: 1 = Speed 0 
                                                                     //Value: 2 = Speed 1 
                                                                     //Value: 3 = Speed 2 
                                                                     //Value: 4 = Speed 3 

{ 31 , 1 ,     0 ,     0 ,     0 ,     0 , "OOS"      , "Occupancy State"},//Value: 0 = State Unoccupied 
                                                                           //Value: 1 = State Occupied 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21101_CMD2_SPT        0
#define D21101_CMD2_DHS        1
#define D21101_CMD2_DCS        2
#define D21101_CMD2_SSW        3
#define D21101_CMD2_MID        4
#define D21101_CMD2_OSO        5
#define D21101_CMD2_BSP        6
#define D21101_CMD2_COA        7
#define D21101_CMD2_OFS        8
#define D21101_CMD2_OOS        9
#define D21101_CMD2_NB_DATA    10
#define D21101_CMD2_DATA_SIZE  4

// TITLE:Message type C / ID 2 (Transmit actual data)
// DESC :Direction: Sensor -> Gateway
T_DATAFIELD D21101_CMD3 [] = {
{  0 , 1 ,     0 ,     0 ,     0 ,     0 , "SPT"      , "Setpoint type"},//Value: 0 = Temperature correction 
                                                                         //Value: 1 = Temperature setpoint 
{  1 , 2 ,     0 ,     0 ,     0 ,     0 , "TT"       , "Telegram Type"},//Value: 0 = Heartbeat 
                                                                         //Value: 1 = Change of temperature- or humidity value 
                                                                         //Value: 2 = User caused parameter change 
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "MID"      , "Message ID"},//Value: 0 = ID-0 
{  8 , 8 ,     0 ,   255 ,     0 ,    40 , "TEMP"     , "Temperature"},
{ 16 , 8 ,     0 ,   250 ,     0 ,   100 , "HUMI"     , "Humidity"},
{ 24 , 8 ,     0 ,   255 ,     0 ,     0 , "SP"       , "Setpoint offset"},
{ 32 , 8 ,     0 ,     0 ,     0 ,     0 , "IBS"      , "Basesetpoint"},
{ 40 , 4 ,     0 ,     0 ,     0 ,     0 , "BSB"      , "Valid temperature correction"},//Value: 0 = Reserved 

{ 44 , 3 ,     0 ,     0 ,     0 ,     0 , "FS"       , "Fan Speed"},//Value: 0 = Auto 
                                                                     //Value: 1 = Speed 0 
                                                                     //Value: 2 = Speed 1 
                                                                     //Value: 3 = Speed 2 
                                                                     //Value: 4 = Speed 3 

{ 47 , 1 ,     0 ,     0 ,     0 ,     0 , "OS"       , "Occupancy State"},//Value: 0 = State Unoccupied 
                                                                           //Value: 1 = State Occupied 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21101_CMD3_SPT        0
#define D21101_CMD3_TT         1
#define D21101_CMD3_MID        2
#define D21101_CMD3_TEMP       3
#define D21101_CMD3_HUMI       4
#define D21101_CMD3_SP         5
#define D21101_CMD3_IBS        6
#define D21101_CMD3_BSB        7
#define D21101_CMD3_FS         8
#define D21101_CMD3_OS         9
#define D21101_CMD3_NB_DATA    10
#define D21101_CMD3_DATA_SIZE  6

T_DATAFIELD* D21101_CASES [] = {
D21101_CMD1 ,
D21101_CMD2 ,
D21101_CMD3 ,
{0 }
};

// function type :0x02 : Type 0x02 (description: see table) 
//{ 0xD2, 0x11, 0x02, "Bidirectional Room Operating Panel                                              " , "Type 0x02 (description: see table)                                              " },

T_DATAFIELD* D21102_CASES [] = {
D21101_CMD1 ,
D21101_CMD2 ,
D21101_CMD3 ,
{0 }
};

// function type :0x03 : Type 0x03 (description: see table) 
//{ 0xD2, 0x11, 0x03, "Bidirectional Room Operating Panel                                              " , "Type 0x03 (description: see table)                                              " },

T_DATAFIELD* D21103_CASES [] = {
D21101_CMD1 ,
D21101_CMD2 ,
D21101_CMD3 ,
{0 }
};

// function type :0x04 : Type 0x04 (description: see table) 
//{ 0xD2, 0x11, 0x04, "Bidirectional Room Operating Panel                                              " , "Type 0x04 (description: see table)                                              " },

T_DATAFIELD* D21104_CASES [] = {
D21101_CMD1 ,
D21101_CMD2 ,
D21101_CMD3 ,
{0 }
};

// function type :0x05 : Type 0x05 (description: see table) 
//{ 0xD2, 0x11, 0x05, "Bidirectional Room Operating Panel                                              " , "Type 0x05 (description: see table)                                              " },

T_DATAFIELD* D21105_CASES [] = {
D21101_CMD1 ,
D21101_CMD2 ,
D21101_CMD3 ,
{0 }
};

// function type :0x06 : Type 0x06 (description: see table) 
//{ 0xD2, 0x11, 0x06, "Bidirectional Room Operating Panel                                              " , "Type 0x06 (description: see table)                                              " },

T_DATAFIELD* D21106_CASES [] = {
D21101_CMD1 ,
D21101_CMD2 ,
D21101_CMD3 ,
{0 }
};

// function type :0x07 : Type 0x07 (description: see table) 
//{ 0xD2, 0x11, 0x07, "Bidirectional Room Operating Panel                                              " , "Type 0x07 (description: see table)                                              " },

T_DATAFIELD* D21107_CASES [] = {
D21101_CMD1 ,
D21101_CMD2 ,
D21101_CMD3 ,
{0 }
};

// function type :0x08 : Type 0x08 (description: see table) 
//{ 0xD2, 0x11, 0x08, "Bidirectional Room Operating Panel                                              " , "Type 0x08 (description: see table)                                              " },

T_DATAFIELD* D21108_CASES [] = {
D21101_CMD1 ,
D21101_CMD2 ,
D21101_CMD3 ,
{0 }
};

// function number :0x20 : Fan Control 
// function type :0x00 : Type 0x00 
//{ 0xD2, 0x20, 0x00, "Fan Control                                                                     " , "Type 0x00                                                                       " },

// TITLE:Telegram Definition : 'Fan Control Message'
// DESC :* Devices with discrete fan speed levels instead of a continuous fan speed range should divide the full range linearly and match values beside those discrete levels to the next lower fan speed level.
T_DATAFIELD D22000_CMD1 [] = {
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "OM"       , "Operating Mode"},//Value: 0 = Disabled 
{  5 , 2 ,     0 ,     0 ,     0 ,     0 , "TL"       , "Temperature Level"},//Value: 0 = Too low 
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 0 = Fan control 
{  8 , 2 ,     0 ,     0 ,     0 ,     0 , "HC"       , "Humidity Control"},//Value: 0 = Disabled 
{ 10 , 2 ,     0 ,     0 ,     0 ,     0 , "RSR"      , "Room Size Reference"},//Value: 0 = Used 
{ 12 , 4 ,     0 ,     0 ,     0 ,     0 , "RS"       , "Room Size"},//Value: 0 = < 25 mý 
{ 16 , 8 ,     0 ,     0 ,     0 ,     0 , "HT"       , "Humidity Threshold"},
{ 24 , 8 ,     0 ,     0 ,     0 ,     0 , "FS"       , "Fan Speed *"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D22000_CMD1_OM         0
#define D22000_CMD1_TL         1
#define D22000_CMD1_MT         2
#define D22000_CMD1_HC         3
#define D22000_CMD1_RSR        4
#define D22000_CMD1_RS         5
#define D22000_CMD1_HT         6
#define D22000_CMD1_FS         7
#define D22000_CMD1_NB_DATA    8
#define D22000_CMD1_DATA_SIZE  4

// TITLE:Telegram Definition : 'Fan Status Message'
// DESC :
T_DATAFIELD D22000_CMD2 [] = {
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "OMS"      , "Operating Mode Status"},//Value: 0 = Disabled 
{  4 , 3 ,     0 ,     0 ,     0 ,     0 , "SI"       , "Service Information"},//Value: 0 = Nothing to report 
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 1 = Fan status 
{  8 , 2 ,     0 ,     0 ,     0 ,     0 , "HCS"      , "Humidity Control Status"},//Value: 0 = Disabled 
{ 10 , 2 ,     0 ,     0 ,     0 ,     0 , "RSR"      , "Room Size Reference"},//Value: 0 = Used 
{ 12 , 4 ,     0 ,     0 ,     0 ,     0 , "RSS"      , "Room Size Status"},//Value: 0 = < 25 mý 
{ 16 , 8 ,     0 ,     0 ,     0 ,     0 , "HUM"      , "Humidity"},
{ 24 , 8 ,     0 ,     0 ,     0 ,     0 , "FSS"      , "Fan Speed Status"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D22000_CMD2_OMS        0
#define D22000_CMD2_SI         1
#define D22000_CMD2_MT         2
#define D22000_CMD2_HCS        3
#define D22000_CMD2_RSR        4
#define D22000_CMD2_RSS        5
#define D22000_CMD2_HUM        6
#define D22000_CMD2_FSS        7
#define D22000_CMD2_NB_DATA    8
#define D22000_CMD2_DATA_SIZE  4

T_DATAFIELD* D22000_CASES [] = {
D22000_CMD1 ,
D22000_CMD2 ,
{0 }
};

// function type :0x01 : Type 0x01 
//{ 0xD2, 0x20, 0x01, "Fan Control                                                                     " , "Type 0x01                                                                       " },

// TITLE:Telegram Definition : 'Fan Control Message'
// DESC :* Devices with discrete fan speed levels instead of a continuous fan speed range should divide the full range linearly and match values beside those discrete levels to the next lower fan speed level.
T_DATAFIELD D22001_CMD1 [] = {
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 0 = Fan control 
{ 10 , 2 ,     0 ,     0 ,     0 ,     0 , "RSR"      , "Room Size Reference"},//Value: 0 = Used 
{ 12 , 4 ,     0 ,     0 ,     0 ,     0 , "RS"       , "Room Size"},//Value: 0 = < 25 mý 
{ 24 , 8 ,     0 ,     0 ,     0 ,     0 , "FS"       , "Fan Speed *"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D22001_CMD1_MT         0
#define D22001_CMD1_RSR        1
#define D22001_CMD1_RS         2
#define D22001_CMD1_FS         3
#define D22001_CMD1_NB_DATA    4
#define D22001_CMD1_DATA_SIZE  4

// TITLE:Telegram Definition : 'Fan Status Message'
// DESC :
T_DATAFIELD D22001_CMD2 [] = {
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "OMS"      , "Operating Mode Status"},//Value: 0 = Disabled 
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 1 = Fan status 
{ 10 , 2 ,     0 ,     0 ,     0 ,     0 , "RSR"      , "Room Size Reference"},//Value: 0 = Used 
{ 12 , 4 ,     0 ,     0 ,     0 ,     0 , "RSS"      , "Room Size Status"},//Value: 0 = < 25 mý 
{ 24 , 8 ,     0 ,     0 ,     0 ,     0 , "FSS"      , "Fan Speed Status"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D22001_CMD2_OMS        0
#define D22001_CMD2_MT         1
#define D22001_CMD2_RSR        2
#define D22001_CMD2_RSS        3
#define D22001_CMD2_FSS        4
#define D22001_CMD2_NB_DATA    5
#define D22001_CMD2_DATA_SIZE  4

T_DATAFIELD* D22001_CASES [] = {
D22001_CMD1 ,
D22001_CMD2 ,
{0 }
};

// function type :0x02 : Type 0x02 
//{ 0xD2, 0x20, 0x02, "Fan Control                                                                     " , "Type 0x02                                                                       " },

// TITLE:Telegram Definition : 'Fan Control Message'
// DESC :* Devices with discrete fan speed levels instead of a continuous fan speed range should divide the full range linearly and match values beside those discrete levels to the next lower fan speed level.
T_DATAFIELD D22002_CMD1 [] = {
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 0 = Fan control 
{ 10 , 2 ,     0 ,     0 ,     0 ,     0 , "RSR"      , "Room Size Reference"},//Value: 0 = Used 
{ 12 , 4 ,     0 ,     0 ,     0 ,     0 , "RS"       , "Room Size"},//Value: 0 = < 25 mý 
{ 24 , 8 ,     0 ,     0 ,     0 ,     0 , "FS"       , "Fan Speed *"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D22002_CMD1_MT         0
#define D22002_CMD1_RSR        1
#define D22002_CMD1_RS         2
#define D22002_CMD1_FS         3
#define D22002_CMD1_NB_DATA    4
#define D22002_CMD1_DATA_SIZE  4

// TITLE:Telegram Definition : 'Fan Status Message'
// DESC :
T_DATAFIELD D22002_CMD2 [] = {
{  7 , 1 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 1 = Fan status 
{  8 , 2 ,     0 ,     0 ,     0 ,     0 , "HCS"      , "Humidity Control Status"},//Value: 0 = Disabled 
{ 10 , 2 ,     0 ,     0 ,     0 ,     0 , "RSR"      , "Room Size Reference"},//Value: 0 = Used 
{ 12 , 4 ,     0 ,     0 ,     0 ,     0 , "RSS"      , "Room Size Status"},//Value: 0 = < 25 mý 
{ 24 , 8 ,     0 ,     0 ,     0 ,     0 , "FSS"      , "Fan Speed Status"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D22002_CMD2_MT         0
#define D22002_CMD2_HCS        1
#define D22002_CMD2_RSR        2
#define D22002_CMD2_RSS        3
#define D22002_CMD2_FSS        4
#define D22002_CMD2_NB_DATA    5
#define D22002_CMD2_DATA_SIZE  4

T_DATAFIELD* D22002_CASES [] = {
D22002_CMD1 ,
D22002_CMD2 ,
{0 }
};

// function number :0x30 : Floor Heating Controls and Automated Meter Reading 
// function type :0x00 : Type 0x00 
//{ 0xD2, 0x30, 0x00, "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x00                                                                       " },

// TITLE:CMD 0x1 - Set heating controls output
// DESC :This message is sent to a floor heating actuator. It controls the valve position of one channel or of all channels of the floor heating controls.
T_DATAFIELD D23000_CMD1 [] = {
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "PERIOD"   , "Valve control period / PWM signal interval"},//Value: 0 = Local default / no change 
                                                                                                      //Value: 1 = 1 s 
                                                                                                      //Value: 2 = 2 s 
                                                                                                      //Value: 3 = 5 s 
                                                                                                      //Value: 4 = 10 s 
                                                                                                      //Value: 5 = 20 s 
                                                                                                      //Value: 6 = 50 s 
                                                                                                      //Value: 7 = 100 s 
                                                                                                      //Value: 8 = 200 s 
                                                                                                      //Value: 9 = 500 s 
                                                                                                      //Value: 10 = 1000 s 

{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x01 = ID 01 
{ 10 , 1 ,     0 ,     0 ,     0 ,     0 , "VTYP"     , "Valve type"},//Value: 0 = Valve normally closed (N.C.) 
                                                                      //Value: 1 = Valve normally open (N.O.) 
{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "HCH"      , "Heating channel"},
{ 16 , 1 ,     0 ,     0 ,     0 ,     0 , "RIN"      , "Run init sequence"},//Value: 0 = No action 
                                                                             //Value: 1 = Run init sequence 
{ 17 , 7 ,     0 ,   100 ,     0 ,   100 , "POS"      , "Valve position set point"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23000_CMD1_PERIOD     0
#define D23000_CMD1_CMD        1
#define D23000_CMD1_VTYP       2
#define D23000_CMD1_HCH        3
#define D23000_CMD1_RIN        4
#define D23000_CMD1_POS        5
#define D23000_CMD1_NB_DATA    6
#define D23000_CMD1_DATA_SIZE  3

// TITLE:CMD 0x2 - Heating controls status query
// DESC :This message is sent to a floor heating actuator. It requests the status of one channel or the status of the global control unit of an actuator.
T_DATAFIELD D23000_CMD2 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x02 = ID 02 
{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "HCH"      , "Heating channel"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23000_CMD2_CMD        0
#define D23000_CMD2_HCH        1
#define D23000_CMD2_NB_DATA    2
#define D23000_CMD2_DATA_SIZE  2

// TITLE:CMD 0x3 - Heating controls status response / CH = 0...15
// DESC :This message is sent by a floor heating controls if one of the following events occurs:
T_DATAFIELD D23000_CMD3 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x03 = ID 03 
{  8 , 3 ,     0 ,     0 ,     0 ,     0 , "STATUS"   , "Status / Error"},//Value: 0 = No fault 
                                                                          //Value: 1 = General error 
                                                                          //Value: 2 = Init sequence running 
                                                                          //Value: 3 = Channel not available 
                                                                          //Value: 4 = Temperature sensor error 
                                                                          //Value: 5 = Valve error 
                                                                          //Value: 6 = Temperature sensor and valve error 
                                                                          //Value: 7 = Reserved 
{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "HCH"      , "Heating channel"},
{ 17 , 7 ,     0 ,   100 ,     0 ,   100 , "POS"      , "Valve position"},
{ 24 , 8 ,     0 ,   180 ,     0 ,    90 , "TEMPRET"  , "Return temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23000_CMD3_CMD        0
#define D23000_CMD3_STATUS     1
#define D23000_CMD3_HCH        2
#define D23000_CMD3_POS        3
#define D23000_CMD3_TEMPRET    4
#define D23000_CMD3_NB_DATA    5
#define D23000_CMD3_DATA_SIZE  4

// TITLE:CMD 0x3 - Heating controls status response / CH = 31
// DESC :If the response is for global floor heating controls unit data (CH = 31):
T_DATAFIELD D23000_CMD4 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x03 = ID 03 
{  8 , 3 ,     0 ,     0 ,     0 ,     0 , "STATUS"   , "Status / Error"},//Value: 0 = No fault 
                                                                          //Value: 1 = General error 
                                                                          //Value: 2 = Supply temperature error 
                                                                          //Value: 3 = Return temperature error 
                                                                          //Value: 4 = Error on both sensors 

{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "HCH"      , "Heating channel"},//Value: 31 = Unit status only 
{ 16 , 8 ,     0 ,   180 ,     0 ,    90 , "TSUP"     , "Supply temperature"},
{ 24 , 8 ,     0 ,   180 ,     0 ,    90 , "TRET"     , "Return temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23000_CMD4_CMD        0
#define D23000_CMD4_STATUS     1
#define D23000_CMD4_HCH        2
#define D23000_CMD4_TSUP       3
#define D23000_CMD4_TRET       4
#define D23000_CMD4_NB_DATA    5
#define D23000_CMD4_DATA_SIZE  4

// TITLE:CMD 0x6 - Set meter configuration / MBUS (BUS = 1)
// DESC :This message is sent to a metering device gateway to configure the meter settings for one channel.
T_DATAFIELD D23000_CMD5 [] = {
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "RM"       , "Report measurement"},//Value: 0 = No auto reporting 
                                                                              //Value: 1 = Min. 1 s interval 
                                                                              //Value: 2 = Min. 3 s interval 
                                                                              //Value: 3 = Min. 10 s interval 
                                                                              //Value: 4 = Min. 30 s interval 
                                                                              //Value: 5 = Min. 100 s interval 
                                                                              //Value: 6 = Min. 300 s interval 
                                                                              //Value: 7 = Min. 1000 s interval 

{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x06 = ID 06 
{  9 , 2 ,     0 ,     0 ,     0 ,     0 , "BUS"      , "Meter bus type"},//Value: 0 = Reserved 
                                                                          //Value: 1 = MBUS 
                                                                          //Value: 2 = S0 
                                                                          //Value: 3 = D0 
{ 11 , 5 ,     0 ,    30 ,     0 ,    30 , "MCH"      , "Meter channel index"},
{ 18 , 3 ,     0 ,     0 ,     0 ,     0 , "UNIT1"    , "Meter 1 units"},//Value: 0 = No reading (unconfigured) 
                                                                         //Value: 1 = Current value W, accumulated value kWh 
                                                                         //Value: 2 = Current value W, accumulated value Wh 
                                                                         //Value: 3 = Accumulated value kWh only 
                                                                         //Value: 4 = Current value m3/h, accumulated value m3 
                                                                         //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                         //Value: 6 = Accumulated value m3 only 
                                                                         //Value: 7 = Digital counter 
{ 21 , 3 ,     0 ,     0 ,     0 ,     0 , "UNIT2"    , "Meter 2 units"},//Value: 0 = No reading (unconfigured) 
                                                                         //Value: 1 = Current value W, accumulated value kWh 
                                                                         //Value: 2 = Current value W, accumulated value Wh 
                                                                         //Value: 3 = Accumulated value kWh only 
                                                                         //Value: 4 = Current value m3/h, accumulated value m3 
                                                                         //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                         //Value: 6 = Accumulated value m3 only 
                                                                         //Value: 7 = Digital counter 
{ 24 , 8 ,     1 ,   250 ,     1 ,   250 , "ADDR"     , "Primary Address"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23000_CMD5_RM         0
#define D23000_CMD5_CMD        1
#define D23000_CMD5_BUS        2
#define D23000_CMD5_MCH        3
#define D23000_CMD5_UNIT1      4
#define D23000_CMD5_UNIT2      5
#define D23000_CMD5_ADDR       6
#define D23000_CMD5_NB_DATA    7
#define D23000_CMD5_DATA_SIZE  4

// TITLE:CMD 0x6 - Set meter configuration / S0 (BUS = 2)
// DESC :
T_DATAFIELD D23000_CMD6 [] = {
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "RM"       , "Report measurement"},//Value: 0 = No auto reporting 
                                                                              //Value: 1 = Min. 1 s interval 
                                                                              //Value: 2 = Min. 3 s interval 
                                                                              //Value: 3 = Min. 10 s interval 
                                                                              //Value: 4 = Min. 30 s interval 
                                                                              //Value: 5 = Min. 100 s interval 
                                                                              //Value: 6 = Min. 300 s interval 
                                                                              //Value: 7 = Min. 1000 s interval 

{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x06 = ID 06 
{  9 , 2 ,     0 ,     0 ,     0 ,     0 , "BUS"      , "Meter bus type"},//Value: 0 = Reserved 
                                                                          //Value: 1 = MBUS 
                                                                          //Value: 2 = S0 
                                                                          //Value: 3 = D0 
{ 11 , 5 ,     0 ,    30 ,     0 ,    30 , "MCH"      , "Meter channel index"},
{ 18 , 3 ,     0 ,     0 ,     0 ,     0 , "UNIT1"    , "Meter 1 units"},//Value: 0 = No reading (unconfigured) 
                                                                         //Value: 1 = Current value W, accumulated value kWh 
                                                                         //Value: 2 = Current value W, accumulated value Wh 
                                                                         //Value: 3 = Accumulated value kWh only 
                                                                         //Value: 4 = Current value m3/h, accumulated value m3 
                                                                         //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                         //Value: 6 = Accumulated value m3 only 
                                                                         //Value: 7 = Digital counter 
{ 21 , 3 ,     0 ,     0 ,     0 ,     0 , "UNIT2"    , "Meter 2 units"},//Value: 0 = No reading (unconfigured) 
                                                                         //Value: 1 = Current value W, accumulated value kWh 
                                                                         //Value: 2 = Current value W, accumulated value Wh 
                                                                         //Value: 3 = Accumulated value kWh only 
                                                                         //Value: 4 = Current value m3/h, accumulated value m3 
                                                                         //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                         //Value: 6 = Accumulated value m3 only 
                                                                         //Value: 7 = Digital counter 
{ 24 , 2 ,     0 ,     0 ,     0 ,     0 , "FACP"     , "Factor of number of pulses"},//Value: 0 = 1 
                                                                                      //Value: 1 = 0.1 
                                                                                      //Value: 2 = 0.01 
                                                                                      //Value: 3 = 0.001 
{ 26 ,14 ,     0 ,     0 ,     0 ,     0 , "NOP"      , "Number of pulses"},//Value: 0 = Do not change the current setting of NOP 

{ 40 ,32 ,     0 ,     0 ,     0 ,     0 , "RST"      , "Preset value"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23000_CMD6_RM         0
#define D23000_CMD6_CMD        1
#define D23000_CMD6_BUS        2
#define D23000_CMD6_MCH        3
#define D23000_CMD6_UNIT1      4
#define D23000_CMD6_UNIT2      5
#define D23000_CMD6_FACP       6
#define D23000_CMD6_NOP        7
#define D23000_CMD6_RST        8
#define D23000_CMD6_NB_DATA    9
#define D23000_CMD6_DATA_SIZE  9

// TITLE:CMD 0x6 - Set meter configuration / D0 (BUS = 3)
// DESC :
T_DATAFIELD D23000_CMD7 [] = {
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "RM"       , "Report measurement"},//Value: 0 = No auto reporting 
                                                                              //Value: 1 = Min. 1 s interval 
                                                                              //Value: 2 = Min. 3 s interval 
                                                                              //Value: 3 = Min. 10 s interval 
                                                                              //Value: 4 = Min. 30 s interval 
                                                                              //Value: 5 = Min. 100 s interval 
                                                                              //Value: 6 = Min. 300 s interval 
                                                                              //Value: 7 = Min. 1000 s interval 

{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x06 = ID 06 
{  9 , 2 ,     0 ,     0 ,     0 ,     0 , "BUS"      , "Meter bus type"},//Value: 0 = Reserved 
                                                                          //Value: 1 = MBUS 
                                                                          //Value: 2 = S0 
                                                                          //Value: 3 = D0 
{ 11 , 5 ,     0 ,    30 ,     0 ,    30 , "MCH"      , "Meter channel index"},
{ 18 , 3 ,     0 ,     0 ,     0 ,     0 , "UNIT1"    , "Meter 1 units"},//Value: 0 = No reading (unconfigured) 
                                                                         //Value: 1 = Current value W, accumulated value kWh 
                                                                         //Value: 2 = Current value W, accumulated value Wh 
                                                                         //Value: 3 = Accumulated value kWh only 
                                                                         //Value: 4 = Current value m3/h, accumulated value m3 
                                                                         //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                         //Value: 6 = Accumulated value m3 only 
                                                                         //Value: 7 = Digital counter 
{ 21 , 3 ,     0 ,     0 ,     0 ,     0 , "UNIT2"    , "Meter 2 units"},//Value: 0 = No reading (unconfigured) 
                                                                         //Value: 1 = Current value W, accumulated value kWh 
                                                                         //Value: 2 = Current value W, accumulated value Wh 
                                                                         //Value: 3 = Accumulated value kWh only 
                                                                         //Value: 4 = Current value m3/h, accumulated value m3 
                                                                         //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                         //Value: 6 = Accumulated value m3 only 
                                                                         //Value: 7 = Digital counter 
{ 24 , 8 ,     0 ,     0 ,     0 ,     0 , "PROT"     , "D0 Protocol"},//Value: 0 = Auto detect 
                                                                       //Value: 1 = SML (Smart Message Language) 
                                                                       //Value: 2 = DLMS (Device Language Message Specification) 

{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23000_CMD7_RM         0
#define D23000_CMD7_CMD        1
#define D23000_CMD7_BUS        2
#define D23000_CMD7_MCH        3
#define D23000_CMD7_UNIT1      4
#define D23000_CMD7_UNIT2      5
#define D23000_CMD7_PROT       6
#define D23000_CMD7_NB_DATA    7
#define D23000_CMD7_DATA_SIZE  4

// TITLE:CMD 0x7 - Meter Status Query
// DESC :This message is sent to a metering device gateway to query the status of a meter.
T_DATAFIELD D23000_CMD8 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x07 = ID 07 
{  9 , 2 ,     0 ,     0 ,     0 ,     0 , "BUS"      , "Meter bus type"},//Value: 0 = Reserved 
                                                                          //Value: 1 = MBUS 
                                                                          //Value: 2 = S0 
                                                                          //Value: 3 = D0 
{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "MCH"      , "Meter channel index"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23000_CMD8_CMD        0
#define D23000_CMD8_BUS        1
#define D23000_CMD8_MCH        2
#define D23000_CMD8_NB_DATA    3
#define D23000_CMD8_DATA_SIZE  2

// TITLE:CMD 0x8 - Meter reading report / status response
// DESC :This message is sent by a metering device gateway to report the meter values for each configured channel. It is sent if one of the following events occurs:
T_DATAFIELD D23000_CMD9 [] = {
{  1 , 3 ,     0 ,     0 ,     0 ,     0 , "MSTAT"    , "Meter status / error"},//Value: 0 = No fault 
                                                                                //Value: 1 = General error 
                                                                                //Value: 2 = Bus unconfigured 
                                                                                //Value: 3 = Bus unconnected 
                                                                                //Value: 4 = Bus shortcut 
                                                                                //Value: 5 = Communication timeout 
                                                                                //Value: 6 = Unknown protocol or 
                                                                                //Value: 7 = Bus initialization running 
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x08 = ID 08 
{  9 , 2 ,     0 ,     0 ,     0 ,     0 , "BUS"      , "Meter bus type"},//Value: 0 = Reserved 
                                                                          //Value: 1 = MBUS 
                                                                          //Value: 2 = S0 
                                                                          //Value: 3 = D0 
{ 11 , 5 ,     0 ,    30 ,     0 ,    30 , "MCH"      , "Meter channel index"},
{ 19 , 2 ,     0 ,     0 ,     0 ,     0 , "VSEL"     , "Value selection"},//Value: 0 = Meter 1 Current value 
                                                                           //Value: 1 = Meter 1 Accumulated value 
                                                                           //Value: 2 = Meter 2 Current value 
                                                                           //Value: 3 = Meter 2 Accumulated value 
{ 21 , 3 ,     0 ,     0 ,     0 ,     0 , "VUNIT"    , "Value unit"},//Value: 0 = W 
                                                                      //Value: 1 = Wh 
                                                                      //Value: 2 = kWh 
                                                                      //Value: 3 = m3/h 
                                                                      //Value: 4 = dm3/h 
                                                                      //Value: 5 = m3 
                                                                      //Value: 6 = dm3 
                                                                      //Value: 7 = 1 (digital counter) 
{ 24 ,32 ,     0 , 4294967295 ,     0 , 4294967295 , "VAL"      , "Meter reading value"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23000_CMD9_MSTAT      0
#define D23000_CMD9_CMD        1
#define D23000_CMD9_BUS        2
#define D23000_CMD9_MCH        3
#define D23000_CMD9_VSEL       4
#define D23000_CMD9_VUNIT      5
#define D23000_CMD9_VAL        6
#define D23000_CMD9_NB_DATA    7
#define D23000_CMD9_DATA_SIZE  7

T_DATAFIELD* D23000_CASES [] = {
D23000_CMD1 ,
D23000_CMD2 ,
D23000_CMD3 ,
D23000_CMD4 ,
D23000_CMD5 ,
D23000_CMD6 ,
D23000_CMD7 ,
D23000_CMD8 ,
D23000_CMD9 ,
{0 }
};

// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2, 0x30, 0x01, "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x01 (description: see table)                                              " },

T_DATAFIELD* D23001_CASES [] = {
D23000_CMD1 ,
D23000_CMD2 ,
D23000_CMD3 ,
D23000_CMD4 ,
D23000_CMD5 ,
D23000_CMD6 ,
D23000_CMD7 ,
D23000_CMD8 ,
D23000_CMD9 ,
{0 }
};

// function type :0x02 : Type 0x02 (description: see table) 
//{ 0xD2, 0x30, 0x02, "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x02 (description: see table)                                              " },

T_DATAFIELD* D23002_CASES [] = {
D23000_CMD1 ,
D23000_CMD2 ,
D23000_CMD3 ,
D23000_CMD4 ,
D23000_CMD5 ,
D23000_CMD6 ,
D23000_CMD7 ,
D23000_CMD8 ,
D23000_CMD9 ,
{0 }
};

// function type :0x03 : Type 0x03 (description: see table) 
//{ 0xD2, 0x30, 0x03, "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x03 (description: see table)                                              " },

T_DATAFIELD* D23003_CASES [] = {
D23000_CMD1 ,
D23000_CMD2 ,
D23000_CMD3 ,
D23000_CMD4 ,
D23000_CMD5 ,
D23000_CMD6 ,
D23000_CMD7 ,
D23000_CMD8 ,
D23000_CMD9 ,
{0 }
};

// function type :0x04 : Type 0x04 (description: see table) 
//{ 0xD2, 0x30, 0x04, "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x04 (description: see table)                                              " },

T_DATAFIELD* D23004_CASES [] = {
D23000_CMD1 ,
D23000_CMD2 ,
D23000_CMD3 ,
D23000_CMD4 ,
D23000_CMD5 ,
D23000_CMD6 ,
D23000_CMD7 ,
D23000_CMD8 ,
D23000_CMD9 ,
{0 }
};

// function type :0x05 : Type 0x05 (description: see table) 
//{ 0xD2, 0x30, 0x05, "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x05 (description: see table)                                              " },

T_DATAFIELD* D23005_CASES [] = {
D23000_CMD1 ,
D23000_CMD2 ,
D23000_CMD3 ,
D23000_CMD4 ,
D23000_CMD5 ,
D23000_CMD6 ,
D23000_CMD7 ,
D23000_CMD8 ,
D23000_CMD9 ,
{0 }
};

// function type :0x06 : Type 0x06 (description: see table) 
//{ 0xD2, 0x30, 0x06, "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x06 (description: see table)                                              " },

T_DATAFIELD* D23006_CASES [] = {
D23000_CMD1 ,
D23000_CMD2 ,
D23000_CMD3 ,
D23000_CMD4 ,
D23000_CMD5 ,
D23000_CMD6 ,
D23000_CMD7 ,
D23000_CMD8 ,
D23000_CMD9 ,
{0 }
};

// function number :0x31 : Automated Meter Reading Gateway 
// function type :0x00 : Type 0x00 
//{ 0xD2, 0x31, 0x00, "Automated Meter Reading Gateway                                                 " , "Type 0x00                                                                       " },

// TITLE:CMD 0x6 - Set meter configuration / MBUS (BUS = 1)
// DESC :This message is sent to a metering device gateway to configure the meter settings for one channel.
T_DATAFIELD D23100_CMD1 [] = {
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "RM"       , "Report measurement"},//Value: 0 = No auto reporting 
                                                                              //Value: 1 = Min. 1 s interval 
                                                                              //Value: 2 = Min. 3 s interval 
                                                                              //Value: 3 = Min. 10 s interval 
                                                                              //Value: 4 = Min. 30 s interval 
                                                                              //Value: 5 = Min. 100 s interval 
                                                                              //Value: 6 = Min. 300 s interval 
                                                                              //Value: 7 = Min. 1000 s interval 

{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x06 = ID 06 
{  9 , 2 ,     0 ,     0 ,     0 ,     0 , "BUS"      , "Meter bus type"},//Value: 0 = Reserved 
                                                                          //Value: 1 = MBUS 
                                                                          //Value: 2 = S0 
                                                                          //Value: 3 = D0 
{ 11 , 5 ,     0 ,    30 ,     0 ,    30 , "MCH"      , "Meter channel index"},
{ 18 , 3 ,     0 ,     0 ,     0 ,     0 , "UNIT1"    , "Meter 1 units"},//Value: 0 = No reading (unconfigured) 
                                                                         //Value: 1 = Current value W, accumulated value kWh 
                                                                         //Value: 2 = Current value W, accumulated value Wh 
                                                                         //Value: 3 = Accumulated value kWh only 
                                                                         //Value: 4 = Current value m3/h, accumulated value m3 
                                                                         //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                         //Value: 6 = Accumulated value m3 only 
                                                                         //Value: 7 = Digital counter 
{ 21 , 3 ,     0 ,     0 ,     0 ,     0 , "UNIT2"    , "Meter 2 units"},//Value: 0 = No reading (unconfigured) 
                                                                         //Value: 1 = Current value W, accumulated value kWh 
                                                                         //Value: 2 = Current value W, accumulated value Wh 
                                                                         //Value: 3 = Accumulated value kWh only 
                                                                         //Value: 4 = Current value m3/h, accumulated value m3 
                                                                         //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                         //Value: 6 = Accumulated value m3 only 
                                                                         //Value: 7 = Digital counter 
{ 24 , 8 ,     1 ,   250 ,     1 ,   250 , "ADDR"     , "Primary Address"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23100_CMD1_RM         0
#define D23100_CMD1_CMD        1
#define D23100_CMD1_BUS        2
#define D23100_CMD1_MCH        3
#define D23100_CMD1_UNIT1      4
#define D23100_CMD1_UNIT2      5
#define D23100_CMD1_ADDR       6
#define D23100_CMD1_NB_DATA    7
#define D23100_CMD1_DATA_SIZE  4

// TITLE:CMD 0x6 - Set meter configuration / S0 (BUS = 2)
// DESC :
T_DATAFIELD D23100_CMD2 [] = {
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "RM"       , "Report measurement"},//Value: 0 = No auto reporting 
                                                                              //Value: 1 = Min. 1 s interval 
                                                                              //Value: 2 = Min. 3 s interval 
                                                                              //Value: 3 = Min. 10 s interval 
                                                                              //Value: 4 = Min. 30 s interval 
                                                                              //Value: 5 = Min. 100 s interval 
                                                                              //Value: 6 = Min. 300 s interval 
                                                                              //Value: 7 = Min. 1000 s interval 

{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x06 = ID 06 
{  9 , 2 ,     0 ,     0 ,     0 ,     0 , "BUS"      , "Meter bus type"},//Value: 0 = Reserved 
                                                                          //Value: 1 = MBUS 
                                                                          //Value: 2 = S0 
                                                                          //Value: 3 = D0 
{ 11 , 5 ,     0 ,    30 ,     0 ,    30 , "MCH"      , "Meter channel index"},
{ 18 , 3 ,     0 ,     0 ,     0 ,     0 , "UNIT1"    , "Meter 1 units"},//Value: 0 = No reading (unconfigured) 
                                                                         //Value: 1 = Current value W, accumulated value kWh 
                                                                         //Value: 2 = Current value W, accumulated value Wh 
                                                                         //Value: 3 = Accumulated value kWh only 
                                                                         //Value: 4 = Current value m3/h, accumulated value m3 
                                                                         //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                         //Value: 6 = Accumulated value m3 only 
                                                                         //Value: 7 = Digital counter 
{ 21 , 3 ,     0 ,     0 ,     0 ,     0 , "UNIT2"    , "Meter 2 units"},//Value: 0 = No reading (unconfigured) 
                                                                         //Value: 1 = Current value W, accumulated value kWh 
                                                                         //Value: 2 = Current value W, accumulated value Wh 
                                                                         //Value: 3 = Accumulated value kWh only 
                                                                         //Value: 4 = Current value m3/h, accumulated value m3 
                                                                         //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                         //Value: 6 = Accumulated value m3 only 
                                                                         //Value: 7 = Digital counter 
{ 24 , 2 ,     0 ,     0 ,     0 ,     0 , "FACP"     , "Factor of number of pulses"},//Value: 0 = 1 
                                                                                      //Value: 1 = 0.1 
                                                                                      //Value: 2 = 0.01 
                                                                                      //Value: 3 = 0.001 
{ 26 ,14 ,     0 ,     0 ,     0 ,     0 , "NOP"      , "Number of pulses"},//Value: 0 = Do not change the current setting of NOP 

{ 40 ,32 ,     0 ,     0 ,     0 ,     0 , "RST"      , "Preset value"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23100_CMD2_RM         0
#define D23100_CMD2_CMD        1
#define D23100_CMD2_BUS        2
#define D23100_CMD2_MCH        3
#define D23100_CMD2_UNIT1      4
#define D23100_CMD2_UNIT2      5
#define D23100_CMD2_FACP       6
#define D23100_CMD2_NOP        7
#define D23100_CMD2_RST        8
#define D23100_CMD2_NB_DATA    9
#define D23100_CMD2_DATA_SIZE  9

// TITLE:CMD 0x6 - Set meter configuration / D0 (BUS = 3)
// DESC :
T_DATAFIELD D23100_CMD3 [] = {
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "RM"       , "Report measurement"},//Value: 0 = No auto reporting 
                                                                              //Value: 1 = Min. 1 s interval 
                                                                              //Value: 2 = Min. 3 s interval 
                                                                              //Value: 3 = Min. 10 s interval 
                                                                              //Value: 4 = Min. 30 s interval 
                                                                              //Value: 5 = Min. 100 s interval 
                                                                              //Value: 6 = Min. 300 s interval 
                                                                              //Value: 7 = Min. 1000 s interval 

{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x06 = ID 06 
{  9 , 2 ,     0 ,     0 ,     0 ,     0 , "BUS"      , "Meter bus type"},//Value: 0 = Reserved 
                                                                          //Value: 1 = MBUS 
                                                                          //Value: 2 = S0 
                                                                          //Value: 3 = D0 
{ 11 , 5 ,     0 ,    30 ,     0 ,    30 , "MCH"      , "Meter channel index"},
{ 18 , 3 ,     0 ,     0 ,     0 ,     0 , "UNIT1"    , "Meter 1 units"},//Value: 0 = No reading (unconfigured) 
                                                                         //Value: 1 = Current value W, accumulated value kWh 
                                                                         //Value: 2 = Current value W, accumulated value Wh 
                                                                         //Value: 3 = Accumulated value kWh only 
                                                                         //Value: 4 = Current value m3/h, accumulated value m3 
                                                                         //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                         //Value: 6 = Accumulated value m3 only 
                                                                         //Value: 7 = Digital counter 
{ 21 , 3 ,     0 ,     0 ,     0 ,     0 , "UNIT2"    , "Meter 2 units"},//Value: 0 = No reading (unconfigured) 
                                                                         //Value: 1 = Current value W, accumulated value kWh 
                                                                         //Value: 2 = Current value W, accumulated value Wh 
                                                                         //Value: 3 = Accumulated value kWh only 
                                                                         //Value: 4 = Current value m3/h, accumulated value m3 
                                                                         //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                         //Value: 6 = Accumulated value m3 only 
                                                                         //Value: 7 = Digital counter 
{ 24 , 8 ,     0 ,     0 ,     0 ,     0 , "PROT"     , "D0 Protocol"},//Value: 0 = Auto detect 
                                                                       //Value: 1 = SML (Smart Message Language) 
                                                                       //Value: 2 = DLMS (Device Language Message Specification) 

{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23100_CMD3_RM         0
#define D23100_CMD3_CMD        1
#define D23100_CMD3_BUS        2
#define D23100_CMD3_MCH        3
#define D23100_CMD3_UNIT1      4
#define D23100_CMD3_UNIT2      5
#define D23100_CMD3_PROT       6
#define D23100_CMD3_NB_DATA    7
#define D23100_CMD3_DATA_SIZE  4

// TITLE:CMD 0x7 - Meter Status Query
// DESC :This message is sent to a metering device gateway to query the status of a meter.
T_DATAFIELD D23100_CMD4 [] = {
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x07 = ID 07 
{  9 , 2 ,     0 ,     0 ,     0 ,     0 , "BUS"      , "Meter bus type"},//Value: 0 = Reserved 
                                                                          //Value: 1 = MBUS 
                                                                          //Value: 2 = S0 
                                                                          //Value: 3 = D0 
{ 11 , 5 ,     0 ,     0 ,     0 ,     0 , "MCH"      , "Meter channel index"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23100_CMD4_CMD        0
#define D23100_CMD4_BUS        1
#define D23100_CMD4_MCH        2
#define D23100_CMD4_NB_DATA    3
#define D23100_CMD4_DATA_SIZE  2

// TITLE:CMD 0x8 - Meter reading report / status response
// DESC :This message is sent by a metering device gateway to report the meter values for each configured channel. It is sent if one of the following events occurs:
T_DATAFIELD D23100_CMD5 [] = {
{  1 , 3 ,     0 ,     0 ,     0 ,     0 , "MSTAT"    , "Meter status / error"},//Value: 0 = No fault 
                                                                                //Value: 1 = General error 
                                                                                //Value: 2 = Bus unconfigured 
                                                                                //Value: 3 = Bus unconnected 
                                                                                //Value: 4 = Bus shortcut 
                                                                                //Value: 5 = Communication timeout 
                                                                                //Value: 6 = Unknown protocol or 
                                                                                //Value: 7 = Bus initialization running 
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 0x08 = ID 08 
{  9 , 2 ,     0 ,     0 ,     0 ,     0 , "BUS"      , "Meter bus type"},//Value: 0 = Reserved 
                                                                          //Value: 1 = MBUS 
                                                                          //Value: 2 = S0 
                                                                          //Value: 3 = D0 
{ 11 , 5 ,     0 ,    30 ,     0 ,    30 , "MCH"      , "Meter channel index"},
{ 19 , 2 ,     0 ,     0 ,     0 ,     0 , "VSEL"     , "Value selection"},//Value: 0 = Meter 1 Current value 
                                                                           //Value: 1 = Meter 1 Accumulated value 
                                                                           //Value: 2 = Meter 2 Current value 
                                                                           //Value: 3 = Meter 2 Accumulated value 
{ 21 , 3 ,     0 ,     0 ,     0 ,     0 , "VUNIT"    , "Value unit"},//Value: 0 = W 
                                                                      //Value: 1 = Wh 
                                                                      //Value: 2 = kWh 
                                                                      //Value: 3 = m3/h 
                                                                      //Value: 4 = dm3/h 
                                                                      //Value: 5 = m3 
                                                                      //Value: 6 = dm3 
                                                                      //Value: 7 = 1 (digital counter) 
{ 24 ,32 ,     0 , 4294967295 ,     0 , 4294967295 , "VAL"      , "Meter reading value"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23100_CMD5_MSTAT      0
#define D23100_CMD5_CMD        1
#define D23100_CMD5_BUS        2
#define D23100_CMD5_MCH        3
#define D23100_CMD5_VSEL       4
#define D23100_CMD5_VUNIT      5
#define D23100_CMD5_VAL        6
#define D23100_CMD5_NB_DATA    7
#define D23100_CMD5_DATA_SIZE  7

T_DATAFIELD* D23100_CASES [] = {
D23100_CMD1 ,
D23100_CMD2 ,
D23100_CMD3 ,
D23100_CMD4 ,
D23100_CMD5 ,
{0 }
};

// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2, 0x31, 0x01, "Automated Meter Reading Gateway                                                 " , "Type 0x01 (description: see table)                                              " },

T_DATAFIELD* D23101_CASES [] = {
D23100_CMD1 ,
D23100_CMD2 ,
D23100_CMD3 ,
D23100_CMD4 ,
D23100_CMD5 ,
{0 }
};

// function number :0x32 : A.C. Current Clamp 
// function type :0x00 : Type 0x00 
//{ 0xD2, 0x32, 0x00, "A.C. Current Clamp                                                              " , "Type 0x00                                                                       " },

// TITLE:
// DESC :
T_DATAFIELD D23200_CMD1 [] = {
{  0 , 1 ,     0 ,     0 ,     0 ,     0 , "PF"       , "Power Fail"},//Value: 0 = False 
                                                                      //Value: 1 = True 
{  1 , 1 ,     0 ,     0 ,     0 ,     0 , "DIV"      , "Divisor"},//Value: 0 = x/1 
                                                                   //Value: 1 = x/10 
{  8 ,12 ,     0 ,     0 ,     0 ,  4095 , "CH1"      , "Channel 1"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23200_CMD1_PF         0
#define D23200_CMD1_DIV        1
#define D23200_CMD1_CH1        2
#define D23200_CMD1_NB_DATA    3
#define D23200_CMD1_DATA_SIZE  3

T_DATAFIELD* D23200_CASES [] = {
D23200_CMD1 ,
{0 }
};

// function type :0x01 : Type 0x01 
//{ 0xD2, 0x32, 0x01, "A.C. Current Clamp                                                              " , "Type 0x01                                                                       " },

// TITLE:
// DESC :
T_DATAFIELD D23201_CMD1 [] = {
{  0 , 1 ,     0 ,     0 ,     0 ,     0 , "PF"       , "Power Fail"},//Value: 0 = False 
                                                                      //Value: 1 = True 
{  1 , 1 ,     0 ,     0 ,     0 ,     0 , "DIV"      , "Divisor"},//Value: 0 = x/1 
                                                                   //Value: 1 = x/10 
{  8 ,12 ,     0 ,     0 ,     0 ,  4095 , "CH1"      , "Channel 1"},
{ 20 ,12 ,     0 ,     0 ,     0 ,  4095 , "CH2"      , "Channel 2"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23201_CMD1_PF         0
#define D23201_CMD1_DIV        1
#define D23201_CMD1_CH1        2
#define D23201_CMD1_CH2        3
#define D23201_CMD1_NB_DATA    4
#define D23201_CMD1_DATA_SIZE  4

T_DATAFIELD* D23201_CASES [] = {
D23201_CMD1 ,
{0 }
};

// function type :0x02 : Type 0x02 
//{ 0xD2, 0x32, 0x02, "A.C. Current Clamp                                                              " , "Type 0x02                                                                       " },

// TITLE:
// DESC :
T_DATAFIELD D23202_CMD1 [] = {
{  0 , 1 ,     0 ,     0 ,     0 ,     0 , "PF"       , "Power Fail"},//Value: 0 = False 
                                                                      //Value: 1 = True 
{  1 , 1 ,     0 ,     0 ,     0 ,     0 , "DIV"      , "Divisor"},//Value: 0 = x/1 
                                                                   //Value: 1 = x/10 
{  8 ,12 ,     0 ,     0 ,     0 ,  4095 , "CH1"      , "Channel 1"},
{ 20 ,12 ,     0 ,     0 ,     0 ,  4095 , "CH2"      , "Channel 2"},
{ 32 ,12 ,     0 ,     0 ,     0 ,  4095 , "CH3"      , "Channel 3"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23202_CMD1_PF         0
#define D23202_CMD1_DIV        1
#define D23202_CMD1_CH1        2
#define D23202_CMD1_CH2        3
#define D23202_CMD1_CH3        4
#define D23202_CMD1_NB_DATA    5
#define D23202_CMD1_DATA_SIZE  6

T_DATAFIELD* D23202_CASES [] = {
D23202_CMD1 ,
{0 }
};

// function number :0x40 : LED Controller Status 
// function type :0x00 : Type 0x00 
//{ 0xD2, 0x40, 0x00, "LED Controller Status                                                           " , "Type 0x00                                                                       " },

// TITLE:
// DESC :
T_DATAFIELD D24000_CMD1 [] = {
{  0 , 1 ,     0 ,     0 ,     0 ,     0 , "OUTEN"    , "LED output enabled"},//Value: 0 = Disabled 
                                                                              //Value: 1 = Enabled 
{  1 , 1 ,     0 ,     0 ,     0 ,     0 , "DRA"      , " Demand Response  mode Active"},//Value: 0 = False 
                                                                                         //Value: 1 = True 
{  2 , 1 ,     0 ,     0 ,     0 ,     0 , "DHAR"     , "Daylight Harvesting Active"},//Value: 0 = False 
                                                                                      //Value: 1 = True 
{  3 , 2 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy State"},//Value: 0 = Not occupied 
                                                                           //Value: 1 = Occupied 
                                                                           //Value: 2 = Unknown 
{  5 , 1 ,     0 ,     0 ,     0 ,     0 , "SREAS"    , "Status Tx reason"},//Value: 0 = Other 
                                                                            //Value: 1 = Heartbeat 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MI"       , "MsgId"},//Value: 0 = LED Status monocolor 
{  8 , 8 ,     0 ,     0 ,     0 ,     0 , "DLVL"     , "Current Dim Level"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D24000_CMD1_OUTEN      0
#define D24000_CMD1_DRA        1
#define D24000_CMD1_DHAR       2
#define D24000_CMD1_OCC        3
#define D24000_CMD1_SREAS      4
#define D24000_CMD1_MI         5
#define D24000_CMD1_DLVL       6
#define D24000_CMD1_NB_DATA    7
#define D24000_CMD1_DATA_SIZE  2

T_DATAFIELD* D24000_CASES [] = {
D24000_CMD1 ,
{0 }
};

// function type :0x01 : Type 0x01 
//{ 0xD2, 0x40, 0x01, "LED Controller Status                                                           " , "Type 0x01                                                                       " },

// TITLE:
// DESC :
T_DATAFIELD D24001_CMD1 [] = {
{  0 , 1 ,     0 ,     0 ,     0 ,     0 , "OUTEN"    , "LED output enabled"},//Value: 0 = Disabled 
                                                                              //Value: 1 = Enabled 
{  1 , 1 ,     0 ,     0 ,     0 ,     0 , "DRA"      , " Demand Response  mode Active"},//Value: 0 = False 
                                                                                         //Value: 1 = True 
{  2 , 1 ,     0 ,     0 ,     0 ,     0 , "DHAR"     , "Daylight Harvesting Active"},//Value: 0 = False 
                                                                                      //Value: 1 = True 
{  3 , 2 ,     0 ,     0 ,     0 ,     0 , "OCC"      , "Occupancy State"},//Value: 0 = Not occupied 
                                                                           //Value: 1 = Occupied 
                                                                           //Value: 2 = Unknown 
{  5 , 1 ,     0 ,     0 ,     0 ,     0 , "SREAS"    , "Status Tx reason"},//Value: 0 = Other 
                                                                            //Value: 1 = Heartbeat 
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "MI"       , "MsgId"},//Value: 1 = LED Status RGB 
{  8 , 8 ,     0 ,     0 ,     0 ,     0 , "DLVLR"    , "Current Dim Level LED R"},
{ 16 , 8 ,     0 ,     0 ,     0 ,     0 , "DLVLG"    , "Current Dim Level LED G"},
{ 24 , 8 ,     0 ,     0 ,     0 ,     0 , "DLVLB"    , "Current Dim Level LED B"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D24001_CMD1_OUTEN      0
#define D24001_CMD1_DRA        1
#define D24001_CMD1_DHAR       2
#define D24001_CMD1_OCC        3
#define D24001_CMD1_SREAS      4
#define D24001_CMD1_MI         5
#define D24001_CMD1_DLVLR      6
#define D24001_CMD1_DLVLG      7
#define D24001_CMD1_DLVLB      8
#define D24001_CMD1_NB_DATA    9
#define D24001_CMD1_DATA_SIZE  4

T_DATAFIELD* D24001_CASES [] = {
D24001_CMD1 ,
{0 }
};

// function number :0x50 : Heat Recovery Ventilation 
// function type :0x00 : Type 0x00 
//{ 0xD2, 0x50, 0x00, "Heat Recovery Ventilation                                                       " , "Type 0x00                                                                       " },

// TITLE:Telegram Definition: 'Ventilation Remote Transmission Request Message'
// DESC :The 'Ventilation Remote Transmission Request Message' queries a particular status message from the heat-recovery ventilation unit. Thus status messages can be obtained at any time or at a higher update rate than the heartbeat rate, e.g. during commissioning.
T_DATAFIELD D25000_CMD1 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 0 = Ventilation remote transmission request 
                                                                        //Value: 1 = Ventilation control 
                                                                        //Value: 2 = Ventilation basic status 
                                                                        //Value: 3 = Ventilation extended status 
                                                                        //Value: 4 = Reserved 
                                                                        //Value: 5 = Reserved 
                                                                        //Value: 6 = Reserved 
                                                                        //Value: 7 = Reserved 
{  5 , 3 ,     0 ,     0 ,     0 ,     0 , "RMT"      , "Requested Message Type"},//Value: 0 = Ventilation basic status 
                                                                                  //Value: 1 = Ventilation extended status 
                                                                                  //Value: 2 = Reserved 
                                                                                  //Value: 3 = Reserved 
                                                                                  //Value: 4 = Reserved 
                                                                                  //Value: 5 = Reserved 
                                                                                  //Value: 6 = Reserved 
                                                                                  //Value: 7 = Reserved 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D25000_CMD1_MT         0
#define D25000_CMD1_RMT        1
#define D25000_CMD1_NB_DATA    2
#define D25000_CMD1_DATA_SIZE  1

// TITLE:Telegram Definition: 'Ventilation Control Message'
// DESC :The 'Ventilation Control Message' changes the operating mode, the state of several actuators and a subset of control parameters.
T_DATAFIELD D25000_CMD2 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 0 = Ventilation remote transmission request 
                                                                        //Value: 1 = Ventilation control 
                                                                        //Value: 2 = Ventilation basic status 
                                                                        //Value: 3 = Ventilation extended status 
                                                                        //Value: 4 = Reserved 
                                                                        //Value: 5 = Reserved 
                                                                        //Value: 6 = Reserved 
                                                                        //Value: 7 = Reserved 
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "DOMC"     , "Direct Operation Mode Control"},//Value: 0 = Off 
                                                                                         //Value: 1 = Level 1 
                                                                                         //Value: 2 = Level 2 
                                                                                         //Value: 3 = Level 3 
                                                                                         //Value: 4 = Level 4 
                                                                                         //Value: 5 = Reserved 
                                                                                         //Value: 6 = Reserved 
                                                                                         //Value: 7 = Reserved 
                                                                                         //Value: 8 = Reserved 
                                                                                         //Value: 9 = Reserved 
                                                                                         //Value: 10 = Reserved 
                                                                                         //Value: 11 = Automatic 
                                                                                         //Value: 12 = Automatic on demand 
                                                                                         //Value: 13 = Supply air only 
                                                                                         //Value: 14 = Exhaust air only 
                                                                                         //Value: 15 = no action (keep current ventilation mode/level) 
{  8 , 2 ,     0 ,     0 ,     0 ,     0 , "OMC"      , "Operation Mode Control"},//Value: 0 = no action 
                                                                                  //Value: 1 = select next operation mode (edge-trigger) 
                                                                                  //Value: 2 = select previous operation mode (edge-trigger) 
                                                                                  //Value: 3 = Reserved 
{ 10 , 2 ,     0 ,     0 ,     0 ,     0 , "HBC"      , "Heat Exchanger Bypass Control"},//Value: 0 = no action 
                                                                                         //Value: 1 = close bypass (edge-trigger) 
                                                                                         //Value: 2 = open bypass (edge-trigger) 
                                                                                         //Value: 3 = Reserved 
{ 16 , 1 ,     0 ,     0 ,     0 ,     0 , "TOMC"     , "Timer Operation Mode Control"},//Value: 0 = no action 
                                                                                        //Value: 1 = start timer operation mode (edge-trigger) 
{ 17 , 7 ,     0 ,     0 ,     0 ,     0 , "COT"      , "CO2 Threshold"},
{ 25 , 7 ,     0 ,     0 ,     0 ,     0 , "HT"       , "Humidity Threshold"},
{ 33 , 7 ,     0 ,     0 ,     0 ,     0 , "AQT"      , "Air Quality Threshold"},
{ 41 , 7 ,     0 ,     0 ,     0 ,     0 , "RTT"      , "Room temperature threshold"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D25000_CMD2_MT         0
#define D25000_CMD2_DOMC       1
#define D25000_CMD2_OMC        2
#define D25000_CMD2_HBC        3
#define D25000_CMD2_TOMC       4
#define D25000_CMD2_COT        5
#define D25000_CMD2_HT         6
#define D25000_CMD2_AQT        7
#define D25000_CMD2_RTT        8
#define D25000_CMD2_NB_DATA    9
#define D25000_CMD2_DATA_SIZE  6

// TITLE:Telegram Definition: 'Ventilation Basic Status Message'
// DESC :The 'Ventilation Basic Status Message' provides current sensor values and internal control status information. It is triggered once at power-on and on particular value changes.
T_DATAFIELD D25000_CMD3 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 0 = Ventilation remote transmission request 
                                                                        //Value: 1 = Ventilation control 
                                                                        //Value: 2 = Ventilation basic status 
                                                                        //Value: 3 = Ventilation extended status 
                                                                        //Value: 4 = Reserved 
                                                                        //Value: 5 = Reserved 
                                                                        //Value: 6 = Reserved 
                                                                        //Value: 7 = Reserved 
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "OMS"      , "Operation Mode Status"},//Value: 0 = Off 
                                                                                 //Value: 1 = Level 1 
                                                                                 //Value: 2 = Level 2 
                                                                                 //Value: 3 = Level 3 
                                                                                 //Value: 4 = Level 4 
                                                                                 //Value: 5 = Reserved 
                                                                                 //Value: 6 = Reserved 
                                                                                 //Value: 7 = Reserved 
                                                                                 //Value: 8 = Reserved 
                                                                                 //Value: 9 = Reserved 
                                                                                 //Value: 10 = Reserved 
                                                                                 //Value: 11 = Automatic 
                                                                                 //Value: 12 = Automatic on demand 
                                                                                 //Value: 13 = Supply air only 
                                                                                 //Value: 14 = Exhaust air only 
                                                                                 //Value: 15 = Reserved 
{ 12 , 1 ,     0 ,     0 ,     0 ,     0 , "SMS"      , "Safety Mode Status"},//Value: 0 = fireplace safety mode disabled 
                                                                              //Value: 1 = fireplace safety mode enabled 
{ 13 , 1 ,     0 ,     0 ,     0 ,     0 , "HBS"      , "Heat Exchanger Bypass Status"},//Value: 0 = bypass closed (heatrecovery active) 
                                                                                        //Value: 1 = bypass opened (heatrecovery inactive) 
{ 14 , 1 ,     0 ,     0 ,     0 ,     0 , "SFP"      , "Supply Air Flap Position"},//Value: 0 = supply air flap closed 
                                                                                    //Value: 1 = supply air flap opened 
{ 15 , 1 ,     0 ,     0 ,     0 ,     0 , "EFP"      , "Exhaust Air Flap Position"},//Value: 0 = exhaust air flap closed 
                                                                                     //Value: 1 = exhaust air flap opened 
{ 16 , 1 ,     0 ,     0 ,     0 ,     0 , "DMS"      , "Defrost Mode Status"},//Value: 0 = defrost mode inactive 
                                                                               //Value: 1 = defrost mode active 
{ 17 , 1 ,     0 ,     0 ,     0 ,     0 , "CPS"      , "Cooling Protection Status"},//Value: 0 = cooling protection mode inactive 
                                                                                     //Value: 1 = cooling protection mode active 
{ 18 , 1 ,     0 ,     0 ,     0 ,     0 , "OHS"      , "Outdoor Air Heater Status"},//Value: 0 = inactive 
                                                                                     //Value: 1 = active 
{ 19 , 1 ,     0 ,     0 ,     0 ,     0 , "SHS"      , "Supply Air Heater Status"},//Value: 0 = inactive 
                                                                                    //Value: 1 = active 
{ 20 , 1 ,     0 ,     0 ,     0 ,     0 , "DHS"      , "Drain Heater Status"},//Value: 0 = inactive 
                                                                               //Value: 1 = active 
{ 21 , 1 ,     0 ,     0 ,     0 ,     0 , "TOMS"     , "Timer Operation Mode Status"},//Value: 0 = timer operation mode inactive 
                                                                                       //Value: 1 = timer operation mode active 
{ 22 , 1 ,     0 ,     0 ,     0 ,     0 , "FMS"      , "Filter Maintenance Status"},//Value: 0 = Maintenance not required 
                                                                                     //Value: 1 = Maintenance required 
{ 23 , 1 ,     0 ,     0 ,     0 ,     0 , "WTPS"     , "Weekly Timer Program Status"},//Value: 0 = weekly timer program disabled or not configured 
                                                                                       //Value: 1 = weekly timer program active 
{ 24 , 1 ,     0 ,     0 ,     0 ,     0 , "RTCS"     , "Room Temperature Control Status"},//Value: 0 = room temperature control inactive 
                                                                                           //Value: 1 = room temperature control active 
{ 25 , 7 ,     0 ,     0 ,     0 ,     0 , "AQS1"     , "Air Quality Sensor 1"},
{ 32 , 1 ,     0 ,     0 ,     0 ,     0 , "MSS"      , "Master/Slave Configuration Status"},//Value: 0 = Master 
                                                                                             //Value: 1 = Slave 
{ 33 , 7 ,     0 ,     0 ,     0 ,     0 , "AQS2"     , "Air Quality Sensor 2"},
{ 40 , 7 ,   -64 ,    63 ,   -64 ,    63 , "OUTT"     , "Outdoor Air Temperature"},
{ 47 , 7 ,   -64 ,    63 ,   -64 ,    63 , "SPLYT"    , "Supply Air Temperature"},
{ 54 , 7 ,   -64 ,    63 ,   -64 ,    63 , "INT"      , "Indoor Air Temperature"},
{ 61 , 7 ,   -64 ,    63 ,   -64 ,    63 , "EXHT"     , "Exhaust Air Temperature"},
{ 68 ,10 ,     0 ,  1023 ,     0 ,  1023 , "SPLYFF"   , "Supply Air Fan Air Flow Rate"},
{ 78 ,10 ,     0 ,  1023 ,     0 ,  1023 , "EXHFF"    , "Exhaust Air Fan Air Flow Rate"},
{ 88 ,12 ,     0 ,  4095 ,     0 ,  4095 , "SPLYFS"   , "Supply Fan Speed"},
{ 100 ,12 ,     0 ,  4095 ,     0 ,  4095 , "EXHFS"    , "Exhaust Fan Speed"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D25000_CMD3_MT         0
#define D25000_CMD3_OMS        1
#define D25000_CMD3_SMS        2
#define D25000_CMD3_HBS        3
#define D25000_CMD3_SFP        4
#define D25000_CMD3_EFP        5
#define D25000_CMD3_DMS        6
#define D25000_CMD3_CPS        7
#define D25000_CMD3_OHS        8
#define D25000_CMD3_SHS        9
#define D25000_CMD3_DHS        10
#define D25000_CMD3_TOMS       11
#define D25000_CMD3_FMS        12
#define D25000_CMD3_WTPS       13
#define D25000_CMD3_RTCS       14
#define D25000_CMD3_AQS1       15
#define D25000_CMD3_MSS        16
#define D25000_CMD3_AQS2       17
#define D25000_CMD3_OUTT       18
#define D25000_CMD3_SPLYT      19
#define D25000_CMD3_INT        20
#define D25000_CMD3_EXHT       21
#define D25000_CMD3_SPLYFF     22
#define D25000_CMD3_EXHFF      23
#define D25000_CMD3_SPLYFS     24
#define D25000_CMD3_EXHFS      25
#define D25000_CMD3_NB_DATA    26
#define D25000_CMD3_DATA_SIZE  14

// TITLE:Telegram Definition: 'Ventilation Extended Status Message'
// DESC :The 'Ventilation Extended Status Message' provides additional information, e.g. active failure information. It is triggered once at power-on and on particular value changes.
T_DATAFIELD D25000_CMD4 [] = {
{  0 , 3 ,     0 ,     0 ,     0 ,     0 , "MT"       , "Message Type"},//Value: 0 = Ventilation remote transmission request 
                                                                        //Value: 1 = Ventilation control 
                                                                        //Value: 2 = Ventilation basic status 
                                                                        //Value: 3 = Ventilation extended status 
                                                                        //Value: 4 = Reserved 
                                                                        //Value: 5 = Reserved 
                                                                        //Value: 6 = Reserved 
                                                                        //Value: 7 = Reserved 
{  4 ,12 ,     0 ,  4095 ,     0 ,  4095 , "SVI"      , "Software Version Info"},
{ 16 ,16 ,     0 , 196605 ,     0 , 589815 , "OHC"      , "Operation Hours Counter"},
{ 32 ,16 ,     0 ,     0 ,     0 ,     0 , "DIS"      , "Digital Input 0...15 Status"},//Value: 0x0001 = input no. 00 active 
                                                                                       //Value: 0x0002 = input no. 01 active 
                                                                                       //Value: 0x0004 = input no. 02 active 
                                                                                       //Value: 0x0008 = input no. 03 active 
                                                                                       //Value: 0x0010 = input no. 04 active 
                                                                                       //Value: 0x0020 = input no. 05 active 
                                                                                       //Value: 0x0040 = input no. 06 active 
                                                                                       //Value: 0x0080 = input no. 07 active 
                                                                                       //Value: 0x0100 = input no. 08 active 
                                                                                       //Value: 0x0200 = input no. 09 active 
                                                                                       //Value: 0x0400 = input no. 10 active 
                                                                                       //Value: 0x0800 = input no. 11 active 
                                                                                       //Value: 0x1000 = input no. 12 active 
                                                                                       //Value: 0x2000 = input no. 13 active 
                                                                                       //Value: 0x4000 = input no. 14 active 
                                                                                       //Value: 0x8000 = input no. 15 active 
{ 48 ,16 ,     0 ,     0 ,     0 ,     0 , "DOS"      , "Digital Output 0...15 Status"},//Value: 0x0001 = output no. 00 active 
                                                                                        //Value: 0x0002 = output no. 01 active 
                                                                                        //Value: 0x0004 = output no. 02 active 
                                                                                        //Value: 0x0008 = output no. 03 active 
                                                                                        //Value: 0x0010 = output no. 04 active 
                                                                                        //Value: 0x0020 = output no. 05 active 
                                                                                        //Value: 0x0040 = output no. 06 active 
                                                                                        //Value: 0x0080 = output no. 07 active 
                                                                                        //Value: 0x0100 = output no. 08 active 
                                                                                        //Value: 0x0200 = output no. 09 active 
                                                                                        //Value: 0x0400 = output no. 10 active 
                                                                                        //Value: 0x0800 = output no. 11 active 
                                                                                        //Value: 0x1000 = output no. 12 active 
                                                                                        //Value: 0x2000 = output no. 13 active 
                                                                                        //Value: 0x4000 = output no. 14 active 
                                                                                        //Value: 0x8000 = output no. 15 active 
{ 64 ,16 ,     0 ,     0 ,     0 ,     0 , "IMS"      , "Info Message 0...15 Status"},//Value: 0x0001 = info no. 00 active 
                                                                                      //Value: 0x0002 = info no. 01 active 
                                                                                      //Value: 0x0004 = info no. 02 active 
                                                                                      //Value: 0x0008 = info no. 03 active 
                                                                                      //Value: 0x0010 = info no. 04 active 
                                                                                      //Value: 0x0020 = info no. 05 active 
                                                                                      //Value: 0x0040 = info no. 06 active 
                                                                                      //Value: 0x0080 = info no. 07 active 
                                                                                      //Value: 0x0100 = info no. 08 active 
                                                                                      //Value: 0x0200 = info no. 09 active 
                                                                                      //Value: 0x0400 = info no. 10 active 
                                                                                      //Value: 0x0800 = info no. 11 active 
                                                                                      //Value: 0x1000 = info no. 12 active 
                                                                                      //Value: 0x2000 = info no. 13 active 
                                                                                      //Value: 0x4000 = info no. 14 active 
                                                                                      //Value: 0x8000 = info no. 15 active 
{ 80 ,32 ,     0 ,     0 ,     0 ,     0 , "FS"       , "Fault 0...31 Status"},//Value: 0x00000001 = fault no. 00 active 
                                                                               //Value: 0x00000002 = fault no. 01 active 
                                                                               //Value: 0x00000004 = fault no. 02 active 
                                                                               //Value: 0x00000008 = fault no. 03 active 
                                                                               //Value: 0x00000010 = fault no. 04 active 
                                                                               //Value: 0x00000020 = fault no. 05 active 
                                                                               //Value: 0x00000040 = fault no. 06 active 
                                                                               //Value: 0x00000080 = fault no. 07 active 
                                                                               //Value: 0x00000100 = fault no. 08 active 
                                                                               //Value: 0x00000200 = fault no. 09 active 
                                                                               //Value: 0x00000400 = fault no. 10 active 
                                                                               //Value: 0x00000800 = fault no. 11 active 
                                                                               //Value: 0x00001000 = fault no. 12 active 
                                                                               //Value: 0x00002000 = fault no. 13 active 
                                                                               //Value: 0x00004000 = fault no. 14 active 
                                                                               //Value: 0x00008000 = fault no. 15 active 
                                                                               //Value: 0x00010000 = fault no. 16 active 
                                                                               //Value: 0x00020000 = fault no. 17 active 
                                                                               //Value: 0x00040000 = fault no. 18 active 
                                                                               //Value: 0x00080000 = fault no. 19 active 
                                                                               //Value: 0x00100000 = fault no. 20 active 
                                                                               //Value: 0x00200000 = fault no. 21 active 
                                                                               //Value: 0x00400000 = fault no. 22 active 
                                                                               //Value: 0x00800000 = fault no. 23 active 
                                                                               //Value: 0x01000000 = fault no. 24 active 
                                                                               //Value: 0x02000000 = fault no. 25 active 
                                                                               //Value: 0x04000000 = fault no. 26 active 
                                                                               //Value: 0x08000000 = fault no. 27 active 
                                                                               //Value: 0x10000000 = fault no. 28 active 
                                                                               //Value: 0x20000000 = fault no. 29 active 
                                                                               //Value: 0x40000000 = fault no. 30 active 
                                                                               //Value: 0x80000000 = fault no. 31 active 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D25000_CMD4_MT         0
#define D25000_CMD4_SVI        1
#define D25000_CMD4_OHC        2
#define D25000_CMD4_DIS        3
#define D25000_CMD4_DOS        4
#define D25000_CMD4_IMS        5
#define D25000_CMD4_FS         6
#define D25000_CMD4_NB_DATA    7
#define D25000_CMD4_DATA_SIZE  14

T_DATAFIELD* D25000_CASES [] = {
D25000_CMD1 ,
D25000_CMD2 ,
D25000_CMD3 ,
D25000_CMD4 ,
{0 }
};

// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2, 0x50, 0x01, "Heat Recovery Ventilation                                                       " , "Type 0x01 (description: see table)                                              " },

T_DATAFIELD* D25001_CASES [] = {
D23100_CMD1 ,
D23100_CMD2 ,
D23100_CMD3 ,
D23100_CMD4 ,
D23100_CMD5 ,
{0 }
};

// function number :0xA0 : Standard Valve 
// function type :0x01 : Valve Control 
//{ 0xD2, 0xA0, 0x01, "Standard Valve                                                                  " , "Valve Control                                                                   " },

// TITLE:
// DESC :
T_DATAFIELD D2A001_CMD1 [] = {
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "FDB"      , "Feedback"},//Value: 0b00 = Not defined 
                                                                    //Value: 0b01 = Closed 
                                                                    //Value: 0b10 = Opened 
                                                                    //Value: 0b11 = Not defined 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D2A001_CMD1_FDB        0
#define D2A001_CMD1_NB_DATA    1
#define D2A001_CMD1_DATA_SIZE  1

// TITLE:
// DESC :
T_DATAFIELD D2A001_CMD2 [] = {
{  6 , 2 ,     0 ,     0 ,     0 ,     0 , "REQ"      , "Request"},//Value: 0b00 = No change (request of feedback) 
                                                                   //Value: 0b01 = Request to close valve 
                                                                   //Value: 0b10 = Request to open valve 
                                                                   //Value: 0b11 = Request to close valve 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D2A001_CMD2_REQ        0
#define D2A001_CMD2_NB_DATA    1
#define D2A001_CMD2_DATA_SIZE  1

T_DATAFIELD* D2A001_CASES [] = {
D2A001_CMD1 ,
D2A001_CMD2 ,
{0 }
};


// Profils list 
T_PROFIL_LIST Profillist [] = {
{ 0xF60201, 0xF6 , 0x02, 0x01, F60201_CASES , "Rocker Switch, 2 Rocker                                                         " , "Light and Blind Control - Application Style 1                                   " },
{ 0xF60202, 0xF6 , 0x02, 0x02, F60202_CASES , "Rocker Switch, 2 Rocker                                                         " , "Light and Blind Control - Application Style 2                                   " },
{ 0xF60203, 0xF6 , 0x02, 0x03, F60203_CASES , "Rocker Switch, 2 Rocker                                                         " , "Light Control - Application Style 1                                             " },
{ 0xF60204, 0xF6 , 0x02, 0x04, F60204_CASES , "Rocker Switch, 2 Rocker                                                         " , "Light and blind control ERP2                                                    " },
{ 0xF60301, 0xF6 , 0x03, 0x01, F60301_CASES , "Rocker Switch, 4 Rocker                                                         " , "Light and Blind Control - Application Style 1                                   " },
{ 0xF60302, 0xF6 , 0x03, 0x02, F60302_CASES , "Rocker Switch, 4 Rocker                                                         " , "Light and Blind Control - Application Style 2                                   " },
{ 0xF60401, 0xF6 , 0x04, 0x01, F60401_CASES , "Position Switch, Home and Office Application                                    " , "Key Card Activated Switch                                                       " },
{ 0xF60402, 0xF6 , 0x04, 0x02, F60402_CASES , "Position Switch, Home and Office Application                                    " , "Key Card Activated Switch ERP2                                                  " },
{ 0xF60501, 0xF6 , 0x05, 0x01, F60501_CASES , "Detectors                                                                       " , "Liquid Leakage Sensor (mechanic harvester)                                      " },
{ 0xF61000, 0xF6 , 0x10, 0x00, F61000_CASES , "Mechanical Handle                                                               " , "Window Handle                                                                   " },
{ 0xF61001, 0xF6 , 0x10, 0x01, F61001_CASES , "Mechanical Handle                                                               " , "Window Handle ERP2                                                              " },
{ 0xD50001, 0xD5 , 0x00, 0x01, D50001_CASES , "Contacts and Switches                                                           " , "Single Input Contact                                                            " },
{ 0xA50201, 0xA5 , 0x02, 0x01, A50201_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range -40øC to 0øC                                           " },
{ 0xA50202, 0xA5 , 0x02, 0x02, A50202_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range -30øC to +10øC                                         " },
{ 0xA50203, 0xA5 , 0x02, 0x03, A50203_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range -20øC to +20øC                                         " },
{ 0xA50204, 0xA5 , 0x02, 0x04, A50204_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range -10øC to +30øC                                         " },
{ 0xA50205, 0xA5 , 0x02, 0x05, A50205_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range 0øC to +40øC                                           " },
{ 0xA50206, 0xA5 , 0x02, 0x06, A50206_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range +10øC to +50øC                                         " },
{ 0xA50207, 0xA5 , 0x02, 0x07, A50207_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range +20øC to +60øC                                         " },
{ 0xA50208, 0xA5 , 0x02, 0x08, A50208_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range +30øC to +70øC                                         " },
{ 0xA50209, 0xA5 , 0x02, 0x09, A50209_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range +40øC to +80øC                                         " },
{ 0xA5020A, 0xA5 , 0x02, 0x0A, A5020A_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range +50øC to +90øC                                         " },
{ 0xA5020B, 0xA5 , 0x02, 0x0B, A5020B_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range +60øC to +100øC                                        " },
{ 0xA50210, 0xA5 , 0x02, 0x10, A50210_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range -60øC to +20øC                                         " },
{ 0xA50211, 0xA5 , 0x02, 0x11, A50211_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range -50øC to +30øC                                         " },
{ 0xA50212, 0xA5 , 0x02, 0x12, A50212_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range -40øC to +40øC                                         " },
{ 0xA50213, 0xA5 , 0x02, 0x13, A50213_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range -30øC to +50øC                                         " },
{ 0xA50214, 0xA5 , 0x02, 0x14, A50214_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range -20øC to +60øC                                         " },
{ 0xA50215, 0xA5 , 0x02, 0x15, A50215_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range -10øC to +70øC                                         " },
{ 0xA50216, 0xA5 , 0x02, 0x16, A50216_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range 0øC to +80øC                                           " },
{ 0xA50217, 0xA5 , 0x02, 0x17, A50217_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range +10øC to +90øC                                         " },
{ 0xA50218, 0xA5 , 0x02, 0x18, A50218_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range +20øC to +100øC                                        " },
{ 0xA50219, 0xA5 , 0x02, 0x19, A50219_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range +30øC to +110øC                                        " },
{ 0xA5021A, 0xA5 , 0x02, 0x1A, A5021A_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range +40øC to +120øC                                        " },
{ 0xA5021B, 0xA5 , 0x02, 0x1B, A5021B_CASES , "Temperature Sensors                                                             " , "Temperature Sensor Range +50øC to +130øC                                        " },
{ 0xA50220, 0xA5 , 0x02, 0x20, A50220_CASES , "Temperature Sensors                                                             " , "10 Bit Temperature Sensor Range -10øC to +41.2øC                                " },
{ 0xA50230, 0xA5 , 0x02, 0x30, A50230_CASES , "Temperature Sensors                                                             " , "10 Bit Temperature Sensor Range -40øC to +62.3øC                                " },
{ 0xA50401, 0xA5 , 0x04, 0x01, A50401_CASES , "Temperature and Humidity Sensor                                                 " , "Range 0øC to +40øC and 0to 100" },
{ 0xA50402, 0xA5 , 0x04, 0x02, A50402_CASES , "Temperature and Humidity Sensor                                                 " , "Range -20øC to +60øC and 0to 100" },
{ 0xA50403, 0xA5 , 0x04, 0x03, A50403_CASES , "Temperature and Humidity Sensor                                                 " , "Range -20øC to +60øC 10bit-measurement and 0to 100" },
{ 0xA50501, 0xA5 , 0x05, 0x01, A50501_CASES , "Barometric Sensor                                                               " , "Range 500 to 1150 hPa                                                           " },
{ 0xA50601, 0xA5 , 0x06, 0x01, A50601_CASES , "Light Sensor                                                                    " , "Range 300lx to 60.000lx                                                         " },
{ 0xA50602, 0xA5 , 0x06, 0x02, A50602_CASES , "Light Sensor                                                                    " , "Range 0lx to 1.020lx                                                            " },
{ 0xA50603, 0xA5 , 0x06, 0x03, A50603_CASES , "Light Sensor                                                                    " , "10-bit measurement (1-Lux resolution) with range 0lx to 1000lx                  " },
{ 0xA50604, 0xA5 , 0x06, 0x04, A50604_CASES , "Light Sensor                                                                    " , "Curtain Wall Brightness Sensor                                                  " },
{ 0xA50605, 0xA5 , 0x06, 0x05, A50605_CASES , "Light Sensor                                                                    " , "Range 0lx to 10.200lx                                                           " },
{ 0xA50701, 0xA5 , 0x07, 0x01, A50701_CASES , "Occupancy Sensor                                                                " , "Occupancy with Supply voltage monitor                                           " },
{ 0xA50702, 0xA5 , 0x07, 0x02, A50702_CASES , "Occupancy Sensor                                                                " , "Occupancy with Supply voltage monitor                                           " },
{ 0xA50703, 0xA5 , 0x07, 0x03, A50703_CASES , "Occupancy Sensor                                                                " , "Occupancy with Supply voltage monitor and 10-bit illumination measurement       " },
{ 0xA50801, 0xA5 , 0x08, 0x01, A50801_CASES , "Light, Temperature and Occupancy Sensor                                         " , "Range 0lx to 510lx, 0øC to +51øC and Occupancy Button                           " },
{ 0xA50802, 0xA5 , 0x08, 0x02, A50802_CASES , "Light, Temperature and Occupancy Sensor                                         " , "Range 0lx to 1020lx, 0øC to +51øC and Occupancy Button                          " },
{ 0xA50803, 0xA5 , 0x08, 0x03, A50803_CASES , "Light, Temperature and Occupancy Sensor                                         " , "Range 0lx to 1530lx, -30øC to +50øC and Occupancy Button                        " },
{ 0xA50902, 0xA5 , 0x09, 0x02, A50902_CASES , "Gas Sensor                                                                      " , "CO-Sensor 0 ppm to 1020 ppm                                                     " },
{ 0xA50904, 0xA5 , 0x09, 0x04, A50904_CASES , "Gas Sensor                                                                      " , "CO2 Sensor                                                                      " },
{ 0xA50905, 0xA5 , 0x09, 0x05, A50905_CASES , "Gas Sensor                                                                      " , "VOC Sensor                                                                      " },
{ 0xA50906, 0xA5 , 0x09, 0x06, A50906_CASES , "Gas Sensor                                                                      " , "Radon                                                                           " },
{ 0xA50907, 0xA5 , 0x09, 0x07, A50907_CASES , "Gas Sensor                                                                      " , "Particles                                                                       " },
{ 0xA50908, 0xA5 , 0x09, 0x08, A50908_CASES , "Gas Sensor                                                                      " , "Pure CO2 Sensor                                                                 " },
{ 0xA50909, 0xA5 , 0x09, 0x09, A50909_CASES , "Gas Sensor                                                                      " , "Pure CO2 Sensor with Power Failure Detection                                    " },
{ 0xA5090A, 0xA5 , 0x09, 0x0A, A5090A_CASES , "Gas Sensor                                                                      " , "Hydrogen Gas Sensor                                                             " },
{ 0xA5090B, 0xA5 , 0x09, 0x0B, A5090B_CASES , "Gas Sensor                                                                      " , "Radioactivity Sensor                                                            " },
{ 0xA51001, 0xA5 , 0x10, 0x01, A51001_CASES , "Room Operating Panel                                                            " , "Temperature Sensor, Set Point, Fan Speed and Occupancy Control                  " },
{ 0xA51002, 0xA5 , 0x10, 0x02, A51002_CASES , "Room Operating Panel                                                            " , "Temperature Sensor, Set Point, Fan Speed and Day/Night Control                  " },
{ 0xA51003, 0xA5 , 0x10, 0x03, A51003_CASES , "Room Operating Panel                                                            " , "Temperature Sensor, Set Point Control                                           " },
{ 0xA51004, 0xA5 , 0x10, 0x04, A51004_CASES , "Room Operating Panel                                                            " , "Temperature Sensor, Set Point and Fan Speed Control                             " },
{ 0xA51005, 0xA5 , 0x10, 0x05, A51005_CASES , "Room Operating Panel                                                            " , "Temperature Sensor, Set Point and Occupancy Control                             " },
{ 0xA51006, 0xA5 , 0x10, 0x06, A51006_CASES , "Room Operating Panel                                                            " , "Temperature Sensor, Set Point and Day/Night Control                             " },
{ 0xA51007, 0xA5 , 0x10, 0x07, A51007_CASES , "Room Operating Panel                                                            " , "Temperature Sensor, Fan Speed Control                                           " },
{ 0xA51008, 0xA5 , 0x10, 0x08, A51008_CASES , "Room Operating Panel                                                            " , "Temperature Sensor, Fan Speed and Occupancy Control                             " },
{ 0xA51009, 0xA5 , 0x10, 0x09, A51009_CASES , "Room Operating Panel                                                            " , "Temperature Sensor, Fan Speed and Day/Night Control                             " },
{ 0xA5100A, 0xA5 , 0x10, 0x0A, A5100A_CASES , "Room Operating Panel                                                            " , "Temperature Sensor, Set Point Adjust and Single Input Contact                   " },
{ 0xA5100B, 0xA5 , 0x10, 0x0B, A5100B_CASES , "Room Operating Panel                                                            " , "Temperature Sensor and Single Input Contact                                     " },
{ 0xA5100C, 0xA5 , 0x10, 0x0C, A5100C_CASES , "Room Operating Panel                                                            " , "Temperature Sensor and Occupancy Control                                        " },
{ 0xA5100D, 0xA5 , 0x10, 0x0D, A5100D_CASES , "Room Operating Panel                                                            " , "Temperature Sensor and Day/Night Control                                        " },
{ 0xA51010, 0xA5 , 0x10, 0x10, A51010_CASES , "Room Operating Panel                                                            " , "Temperature and Humidity Sensor, Set Point and Occupancy Control                " },
{ 0xA51011, 0xA5 , 0x10, 0x11, A51011_CASES , "Room Operating Panel                                                            " , "Temperature and Humidity Sensor, Set Point and Day/Night Control                " },
{ 0xA51012, 0xA5 , 0x10, 0x12, A51012_CASES , "Room Operating Panel                                                            " , "Temperature and Humidity Sensor and Set Point                                   " },
{ 0xA51013, 0xA5 , 0x10, 0x13, A51013_CASES , "Room Operating Panel                                                            " , "Temperature and Humidity Sensor, Occupancy Control                              " },
{ 0xA51014, 0xA5 , 0x10, 0x14, A51014_CASES , "Room Operating Panel                                                            " , "Temperature and Humidity Sensor, Day/Night Control                              " },
{ 0xA51015, 0xA5 , 0x10, 0x15, A51015_CASES , "Room Operating Panel                                                            " , "10 Bit Temperature Sensor, 6 bit Set Point Control                              " },
{ 0xA51016, 0xA5 , 0x10, 0x16, A51016_CASES , "Room Operating Panel                                                            " , "10 Bit Temperature Sensor, 6 bit Set Point Control;Occupancy Control            " },
{ 0xA51017, 0xA5 , 0x10, 0x17, A51017_CASES , "Room Operating Panel                                                            " , "10 Bit Temperature Sensor, Occupancy Control                                    " },
{ 0xA51018, 0xA5 , 0x10, 0x18, A51018_CASES , "Room Operating Panel                                                            " , "Illumination, Temperature Set Point, Temperature Sensor, Fan Speed and Occupancy Control" },
{ 0xA51019, 0xA5 , 0x10, 0x19, A51019_CASES , "Room Operating Panel                                                            " , "Humidity, Temperature Set Point, Temperature Sensor, Fan Speed and Occupancy Control" },
{ 0xA5101A, 0xA5 , 0x10, 0x1A, A5101A_CASES , "Room Operating Panel                                                            " , "Supply voltage monitor, Temperature Set Point, Temperature Sensor, Fan Speed and Occupancy Control" },
{ 0xA5101B, 0xA5 , 0x10, 0x1B, A5101B_CASES , "Room Operating Panel                                                            " , "Supply Voltage Monitor, Illumination, Temperature Sensor, Fan Speed and Occupancy Control" },
{ 0xA5101C, 0xA5 , 0x10, 0x1C, A5101C_CASES , "Room Operating Panel                                                            " , "Illumination, Illumination Set Point, Temperature Sensor, Fan Speed and Occupancy Control" },
{ 0xA5101D, 0xA5 , 0x10, 0x1D, A5101D_CASES , "Room Operating Panel                                                            " , "Humidity, Humidity Set Point, Temperature Sensor, Fan Speed and Occupancy Control" },
{ 0xA5101E, 0xA5 , 0x10, 0x1E, A5101E_CASES , "Room Operating Panel                                                            " , "see A5-10-1B                                                                    " },
{ 0xA5101F, 0xA5 , 0x10, 0x1F, A5101F_CASES , "Room Operating Panel                                                            " , "Temperature Sensor, Set Point, Fan Speed, Occupancy and Unoccupancy Control     " },
{ 0xA51020, 0xA5 , 0x10, 0x20, A51020_CASES , "Room Operating Panel                                                            " , "Temperature and Set Point with Special Heating States                           " },
{ 0xA51021, 0xA5 , 0x10, 0x21, A51021_CASES , "Room Operating Panel                                                            " , "Temperature, Humidity and Set Point with Special Heating States                 " },
{ 0xA51022, 0xA5 , 0x10, 0x22, A51022_CASES , "Room Operating Panel                                                            " , "Temperature, Setpoint, Humidity and Fan Speed                                   " },
{ 0xA51023, 0xA5 , 0x10, 0x23, A51023_CASES , "Room Operating Panel                                                            " , "Temperature, Setpoint, Humidity, Fan Speed and Occupancy                        " },
{ 0xA51101, 0xA5 , 0x11, 0x01, A51101_CASES , "Controller Status                                                               " , "Lighting Controller                                                             " },
{ 0xA51102, 0xA5 , 0x11, 0x02, A51102_CASES , "Controller Status                                                               " , "Temperature Controller Output                                                   " },
{ 0xA51103, 0xA5 , 0x11, 0x03, A51103_CASES , "Controller Status                                                               " , "Blind Status                                                                    " },
{ 0xA51104, 0xA5 , 0x11, 0x04, A51104_CASES , "Controller Status                                                               " , "Extended Lighting Status                                                        " },
{ 0xA51105, 0xA5 , 0x11, 0x05, A51105_CASES , "Controller Status                                                               " , "Dual-Channel Switch Actuator                                                    " },
{ 0xA51200, 0xA5 , 0x12, 0x00, A51200_CASES , "Automated Meter Reading (AMR)                                                   " , "Counter                                                                         " },
{ 0xA51201, 0xA5 , 0x12, 0x01, A51201_CASES , "Automated Meter Reading (AMR)                                                   " , "Electricity                                                                     " },
{ 0xA51202, 0xA5 , 0x12, 0x02, A51202_CASES , "Automated Meter Reading (AMR)                                                   " , "Gas                                                                             " },
{ 0xA51203, 0xA5 , 0x12, 0x03, A51203_CASES , "Automated Meter Reading (AMR)                                                   " , "Water                                                                           " },
{ 0xA51204, 0xA5 , 0x12, 0x04, A51204_CASES , "Automated Meter Reading (AMR)                                                   " , "Temperature and Load Sensor                                                     " },
{ 0xA51205, 0xA5 , 0x12, 0x05, A51205_CASES , "Automated Meter Reading (AMR)                                                   " , "Temperature and Container Sensor                                                " },
{ 0xA51210, 0xA5 , 0x12, 0x10, A51210_CASES , "Automated Meter Reading (AMR)                                                   " , "Current meter 16 channels                                                       " },
{ 0xA51301, 0xA5 , 0x13, 0x01, A51301_CASES , "Environmental Applications                                                      " , "Weather Station                                                                 " },
{ 0xA51302, 0xA5 , 0x13, 0x02, A51302_CASES , "Environmental Applications                                                      " , "Sun Intensity                                                                   " },
{ 0xA51303, 0xA5 , 0x13, 0x03, A51303_CASES , "Environmental Applications                                                      " , "Date Exchange                                                                   " },
{ 0xA51304, 0xA5 , 0x13, 0x04, A51304_CASES , "Environmental Applications                                                      " , "Time and Day Exchange                                                           " },
{ 0xA51305, 0xA5 , 0x13, 0x05, A51305_CASES , "Environmental Applications                                                      " , "Direction Exchange                                                              " },
{ 0xA51306, 0xA5 , 0x13, 0x06, A51306_CASES , "Environmental Applications                                                      " , "Geographic Position Exchange                                                    " },
{ 0xA51307, 0xA5 , 0x13, 0x07, A51307_CASES , "Environmental Applications                                                      " , "Wind Sensor                                                                     " },
{ 0xA51308, 0xA5 , 0x13, 0x08, A51308_CASES , "Environmental Applications                                                      " , "Rain Sensor                                                                     " },
{ 0xA51310, 0xA5 , 0x13, 0x10, A51310_CASES , "Environmental Applications                                                      " , "Sun position and radiation                                                      " },
{ 0xA51401, 0xA5 , 0x14, 0x01, A51401_CASES , "Multi-Func Sensor                                                               " , "Single Input Contact (Window/Door), Supply voltage monitor                      " },
{ 0xA51402, 0xA5 , 0x14, 0x02, A51402_CASES , "Multi-Func Sensor                                                               " , "Single Input Contact (Window/Door), Supply voltage monitor and Illumination     " },
{ 0xA51403, 0xA5 , 0x14, 0x03, A51403_CASES , "Multi-Func Sensor                                                               " , "Single Input Contact (Window/Door), Supply voltage monitor and Vibration        " },
{ 0xA51404, 0xA5 , 0x14, 0x04, A51404_CASES , "Multi-Func Sensor                                                               " , "Single Input Contact (Window/Door), Supply voltage monitor, Vibration and Illumination" },
{ 0xA51405, 0xA5 , 0x14, 0x05, A51405_CASES , "Multi-Func Sensor                                                               " , "Vibration/Tilt, Supply voltage monitor                                          " },
{ 0xA51406, 0xA5 , 0x14, 0x06, A51406_CASES , "Multi-Func Sensor                                                               " , "Vibration/Tilt, Illumination and Supply voltage monitor                         " },
{ 0xA52001, 0xA5 , 0x20, 0x01, A52001_CASES , "HVAC Components                                                                 " , "Battery Powered Actuator                                                        " },
{ 0xA52002, 0xA5 , 0x20, 0x02, A52002_CASES , "HVAC Components                                                                 " , "Basic Actuator                                                                  " },
{ 0xA52003, 0xA5 , 0x20, 0x03, A52003_CASES , "HVAC Components                                                                 " , "Line powered Actuator                                                           " },
{ 0xA52004, 0xA5 , 0x20, 0x04, A52004_CASES , "HVAC Components                                                                 " , "Heating Radiator Valve Actuating Drive with Feed and Room Temperature Measurement, Local Set Point Control and Display" },
{ 0xA52010, 0xA5 , 0x20, 0x10, A52010_CASES , "HVAC Components                                                                 " , "Generic HVAC Interface                                                          " },
{ 0xA52011, 0xA5 , 0x20, 0x11, A52011_CASES , "HVAC Components                                                                 " , "Generic HVAC Interface - Error Control                                          " },
{ 0xA52012, 0xA5 , 0x20, 0x12, A52012_CASES , "HVAC Components                                                                 " , "Temperature Controller Input                                                    " },
{ 0xA53001, 0xA5 , 0x30, 0x01, A53001_CASES , "Digital Input                                                                   " , "Single Input Contact, Battery Monitor                                           " },
{ 0xA53002, 0xA5 , 0x30, 0x02, A53002_CASES , "Digital Input                                                                   " , "Single Input Contact                                                            " },
{ 0xA53003, 0xA5 , 0x30, 0x03, A53003_CASES , "Digital Input                                                                   " , "4 Digital Inputs, Wake and Temperature                                          " },
{ 0xA53004, 0xA5 , 0x30, 0x04, A53004_CASES , "Digital Input                                                                   " , "3 Digital Inputs, 1 Digital Input 8 Bits                                        " },
{ 0xA53005, 0xA5 , 0x30, 0x05, A53005_CASES , "Digital Input                                                                   " , "Single Input Contact, Retransmission, Battery Monitor                           " },
{ 0xA53701, 0xA5 , 0x37, 0x01, A53701_CASES , "Energy Management                                                               " , "Demand Response                                                                 " },
{ 0xA53808, 0xA5 , 0x38, 0x08, A53808_CASES , "Central Command                                                                 " , "Gateway                                                                         " },
{ 0xA53809, 0xA5 , 0x38, 0x09, A53809_CASES , "Central Command                                                                 " , "Extended Lighting-Control                                                       " },
{ 0xA53F00, 0xA5 , 0x3F, 0x00, A53F00_CASES , "Universal                                                                       " , "Radio Link Test                                                                 " },
{ 0xA53F7F, 0xA5 , 0x3F, 0x7F, A53F7F_CASES , "Universal                                                                       " , "Universal                                                                       " },
{ 0xD20001, 0xD2 , 0x00, 0x01, D20001_CASES , "Room Control Panel (RCP)                                                        " , "RCP with Temperature Measurement and Display (BI-DIR)                           " },
{ 0xD20100, 0xD2 , 0x01, 0x00, D20100_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x00                                                                       " },
{ 0xD20101, 0xD2 , 0x01, 0x01, D20101_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x01 (description: see table)                                              " },
{ 0xD20102, 0xD2 , 0x01, 0x02, D20102_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x02 (description: see table)                                              " },
{ 0xD20103, 0xD2 , 0x01, 0x03, D20103_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x03 (description: see table)                                              " },
{ 0xD20104, 0xD2 , 0x01, 0x04, D20104_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x04 (description: see table)                                              " },
{ 0xD20105, 0xD2 , 0x01, 0x05, D20105_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x05 (description: see table)                                              " },
{ 0xD20106, 0xD2 , 0x01, 0x06, D20106_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x06 (description: see table)                                              " },
{ 0xD20107, 0xD2 , 0x01, 0x07, D20107_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x07 (description: see table)                                              " },
{ 0xD20108, 0xD2 , 0x01, 0x08, D20108_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x08 (description: see table)                                              " },
{ 0xD20109, 0xD2 , 0x01, 0x09, D20109_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x09 (description: see table)                                              " },
{ 0xD2010A, 0xD2 , 0x01, 0x0A, D2010A_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0A (description: see table)                                              " },
{ 0xD2010B, 0xD2 , 0x01, 0x0B, D2010B_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0B (description: see table)                                              " },
{ 0xD2010C, 0xD2 , 0x01, 0x0C, D2010C_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0C                                                                       " },
{ 0xD2010D, 0xD2 , 0x01, 0x0D, D2010D_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0D                                                                       " },
{ 0xD2010E, 0xD2 , 0x01, 0x0E, D2010E_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0E                                                                       " },
{ 0xD2010F, 0xD2 , 0x01, 0x0F, D2010F_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0F                                                                       " },
{ 0xD20110, 0xD2 , 0x01, 0x10, D20110_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x10 (description: see table)                                              " },
{ 0xD20111, 0xD2 , 0x01, 0x11, D20111_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x11 (description: see table)                                              " },
{ 0xD20112, 0xD2 , 0x01, 0x12, D20112_CASES , "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x12                                                                       " },
{ 0xD20200, 0xD2 , 0x02, 0x00, D20200_CASES , "Sensors for Temperature, Illumination, Occupancy And Smoke                      " , "Type 0x00                                                                       " },
{ 0xD20201, 0xD2 , 0x02, 0x01, D20201_CASES , "Sensors for Temperature, Illumination, Occupancy And Smoke                      " , "Type 0x01 (description: see table)                                              " },
{ 0xD20202, 0xD2 , 0x02, 0x02, D20202_CASES , "Sensors for Temperature, Illumination, Occupancy And Smoke                      " , "Type 0x02 (description: see table)                                              " },
{ 0xD20300, 0xD2 , 0x03, 0x00, D20300_CASES , "Light, Switching + Blind Control                                                " , "Type 0x00                                                                       " },
{ 0xD20310, 0xD2 , 0x03, 0x10, D20310_CASES , "Light, Switching + Blind Control                                                " , "Mechanical Handle                                                               " },
{ 0xD20320, 0xD2 , 0x03, 0x20, D20320_CASES , "Light, Switching + Blind Control                                                " , "Beacon with Vibration Detection                                                 " },
{ 0xD20400, 0xD2 , 0x04, 0x00, D20400_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x00                                                                       " },
{ 0xD20401, 0xD2 , 0x04, 0x01, D20401_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x01 (description: see table)                                              " },
{ 0xD20402, 0xD2 , 0x04, 0x02, D20402_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x02 (description: see table)                                              " },
{ 0xD20403, 0xD2 , 0x04, 0x03, D20403_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x03 (description: see table)                                              " },
{ 0xD20404, 0xD2 , 0x04, 0x04, D20404_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x04 (description: see table)                                              " },
{ 0xD20405, 0xD2 , 0x04, 0x05, D20405_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x05 (description: see table)                                              " },
{ 0xD20406, 0xD2 , 0x04, 0x06, D20406_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x06 (description: see table)                                              " },
{ 0xD20407, 0xD2 , 0x04, 0x07, D20407_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x07 (description: see table)                                              " },
{ 0xD20408, 0xD2 , 0x04, 0x08, D20408_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x08 (description: see table)                                              " },
{ 0xD20409, 0xD2 , 0x04, 0x09, D20409_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x09 (description: see table)                                              " },
{ 0xD20410, 0xD2 , 0x04, 0x10, D20410_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x10 (description: see table)                                              " },
{ 0xD2041A, 0xD2 , 0x04, 0x1A, D2041A_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1A (description: see table)                                              " },
{ 0xD2041B, 0xD2 , 0x04, 0x1B, D2041B_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1B (description: see table)                                              " },
{ 0xD2041C, 0xD2 , 0x04, 0x1C, D2041C_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1C (description: see table)                                              " },
{ 0xD2041D, 0xD2 , 0x04, 0x1D, D2041D_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1D (description: see table)                                              " },
{ 0xD2041E, 0xD2 , 0x04, 0x1E, D2041E_CASES , "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1E (description: see table)                                              " },
{ 0xD20500, 0xD2 , 0x05, 0x00, D20500_CASES , "Blinds Control for Position and Angle                                           " , "Type 0x00                                                                       " },
{ 0xD20601, 0xD2 , 0x06, 0x01, D20601_CASES , "Multisensor Window Handle                                                       " , "Alarm, Position Sensor, Vacation Mode, Optional Sensors                         " },
{ 0xD21000, 0xD2 , 0x10, 0x00, D21000_CASES , "Room Control Panels with Temperature & Fan Speed Control, Room Status Information and Time Program" , "Type 0x00                                                                       " },
{ 0xD21001, 0xD2 , 0x10, 0x01, D21001_CASES , "Room Control Panels with Temperature & Fan Speed Control, Room Status Information and Time Program" , "Type 0x01                                                                       " },
{ 0xD21002, 0xD2 , 0x10, 0x02, D21002_CASES , "Room Control Panels with Temperature & Fan Speed Control, Room Status Information and Time Program" , "Type 0x02                                                                       " },
{ 0xD21101, 0xD2 , 0x11, 0x01, D21101_CASES , "Bidirectional Room Operating Panel                                              " , "Type 0x01                                                                       " },
{ 0xD21102, 0xD2 , 0x11, 0x02, D21102_CASES , "Bidirectional Room Operating Panel                                              " , "Type 0x02 (description: see table)                                              " },
{ 0xD21103, 0xD2 , 0x11, 0x03, D21103_CASES , "Bidirectional Room Operating Panel                                              " , "Type 0x03 (description: see table)                                              " },
{ 0xD21104, 0xD2 , 0x11, 0x04, D21104_CASES , "Bidirectional Room Operating Panel                                              " , "Type 0x04 (description: see table)                                              " },
{ 0xD21105, 0xD2 , 0x11, 0x05, D21105_CASES , "Bidirectional Room Operating Panel                                              " , "Type 0x05 (description: see table)                                              " },
{ 0xD21106, 0xD2 , 0x11, 0x06, D21106_CASES , "Bidirectional Room Operating Panel                                              " , "Type 0x06 (description: see table)                                              " },
{ 0xD21107, 0xD2 , 0x11, 0x07, D21107_CASES , "Bidirectional Room Operating Panel                                              " , "Type 0x07 (description: see table)                                              " },
{ 0xD21108, 0xD2 , 0x11, 0x08, D21108_CASES , "Bidirectional Room Operating Panel                                              " , "Type 0x08 (description: see table)                                              " },
{ 0xD22000, 0xD2 , 0x20, 0x00, D22000_CASES , "Fan Control                                                                     " , "Type 0x00                                                                       " },
{ 0xD22001, 0xD2 , 0x20, 0x01, D22001_CASES , "Fan Control                                                                     " , "Type 0x01                                                                       " },
{ 0xD22002, 0xD2 , 0x20, 0x02, D22002_CASES , "Fan Control                                                                     " , "Type 0x02                                                                       " },
{ 0xD23000, 0xD2 , 0x30, 0x00, D23000_CASES , "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x00                                                                       " },
{ 0xD23001, 0xD2 , 0x30, 0x01, D23001_CASES , "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x01 (description: see table)                                              " },
{ 0xD23002, 0xD2 , 0x30, 0x02, D23002_CASES , "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x02 (description: see table)                                              " },
{ 0xD23003, 0xD2 , 0x30, 0x03, D23003_CASES , "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x03 (description: see table)                                              " },
{ 0xD23004, 0xD2 , 0x30, 0x04, D23004_CASES , "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x04 (description: see table)                                              " },
{ 0xD23005, 0xD2 , 0x30, 0x05, D23005_CASES , "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x05 (description: see table)                                              " },
{ 0xD23006, 0xD2 , 0x30, 0x06, D23006_CASES , "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x06 (description: see table)                                              " },
{ 0xD23100, 0xD2 , 0x31, 0x00, D23100_CASES , "Automated Meter Reading Gateway                                                 " , "Type 0x00                                                                       " },
{ 0xD23101, 0xD2 , 0x31, 0x01, D23101_CASES , "Automated Meter Reading Gateway                                                 " , "Type 0x01 (description: see table)                                              " },
{ 0xD23200, 0xD2 , 0x32, 0x00, D23200_CASES , "A.C. Current Clamp                                                              " , "Type 0x00                                                                       " },
{ 0xD23201, 0xD2 , 0x32, 0x01, D23201_CASES , "A.C. Current Clamp                                                              " , "Type 0x01                                                                       " },
{ 0xD23202, 0xD2 , 0x32, 0x02, D23202_CASES , "A.C. Current Clamp                                                              " , "Type 0x02                                                                       " },
{ 0xD24000, 0xD2 , 0x40, 0x00, D24000_CASES , "LED Controller Status                                                           " , "Type 0x00                                                                       " },
{ 0xD24001, 0xD2 , 0x40, 0x01, D24001_CASES , "LED Controller Status                                                           " , "Type 0x01                                                                       " },
{ 0xD25000, 0xD2 , 0x50, 0x00, D25000_CASES , "Heat Recovery Ventilation                                                       " , "Type 0x00                                                                       " },
{ 0xD25001, 0xD2 , 0x50, 0x01, D25001_CASES , "Heat Recovery Ventilation                                                       " , "Type 0x01 (description: see table)                                              " },
{ 0xD2A001, 0xD2 , 0xA0, 0x01, D2A001_CASES , "Standard Valve                                                                  " , "Valve Control                                                                   " },
{0,0,0,0,0,"","" }
};

