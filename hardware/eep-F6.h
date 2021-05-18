// function number :0x02 : Rocker Switch, 2 Rocker 
// function type :0x01 : Light and Blind Control - Application Style 1 
//{ 0xF6 , 0x02 , 0x01 , "Rocker Switch, 2 Rocker                                                          ",  "Light and Blind Control - Application Style 1                                    " },

// TITLE:
T_DATAFIELD F60201_CMD1 [] = {
{  0 , 3 , "R1"       ,   0 ,   0 ,   0 ,   0 , "Rocker 1st action"},//Value: 0 = Button AI: 
                                                                     //Value: 1 = Button A0: 
                                                                     //Value: 2 = Button BI: 
                                                                     //Value: 3 = Button B0: 
{  3 , 1 , "EB"       ,   0 ,   0 ,   0 ,   0 , "Energy Bow"},//Value: 0 = released 
                                                              //Value: 1 = pressed 
{  4 , 3 , "R2"       ,   0 ,   0 ,   0 ,   0 , "Rocker 2nd action"},//Value: 0 = Button AI: 
                                                                     //Value: 1 = Button A0: 
                                                                     //Value: 2 = Button BI: 
                                                                     //Value: 3 = Button B0: 
{  7 , 1 , "SA"       ,   0 ,   0 ,   0 ,   0 , "2nd Action"},//Value: 0 = No 2nd action 
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
T_DATAFIELD F60201_CMD2 [] = {
{  0 , 3 , "R1"       ,   0 ,   0 ,   0 ,   0 , "Number of buttons pressed simultaneously (other bit combinations are not valid)"},//Value: 0 = no button 
                                                                                                                                   //Value: 3 = 3 or 4 buttons 
{  3 , 1 , "EB"       ,   0 ,   0 ,   0 ,   0 , "Energy Bow"},//Value: 0 = released 
                                                              //Value: 1 = pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60201_CMD2_R1         0
#define F60201_CMD2_EB         1
#define F60201_CMD2_NB_DATA    2
#define F60201_CMD2_DATA_SIZE  1
// function type :0x02 : Light and Blind Control - Application Style 2 
//{ 0xF6 , 0x02 , 0x02 , "Rocker Switch, 2 Rocker                                                          ",  "Light and Blind Control - Application Style 2                                    " },

// TITLE:
T_DATAFIELD F60202_CMD1 [] = {
{  0 , 3 , "R1"       ,   0 ,   0 ,   0 ,   0 , "Rocker 1st action"},//Value: 0 = Button AI: 
                                                                     //Value: 1 = Button A0: 
                                                                     //Value: 2 = Button BI: 
                                                                     //Value: 3 = Button B0: 
{  3 , 1 , "EB"       ,   0 ,   0 ,   0 ,   0 , "Energy Bow"},//Value: 0 = released 
                                                              //Value: 1 = pressed 
{  4 , 3 , "R2"       ,   0 ,   0 ,   0 ,   0 , "Rocker 2nd action"},//Value: 0 = Button AI: 
                                                                     //Value: 1 = Button A0: 
                                                                     //Value: 2 = Button BI: 
                                                                     //Value: 3 = Button B0: 
{  7 , 1 , "SA"       ,   0 ,   0 ,   0 ,   0 , "2nd Action"},//Value: 0 = No 2nd action 
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
T_DATAFIELD F60202_CMD2 [] = {
{  0 , 3 , "R1"       ,   0 ,   0 ,   0 ,   0 , "Number of buttons pressed simultaneously (other bit combinations are not valid)"},//Value: 0 = no button 
                                                                                                                                   //Value: 3 = 3 or 4 buttons 
{  3 , 1 , "EB"       ,   0 ,   0 ,   0 ,   0 , "Energy Bow"},//Value: 0 = released 
                                                              //Value: 1 = pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60202_CMD2_R1         0
#define F60202_CMD2_EB         1
#define F60202_CMD2_NB_DATA    2
#define F60202_CMD2_DATA_SIZE  1
// function type :0x03 : Light Control - Application Style 1 
//{ 0xF6 , 0x02 , 0x03 , "Rocker Switch, 2 Rocker                                                          ",  "Light Control - Application Style 1                                              " },

// TITLE:
T_DATAFIELD F60203_CMD1 [] = {
{  0 , 8 , "RA"       ,   0 ,   0 ,   0 ,   0 , "Rocker action"},//Value: 0x30 = Button A0: 
                                                                 //Value: 0x10 = Button A1: 
                                                                 //Value: 0x70 = Button B0: 
                                                                 //Value: 0x50 = Button B1: 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60203_CMD1_RA         0
#define F60203_CMD1_NB_DATA    1
#define F60203_CMD1_DATA_SIZE  1
// function type :0x04 : Light and blind control ERP2 
//{ 0xF6 , 0x02 , 0x04 , "Rocker Switch, 2 Rocker                                                          ",  "Light and blind control ERP2                                                     " },

// TITLE:
T_DATAFIELD F60204_CMD1 [] = {
{  0 , 1 , "EBO"      ,   0 ,   0 ,   0 ,   0 , "Energy Bow"},//Value: 0 = released 
                                                              //Value: 1 = pressed 
{  1 , 1 , "BC"       ,   0 ,   0 ,   0 ,   0 , "Button coding"},//Value: 0 = button 
{  4 , 1 , "RBI"      ,   0 ,   0 ,   0 ,   0 , "BI"},//Value: 0 = not pressed 
                                                      //Value: 1 = pressed 
{  5 , 1 , "RB0"      ,   0 ,   0 ,   0 ,   0 , "B0"},//Value: 0 = not pressed 
                                                      //Value: 1 = pressed 
{  6 , 1 , "RAI"      ,   0 ,   0 ,   0 ,   0 , "AI"},//Value: 0 = not pressed 
                                                      //Value: 1 = pressed 
{  7 , 1 , "RA0"      ,   0 ,   0 ,   0 ,   0 , "A0"},//Value: 0 = not pressed 
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
// function number :0x03 : Rocker Switch, 4 Rocker 
// function type :0x01 : Light and Blind Control - Application Style 1 
//{ 0xF6 , 0x03 , 0x01 , "Rocker Switch, 4 Rocker                                                          ",  "Light and Blind Control - Application Style 1                                    " },

// TITLE:
T_DATAFIELD F60301_CMD1 [] = {
{  0 , 3 , "R1"       ,   0 ,   0 ,   0 ,   0 , "Rocker 1st action"},//Value: 0 = Button AI: 
                                                                     //Value: 1 = Button A0: 
                                                                     //Value: 2 = Button BI: 
                                                                     //Value: 3 = Button B0: 
                                                                     //Value: 4 = Button CI: 
                                                                     //Value: 5 = Button C0: 
                                                                     //Value: 6 = Button DI: 
                                                                     //Value: 7 = Button D0: 
{  3 , 1 , "EB"       ,   0 ,   0 ,   0 ,   0 , "Energy Bow"},//Value: 0 = released 
                                                              //Value: 1 = pressed 
{  4 , 3 , "R2"       ,   0 ,   0 ,   0 ,   0 , "Rocker 2nd action"},//Value: 0 = Button AI: 
                                                                     //Value: 1 = Button A0: 
                                                                     //Value: 2 = Button BI: 
                                                                     //Value: 3 = Button B0: 
                                                                     //Value: 4 = Button CI: 
                                                                     //Value: 5 = Button C0: 
                                                                     //Value: 6 = Button DI: 
                                                                     //Value: 7 = Button D0: 
{  7 , 1 , "SA"       ,   0 ,   0 ,   0 ,   0 , "2nd Action"},//Value: 0 = No 2nd action 
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
T_DATAFIELD F60301_CMD2 [] = {
{  0 , 3 , "R1"       ,   0 ,   0 ,   0 ,   0 , "Number of buttons pressed simultaneously"},//Value: 0 = no Button pressed 
                                                                                            //Value: 1 = 2 buttons pressed 
                                                                                            //Value: 2 = 3 buttons pressed 
                                                                                            //Value: 3 = 4 buttons pressed 
                                                                                            //Value: 4 = 5 buttons pressed 
                                                                                            //Value: 5 = 6 buttons pressed 
                                                                                            //Value: 6 = 7 buttons pressed 
                                                                                            //Value: 7 = 8 buttons pressed 
{  3 , 1 , "EB"       ,   0 ,   0 ,   0 ,   0 , "Energy Bow"},//Value: 0 = released 
                                                              //Value: 1 = pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60301_CMD2_R1         0
#define F60301_CMD2_EB         1
#define F60301_CMD2_NB_DATA    2
#define F60301_CMD2_DATA_SIZE  1
// function type :0x02 : Light and Blind Control - Application Style 2 
//{ 0xF6 , 0x03 , 0x02 , "Rocker Switch, 4 Rocker                                                          ",  "Light and Blind Control - Application Style 2                                    " },

// TITLE:
T_DATAFIELD F60302_CMD1 [] = {
{  0 , 3 , "R1"       ,   0 ,   0 ,   0 ,   0 , "Rocker 1st action"},//Value: 0 = Button AI: 
                                                                     //Value: 1 = Button A0: 
                                                                     //Value: 2 = Button BI: 
                                                                     //Value: 3 = Button B0: 
                                                                     //Value: 4 = Button CI: 
                                                                     //Value: 5 = Button C0: 
                                                                     //Value: 6 = Button DI: 
                                                                     //Value: 7 = Button D0: 
{  3 , 1 , "EB"       ,   0 ,   0 ,   0 ,   0 , "Energy Bow"},//Value: 0 = released 
                                                              //Value: 1 = pressed 
{  4 , 3 , "R2"       ,   0 ,   0 ,   0 ,   0 , "Rocker 2nd action"},//Value: 0 = Button AI: 
                                                                     //Value: 1 = Button A0: 
                                                                     //Value: 2 = Button BI: 
                                                                     //Value: 3 = Button B0: 
                                                                     //Value: 4 = Button CI: 
                                                                     //Value: 5 = Button C0: 
                                                                     //Value: 6 = Button DI: 
                                                                     //Value: 7 = Button D0: 
{  7 , 1 , "SA"       ,   0 ,   0 ,   0 ,   0 , "2nd Action"},//Value: 0 = No 2nd action 
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
T_DATAFIELD F60302_CMD2 [] = {
{  0 , 3 , "R1"       ,   0 ,   0 ,   0 ,   0 , "Number of buttons pressed simultaneously"},//Value: 0 = no button pressed 
                                                                                            //Value: 1 = 2 buttons pressed 
                                                                                            //Value: 2 = 3 buttons pressed 
                                                                                            //Value: 3 = 4 buttons pressed 
                                                                                            //Value: 4 = 5 buttons pressed 
                                                                                            //Value: 5 = 6 buttons pressed 
                                                                                            //Value: 6 = 7 buttons pressed 
                                                                                            //Value: 7 = 8 buttons pressed 
{  3 , 1 , "EB"       ,   0 ,   0 ,   0 ,   0 , "Energy Bow"},//Value: 0 = released 
                                                              //Value: 1 = pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60302_CMD2_R1         0
#define F60302_CMD2_EB         1
#define F60302_CMD2_NB_DATA    2
#define F60302_CMD2_DATA_SIZE  1
// function number :0x04 : Position Switch, Home and Office Application 
// function type :0x01 : Key Card Activated Switch 
//{ 0xF6 , 0x04 , 0x01 , "Position Switch, Home and Office Application                                     ",  "Key Card Activated Switch                                                        " },

// TITLE:
T_DATAFIELD F60401_CMD1 [] = {
{  0 , 8 , "KC"       ,   0 ,   0 ,   0 ,   0 , "Key Card"},//Value: 112 = inserted (0x70) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60401_CMD1_KC         0
#define F60401_CMD1_NB_DATA    1
#define F60401_CMD1_DATA_SIZE  1

// TITLE:
T_DATAFIELD F60401_CMD2 [] = {
{  0 , 8 , "KC"       ,   0 ,   0 ,   0 ,   0 , "Key Card"},//Value: 0 = taken out 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60401_CMD2_KC         0
#define F60401_CMD2_NB_DATA    1
#define F60401_CMD2_DATA_SIZE  1
// function type :0x02 : Key Card Activated Switch ERP2 
//{ 0xF6 , 0x04 , 0x02 , "Position Switch, Home and Office Application                                     ",  "Key Card Activated Switch ERP2                                                   " },

// TITLE:
T_DATAFIELD F60402_CMD1 [] = {
{  0 , 1 , "EBO"      ,   0 ,   0 ,   0 ,   0 , "Energy Bow"},//Value: 0 = taken out 
                                                              //Value: 1 = card inserted 
{  1 , 1 , "BC"       ,   0 ,   0 ,   0 ,   0 , "Button coding"},//Value: 0 = button 
{  5 , 1 , "SOC"      ,   0 ,   0 ,   0 ,   0 , "State of card"},//Value: 0 = taken out 
                                                                 //Value: 1 = card inserted 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60402_CMD1_EBO        0
#define F60402_CMD1_BC         1
#define F60402_CMD1_SOC        2
#define F60402_CMD1_NB_DATA    3
#define F60402_CMD1_DATA_SIZE  1
// function number :0x05 : Detectors 
// function type :0x01 : Liquid Leakage Sensor (mechanic harvester) 
//{ 0xF6 , 0x05 , 0x01 , "Detectors                                                                        ",  "Liquid Leakage Sensor (mechanic harvester)                                       " },

// TITLE:
T_DATAFIELD F60501_CMD1 [] = {
{  0 , 8 , "WAS"      ,   0 ,   0 ,   0 ,   0 , "Water sensor"},//Value: 0x11 = Water detected 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define F60501_CMD1_WAS        0
#define F60501_CMD1_NB_DATA    1
#define F60501_CMD1_DATA_SIZE  1
// function number :0x10 : Mechanical Handle 
// function type :0x00 : Window Handle 
//{ 0xF6 , 0x10 , 0x00 , "Mechanical Handle                                                                ",  "Window Handle                                                                    " },

// TITLE:
T_DATAFIELD F61000_CMD1 [] = {
{  0 , 8 , "WIN"      ,   0 ,   0 ,   0 ,   0 , "Window handle"},//Value: 0b11X0XXXX = Moved from up to left. 
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
// function type :0x01 : Window Handle ERP2 
//{ 0xF6 , 0x10 , 0x01 , "Mechanical Handle                                                                ",  "Window Handle ERP2                                                               " },

// TITLE:
T_DATAFIELD F61001_CMD1 [] = {
{  1 , 1 , "HC"       ,   0 ,   0 ,   0 ,   0 , "Handle coding"},//Value: 1 = handle 
{  4 , 4 , "HVL"      ,   0 ,   0 ,   0 ,   0 , "Handle value"},//Value: 0b11X0 = Moved from up to left. 
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
