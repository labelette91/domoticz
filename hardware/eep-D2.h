// function number :0x00 : Room Control Panel (RCP) 
// function type :0x01 : RCP with Temperature Measurement and Display (BI-DIR) 
//{ 0xD2 , 0x00 , 0x01 , "Room Control Panel (RCP)                                                         ",  "RCP with Temperature Measurement and Display (BI-DIR)                            " },

// TITLE:Message type A / ID 01 (First User Action on RCP)
T_DATAFIELD D20001_CMD1 [] = {
{  5 , 3 , "MI"       ,   0 ,   0 ,   0 ,   0 , "MsgId"},//Value: 1 = Message Id 
{ 11 , 5 , "KP"       ,   0 ,   0 ,   0 ,   0 , "User Action"},//Value: 0x00 = not used 
                                                               //Value: 0x01 = Presence 
                                                               //Value: 0x02 = Temperature Set Point "down" or "-" 
                                                               //Value: 0x03 = not used 
                                                               //Value: 0x04 = not used 
                                                               //Value: 0x05 = Temperature Set Point "up" or "+" 
                                                               //Value: 0x06 = Fan 

{  8 , 1 , "CV"       ,   0 ,   0 ,   0 ,   0 , "ConfigValid"},//Value: 0x00 = Configuration data not valid (e.g. never received message of type E) 
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
T_DATAFIELD D20001_CMD2 [] = {
{  5 , 3 , "MI"       ,   0 ,   0 ,   0 ,   0 , "MsgId"},//Value: 2 = Message Id 
{  4 , 1 , "MD"       ,   0 ,   0 ,   0 ,   0 , "MoreData"},//Value: 0x00 = no more data 
                                                            //Value: 0x01 = more data will follow after T2+ 
{  1 , 3 , "F"        ,   0 ,   0 ,   0 ,   0 , "Fan"},//Value: 0x00 = Do not display 
                                                       //Value: 0x01 = Speed Level 0 
                                                       //Value: 0x02 = Speed Level 1 
                                                       //Value: 0x03 = Speed Level 2 
                                                       //Value: 0x04 = Speed Level 3 

{  0 , 1 , "M"        ,   0 ,   0 ,   0 ,   0 , "Fan manual"},//Value: 0 = Auto 
                                                              //Value: 1 = Fan manual 
{ 11 , 5 , "TA"       ,   0 ,   0 ,   0 ,   0 , "Figure A Type"},//Value: 0x00 = Do not display 
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

{  8 , 3 , "PR"       ,   0 ,   0 ,   0 ,   0 , "Presence"},//Value: 0x00 = Do not display 
                                                            //Value: 0x01 = Present 
                                                            //Value: 0x02 = Not present 
                                                            //Value: 0x03 = Night time reduction 

{ 16 ,16 , "ZA"       ,   0 ,   0 ,   0 ,   0 , "Figure A Value"},
{ 39 , 1 , "Sa"       ,   0 ,   0 ,   0 ,   0 , "Heating"},//Value: 0x0 = Off 
                                                           //Value: 0x1 = On 
{ 38 , 1 , "Sb"       ,   0 ,   0 ,   0 ,   0 , "Cooling"},//Value: 0x0 = Off 
                                                           //Value: 0x1 = On 
{ 37 , 1 , "Sc"       ,   0 ,   0 ,   0 ,   0 , "Dew-Point"},//Value: 0x0 = Warning 
                                                             //Value: 0x1 = No warning 
{ 36 , 1 , "Sd"       ,   0 ,   0 ,   0 ,   0 , "Window"},//Value: 0x0 = Closed 
                                                          //Value: 0x1 = Opened 
{ 35 , 1 , "Se"       ,   0 ,   0 ,   0 ,   0 , "User Notification"},//Value: 0x0 = Off 
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
T_DATAFIELD D20001_CMD3 [] = {
{  5 , 3 , "MI"       ,   0 ,   0 ,   0 ,   0 , "MsgId"},//Value: 3 = Message Id 
{  1 , 3 , "F"        ,   0 ,   0 ,   0 ,   0 , "Fan"},//Value: 0x00 = no change 
                                                       //Value: 0x01 = Speed Level 0 
                                                       //Value: 0x02 = Speed Level 1 
                                                       //Value: 0x03 = Speed Level 2 
                                                       //Value: 0x04 = Speed Level 3 
                                                       //Value: 0x05 = Speed Level Auto 

{ 11 , 5 , "TA"       ,   0 ,   0 ,   0 ,   0 , "Set Point A Type"},//Value: 0x00 = no change 

{  8 , 3 , "PR"       ,   0 ,   0 ,   0 ,   0 , "Presence"},//Value: 0x00 = no change 
                                                            //Value: 0x01 = Present 
                                                            //Value: 0x02 = Not present 
                                                            //Value: 0x03 = Night time reduction 

{ 16 ,16 , "ZA"       , -1270 , +1270 , -12.70 , +12.70 , "Set Point A Value"},
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
T_DATAFIELD D20001_CMD4 [] = {
{  5 , 3 , "MI"       ,   0 ,   0 ,   0 ,   0 , "MsgId"},//Value: 4 = Message Id 
{  8 , 8 , "VA__LSB_" ,   0 , 4000 ,   0 , 40.00 , "Channel A Value"},
{ 20 , 4 , "VA__MSB_" ,   0 ,   0 ,   0 ,   0 , "Channel A Value"},
{ 16 , 4 , "TA"       ,   0 ,   0 ,   0 ,   0 , "Channel A Type"},//Value: 0x00 = Temperature [øC] 

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
T_DATAFIELD D20001_CMD5 [] = {
{  5 , 3 , "MI"       ,   0 ,   0 ,   0 ,   0 , "MsgId"},//Value: 5 = Message Id 
{  4 , 1 , "MD"       ,   0 ,   0 ,   0 ,   0 , "MoreData"},//Value: 0x0 = no more data 
                                                            //Value: 0x1 = more data will follow after T2+ 
{  9 , 7 , "SPR"      ,   0 ,   0 ,   0 ,   0 , "Set Point Range Limit"},//Value: 0x00 = Set Point disabled 

{ 17 , 7 , "SPS"      ,   0 ,   0 ,   0 ,   0 , "Set PointSteps"},//Value: 0x00 = Set Point disabled 

{ 24 , 4 , "TT__LSB_" ,   0 ,   0 ,   0 ,   0 , "Temperature Measurement Timing"},//Value: 0x00 = Temperature measurement disabled 

{ 38 , 2 , "TT__MSB_" ,   0 ,   0 ,   0 ,   0 , "Temperature Measurement Timing"},
{ 35 , 3 , "F"        ,   0 ,   0 ,   0 ,   0 , "Fan"},//Value: 0x0 = Fan Speed disabled 

{ 32 , 3 , "PR"       ,   0 ,   0 ,   0 ,   0 , "Presence"},//Value: 0x0 = Presence disabled 

{ 45 , 3 , "KA"       ,   0 ,   0 ,   0 ,   0 , "Keep Alive Timing"},//Value: 0x0 = Transmission of measurement result with each Temperature measurement 

{ 40 , 4 , "ST"       , 0x0 , 0xF , 0.0 , 3.0 , "Significant Temperature Difference"},
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
// function number :0x01 : Electronic switches and dimmers with Energy Measurement and Local Control 
// function type :0x00 : Type 0x00 
//{ 0xD2 , 0x01 , 0x00 , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x00                                                                        " },

// TITLE:CMD 0x1 - Actuator Set Output
T_DATAFIELD D20100_CMD1 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x01 = ID 01 
{  8 , 3 , "DV"       ,   0 ,   0 ,   0 ,   0 , "Dim value"},//Value: 0x00 = Switch to new output value 
                                                             //Value: 0x01 = Dim to new output value - dim timer 1 
                                                             //Value: 0x02 = Dim to new output value - dim timer 2 
                                                             //Value: 0x03 = Dim to new output value - dim timer 3 
                                                             //Value: 0x04 = Stop dimming 

{ 11 , 5 , "I_O"      ,   0 ,   0 ,   0 ,   0 , "I/O channel"},
{ 17 , 7 , "OV"       ,   0 ,   0 ,   0 ,   0 , "Output value"},//Value: 0x00 = Output value 0% or OFF 

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
T_DATAFIELD D20100_CMD2 [] = {
{  0 , 1 , "d_e"      ,   0 ,   0 ,   0 ,   0 , "Taught-in devices"},//Value: 0b0 = Disable taught-in devices (with different EEP) 
                                                                     //Value: 0b1 = Enable taught-in devices (with different EEP) 
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x02 = ID 02 
{  8 , 1 , "OC"       ,   0 ,   0 ,   0 ,   0 , "Over current shut down"},//Value: 0b0 = Over current shut down: static off 
                                                                          //Value: 0b1 = Over current shut down: automatic restart 
{  9 , 1 , "RO"       ,   0 ,   0 ,   0 ,   0 , "reset over current shut down"},//Value: 0b0 = Reset over current shut down: not active 
                                                                                //Value: 0b1 = Reset over current shut down: trigger signal 
{ 10 , 1 , "LC"       ,   0 ,   0 ,   0 ,   0 , "Local control"},//Value: 0b0 = Disable local control 
                                                                 //Value: 0b1 = Enable local control 
{ 11 , 5 , "I_O"      ,   0 ,   0 ,   0 ,   0 , "I/O channel"},
{ 20 , 4 , "DT3"      ,   0 ,   0 ,   0 ,   0 , "Dim timer 3"},//Value: 0x00 = Not used 

{ 28 , 4 , "DT1"      ,   0 ,   0 ,   0 ,   0 , "Dim timer 1"},//Value: 0x00 = Not used 

{ 16 , 4 , "DT2"      ,   0 ,   0 ,   0 ,   0 , "Dim timer 2"},//Value: 0x00 = Not used 

{ 24 , 1 , "d_n"      ,   0 ,   0 ,   0 ,   0 , "User interface indication"},//Value: 0b0 = User interface indication: day operation 
                                                                             //Value: 0b1 = User interface indication: night operation 
{ 25 , 1 , "PF"       ,   0 ,   0 ,   0 ,   0 , "Power Failure"},//Value: 0b0 = Disable Power Failure Detection 
                                                                 //Value: 0b1 = Enable Power Failure Detection 
{ 26 , 2 , "DS"       ,   0 ,   0 ,   0 ,   0 , "Default state"},//Value: 0b00 = Default state: 0% or OFF 
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
T_DATAFIELD D20100_CMD3 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x03 = ID 03 
{ 11 , 5 , "I_O"      ,   0 ,   0 ,   0 ,   0 , "I/O channel"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD3_CMD        0
#define D20100_CMD3_I_O        1
#define D20100_CMD3_NB_DATA    2
#define D20100_CMD3_DATA_SIZE  2

// TITLE:CMD 0x4 - Actuator Status Response
T_DATAFIELD D20100_CMD4 [] = {
{  0 , 1 , "PF"       ,   0 ,   0 ,   0 ,   0 , "Power Failure"},//Value: 0b0 = Power Failure Detection disabled/not supported 
                                                                 //Value: 0b1 = Power Failure Detection enabled 
{  1 , 1 , "PFD"      ,   0 ,   0 ,   0 ,   0 , "Power Failure Detection"},//Value: 0b0 = Power Failure not detected/not supported/disabled 
                                                                           //Value: 0b1 = Power Failure Detected 
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x04 = ID 04 
{  8 , 1 , "OC"       ,   0 ,   0 ,   0 ,   0 , "Over current switch off"},//Value: 0b0 = Over current switch off: ready / not supported 
                                                                           //Value: 0b1 = Over current switch off: executed 
{  9 , 2 , "EL"       ,   0 ,   0 ,   0 ,   0 , "Error level"},//Value: 0b00 = Error level 0: hardware OK 
                                                               //Value: 0b01 = Error level 1: hardware warning 
                                                               //Value: 0b10 = Error level 2: hardware failure 
                                                               //Value: 0b11 = Error level not supported 
{ 11 , 5 , "I_O"      ,   0 ,   0 ,   0 ,   0 , "I/O channel"},
{ 16 , 1 , "LC"       ,   0 ,   0 ,   0 ,   0 , "Local control"},//Value: 0b0 = Local control disabled / not supported 
                                                                 //Value: 0b1 = Local control enabled 
{ 17 , 7 , "OV"       ,   0 ,   0 ,   0 ,   0 , "Output value"},//Value: 0x00 = Output value 0% or OFF 

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
T_DATAFIELD D20100_CMD5 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x05 = ID 05 
{  8 , 1 , "RM"       ,   0 ,   0 ,   0 ,   0 , "Report measurement"},//Value: 0b0 = Report measurement: query only 
                                                                      //Value: 0b1 = Report measurement: query / auto reporting 
{  9 , 1 , "RE"       ,   0 ,   0 ,   0 ,   0 , "Reset measurement"},//Value: 0b0 = Reset measurement: not active 
                                                                     //Value: 0b1 = Reset measurement: trigger signal 
{ 10 , 1 , "e_p"      ,   0 ,   0 ,   0 ,   0 , "Measurement mode"},//Value: 0b0 = Energy measurement 
                                                                    //Value: 0b1 = Power measurement 
{ 11 , 5 , "I_O"      ,   0 ,   0 ,   0 ,   0 , "I/O channel"},
{ 16 , 4 , "MD_LSB"   ,   0 , 4095 ,   0 , 4095 , "Measurement delta to be reported (LSB)"},
{ 24 , 8 , "MD_MSB"   ,   0 , 4095 ,   0 , 4095 , "Measurement delta to be reported (MSB)"},
{ 21 , 3 , "UN"       ,   0 ,   0 ,   0 ,   0 , "Unit"},//Value: 0x00 = Energy [Ws] 
                                                        //Value: 0x01 = Energy [Wh] 
                                                        //Value: 0x02 = Energy [KWh] 
                                                        //Value: 0x03 = Power [W] 
                                                        //Value: 0x04 = Power [KW] 

{ 32 , 8 , "MAT"      ,   0 ,   0 ,   0 ,   0 , "Maximum time between two subsequent actuator messages"},
{ 40 , 8 , "MIT"      ,   0 ,   0 ,   0 ,   0 , "Minimum time between two subsequent actuator messages"},
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
T_DATAFIELD D20100_CMD6 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x06 = ID 06 
{ 10 , 1 , "qu"       ,   0 ,   0 ,   0 ,   0 , "Query"},//Value: 0b0 = Query energy 
                                                         //Value: 0b1 = Query power 
{ 11 , 5 , "I_O"      ,   0 ,   0 ,   0 ,   0 , "I/O channel"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD6_CMD        0
#define D20100_CMD6_qu         1
#define D20100_CMD6_I_O        2
#define D20100_CMD6_NB_DATA    3
#define D20100_CMD6_DATA_SIZE  2

// TITLE:CMD 0x7 - Actuator Measurement Response
T_DATAFIELD D20100_CMD7 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x07 = ID 07 
{  8 , 3 , "UN"       ,   0 ,   0 ,   0 ,   0 , "Unit"},//Value: 0x00 = Energy [Ws] 
                                                        //Value: 0x01 = Energy [Wh] 
                                                        //Value: 0x02 = Energy [KWh] 
                                                        //Value: 0x03 = Power [W] 
                                                        //Value: 0x04 = Power [KW] 

{ 11 , 5 , "I_O"      ,   0 ,   0 ,   0 ,   0 , "I/O channel"},
{ 16 ,32 , "MV"       ,   0 , 4294967295 ,   0 ,   0 , "Measurement value (4 bytes)"},
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
T_DATAFIELD D20100_CMD8 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x08 = ID 08 
{ 13 , 3 , "PM"       ,   0 ,   0 ,   0 ,   0 , "Pilotwire mode"},//Value: 0x00 = Off 
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
T_DATAFIELD D20100_CMD9 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x09 = ID 09 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD9_CMD        0
#define D20100_CMD9_NB_DATA    1
#define D20100_CMD9_DATA_SIZE  1

// TITLE:CMD 0xA - Actuator Pilot Wire Mode Response
T_DATAFIELD D20100_CMD10 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x0A = ID 0A 
{ 13 , 3 , "PM"       ,   0 ,   0 ,   0 ,   0 , "Pilotwire mode"},//Value: 0x00 = Off 
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
T_DATAFIELD D20100_CMD11 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x0B = ID 0B 
{ 11 , 5 , "I_O"      ,   0 ,   0 ,   0 ,   0 , "I/O channel"},
{ 16 ,16 , "AOT"      ,   0 ,   0 ,   0 ,   0 , "Auto OFF Timer"},//Value: 0x0000 = Timer deactivated 

{ 32 ,16 , "DOT"      ,   0 ,   0 ,   0 ,   0 , "Delay OFF Timer"},//Value: 0x0000 = Timer deactivated 

{ 48 , 2 , "EBM"      ,   0 ,   0 ,   0 ,   0 , "External Switch/Push Button"},//Value: 0b00 = Not applicable 
                                                                               //Value: 0b01 = External Switch 
                                                                               //Value: 0b10 = External Push Button 
                                                                               //Value: 0b11 = Auto detect 
{ 50 , 1 , "SWT"      ,   0 ,   0 ,   0 ,   0 , "2-state switch"},//Value: 0b00 = Change of key state sets ON or OFF 
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
T_DATAFIELD D20100_CMD12 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x0C = ID 0C 
{ 11 , 5 , "I_O"      ,   0 ,   0 ,   0 ,   0 , "I/O channel"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20100_CMD12_CMD        0
#define D20100_CMD12_I_O        1
#define D20100_CMD12_NB_DATA    2
#define D20100_CMD12_DATA_SIZE  2

// TITLE:CMD 0xD - Actuator External Interface Settings Response
T_DATAFIELD D20100_CMD13 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x0D = ID 0D 
{ 11 , 5 , "I_O"      ,   0 ,   0 ,   0 ,   0 , "I/O channel"},
{ 16 ,16 , "AOT"      ,   0 ,   0 ,   0 ,   0 , "Auto OFF Timer"},//Value: 0x0000 = Timer deactivated 

{ 32 ,16 , "DOT"      ,   0 ,   0 ,   0 ,   0 , "Delay OFF Timer"},//Value: 0x0000 = Timer deactivated 

{ 48 , 2 , "EBM"      ,   0 ,   0 ,   0 ,   0 , "External Switch/Push Button"},//Value: 0b00 = Not applicable 
                                                                               //Value: 0b01 = External Switch 
                                                                               //Value: 0b10 = External Push Button 
                                                                               //Value: 0b11 = Auto detect 
{ 50 , 1 , "SWT"      ,   0 ,   0 ,   0 ,   0 , "2-state switch"},//Value: 0b00 = Change of key state sets ON or OFF 
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
// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2 , 0x01 , 0x01 , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x01 (description: see table)                                               " },
// function type :0x02 : Type 0x02 (description: see table) 
//{ 0xD2 , 0x01 , 0x02 , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x02 (description: see table)                                               " },
// function type :0x03 : Type 0x03 (description: see table) 
//{ 0xD2 , 0x01 , 0x03 , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x03 (description: see table)                                               " },
// function type :0x04 : Type 0x04 (description: see table) 
//{ 0xD2 , 0x01 , 0x04 , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x04 (description: see table)                                               " },
// function type :0x05 : Type 0x05 (description: see table) 
//{ 0xD2 , 0x01 , 0x05 , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x05 (description: see table)                                               " },
// function type :0x06 : Type 0x06 (description: see table) 
//{ 0xD2 , 0x01 , 0x06 , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x06 (description: see table)                                               " },
// function type :0x07 : Type 0x07 (description: see table) 
//{ 0xD2 , 0x01 , 0x07 , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x07 (description: see table)                                               " },
// function type :0x08 : Type 0x08 (description: see table) 
//{ 0xD2 , 0x01 , 0x08 , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x08 (description: see table)                                               " },
// function type :0x09 : Type 0x09 (description: see table) 
//{ 0xD2 , 0x01 , 0x09 , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x09 (description: see table)                                               " },
// function type :0x0A : Type 0x0A (description: see table) 
//{ 0xD2 , 0x01 , 0x0A , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x0A (description: see table)                                               " },
// function type :0x0B : Type 0x0B (description: see table) 
//{ 0xD2 , 0x01 , 0x0B , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x0B (description: see table)                                               " },
// function type :0x0C : Type 0x0C 
//{ 0xD2 , 0x01 , 0x0C , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x0C                                                                        " },
// function type :0x0D : Type 0x0D 
//{ 0xD2 , 0x01 , 0x0D , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x0D                                                                        " },
// function type :0x0E : Type 0x0E 
//{ 0xD2 , 0x01 , 0x0E , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x0E                                                                        " },
// function type :0x0F : Type 0x0F 
//{ 0xD2 , 0x01 , 0x0F , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x0F                                                                        " },
// function type :0x10 : Type 0x10 (description: see table) 
//{ 0xD2 , 0x01 , 0x10 , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x10 (description: see table)                                               " },
// function type :0x11 : Type 0x11 (description: see table) 
//{ 0xD2 , 0x01 , 0x11 , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x11 (description: see table)                                               " },
// function type :0x12 : Type 0x12 
//{ 0xD2 , 0x01 , 0x12 , "Electronic switches and dimmers with Energy Measurement and Local Control        ",  "Type 0x12                                                                        " },
// function number :0x02 : Sensors for Temperature, Illumination, Occupancy And Smoke 
// function type :0x00 : Type 0x00 
//{ 0xD2 , 0x02 , 0x00 , "Sensors for Temperature, Illumination, Occupancy And Smoke                       ",  "Type 0x00                                                                        " },

// TITLE:CMD 0x1 - Sensor Measurement
T_DATAFIELD D20200_CMD1 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x01 = ID 01 
{  8 , 3 , "type"     ,   0 ,   0 ,   0 ,   0 , "Measurement type"},//Value: 0x00 = Temperature (0.65535: -40 to +120øC) 
                                                                    //Value: 0x01 = Illumination (0.65535: 0 to 2047lx) 
                                                                    //Value: 0x02 = Occupancy (0: not detected; 1: detected) 
                                                                    //Value: 0x03 = Smoke 
{ 16 ,16 , "MV"       ,   0 , 65535 ,   0 ,   0 , "Measurement value (2 bytes)"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20200_CMD1_CMD        0
#define D20200_CMD1_type       1
#define D20200_CMD1_MV         2
#define D20200_CMD1_NB_DATA    3
#define D20200_CMD1_DATA_SIZE  4

// TITLE:CMD 0x2 - Sensor Test/Trigger
T_DATAFIELD D20200_CMD2 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x02 = ID 02 
{  8 , 1 , "ST"       ,   0 ,   0 ,   0 ,   0 , "Self-test"},//Value: 0b0 = Self-test mode 
                                                             //Value: 0b1 = Normal operation 
{  9 , 1 , "TA"       ,   0 ,   0 ,   0 ,   0 , "Trigger alarm"},//Value: 0b0 = Trigger alarm 
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
T_DATAFIELD D20200_CMD3 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x03 = ID 03 
{  8 , 1 , "RM"       ,   0 ,   0 ,   0 ,   0 , "Report measurement"},//Value: 0b0 = Report measurement: query only 
                                                                      //Value: 0b1 = Report measurement: query / auto reporting 
{ 16 , 4 , "MD_LSB"   ,   0 , 4095 ,   0 , 4095 , "Measurement delta to be reported (LSB)"},
{ 24 , 8 , "MD_MSB"   ,   0 , 4095 ,   0 , 4095 , "Measurement delta to be reported (MSB)"},
{ 21 , 3 , "UN"       ,   0 ,   0 ,   0 ,   0 , "Unit"},//Value: 0x00 = Temperature (øC) 
                                                        //Value: 0x01 = Illumination (lx) 

{ 32 , 8 , "MAT"      ,   0 , 255 ,  10 , 2550 , "Maximum time between two subsequent Actuator"},
{ 40 , 8 , "MIT"      ,   0 , 255 ,   0 , 255 , "Minimum time between two subsequent Actuator"},
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
T_DATAFIELD D20200_CMD4 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x04 = ID 04 
{  8 , 3 , "qu"       ,   0 ,   0 ,   0 ,   0 , "Query"},//Value: 0x0 = Query temperature 
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
// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2 , 0x02 , 0x01 , "Sensors for Temperature, Illumination, Occupancy And Smoke                       ",  "Type 0x01 (description: see table)                                               " },
// function type :0x02 : Type 0x02 (description: see table) 
//{ 0xD2 , 0x02 , 0x02 , "Sensors for Temperature, Illumination, Occupancy And Smoke                       ",  "Type 0x02 (description: see table)                                               " },
// function number :0x03 : Light, Switching + Blind Control 
// function type :0x00 : Type 0x00 
//{ 0xD2 , 0x03 , 0x00 , "Light, Switching + Blind Control                                                 ",  "Type 0x00                                                                        " },

// TITLE:The encrypted telegram has the R-ORG 0x30. The payload (4 bits) is encrypted. That telegram can be repeated. After decryption and the authentication of the CMAC, the telegram turns into a non-encrypted EnOcean telegram with the R-ORG 0x32. The payload will be expanded to 8 bits (4 MSB set to zero) and can then be interpreted as described in the telegram definition table.
T_DATAFIELD D20300_CMD1 [] = {
{  4 , 4 , "RI2"      ,   0 ,   0 ,   0 ,   0 , "Rocker Information"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20300_CMD1_RI2        0
#define D20300_CMD1_NB_DATA    1
#define D20300_CMD1_DATA_SIZE  1
// function type :0x10 : Mechanical Handle 
//{ 0xD2 , 0x03 , 0x10 , "Light, Switching + Blind Control                                                 ",  "Mechanical Handle                                                                " },

// TITLE:
T_DATAFIELD D20310_CMD1 [] = {
{  0 , 8 , "WIN"      ,   0 ,   0 ,   0 ,   0 , "Window handle, decrypted data"},//Value: 0b00000001 = (null) 
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
// function type :0x20 : Beacon with Vibration Detection 
//{ 0xD2 , 0x03 , 0x20 , "Light, Switching + Blind Control                                                 ",  "Beacon with Vibration Detection                                                  " },

// TITLE:
T_DATAFIELD D20320_CMD1 [] = {
{  0 , 1 , "ES"       ,   0 ,   0 ,   0 ,   0 , "Energy Supply"},//Value: 0 = Battery supply 
                                                                 //Value: 1 = Vibration generator supply 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20320_CMD1_ES         0
#define D20320_CMD1_NB_DATA    1
#define D20320_CMD1_DATA_SIZE  1
// function number :0x04 : CO2, Humidity, Temperature, Day/Night and Autonomy 
// function type :0x00 : Type 0x00 
//{ 0xD2 , 0x04 , 0x00 , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x00                                                                        " },

// TITLE:The manufacturer will indicate emission rates versus battery autonomy and day night status.
T_DATAFIELD D20400_CMD1 [] = {
{  0 , 8 , "CO2"      ,   0 , 255 ,   0 , 2000  , "CO2"},
{  8 , 8 , "HUM"      ,   0 , 200 ,   0 , 100 , "Humidity"},
{ 16 , 8 , "TMP"      ,   0 , 255 ,   0 , +51 , "Temperature"},
{ 24 , 1 , "DN"       ,   0 ,   0 ,   0 ,   0 , "Day/Night"},//Value: 0 = Day 
                                                             //Value: 1 = Night 
{ 25 , 3 , "BA"       ,   0 ,   0 ,   0 ,   0 , "Battery autonomy"},//Value: 0 = 100 - 87.5 % 
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
// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2 , 0x04 , 0x01 , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x01 (description: see table)                                               " },
// function type :0x02 : Type 0x02 (description: see table) 
//{ 0xD2 , 0x04 , 0x02 , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x02 (description: see table)                                               " },
// function type :0x03 : Type 0x03 (description: see table) 
//{ 0xD2 , 0x04 , 0x03 , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x03 (description: see table)                                               " },
// function type :0x04 : Type 0x04 (description: see table) 
//{ 0xD2 , 0x04 , 0x04 , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x04 (description: see table)                                               " },
// function type :0x05 : Type 0x05 (description: see table) 
//{ 0xD2 , 0x04 , 0x05 , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x05 (description: see table)                                               " },
// function type :0x06 : Type 0x06 (description: see table) 
//{ 0xD2 , 0x04 , 0x06 , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x06 (description: see table)                                               " },
// function type :0x07 : Type 0x07 (description: see table) 
//{ 0xD2 , 0x04 , 0x07 , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x07 (description: see table)                                               " },
// function type :0x08 : Type 0x08 (description: see table) 
//{ 0xD2 , 0x04 , 0x08 , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x08 (description: see table)                                               " },
// function type :0x09 : Type 0x09 (description: see table) 
//{ 0xD2 , 0x04 , 0x09 , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x09 (description: see table)                                               " },
// function type :0x10 : Type 0x10 (description: see table) 
//{ 0xD2 , 0x04 , 0x10 , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x10 (description: see table)                                               " },
// function type :0x1A : Type 0x1A (description: see table) 
//{ 0xD2 , 0x04 , 0x1A , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x1A (description: see table)                                               " },
// function type :0x1B : Type 0x1B (description: see table) 
//{ 0xD2 , 0x04 , 0x1B , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x1B (description: see table)                                               " },
// function type :0x1C : Type 0x1C (description: see table) 
//{ 0xD2 , 0x04 , 0x1C , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x1C (description: see table)                                               " },
// function type :0x1D : Type 0x1D (description: see table) 
//{ 0xD2 , 0x04 , 0x1D , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x1D (description: see table)                                               " },
// function type :0x1E : Type 0x1E (description: see table) 
//{ 0xD2 , 0x04 , 0x1E , "CO2, Humidity, Temperature, Day/Night and Autonomy                               ",  "Type 0x1E (description: see table)                                               " },
// function number :0x05 : Blinds Control for Position and Angle 
// function type :0x00 : Type 0x00 
//{ 0xD2 , 0x05 , 0x00 , "Blinds Control for Position and Angle                                            ",  "Type 0x00                                                                        " },

// TITLE:CMD 1 - Go to Position and Angle
T_DATAFIELD D20500_CMD1 [] = {
{  1 , 7 , "POS"      ,   0 ,   0 ,   0 ,   0 , "Position"},
{  9 , 7 , "ANG"      ,   0 ,   0 ,   0 ,   0 , "Angle"},
{ 17 , 3 , "REPO"     ,   0 ,   0 ,   0 ,   0 , "Repositioning"},//Value: 0 = Go directly to POS/ANG 
                                                                 //Value: 1 = Go up (0%), then to POS/ANG 
                                                                 //Value: 2 = Go down (100%), then to POS/ANG 
                                                                 //Value: 3 ... 7 = Reserved 
{ 21 , 3 , "LOCK"     ,   0 ,   0 ,   0 ,   0 , "Locking modes"},//Value: 0 = Do not change 
                                                                 //Value: 1 = Set blockage mode 
                                                                 //Value: 2 = Set alarm mode 
                                                                 //Value: 3 ... 6 = Reserved 
                                                                 //Value: 7 = Deblockage 
{ 24 , 4 , "CHN"      ,   0 ,   0 ,   0 ,   0 , "Channel"},//Value: 0 = Channel 1 
{ 28 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 1 = Goto command 
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
T_DATAFIELD D20500_CMD2 [] = {
{  0 , 4 , "CHN"      ,   0 ,   0 ,   0 ,   0 , "Channel"},//Value: 0 = Channel 1 
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 2 = Stop command 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20500_CMD2_CHN        0
#define D20500_CMD2_CMD        1
#define D20500_CMD2_NB_DATA    2
#define D20500_CMD2_DATA_SIZE  1

// TITLE:CMD 3 - Query Position and Angle
T_DATAFIELD D20500_CMD3 [] = {
{  0 , 4 , "CHN"      ,   0 ,   0 ,   0 ,   0 , "Channel"},//Value: 0 = Channel 1 
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 3 = Query command 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20500_CMD3_CHN        0
#define D20500_CMD3_CMD        1
#define D20500_CMD3_NB_DATA    2
#define D20500_CMD3_DATA_SIZE  1

// TITLE:CMD 4 - Reply Position and Angle
T_DATAFIELD D20500_CMD4 [] = {
{  1 , 7 , "POS"      ,   0 ,   0 ,   0 ,   0 , "Position"},
{  9 , 7 , "ANG"      ,   0 ,   0 ,   0 ,   0 , "Angle"},
{ 21 , 3 , "LOCK"     ,   0 ,   0 ,   0 ,   0 , "Locking modes"},//Value: 0 = Normal (no lock) 
                                                                 //Value: 1 = Blockage mode 
                                                                 //Value: 2 = Alarm mode 
                                                                 //Value: 3 ... 7 = Reserved 
{ 24 , 4 , "CHN"      ,   0 ,   0 ,   0 ,   0 , "Channel"},//Value: 0 = Channel 1 
{ 28 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 4 = Reply command 
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
T_DATAFIELD D20500_CMD5 [] = {
{  1 ,15 , "VERT"     ,   0 ,   0 ,   0 ,   0 , "Set vertical"},
{ 16 , 8 , "ROT"      ,   0 ,   0 ,   0 ,   0 , "Set rotation"},
{ 29 , 3 , "AA"       ,   0 ,   0 ,   0 ,   0 , "Set alarm action"},//Value: 0 = No action 
                                                                    //Value: 1 = Immediate stop 
                                                                    //Value: 2 = Go up (0%) 
                                                                    //Value: 3 = Go down (100%) 
                                                                    //Value: 4 ... 6 = Reserved 
                                                                    //Value: 7 = -> No change 
{ 32 , 4 , "CHN"      ,   0 ,   0 ,   0 ,   0 , "Channel"},//Value: 0 = Channel 1 
{ 36 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 5 = Set parameters command 
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
// function number :0x06 : Multisensor Window Handle 
// function type :0x01 : Alarm, Position Sensor, Vacation Mode, Optional Sensors 
//{ 0xD2 , 0x06 , 0x01 , "Multisensor Window Handle                                                        ",  "Alarm, Position Sensor, Vacation Mode, Optional Sensors                          " },

// TITLE:Message Type 0x00: Sensor Values
T_DATAFIELD D20601_CMD1 [] = {
{  0 , 8 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 0x00 = Message Type Sensor Values 
{  8 , 4 , "BAL"      ,   0 ,   0 ,   0 ,   0 , "Burglary Alarm"},//Value: 0x0 = Burglary Alarm Not Triggered 
                                                                  //Value: 0x1 = Burglary Alarm Triggered 

{ 12 , 4 , "PPAL"     ,   0 ,   0 ,   0 ,   0 , "Protection Plus Alarm"},//Value: 0x0 = Protection Plus Alarm Not Triggered 
                                                                         //Value: 0x1 = Protection Plus Alarm Triggered 

{ 16 , 4 , "HP"       ,   0 ,   0 ,   0 ,   0 , "Handle Position"},//Value: 0x0 = Handle Position Undefined 
                                                                   //Value: 0x1 = Handle Up 
                                                                   //Value: 0x2 = Handle Down 
                                                                   //Value: 0x3 = Handle Left 
                                                                   //Value: 0x4 = Handle Right 

{ 20 , 4 , "WS"       ,   0 ,   0 ,   0 ,   0 , "Window State"},//Value: 0x0 = Window State Undefined 
                                                                //Value: 0x1 = Window Not Tilted 
                                                                //Value: 0x2 = Window Tilted 

{ 24 , 4 , "BR"       ,   0 ,   0 ,   0 ,   0 , "Button Right"},//Value: 0x0 = No Change 
                                                                //Value: 0x1 = Button Pressed 
                                                                //Value: 0x2 = Button Released 

{ 28 , 4 , "BL"       ,   0 ,   0 ,   0 ,   0 , "Button Left"},//Value: 0x0 = No Change 
                                                               //Value: 0x1 = Button Pressed 
                                                               //Value: 0x2 = Button Released 

{ 32 , 4 , "M"        ,   0 ,   0 ,   0 ,   0 , "Motion"},//Value: 0x0 = Motion Not Triggered 
                                                          //Value: 0x1 = Motion Triggered 

{ 36 , 4 , "V"        ,   0 ,   0 ,   0 ,   0 , "Vacation Mode"},//Value: 0x0 = No Change 
                                                                 //Value: 0x1 = Vacation Mode Locally Switched On 
                                                                 //Value: 0x2 = Vacation Mode Locally Switched Off 

{ 40 , 8 , "T"        ,   0 ,   0 ,   0 ,   0 , "Temperature"},
{ 48 , 8 , "H"        ,   0 ,   0 ,   0 ,   0 , "Humidity"},
{ 56 ,16 , "I"        ,   0 ,   0 ,   0 ,   0 , "Illumination"},
{ 72 , 5 , "BS"       ,   0 ,   0 ,   0 ,   0 , "Battery State"},
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
T_DATAFIELD D20601_CMD2 [] = {
{  0 , 8 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 0x10 = Message Type Configuration Report 
{  8 , 1 , "VMR"      ,   0 ,   0 ,   0 ,   0 , "Vacation Mode"},//Value: 0x0 = Vacation Mode is Off 
                                                                 //Value: 0x1 = Vacation Mode is On 
{  9 , 1 , "HCCR"     ,   0 ,   0 ,   0 ,   0 , "Handle Closed Click"},//Value: 0x0 = Handle Closed Click Feature is Disabled 
                                                                       //Value: 0x1 = Handle Closed Click Feature is Enabled 
{ 10 , 1 , "BLCR"     ,   0 ,   0 ,   0 ,   0 , "Battery Low Click"},//Value: 0x0 = Battery Low Click Feature is Disabled 
                                                                     //Value: 0x1 = Battery Low Click Feature is Enabled 
{ 16 ,16 , "SUIR"     ,   0 ,   0 ,   0 ,   0 , "Sensor Update Interval"},
{ 32 , 8 , "VBIR"     ,   0 ,   0 ,   0 ,   0 , "Vacation Blink Interval"},
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
T_DATAFIELD D20601_CMD3 [] = {
{  0 , 8 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 0x20 = Message Type Log Data 01 
{  8 ,32 , "PON"      ,   0 ,   0 ,   0 ,   0 , "Power Ons"},
{ 40 ,32 , "ALL"      ,   0 ,   0 ,   0 ,   0 , "Alarms"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20601_CMD3_MT         0
#define D20601_CMD3_PON        1
#define D20601_CMD3_ALL        2
#define D20601_CMD3_NB_DATA    3
#define D20601_CMD3_DATA_SIZE  9

// TITLE:Message Type 0x21: Log Data 02
T_DATAFIELD D20601_CMD4 [] = {
{  0 , 8 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 0x21 = Message Type Log Data 02 
{  8 ,32 , "HMC"      ,   0 ,   0 ,   0 ,   0 , "Handle Movements Closed"},
{ 40 ,32 , "HMO"      ,   0 ,   0 ,   0 ,   0 , "Handle Movements Opened"},
{ 72 ,32 , "HMT"      ,   0 ,   0 ,   0 ,   0 , "Handle Movements Tilted"},
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
T_DATAFIELD D20601_CMD5 [] = {
{  0 , 8 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 0x22 = Message Type Log Data 03 
{  8 ,32 , "WT"       ,   0 ,   0 ,   0 ,   0 , "Window Tilts"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20601_CMD5_MT         0
#define D20601_CMD5_WT         1
#define D20601_CMD5_NB_DATA    2
#define D20601_CMD5_DATA_SIZE  5

// TITLE:Message Type 0x23: Log Data 04
T_DATAFIELD D20601_CMD6 [] = {
{  0 , 8 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 0x23 = Message Type Log Data 04 
{  8 ,32 , "BRP"      ,   0 ,   0 ,   0 ,   0 , "Button Right Presses"},
{ 40 ,32 , "BLP"      ,   0 ,   0 ,   0 ,   0 , "Button Left Presses"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D20601_CMD6_MT         0
#define D20601_CMD6_BRP        1
#define D20601_CMD6_BLP        2
#define D20601_CMD6_NB_DATA    3
#define D20601_CMD6_DATA_SIZE  9

// TITLE:Message Type 0x80: Control and Settings
T_DATAFIELD D20601_CMD7 [] = {
{  0 , 8 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 0x80 = Message Type Control and Settings 
{  8 , 1 , "GCS"      ,   0 ,   0 ,   0 ,   0 , "Get Configuration Settings"},//Value: 0x0 = No Change 
                                                                              //Value: 0x1 = Start Transmission 
{  9 , 1 , "GLD"      ,   0 ,   0 ,   0 ,   0 , "Get Log Data"},//Value: 0x0 = No Change 
                                                                //Value: 0x1 = Start Transmission 
{ 10 , 1 , "VMS"      ,   0 ,   0 ,   0 ,   0 , "Vacation Mode"},//Value: 0x0 = Switch Vacation Mode Off 
                                                                 //Value: 0x1 = Switch Vacation Mode On 
{ 11 , 2 , "HCCS"     ,   0 ,   0 ,   0 ,   0 , "Handle Closed Click"},//Value: 0x0 = No Change 
                                                                       //Value: 0x1 = Disable Handle Closed Click Feature 
                                                                       //Value: 0x2 = Enable Handle Closed Click Feature 
                                                                       //Value: 0x3 = Reserved 
{ 13 , 2 , "BLCS"     ,   0 ,   0 ,   0 ,   0 , "Battery Low Click"},//Value: 0x0 = No Change 
                                                                     //Value: 0x1 = Disable Battery Low Click Feature 
                                                                     //Value: 0x2 = Enable Battery Low Click Feature 
                                                                     //Value: 0x3 = Reserved 
{ 16 ,16 , "SUIS"     ,   0 ,   0 ,   0 ,   0 , "Sensor Update Interval"},//Value: 0x0000 = No Change 

{ 32 , 8 , "VBIS"     ,   0 ,   0 ,   0 ,   0 , "Vacation Blink Interval"},//Value: 0x00 = No Change 

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
// function number :0x10 : Room Control Panels with Temperature & Fan Speed Control, Room Status Information and Time Program 
// function type :0x00 : Type 0x00 
//{ 0xD2 , 0x10 , 0x00 , "Room Control Panels with Temperature & Fan Speed Control, Room Status Information and Time Program ",  "Type 0x00                                                                        " },

// TITLE:General Message
T_DATAFIELD D21000_CMD1 [] = {
{  0 , 3 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message identifier"},//Value: 0 = General Message 
{  6 , 2 , "MCF"      ,   0 ,   0 ,   0 ,   0 , "Message continuation flag"},//Value: 3 = Reserved 
{ 10 , 3 , "IRC"      ,   0 ,   0 ,   0 ,   0 , "Information request classifier"},//Value: 7 = Reserved 
{ 13 , 2 , "FBC"      ,   0 ,   0 ,   0 ,   0 , "Feedback classifier"},//Value: 3 = Reserved 
{ 15 , 1 , "GMT"      ,   0 ,   0 ,   0 ,   0 , "General message type"},//Value: 1 = Information request 
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
T_DATAFIELD D21000_CMD2 [] = {
{  0 , 3 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message identifier"},//Value: 1 = Data Message 
{  6 , 2 , "MCF"      ,   0 ,   0 ,   0 ,   0 , "Message continuation flag"},//Value: 3 = Reserved 
{  8 , 8 , "HUM"      ,   0 , 255 ,   0 , 100 , "Humidity"},
{ 16 , 1 , "HVF"      ,   0 ,   0 ,   0 ,   0 , "Humidity validity flag"},//Value: 1 = Valid value 
{ 17 , 7 , "FS"       ,   0 , 100 ,   0 , 100 , "Fan speed control"},
{ 24 , 1 , "FSV"      ,   0 ,   0 ,   0 ,   0 , "Fan speed validity flag"},//Value: 1 = Valid value 
{ 25 , 1 , "FSM"      ,   0 ,   0 ,   0 ,   0 , "Fan speed mode"},//Value: 1 = Individual fan speed control 
{ 27 , 1 , "CW2"      ,   0 ,   0 ,   0 ,   0 , "Custom warning 2"},//Value: 1 = True 
{ 28 , 1 , "CW1"      ,   0 ,   0 ,   0 ,   0 , "Custom warning 1"},//Value: 1 = True 
{ 29 , 1 , "MW"       ,   0 ,   0 ,   0 ,   0 , "Mold warning"},//Value: 1 = True 
{ 30 , 2 , "WOD"      ,   0 ,   0 ,   0 ,   0 , "Window open detection"},//Value: 3 = Reserved 
{ 33 , 2 , "BS"       ,   0 ,   0 ,   0 ,   0 , "Battery status"},//Value: 3 = Critical 
{ 35 , 1 , "SPS"      ,   0 ,   0 ,   0 ,   0 , "Solar-powered status"},//Value: 1 = Not solar-powered 
{ 36 , 2 , "PIR"      ,   0 ,   0 ,   0 ,   0 , "PIR status"},//Value: 3 = Locked 
{ 38 , 2 , "OBS"      ,   0 ,   0 ,   0 ,   0 , "Occupancy button status"},//Value: 3 = Reserved 
{ 40 , 2 , "COO"      ,   0 ,   0 ,   0 ,   0 , "Cooling"},//Value: 3 = Automatic 
{ 42 , 2 , "HEA"      ,   0 ,   0 ,   0 ,   0 , "Heating"},//Value: 3 = Automatic 
{ 44 , 2 , "RCM"      ,   0 ,   0 ,   0 ,   0 , "Room control mode"},//Value: 3 = Building protection 
{ 46 , 1 , "SPV"      ,   0 ,   0 ,   0 ,   0 , "Temperature set point validity"},//Value: 1 = Valid value 
{ 47 , 1 , "TPV"      ,   0 ,   0 ,   0 ,   0 , "Temperature validity"},//Value: 1 = Valid value 
{ 48 , 8 , "TSP"      ,   0 , 255 ,   0 , +40 , "Temperature set point"},
{ 56 , 8 , "TMP"      ,   0 , 255 ,   0 , +40 , "Temperature"},
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
T_DATAFIELD D21000_CMD3 [] = {
{  0 , 3 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message identifier"},//Value: 2 = Configuration Message 
{  6 , 2 , "MCF"      ,   0 ,   0 ,   0 ,   0 , "Message continuation flag"},//Value: 3 = Reserved 
{  8 , 1 , "PSL"      ,   0 ,   0 ,   0 ,   0 , "PIR status lock"},//Value: 1 = Unlocked 
{  9 , 1 , "TSL"      ,   0 ,   0 ,   0 ,   0 , "Temperature scale lock"},//Value: 1 = Unlocked 
{ 10 , 1 , "DCL"      ,   0 ,   0 ,   0 ,   0 , "Display content lock"},//Value: 1 = Unlocked 
{ 11 , 1 , "DTL"      ,   0 ,   0 ,   0 ,   0 , "Date / time lock"},//Value: 1 = Unlocked 
{ 12 , 1 , "TPL"      ,   0 ,   0 ,   0 ,   0 , "Time program lock"},//Value: 1 = Unlocked 
{ 13 , 1 , "OBL"      ,   0 ,   0 ,   0 ,   0 , "Occupancy button lock"},//Value: 1 = Unlocked 
{ 14 , 1 , "SPL"      ,   0 ,   0 ,   0 ,   0 , "Temperature set point lock"},//Value: 1 = Unlocked 
{ 15 , 1 , "FSL"      ,   0 ,   0 ,   0 ,   0 , "Fan speed lock"},//Value: 1 = Unlocked 
{ 16 , 6 , "RCI"      ,   0 ,   0 ,   0 ,   0 , "Radio communication interval"},//Value: 63 = 24 hours 
{ 22 , 1 , "KL"       ,   0 ,   0 ,   0 ,   0 , "Key lock"},//Value: 1 = Unlocked 
{ 24 , 3 , "DC"       ,   0 ,   0 ,   0 ,   0 , "Display content"},//Value: 7 = Humidity 
{ 27 , 2 , "TS"       ,   0 ,   0 ,   0 ,   0 , "Temperature scale"},//Value: 3 = ø Fahrenheit 
{ 29 , 1 , "DST"      ,   0 ,   0 ,   0 ,   0 , "Daylight saving time flag"},//Value: 1 = Not supported 
{ 30 , 2 , "TN"       ,   0 ,   0 ,   0 ,   0 , "Time notation"},//Value: 3 = 12 h 
{ 32 , 5 , "DAY"      ,   1 ,  31 ,   1 ,  31 , "Day"},
{ 37 , 4 , "MON"      ,   1 ,  12 ,   1 ,  12 , "Month"},
{ 41 , 7 , "YR"       ,   0 , 127 , 2000 , 2127 , "Year"},
{ 48 , 6 , "MIN"      ,   0 ,  59 ,   0 ,  59 , "Minute"},
{ 56 , 5 , "HR"       ,   0 ,  23 ,   0 ,  23 , "Hour"},
{ 63 , 1 , "DTU"      ,   0 ,   0 ,   0 ,   0 , "Date / time update flag"},//Value: 1 = Update 
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
T_DATAFIELD D21000_CMD4 [] = {
{  0 , 3 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message identifier"},//Value: 3 = Room Control Setup 
{  6 , 2 , "MCF"      ,   0 ,   0 ,   0 ,   0 , "Message continuation flag"},//Value: 3 = Reserved 
{  8 , 8 , "SPB"      ,   0 , 255 ,   0 , +40 , "Temperature set point building protection mode"},
{ 16 , 8 , "SPP"      ,   0 , 255 ,   0 , +40 , "Temperature set point pre-comfort mode"},
{ 24 , 8 , "SPE"      ,   0 , 255 ,   0 , +40 , "Temperature set point economy mode"},
{ 32 , 8 , "SPC"      ,   0 , 255 ,   0 , +40 , "Temperature set point comfort mode"},
{ 44 , 1 , "SFB"      ,   0 ,   0 ,   0 ,   0 , "Temperature set point flag building protection mode"},//Value: 1 = Valid value 
{ 45 , 1 , "SFP"      ,   0 ,   0 ,   0 ,   0 , "Temperature set point flag pre-comfort mode"},//Value: 1 = Valid value 
{ 46 , 1 , "SFE"      ,   0 ,   0 ,   0 ,   0 , "Temperature set point flag economy mode"},//Value: 1 = Valid value 
{ 47 , 1 , "SFC"      ,   0 ,   0 ,   0 ,   0 , "Temperature set point flag comfort mode"},//Value: 1 = Valid value 
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
T_DATAFIELD D21000_CMD5 [] = {
{  0 , 3 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message identifier"},//Value: 4 = Time Program Setup 
{  6 , 2 , "MCF"      ,   0 ,   0 ,   0 ,   0 , "Message continuation flag"},//Value: 3 = Reserved 
{ 10 , 6 , "ETM"      ,   0 ,  59 ,   0 ,  59 , "End time: Minute"},
{ 19 , 5 , "ETH"      ,   0 ,  23 ,   0 ,  23 , "End time: Hour"},
{ 26 , 6 , "STM"      ,   0 ,  59 ,   0 ,  59 , "Start time: Minute"},
{ 35 , 5 , "STH"      ,   0 ,  23 ,   0 ,  23 , "Start time: Hour"},
{ 40 , 4 , "PER"      ,   0 ,   0 ,   0 ,   0 , "Period"},//Value: 15 = Friday - Monday 
{ 44 , 2 , "RCM"      ,   0 ,   0 ,   0 ,   0 , "Room control mode"},//Value: 3 = Building protection 
{ 47 , 1 , "TPD"      ,   0 ,   0 ,   0 ,   0 , "Time program deletion"},//Value: 1 = Deletion 
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
// function type :0x01 : Type 0x01 
//{ 0xD2 , 0x10 , 0x01 , "Room Control Panels with Temperature & Fan Speed Control, Room Status Information and Time Program ",  "Type 0x01                                                                        " },

// TITLE:General Message
T_DATAFIELD D21001_CMD1 [] = {
{  0 , 3 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message identifier"},//Value: 0 = General Message 
{  6 , 2 , "MCF"      ,   0 ,   0 ,   0 ,   0 , "Message continuation flag"},//Value: 3 = Reserved 
{ 10 , 3 , "IRC"      ,   0 ,   0 ,   0 ,   0 , "Information request classifier"},//Value: 7 = Reserved 
{ 13 , 2 , "FBC"      ,   0 ,   0 ,   0 ,   0 , "Feedback classifier"},//Value: 3 = Reserved 
{ 15 , 1 , "GMT"      ,   0 ,   0 ,   0 ,   0 , "General message type"},//Value: 1 = Information request 
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
T_DATAFIELD D21001_CMD2 [] = {
{  0 , 3 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message identifier"},//Value: 1 = Data Message 
{  6 , 2 , "MCF"      ,   0 ,   0 ,   0 ,   0 , "Message continuation flag"},//Value: 3 = Reserved 
{ 27 , 1 , "CW2"      ,   0 ,   0 ,   0 ,   0 , "Custom warning 2"},//Value: 1 = True 
{ 28 , 1 , "CW1"      ,   0 ,   0 ,   0 ,   0 , "Custom warning 1"},//Value: 1 = True 
{ 30 , 2 , "WOD"      ,   0 ,   0 ,   0 ,   0 , "Window open detection"},//Value: 3 = Reserved 
{ 33 , 2 , "BS"       ,   0 ,   0 ,   0 ,   0 , "Battery status"},//Value: 3 = Critical 
{ 38 , 2 , "OBS"      ,   0 ,   0 ,   0 ,   0 , "Occupancy button status"},//Value: 3 = Reserved 
{ 44 , 2 , "RCM"      ,   0 ,   0 ,   0 ,   0 , "Room control mode"},//Value: 3 = Building protection 
{ 46 , 1 , "SPV"      ,   0 ,   0 ,   0 ,   0 , "Temperature set point validity"},//Value: 1 = Valid value 
{ 47 , 1 , "TPV"      ,   0 ,   0 ,   0 ,   0 , "Temperature validity"},//Value: 1 = Valid value 
{ 48 , 8 , "TSP"      ,   0 , 255 ,   0 , +40 , "Temperature set point"},
{ 56 , 8 , "TMP"      ,   0 , 255 ,   0 , +40 , "Temperature"},
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
T_DATAFIELD D21001_CMD3 [] = {
{  0 , 3 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message identifier"},//Value: 2 = Configuration Message 
{  6 , 2 , "MCF"      ,   0 ,   0 ,   0 ,   0 , "Message continuation flag"},//Value: 3 = Reserved 
{  9 , 1 , "TSL"      ,   0 ,   0 ,   0 ,   0 , "Temperature scale lock"},//Value: 1 = Unlocked 
{ 10 , 1 , "DCL"      ,   0 ,   0 ,   0 ,   0 , "Display content lock"},//Value: 1 = Unlocked 
{ 11 , 1 , "DTL"      ,   0 ,   0 ,   0 ,   0 , "Date / time lock"},//Value: 1 = Unlocked 
{ 12 , 1 , "TPL"      ,   0 ,   0 ,   0 ,   0 , "Time program lock"},//Value: 1 = Unlocked 
{ 13 , 1 , "OBL"      ,   0 ,   0 ,   0 ,   0 , "Occupancy button lock"},//Value: 1 = Unlocked 
{ 14 , 1 , "SPL"      ,   0 ,   0 ,   0 ,   0 , "Temperature set point lock"},//Value: 1 = Unlocked 
{ 16 , 6 , "RCI"      ,   0 ,   0 ,   0 ,   0 , "Radio communication interval"},//Value: 63 = 24 hours 
{ 22 , 1 , "KL"       ,   0 ,   0 ,   0 ,   0 , "Key lock"},//Value: 1 = Unlocked 
{ 24 , 3 , "DC"       ,   0 ,   0 ,   0 ,   0 , "Display content"},//Value: 7 = Humidity 
{ 27 , 2 , "TS"       ,   0 ,   0 ,   0 ,   0 , "Temperature scale"},//Value: 3 = ø Fahrenheit 
{ 29 , 1 , "DST"      ,   0 ,   0 ,   0 ,   0 , "Daylight saving time flag"},//Value: 1 = Not supported 
{ 30 , 2 , "TN"       ,   0 ,   0 ,   0 ,   0 , "Time notation"},//Value: 3 = 12 h 
{ 32 , 5 , "DAY"      ,   1 ,  31 ,   1 ,  31 , "Day"},
{ 37 , 4 , "MON"      ,   1 ,  12 ,   1 ,  12 , "Month"},
{ 41 , 7 , "YR"       ,   0 , 127 , 2000 , 2127 , "Year"},
{ 48 , 6 , "MIN"      ,   0 ,  59 ,   0 ,  59 , "Minute"},
{ 56 , 5 , "HR"       ,   0 ,  23 ,   0 ,  23 , "Hour"},
{ 63 , 1 , "DTU"      ,   0 ,   0 ,   0 ,   0 , "Date / time update flag"},//Value: 1 = Update 
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
T_DATAFIELD D21001_CMD4 [] = {
{  0 , 3 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message identifier"},//Value: 3 = Room Control Setup 
{  6 , 2 , "MCF"      ,   0 ,   0 ,   0 ,   0 , "Message continuation flag"},//Value: 3 = Reserved 
{  8 , 8 , "SPB"      ,   0 , 255 ,   0 , +40 , "Temperature set point building protection mode"},
{ 24 , 8 , "SPE"      ,   0 , 255 ,   0 , +40 , "Temperature set point economy mode"},
{ 32 , 8 , "SPC"      ,   0 , 255 ,   0 , +40 , "Temperature set point comfort mode"},
{ 44 , 1 , "SFB"      ,   0 ,   0 ,   0 ,   0 , "Temperature set point flag building protection mode"},//Value: 1 = Valid value 
{ 46 , 1 , "SFE"      ,   0 ,   0 ,   0 ,   0 , "Temperature set point flag economy mode"},//Value: 1 = Valid value 
{ 47 , 1 , "SFC"      ,   0 ,   0 ,   0 ,   0 , "Temperature set point flag comfort mode"},//Value: 1 = Valid value 
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
T_DATAFIELD D21001_CMD5 [] = {
{  0 , 3 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message identifier"},//Value: 4 = Time Program Setup 
{  6 , 2 , "MCF"      ,   0 ,   0 ,   0 ,   0 , "Message continuation flag"},//Value: 3 = Reserved 
{ 10 , 6 , "ETM"      ,   0 ,  59 ,   0 ,  59 , "End time: Minute"},
{ 19 , 5 , "ETH"      ,   0 ,  23 ,   0 ,  23 , "End time: Hour"},
{ 26 , 6 , "STM"      ,   0 ,  59 ,   0 ,  59 , "Start time: Minute"},
{ 35 , 5 , "STH"      ,   0 ,  23 ,   0 ,  23 , "Start time: Hour"},
{ 40 , 4 , "PER"      ,   0 ,   0 ,   0 ,   0 , "Period"},//Value: 15 = Friday - Monday 
{ 44 , 2 , "RCM"      ,   0 ,   0 ,   0 ,   0 , "Room control mode"},//Value: 3 = Building protection 
{ 47 , 1 , "TPD"      ,   0 ,   0 ,   0 ,   0 , "Time program deletion"},//Value: 1 = Deletion 
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
// function type :0x02 : Type 0x02 
//{ 0xD2 , 0x10 , 0x02 , "Room Control Panels with Temperature & Fan Speed Control, Room Status Information and Time Program ",  "Type 0x02                                                                        " },

// TITLE:General Message
T_DATAFIELD D21002_CMD1 [] = {
{  0 , 3 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message identifier"},//Value: 0 = General Message 
{  6 , 2 , "MCF"      ,   0 ,   0 ,   0 ,   0 , "Message continuation flag"},//Value: 3 = Reserved 
{ 10 , 3 , "IRC"      ,   0 ,   0 ,   0 ,   0 , "Information request classifier"},//Value: 7 = Reserved 
{ 13 , 2 , "FBC"      ,   0 ,   0 ,   0 ,   0 , "Feedback classifier"},//Value: 3 = Reserved 
{ 15 , 1 , "GMT"      ,   0 ,   0 ,   0 ,   0 , "General message type"},//Value: 1 = Information request 
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
T_DATAFIELD D21002_CMD2 [] = {
{  0 , 3 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message identifier"},//Value: 1 = Data Message 
{  6 , 2 , "MCF"      ,   0 ,   0 ,   0 ,   0 , "Message continuation flag"},//Value: 3 = Reserved 
{ 27 , 1 , "CW2"      ,   0 ,   0 ,   0 ,   0 , "Custom warning 2"},//Value: 1 = True 
{ 28 , 1 , "CW1"      ,   0 ,   0 ,   0 ,   0 , "Custom warning 1"},//Value: 1 = True 
{ 30 , 2 , "WOD"      ,   0 ,   0 ,   0 ,   0 , "Window open detection"},//Value: 3 = Reserved 
{ 33 , 2 , "BS"       ,   0 ,   0 ,   0 ,   0 , "Battery status"},//Value: 3 = Critical 
{ 35 , 1 , "SPS"      ,   0 ,   0 ,   0 ,   0 , "Solar-powered status"},//Value: 1 = Not solar-powered 
{ 36 , 2 , "PIR"      ,   0 ,   0 ,   0 ,   0 , "PIR status"},//Value: 3 = Locked 
{ 38 , 2 , "OBS"      ,   0 ,   0 ,   0 ,   0 , "Occupancy button status"},//Value: 3 = Reserved 
{ 44 , 2 , "RCM"      ,   0 ,   0 ,   0 ,   0 , "Room control mode"},//Value: 3 = Building protection 
{ 46 , 1 , "SPV"      ,   0 ,   0 ,   0 ,   0 , "Temperature set point validity"},//Value: 1 = Valid value 
{ 47 , 1 , "TPV"      ,   0 ,   0 ,   0 ,   0 , "Temperature validity"},//Value: 1 = Valid value 
{ 48 , 8 , "TSP"      ,   0 , 255 ,   0 , +40 , "Temperature set point"},
{ 56 , 8 , "TMP"      ,   0 , 255 ,   0 , +40 , "Temperature"},
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
T_DATAFIELD D21002_CMD3 [] = {
{  0 , 3 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message identifier"},//Value: 2 = Configuration Message 
{  6 , 2 , "MCF"      ,   0 ,   0 ,   0 ,   0 , "Message continuation flag"},//Value: 3 = Reserved 
{  8 , 1 , "PSL"      ,   0 ,   0 ,   0 ,   0 , "PIR status lock"},//Value: 1 = Unlocked 
{ 10 , 1 , "DCL"      ,   0 ,   0 ,   0 ,   0 , "Display content lock"},//Value: 1 = Unlocked 
{ 11 , 1 , "DTL"      ,   0 ,   0 ,   0 ,   0 , "Date / time lock"},//Value: 1 = Unlocked 
{ 12 , 1 , "TPL"      ,   0 ,   0 ,   0 ,   0 , "Time program lock"},//Value: 1 = Unlocked 
{ 13 , 1 , "OBL"      ,   0 ,   0 ,   0 ,   0 , "Occupancy button lock"},//Value: 1 = Unlocked 
{ 16 , 6 , "RCI"      ,   0 ,   0 ,   0 ,   0 , "Radio communication interval"},//Value: 63 = 24 hours 
{ 24 , 3 , "DC"       ,   0 ,   0 ,   0 ,   0 , "Display content"},//Value: 7 = Humidity 
{ 27 , 2 , "TS"       ,   0 ,   0 ,   0 ,   0 , "Temperature scale"},//Value: 3 = ø Fahrenheit 
{ 29 , 1 , "DST"      ,   0 ,   0 ,   0 ,   0 , "Daylight saving time flag"},//Value: 1 = Not supported 
{ 30 , 2 , "TN"       ,   0 ,   0 ,   0 ,   0 , "Time notation"},//Value: 3 = 12 h 
{ 32 , 5 , "DAY"      ,   1 ,  31 ,   1 ,  31 , "Day"},
{ 37 , 4 , "MON"      ,   1 ,  12 ,   1 ,  12 , "Month"},
{ 41 , 7 , "YR"       ,   0 , 127 , 2000 , 2127 , "Year"},
{ 48 , 6 , "MIN"      ,   0 ,  59 ,   0 ,  59 , "Minute"},
{ 56 , 5 , "HR"       ,   0 ,  23 ,   0 ,  23 , "Hour"},
{ 63 , 1 , "DTU"      ,   0 ,   0 ,   0 ,   0 , "Date / time update flag"},//Value: 1 = Update 
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
T_DATAFIELD D21002_CMD4 [] = {
{  0 , 3 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message identifier"},//Value: 3 = Room Control Setup 
{  6 , 2 , "MCF"      ,   0 ,   0 ,   0 ,   0 , "Message continuation flag"},//Value: 3 = Reserved 
{ 24 , 8 , "SPE"      ,   0 , 255 ,   0 , +40 , "Temperature set point economy mode"},
{ 32 , 8 , "SPC"      ,   0 , 255 ,   0 , +40 , "Temperature set point comfort mode"},
{ 46 , 1 , "SFE"      ,   0 ,   0 ,   0 ,   0 , "Temperature set point flag economy mode"},//Value: 1 = Valid value 
{ 47 , 1 , "SFC"      ,   0 ,   0 ,   0 ,   0 , "Temperature set point flag comfort mode"},//Value: 1 = Valid value 
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
// function number :0x11 : Bidirectional Room Operating Panel 
// function type :0x01 : Type 0x01 
//{ 0xD2 , 0x11 , 0x01 , "Bidirectional Room Operating Panel                                               ",  "Type 0x01                                                                        " },

// TITLE:Message type A / ID 0 (First switch press after sleep-mode, request new data)
T_DATAFIELD D21101_CMD1 [] = {
{  0 , 1 , "SPT"      ,   0 ,   0 ,   0 ,   0 , "Setpoint type"},//Value: 0 = Temperature correction 
                                                                 //Value: 1 = Temperature setpoint 
{  4 , 4 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message ID"},//Value: 0 = ID-0 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D21101_CMD1_SPT        0
#define D21101_CMD1_MID        1
#define D21101_CMD1_NB_DATA    2
#define D21101_CMD1_DATA_SIZE  1

// TITLE:Message type B / ID 1 (Override device parameter, reply to data request)
T_DATAFIELD D21101_CMD2 [] = {
{  0 , 1 , "SPT"      ,   0 ,   0 ,   0 ,   0 , "Set Setpoint type"},//Value: 0 = Temperature correction 
                                                                     //Value: 1 = Temperature setpoint 
{  1 , 1 , "DHS"      ,   0 ,   0 ,   0 ,   0 , "Display heating symbol"},//Value: 0 = Heating symbol off 
                                                                          //Value: 1 = Heating symbol on 
{  2 , 1 , "DCS"      ,   0 ,   0 ,   0 ,   0 , "Display cooling symbol"},//Value: 0 = Cooling symbol off 
                                                                          //Value: 1 = Cooling symbol on 
{  3 , 1 , "SSW"      ,   0 ,   0 ,   0 ,   0 , "Display  window open  symbol"},//Value: 0 = "Window open" symbol off 
                                                                                //Value: 1 = "Window open" symbol on 
{  4 , 4 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message ID"},//Value: 0 = ID-0 
{  8 , 8 , "OSO"      ,   0 ,   0 ,   0 ,   0 , "Temperature correction"},
{ 16 , 8 , "BSP"      ,   0 ,   0 ,   0 ,   0 , "Basesetpoint"},
{ 24 , 4 , "COA"      ,   0 ,   0 ,   0 ,   0 , "Valid temperature correction"},//Value: 0 = Reserved 
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

{ 28 , 3 , "OFS"      ,   0 ,   0 ,   0 ,   0 , "Fan Speed"},//Value: 0 = Auto 
                                                             //Value: 1 = Speed 0 
                                                             //Value: 2 = Speed 1 
                                                             //Value: 3 = Speed 2 
                                                             //Value: 4 = Speed 3 

{ 31 , 1 , "OOS"      ,   0 ,   0 ,   0 ,   0 , "Occupancy State"},//Value: 0 = State Unoccupied 
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
T_DATAFIELD D21101_CMD3 [] = {
{  0 , 1 , "SPT"      ,   0 ,   0 ,   0 ,   0 , "Setpoint type"},//Value: 0 = Temperature correction 
                                                                 //Value: 1 = Temperature setpoint 
{  1 , 2 , "TT"       ,   0 ,   0 ,   0 ,   0 , "Telegram Type"},//Value: 0 = Heartbeat 
                                                                 //Value: 1 = Change of temperature- or humidity value 
                                                                 //Value: 2 = User caused parameter change 
{  4 , 4 , "MID"      ,   0 ,   0 ,   0 ,   0 , "Message ID"},//Value: 0 = ID-0 
{  8 , 8 , "TEMP"     ,   0 , 255 ,   0 , +40 , "Temperature"},
{ 16 , 8 , "HUMI"     ,   0 , 250 ,   0 , +100 , "Humidity"},
{ 24 , 8 , "SP"       ,   0 , 255 ,   0 ,   0 , "Setpoint offset"},
{ 32 , 8 , "IBS"      ,   0 ,   0 ,   0 ,   0 , "Basesetpoint"},
{ 40 , 4 , "BSB"      ,   0 ,   0 ,   0 ,   0 , "Valid temperature correction"},//Value: 0 = Reserved 

{ 44 , 3 , "FS"       ,   0 ,   0 ,   0 ,   0 , "Fan Speed"},//Value: 0 = Auto 
                                                             //Value: 1 = Speed 0 
                                                             //Value: 2 = Speed 1 
                                                             //Value: 3 = Speed 2 
                                                             //Value: 4 = Speed 3 

{ 47 , 1 , "OS"       ,   0 ,   0 ,   0 ,   0 , "Occupancy State"},//Value: 0 = State Unoccupied 
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
// function type :0x02 : Type 0x02 (description: see table) 
//{ 0xD2 , 0x11 , 0x02 , "Bidirectional Room Operating Panel                                               ",  "Type 0x02 (description: see table)                                               " },
// function type :0x03 : Type 0x03 (description: see table) 
//{ 0xD2 , 0x11 , 0x03 , "Bidirectional Room Operating Panel                                               ",  "Type 0x03 (description: see table)                                               " },
// function type :0x04 : Type 0x04 (description: see table) 
//{ 0xD2 , 0x11 , 0x04 , "Bidirectional Room Operating Panel                                               ",  "Type 0x04 (description: see table)                                               " },
// function type :0x05 : Type 0x05 (description: see table) 
//{ 0xD2 , 0x11 , 0x05 , "Bidirectional Room Operating Panel                                               ",  "Type 0x05 (description: see table)                                               " },
// function type :0x06 : Type 0x06 (description: see table) 
//{ 0xD2 , 0x11 , 0x06 , "Bidirectional Room Operating Panel                                               ",  "Type 0x06 (description: see table)                                               " },
// function type :0x07 : Type 0x07 (description: see table) 
//{ 0xD2 , 0x11 , 0x07 , "Bidirectional Room Operating Panel                                               ",  "Type 0x07 (description: see table)                                               " },
// function type :0x08 : Type 0x08 (description: see table) 
//{ 0xD2 , 0x11 , 0x08 , "Bidirectional Room Operating Panel                                               ",  "Type 0x08 (description: see table)                                               " },
// function number :0x20 : Fan Control 
// function type :0x00 : Type 0x00 
//{ 0xD2 , 0x20 , 0x00 , "Fan Control                                                                      ",  "Type 0x00                                                                        " },

// TITLE:Telegram Definition : 'Fan Control Message'
T_DATAFIELD D22000_CMD1 [] = {
{  0 , 4 , "OM"       ,   0 ,   0 ,   0 ,   0 , "Operating Mode"},//Value: 0 = Disabled 
{  5 , 2 , "TL"       ,   0 ,   0 ,   0 ,   0 , "Temperature Level"},//Value: 0 = Too low 
{  7 , 1 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 0 = Fan control 
{  8 , 2 , "HC"       ,   0 ,   0 ,   0 ,   0 , "Humidity Control"},//Value: 0 = Disabled 
{ 10 , 2 , "RSR"      ,   0 ,   0 ,   0 ,   0 , "Room Size Reference"},//Value: 0 = Used 
{ 12 , 4 , "RS"       ,   0 ,   0 ,   0 ,   0 , "Room Size"},//Value: 0 = < 25 mý 
{ 16 , 8 , "HT"       ,   0 ,   0 ,   0 ,   0 , "Humidity Threshold"},
{ 24 , 8 , "FS"       ,   0 ,   0 ,   0 ,   0 , "Fan Speed *"},
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
T_DATAFIELD D22000_CMD2 [] = {
{  0 , 4 , "OMS"      ,   0 ,   0 ,   0 ,   0 , "Operating Mode Status"},//Value: 0 = Disabled 
{  4 , 3 , "SI"       ,   0 ,   0 ,   0 ,   0 , "Service Information"},//Value: 0 = Nothing to report 
{  7 , 1 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 1 = Fan status 
{  8 , 2 , "HCS"      ,   0 ,   0 ,   0 ,   0 , "Humidity Control Status"},//Value: 0 = Disabled 
{ 10 , 2 , "RSR"      ,   0 ,   0 ,   0 ,   0 , "Room Size Reference"},//Value: 0 = Used 
{ 12 , 4 , "RSS"      ,   0 ,   0 ,   0 ,   0 , "Room Size Status"},//Value: 0 = < 25 mý 
{ 16 , 8 , "HUM"      ,   0 ,   0 ,   0 ,   0 , "Humidity"},
{ 24 , 8 , "FSS"      ,   0 ,   0 ,   0 ,   0 , "Fan Speed Status"},
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
// function type :0x01 : Type 0x01 
//{ 0xD2 , 0x20 , 0x01 , "Fan Control                                                                      ",  "Type 0x01                                                                        " },

// TITLE:Telegram Definition : 'Fan Control Message'
T_DATAFIELD D22001_CMD1 [] = {
{  7 , 1 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 0 = Fan control 
{ 10 , 2 , "RSR"      ,   0 ,   0 ,   0 ,   0 , "Room Size Reference"},//Value: 0 = Used 
{ 12 , 4 , "RS"       ,   0 ,   0 ,   0 ,   0 , "Room Size"},//Value: 0 = < 25 mý 
{ 24 , 8 , "FS"       ,   0 ,   0 ,   0 ,   0 , "Fan Speed *"},
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
T_DATAFIELD D22001_CMD2 [] = {
{  0 , 4 , "OMS"      ,   0 ,   0 ,   0 ,   0 , "Operating Mode Status"},//Value: 0 = Disabled 
{  7 , 1 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 1 = Fan status 
{ 10 , 2 , "RSR"      ,   0 ,   0 ,   0 ,   0 , "Room Size Reference"},//Value: 0 = Used 
{ 12 , 4 , "RSS"      ,   0 ,   0 ,   0 ,   0 , "Room Size Status"},//Value: 0 = < 25 mý 
{ 24 , 8 , "FSS"      ,   0 ,   0 ,   0 ,   0 , "Fan Speed Status"},
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
// function type :0x02 : Type 0x02 
//{ 0xD2 , 0x20 , 0x02 , "Fan Control                                                                      ",  "Type 0x02                                                                        " },

// TITLE:Telegram Definition : 'Fan Control Message'
T_DATAFIELD D22002_CMD1 [] = {
{  7 , 1 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 0 = Fan control 
{ 10 , 2 , "RSR"      ,   0 ,   0 ,   0 ,   0 , "Room Size Reference"},//Value: 0 = Used 
{ 12 , 4 , "RS"       ,   0 ,   0 ,   0 ,   0 , "Room Size"},//Value: 0 = < 25 mý 
{ 24 , 8 , "FS"       ,   0 ,   0 ,   0 ,   0 , "Fan Speed *"},
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
T_DATAFIELD D22002_CMD2 [] = {
{  7 , 1 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 1 = Fan status 
{  8 , 2 , "HCS"      ,   0 ,   0 ,   0 ,   0 , "Humidity Control Status"},//Value: 0 = Disabled 
{ 10 , 2 , "RSR"      ,   0 ,   0 ,   0 ,   0 , "Room Size Reference"},//Value: 0 = Used 
{ 12 , 4 , "RSS"      ,   0 ,   0 ,   0 ,   0 , "Room Size Status"},//Value: 0 = < 25 mý 
{ 24 , 8 , "FSS"      ,   0 ,   0 ,   0 ,   0 , "Fan Speed Status"},
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
// function number :0x30 : Floor Heating Controls and Automated Meter Reading 
// function type :0x00 : Type 0x00 
//{ 0xD2 , 0x30 , 0x00 , "Floor Heating Controls and Automated Meter Reading                               ",  "Type 0x00                                                                        " },

// TITLE:CMD 0x1 - Set heating controls output
T_DATAFIELD D23000_CMD1 [] = {
{  0 , 4 , "PERIOD"   ,   0 ,   0 ,   0 ,   0 , "Valve control period / PWM signal interval"},//Value: 0 = Local default / no change 
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

{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x01 = ID 01 
{ 10 , 1 , "VTYP"     ,   0 ,   0 ,   0 ,   0 , "Valve type"},//Value: 0 = Valve normally closed (N.C.) 
                                                              //Value: 1 = Valve normally open (N.O.) 
{ 11 , 5 , "HCH"      ,   0 ,   0 ,   0 ,   0 , "Heating channel"},
{ 16 , 1 , "RIN"      ,   0 ,   0 ,   0 ,   0 , "Run init sequence"},//Value: 0 = No action 
                                                                     //Value: 1 = Run init sequence 
{ 17 , 7 , "POS"      ,   0 , 100 ,   0 , 100 , "Valve position set point"},
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
T_DATAFIELD D23000_CMD2 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x02 = ID 02 
{ 11 , 5 , "HCH"      ,   0 ,   0 ,   0 ,   0 , "Heating channel"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23000_CMD2_CMD        0
#define D23000_CMD2_HCH        1
#define D23000_CMD2_NB_DATA    2
#define D23000_CMD2_DATA_SIZE  2

// TITLE:CMD 0x3 - Heating controls status response / CH = 0...15
T_DATAFIELD D23000_CMD3 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x03 = ID 03 
{  8 , 3 , "STATUS"   ,   0 ,   0 ,   0 ,   0 , "Status / Error"},//Value: 0 = No fault 
                                                                  //Value: 1 = General error 
                                                                  //Value: 2 = Init sequence running 
                                                                  //Value: 3 = Channel not available 
                                                                  //Value: 4 = Temperature sensor error 
                                                                  //Value: 5 = Valve error 
                                                                  //Value: 6 = Temperature sensor and valve error 
                                                                  //Value: 7 = Reserved 
{ 11 , 5 , "HCH"      ,   0 ,   0 ,   0 ,   0 , "Heating channel"},
{ 17 , 7 , "POS"      ,   0 , 100 ,   0 , 100 , "Valve position"},
{ 24 , 8 , "TEMPRET"  ,   0 , 180 ,   0 ,  90 , "Return temperature"},
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
T_DATAFIELD D23000_CMD4 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x03 = ID 03 
{  8 , 3 , "STATUS"   ,   0 ,   0 ,   0 ,   0 , "Status / Error"},//Value: 0 = No fault 
                                                                  //Value: 1 = General error 
                                                                  //Value: 2 = Supply temperature error 
                                                                  //Value: 3 = Return temperature error 
                                                                  //Value: 4 = Error on both sensors 

{ 11 , 5 , "HCH"      ,   0 ,   0 ,   0 ,   0 , "Heating channel"},//Value: 31 = Unit status only 
{ 16 , 8 , "TSUP"     ,   0 , 180 ,   0 ,  90 , "Supply temperature"},
{ 24 , 8 , "TRET"     ,   0 , 180 ,   0 ,  90 , "Return temperature"},
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
T_DATAFIELD D23000_CMD5 [] = {
{  0 , 4 , "RM"       ,   0 ,   0 ,   0 ,   0 , "Report measurement"},//Value: 0 = No auto reporting 
                                                                      //Value: 1 = Min. 1 s interval 
                                                                      //Value: 2 = Min. 3 s interval 
                                                                      //Value: 3 = Min. 10 s interval 
                                                                      //Value: 4 = Min. 30 s interval 
                                                                      //Value: 5 = Min. 100 s interval 
                                                                      //Value: 6 = Min. 300 s interval 
                                                                      //Value: 7 = Min. 1000 s interval 

{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x06 = ID 06 
{  9 , 2 , "BUS"      ,   0 ,   0 ,   0 ,   0 , "Meter bus type"},//Value: 0 = Reserved 
                                                                  //Value: 1 = MBUS 
                                                                  //Value: 2 = S0 
                                                                  //Value: 3 = D0 
{ 11 , 5 , "MCH"      ,   0 ,  30 ,   0 ,  30 , "Meter channel index"},
{ 18 , 3 , "UNIT1"    ,   0 ,   0 ,   0 ,   0 , "Meter 1 units"},//Value: 0 = No reading (unconfigured) 
                                                                 //Value: 1 = Current value W, accumulated value kWh 
                                                                 //Value: 2 = Current value W, accumulated value Wh 
                                                                 //Value: 3 = Accumulated value kWh only 
                                                                 //Value: 4 = Current value m3/h, accumulated value m3 
                                                                 //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                 //Value: 6 = Accumulated value m3 only 
                                                                 //Value: 7 = Digital counter 
{ 21 , 3 , "UNIT2"    ,   0 ,   0 ,   0 ,   0 , "Meter 2 units"},//Value: 0 = No reading (unconfigured) 
                                                                 //Value: 1 = Current value W, accumulated value kWh 
                                                                 //Value: 2 = Current value W, accumulated value Wh 
                                                                 //Value: 3 = Accumulated value kWh only 
                                                                 //Value: 4 = Current value m3/h, accumulated value m3 
                                                                 //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                 //Value: 6 = Accumulated value m3 only 
                                                                 //Value: 7 = Digital counter 
{ 24 , 8 , "ADDR"     ,   1 , 250 ,   1 , 250 , "Primary Address"},
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
T_DATAFIELD D23000_CMD6 [] = {
{  0 , 4 , "RM"       ,   0 ,   0 ,   0 ,   0 , "Report measurement"},//Value: 0 = No auto reporting 
                                                                      //Value: 1 = Min. 1 s interval 
                                                                      //Value: 2 = Min. 3 s interval 
                                                                      //Value: 3 = Min. 10 s interval 
                                                                      //Value: 4 = Min. 30 s interval 
                                                                      //Value: 5 = Min. 100 s interval 
                                                                      //Value: 6 = Min. 300 s interval 
                                                                      //Value: 7 = Min. 1000 s interval 

{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x06 = ID 06 
{  9 , 2 , "BUS"      ,   0 ,   0 ,   0 ,   0 , "Meter bus type"},//Value: 0 = Reserved 
                                                                  //Value: 1 = MBUS 
                                                                  //Value: 2 = S0 
                                                                  //Value: 3 = D0 
{ 11 , 5 , "MCH"      ,   0 ,  30 ,   0 ,  30 , "Meter channel index"},
{ 18 , 3 , "UNIT1"    ,   0 ,   0 ,   0 ,   0 , "Meter 1 units"},//Value: 0 = No reading (unconfigured) 
                                                                 //Value: 1 = Current value W, accumulated value kWh 
                                                                 //Value: 2 = Current value W, accumulated value Wh 
                                                                 //Value: 3 = Accumulated value kWh only 
                                                                 //Value: 4 = Current value m3/h, accumulated value m3 
                                                                 //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                 //Value: 6 = Accumulated value m3 only 
                                                                 //Value: 7 = Digital counter 
{ 21 , 3 , "UNIT2"    ,   0 ,   0 ,   0 ,   0 , "Meter 2 units"},//Value: 0 = No reading (unconfigured) 
                                                                 //Value: 1 = Current value W, accumulated value kWh 
                                                                 //Value: 2 = Current value W, accumulated value Wh 
                                                                 //Value: 3 = Accumulated value kWh only 
                                                                 //Value: 4 = Current value m3/h, accumulated value m3 
                                                                 //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                 //Value: 6 = Accumulated value m3 only 
                                                                 //Value: 7 = Digital counter 
{ 24 , 2 , "FACP"     ,   0 ,   0 ,   0 ,   0 , "Factor of number of pulses"},//Value: 0 = 1 
                                                                              //Value: 1 = 0.1 
                                                                              //Value: 2 = 0.01 
                                                                              //Value: 3 = 0.001 
{ 26 ,14 , "NOP"      ,   0 ,   0 ,   0 ,   0 , "Number of pulses"},//Value: 0 = Do not change the current setting of NOP 

{ 40 ,32 , "RST"      ,   0 ,   0 ,   0 ,   0 , "Preset value"},
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
T_DATAFIELD D23000_CMD7 [] = {
{  0 , 4 , "RM"       ,   0 ,   0 ,   0 ,   0 , "Report measurement"},//Value: 0 = No auto reporting 
                                                                      //Value: 1 = Min. 1 s interval 
                                                                      //Value: 2 = Min. 3 s interval 
                                                                      //Value: 3 = Min. 10 s interval 
                                                                      //Value: 4 = Min. 30 s interval 
                                                                      //Value: 5 = Min. 100 s interval 
                                                                      //Value: 6 = Min. 300 s interval 
                                                                      //Value: 7 = Min. 1000 s interval 

{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x06 = ID 06 
{  9 , 2 , "BUS"      ,   0 ,   0 ,   0 ,   0 , "Meter bus type"},//Value: 0 = Reserved 
                                                                  //Value: 1 = MBUS 
                                                                  //Value: 2 = S0 
                                                                  //Value: 3 = D0 
{ 11 , 5 , "MCH"      ,   0 ,  30 ,   0 ,  30 , "Meter channel index"},
{ 18 , 3 , "UNIT1"    ,   0 ,   0 ,   0 ,   0 , "Meter 1 units"},//Value: 0 = No reading (unconfigured) 
                                                                 //Value: 1 = Current value W, accumulated value kWh 
                                                                 //Value: 2 = Current value W, accumulated value Wh 
                                                                 //Value: 3 = Accumulated value kWh only 
                                                                 //Value: 4 = Current value m3/h, accumulated value m3 
                                                                 //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                 //Value: 6 = Accumulated value m3 only 
                                                                 //Value: 7 = Digital counter 
{ 21 , 3 , "UNIT2"    ,   0 ,   0 ,   0 ,   0 , "Meter 2 units"},//Value: 0 = No reading (unconfigured) 
                                                                 //Value: 1 = Current value W, accumulated value kWh 
                                                                 //Value: 2 = Current value W, accumulated value Wh 
                                                                 //Value: 3 = Accumulated value kWh only 
                                                                 //Value: 4 = Current value m3/h, accumulated value m3 
                                                                 //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                 //Value: 6 = Accumulated value m3 only 
                                                                 //Value: 7 = Digital counter 
{ 24 , 8 , "PROT"     ,   0 ,   0 ,   0 ,   0 , "D0 Protocol"},//Value: 0 = Auto detect 
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
T_DATAFIELD D23000_CMD8 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x07 = ID 07 
{  9 , 2 , "BUS"      ,   0 ,   0 ,   0 ,   0 , "Meter bus type"},//Value: 0 = Reserved 
                                                                  //Value: 1 = MBUS 
                                                                  //Value: 2 = S0 
                                                                  //Value: 3 = D0 
{ 11 , 5 , "MCH"      ,   0 ,   0 ,   0 ,   0 , "Meter channel index"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23000_CMD8_CMD        0
#define D23000_CMD8_BUS        1
#define D23000_CMD8_MCH        2
#define D23000_CMD8_NB_DATA    3
#define D23000_CMD8_DATA_SIZE  2

// TITLE:CMD 0x8 - Meter reading report / status response
T_DATAFIELD D23000_CMD9 [] = {
{  1 , 3 , "MSTAT"    ,   0 ,   0 ,   0 ,   0 , "Meter status / error"},//Value: 0 = No fault 
                                                                        //Value: 1 = General error 
                                                                        //Value: 2 = Bus unconfigured 
                                                                        //Value: 3 = Bus unconnected 
                                                                        //Value: 4 = Bus shortcut 
                                                                        //Value: 5 = Communication timeout 
                                                                        //Value: 6 = Unknown protocol or 
                                                                        //Value: 7 = Bus initialization running 
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x08 = ID 08 
{  9 , 2 , "BUS"      ,   0 ,   0 ,   0 ,   0 , "Meter bus type"},//Value: 0 = Reserved 
                                                                  //Value: 1 = MBUS 
                                                                  //Value: 2 = S0 
                                                                  //Value: 3 = D0 
{ 11 , 5 , "MCH"      ,   0 ,  30 ,   0 ,  30 , "Meter channel index"},
{ 19 , 2 , "VSEL"     ,   0 ,   0 ,   0 ,   0 , "Value selection"},//Value: 0 = Meter 1 Current value 
                                                                   //Value: 1 = Meter 1 Accumulated value 
                                                                   //Value: 2 = Meter 2 Current value 
                                                                   //Value: 3 = Meter 2 Accumulated value 
{ 21 , 3 , "VUNIT"    ,   0 ,   0 ,   0 ,   0 , "Value unit"},//Value: 0 = W 
                                                              //Value: 1 = Wh 
                                                              //Value: 2 = kWh 
                                                              //Value: 3 = m3/h 
                                                              //Value: 4 = dm3/h 
                                                              //Value: 5 = m3 
                                                              //Value: 6 = dm3 
                                                              //Value: 7 = 1 (digital counter) 
{ 24 ,32 , "VAL"      ,   0 , 4294967295 ,   0 , 4294967295 , "Meter reading value"},
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
// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2 , 0x30 , 0x01 , "Floor Heating Controls and Automated Meter Reading                               ",  "Type 0x01 (description: see table)                                               " },
// function type :0x02 : Type 0x02 (description: see table) 
//{ 0xD2 , 0x30 , 0x02 , "Floor Heating Controls and Automated Meter Reading                               ",  "Type 0x02 (description: see table)                                               " },
// function type :0x03 : Type 0x03 (description: see table) 
//{ 0xD2 , 0x30 , 0x03 , "Floor Heating Controls and Automated Meter Reading                               ",  "Type 0x03 (description: see table)                                               " },
// function type :0x04 : Type 0x04 (description: see table) 
//{ 0xD2 , 0x30 , 0x04 , "Floor Heating Controls and Automated Meter Reading                               ",  "Type 0x04 (description: see table)                                               " },
// function type :0x05 : Type 0x05 (description: see table) 
//{ 0xD2 , 0x30 , 0x05 , "Floor Heating Controls and Automated Meter Reading                               ",  "Type 0x05 (description: see table)                                               " },
// function type :0x06 : Type 0x06 (description: see table) 
//{ 0xD2 , 0x30 , 0x06 , "Floor Heating Controls and Automated Meter Reading                               ",  "Type 0x06 (description: see table)                                               " },
// function number :0x31 : Automated Meter Reading Gateway 
// function type :0x00 : Type 0x00 
//{ 0xD2 , 0x31 , 0x00 , "Automated Meter Reading Gateway                                                  ",  "Type 0x00                                                                        " },

// TITLE:CMD 0x6 - Set meter configuration / MBUS (BUS = 1)
T_DATAFIELD D23100_CMD1 [] = {
{  0 , 4 , "RM"       ,   0 ,   0 ,   0 ,   0 , "Report measurement"},//Value: 0 = No auto reporting 
                                                                      //Value: 1 = Min. 1 s interval 
                                                                      //Value: 2 = Min. 3 s interval 
                                                                      //Value: 3 = Min. 10 s interval 
                                                                      //Value: 4 = Min. 30 s interval 
                                                                      //Value: 5 = Min. 100 s interval 
                                                                      //Value: 6 = Min. 300 s interval 
                                                                      //Value: 7 = Min. 1000 s interval 

{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x06 = ID 06 
{  9 , 2 , "BUS"      ,   0 ,   0 ,   0 ,   0 , "Meter bus type"},//Value: 0 = Reserved 
                                                                  //Value: 1 = MBUS 
                                                                  //Value: 2 = S0 
                                                                  //Value: 3 = D0 
{ 11 , 5 , "MCH"      ,   0 ,  30 ,   0 ,  30 , "Meter channel index"},
{ 18 , 3 , "UNIT1"    ,   0 ,   0 ,   0 ,   0 , "Meter 1 units"},//Value: 0 = No reading (unconfigured) 
                                                                 //Value: 1 = Current value W, accumulated value kWh 
                                                                 //Value: 2 = Current value W, accumulated value Wh 
                                                                 //Value: 3 = Accumulated value kWh only 
                                                                 //Value: 4 = Current value m3/h, accumulated value m3 
                                                                 //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                 //Value: 6 = Accumulated value m3 only 
                                                                 //Value: 7 = Digital counter 
{ 21 , 3 , "UNIT2"    ,   0 ,   0 ,   0 ,   0 , "Meter 2 units"},//Value: 0 = No reading (unconfigured) 
                                                                 //Value: 1 = Current value W, accumulated value kWh 
                                                                 //Value: 2 = Current value W, accumulated value Wh 
                                                                 //Value: 3 = Accumulated value kWh only 
                                                                 //Value: 4 = Current value m3/h, accumulated value m3 
                                                                 //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                 //Value: 6 = Accumulated value m3 only 
                                                                 //Value: 7 = Digital counter 
{ 24 , 8 , "ADDR"     ,   1 , 250 ,   1 , 250 , "Primary Address"},
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
T_DATAFIELD D23100_CMD2 [] = {
{  0 , 4 , "RM"       ,   0 ,   0 ,   0 ,   0 , "Report measurement"},//Value: 0 = No auto reporting 
                                                                      //Value: 1 = Min. 1 s interval 
                                                                      //Value: 2 = Min. 3 s interval 
                                                                      //Value: 3 = Min. 10 s interval 
                                                                      //Value: 4 = Min. 30 s interval 
                                                                      //Value: 5 = Min. 100 s interval 
                                                                      //Value: 6 = Min. 300 s interval 
                                                                      //Value: 7 = Min. 1000 s interval 

{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x06 = ID 06 
{  9 , 2 , "BUS"      ,   0 ,   0 ,   0 ,   0 , "Meter bus type"},//Value: 0 = Reserved 
                                                                  //Value: 1 = MBUS 
                                                                  //Value: 2 = S0 
                                                                  //Value: 3 = D0 
{ 11 , 5 , "MCH"      ,   0 ,  30 ,   0 ,  30 , "Meter channel index"},
{ 18 , 3 , "UNIT1"    ,   0 ,   0 ,   0 ,   0 , "Meter 1 units"},//Value: 0 = No reading (unconfigured) 
                                                                 //Value: 1 = Current value W, accumulated value kWh 
                                                                 //Value: 2 = Current value W, accumulated value Wh 
                                                                 //Value: 3 = Accumulated value kWh only 
                                                                 //Value: 4 = Current value m3/h, accumulated value m3 
                                                                 //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                 //Value: 6 = Accumulated value m3 only 
                                                                 //Value: 7 = Digital counter 
{ 21 , 3 , "UNIT2"    ,   0 ,   0 ,   0 ,   0 , "Meter 2 units"},//Value: 0 = No reading (unconfigured) 
                                                                 //Value: 1 = Current value W, accumulated value kWh 
                                                                 //Value: 2 = Current value W, accumulated value Wh 
                                                                 //Value: 3 = Accumulated value kWh only 
                                                                 //Value: 4 = Current value m3/h, accumulated value m3 
                                                                 //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                 //Value: 6 = Accumulated value m3 only 
                                                                 //Value: 7 = Digital counter 
{ 24 , 2 , "FACP"     ,   0 ,   0 ,   0 ,   0 , "Factor of number of pulses"},//Value: 0 = 1 
                                                                              //Value: 1 = 0.1 
                                                                              //Value: 2 = 0.01 
                                                                              //Value: 3 = 0.001 
{ 26 ,14 , "NOP"      ,   0 ,   0 ,   0 ,   0 , "Number of pulses"},//Value: 0 = Do not change the current setting of NOP 

{ 40 ,32 , "RST"      ,   0 ,   0 ,   0 ,   0 , "Preset value"},
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
T_DATAFIELD D23100_CMD3 [] = {
{  0 , 4 , "RM"       ,   0 ,   0 ,   0 ,   0 , "Report measurement"},//Value: 0 = No auto reporting 
                                                                      //Value: 1 = Min. 1 s interval 
                                                                      //Value: 2 = Min. 3 s interval 
                                                                      //Value: 3 = Min. 10 s interval 
                                                                      //Value: 4 = Min. 30 s interval 
                                                                      //Value: 5 = Min. 100 s interval 
                                                                      //Value: 6 = Min. 300 s interval 
                                                                      //Value: 7 = Min. 1000 s interval 

{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x06 = ID 06 
{  9 , 2 , "BUS"      ,   0 ,   0 ,   0 ,   0 , "Meter bus type"},//Value: 0 = Reserved 
                                                                  //Value: 1 = MBUS 
                                                                  //Value: 2 = S0 
                                                                  //Value: 3 = D0 
{ 11 , 5 , "MCH"      ,   0 ,  30 ,   0 ,  30 , "Meter channel index"},
{ 18 , 3 , "UNIT1"    ,   0 ,   0 ,   0 ,   0 , "Meter 1 units"},//Value: 0 = No reading (unconfigured) 
                                                                 //Value: 1 = Current value W, accumulated value kWh 
                                                                 //Value: 2 = Current value W, accumulated value Wh 
                                                                 //Value: 3 = Accumulated value kWh only 
                                                                 //Value: 4 = Current value m3/h, accumulated value m3 
                                                                 //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                 //Value: 6 = Accumulated value m3 only 
                                                                 //Value: 7 = Digital counter 
{ 21 , 3 , "UNIT2"    ,   0 ,   0 ,   0 ,   0 , "Meter 2 units"},//Value: 0 = No reading (unconfigured) 
                                                                 //Value: 1 = Current value W, accumulated value kWh 
                                                                 //Value: 2 = Current value W, accumulated value Wh 
                                                                 //Value: 3 = Accumulated value kWh only 
                                                                 //Value: 4 = Current value m3/h, accumulated value m3 
                                                                 //Value: 5 = Current value dm3/h, accumulated value dm3 
                                                                 //Value: 6 = Accumulated value m3 only 
                                                                 //Value: 7 = Digital counter 
{ 24 , 8 , "PROT"     ,   0 ,   0 ,   0 ,   0 , "D0 Protocol"},//Value: 0 = Auto detect 
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
T_DATAFIELD D23100_CMD4 [] = {
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x07 = ID 07 
{  9 , 2 , "BUS"      ,   0 ,   0 ,   0 ,   0 , "Meter bus type"},//Value: 0 = Reserved 
                                                                  //Value: 1 = MBUS 
                                                                  //Value: 2 = S0 
                                                                  //Value: 3 = D0 
{ 11 , 5 , "MCH"      ,   0 ,   0 ,   0 ,   0 , "Meter channel index"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23100_CMD4_CMD        0
#define D23100_CMD4_BUS        1
#define D23100_CMD4_MCH        2
#define D23100_CMD4_NB_DATA    3
#define D23100_CMD4_DATA_SIZE  2

// TITLE:CMD 0x8 - Meter reading report / status response
T_DATAFIELD D23100_CMD5 [] = {
{  1 , 3 , "MSTAT"    ,   0 ,   0 ,   0 ,   0 , "Meter status / error"},//Value: 0 = No fault 
                                                                        //Value: 1 = General error 
                                                                        //Value: 2 = Bus unconfigured 
                                                                        //Value: 3 = Bus unconnected 
                                                                        //Value: 4 = Bus shortcut 
                                                                        //Value: 5 = Communication timeout 
                                                                        //Value: 6 = Unknown protocol or 
                                                                        //Value: 7 = Bus initialization running 
{  4 , 4 , "CMD"      ,   0 ,   0 ,   0 ,   0 , "Command ID"},//Value: 0x08 = ID 08 
{  9 , 2 , "BUS"      ,   0 ,   0 ,   0 ,   0 , "Meter bus type"},//Value: 0 = Reserved 
                                                                  //Value: 1 = MBUS 
                                                                  //Value: 2 = S0 
                                                                  //Value: 3 = D0 
{ 11 , 5 , "MCH"      ,   0 ,  30 ,   0 ,  30 , "Meter channel index"},
{ 19 , 2 , "VSEL"     ,   0 ,   0 ,   0 ,   0 , "Value selection"},//Value: 0 = Meter 1 Current value 
                                                                   //Value: 1 = Meter 1 Accumulated value 
                                                                   //Value: 2 = Meter 2 Current value 
                                                                   //Value: 3 = Meter 2 Accumulated value 
{ 21 , 3 , "VUNIT"    ,   0 ,   0 ,   0 ,   0 , "Value unit"},//Value: 0 = W 
                                                              //Value: 1 = Wh 
                                                              //Value: 2 = kWh 
                                                              //Value: 3 = m3/h 
                                                              //Value: 4 = dm3/h 
                                                              //Value: 5 = m3 
                                                              //Value: 6 = dm3 
                                                              //Value: 7 = 1 (digital counter) 
{ 24 ,32 , "VAL"      ,   0 , 4294967295 ,   0 , 4294967295 , "Meter reading value"},
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
// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2 , 0x31 , 0x01 , "Automated Meter Reading Gateway                                                  ",  "Type 0x01 (description: see table)                                               " },
// function number :0x32 : A.C. Current Clamp 
// function type :0x00 : Type 0x00 
//{ 0xD2 , 0x32 , 0x00 , "A.C. Current Clamp                                                               ",  "Type 0x00                                                                        " },

// TITLE:
T_DATAFIELD D23200_CMD1 [] = {
{  0 , 1 , "PF"       ,   0 ,   0 ,   0 ,   0 , "Power Fail"},//Value: 0 = False 
                                                              //Value: 1 = True 
{  1 , 1 , "DIV"      ,   0 ,   0 ,   0 ,   0 , "Divisor"},//Value: 0 = x/1 
                                                           //Value: 1 = x/10 
{  8 ,12 , "CH1"      ,   0 , 0xFFF ,   0 , 4095 , "Channel 1"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23200_CMD1_PF         0
#define D23200_CMD1_DIV        1
#define D23200_CMD1_CH1        2
#define D23200_CMD1_NB_DATA    3
#define D23200_CMD1_DATA_SIZE  3
// function type :0x01 : Type 0x01 
//{ 0xD2 , 0x32 , 0x01 , "A.C. Current Clamp                                                               ",  "Type 0x01                                                                        " },

// TITLE:
T_DATAFIELD D23201_CMD1 [] = {
{  0 , 1 , "PF"       ,   0 ,   0 ,   0 ,   0 , "Power Fail"},//Value: 0 = False 
                                                              //Value: 1 = True 
{  1 , 1 , "DIV"      ,   0 ,   0 ,   0 ,   0 , "Divisor"},//Value: 0 = x/1 
                                                           //Value: 1 = x/10 
{  8 ,12 , "CH1"      ,   0 , 0xFFF ,   0 , 4095 , "Channel 1"},
{ 20 ,12 , "CH2"      ,   0 , 0xFFF ,   0 , 4095 , "Channel 2"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D23201_CMD1_PF         0
#define D23201_CMD1_DIV        1
#define D23201_CMD1_CH1        2
#define D23201_CMD1_CH2        3
#define D23201_CMD1_NB_DATA    4
#define D23201_CMD1_DATA_SIZE  4
// function type :0x02 : Type 0x02 
//{ 0xD2 , 0x32 , 0x02 , "A.C. Current Clamp                                                               ",  "Type 0x02                                                                        " },

// TITLE:
T_DATAFIELD D23202_CMD1 [] = {
{  0 , 1 , "PF"       ,   0 ,   0 ,   0 ,   0 , "Power Fail"},//Value: 0 = False 
                                                              //Value: 1 = True 
{  1 , 1 , "DIV"      ,   0 ,   0 ,   0 ,   0 , "Divisor"},//Value: 0 = x/1 
                                                           //Value: 1 = x/10 
{  8 ,12 , "CH1"      ,   0 , 0xFFF ,   0 , 4095 , "Channel 1"},
{ 20 ,12 , "CH2"      ,   0 , 0xFFF ,   0 , 4095 , "Channel 2"},
{ 32 ,12 , "CH3"      ,   0 , 0xFFF ,   0 , 4095 , "Channel 3"},
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
// function number :0x40 : LED Controller Status 
// function type :0x00 : Type 0x00 
//{ 0xD2 , 0x40 , 0x00 , "LED Controller Status                                                            ",  "Type 0x00                                                                        " },

// TITLE:
T_DATAFIELD D24000_CMD1 [] = {
{  0 , 1 , "OUTEN"    ,   0 ,   0 ,   0 ,   0 , "LED output enabled"},//Value: 0 = Disabled 
                                                                      //Value: 1 = Enabled 
{  1 , 1 , "DRA"      ,   0 ,   0 ,   0 ,   0 , " Demand Response  mode Active"},//Value: 0 = False 
                                                                                 //Value: 1 = True 
{  2 , 1 , "DHAR"     ,   0 ,   0 ,   0 ,   0 , "Daylight Harvesting Active"},//Value: 0 = False 
                                                                              //Value: 1 = True 
{  3 , 2 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy State"},//Value: 0 = Not occupied 
                                                                   //Value: 1 = Occupied 
                                                                   //Value: 2 = Unknown 
{  5 , 1 , "SREAS"    ,   0 ,   0 ,   0 ,   0 , "Status Tx reason"},//Value: 0 = Other 
                                                                    //Value: 1 = Heartbeat 
{  6 , 2 , "MI"       ,   0 ,   0 ,   0 ,   0 , "MsgId"},//Value: 0 = LED Status monocolor 
{  8 , 8 , "DLVL"     ,   0 ,   0 ,   0 ,   0 , "Current Dim Level"},
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
// function type :0x01 : Type 0x01 
//{ 0xD2 , 0x40 , 0x01 , "LED Controller Status                                                            ",  "Type 0x01                                                                        " },

// TITLE:
T_DATAFIELD D24001_CMD1 [] = {
{  0 , 1 , "OUTEN"    ,   0 ,   0 ,   0 ,   0 , "LED output enabled"},//Value: 0 = Disabled 
                                                                      //Value: 1 = Enabled 
{  1 , 1 , "DRA"      ,   0 ,   0 ,   0 ,   0 , " Demand Response  mode Active"},//Value: 0 = False 
                                                                                 //Value: 1 = True 
{  2 , 1 , "DHAR"     ,   0 ,   0 ,   0 ,   0 , "Daylight Harvesting Active"},//Value: 0 = False 
                                                                              //Value: 1 = True 
{  3 , 2 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy State"},//Value: 0 = Not occupied 
                                                                   //Value: 1 = Occupied 
                                                                   //Value: 2 = Unknown 
{  5 , 1 , "SREAS"    ,   0 ,   0 ,   0 ,   0 , "Status Tx reason"},//Value: 0 = Other 
                                                                    //Value: 1 = Heartbeat 
{  6 , 2 , "MI"       ,   0 ,   0 ,   0 ,   0 , "MsgId"},//Value: 1 = LED Status RGB 
{  8 , 8 , "DLVLR"    ,   0 ,   0 ,   0 ,   0 , "Current Dim Level LED R"},
{ 16 , 8 , "DLVLG"    ,   0 ,   0 ,   0 ,   0 , "Current Dim Level LED G"},
{ 24 , 8 , "DLVLB"    ,   0 ,   0 ,   0 ,   0 , "Current Dim Level LED B"},
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
// function number :0x50 : Heat Recovery Ventilation 
// function type :0x00 : Type 0x00 
//{ 0xD2 , 0x50 , 0x00 , "Heat Recovery Ventilation                                                        ",  "Type 0x00                                                                        " },

// TITLE:Telegram Definition: 'Ventilation Remote Transmission Request Message'
T_DATAFIELD D25000_CMD1 [] = {
{  0 , 3 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 0 = Ventilation remote transmission request 
                                                                //Value: 1 = Ventilation control 
                                                                //Value: 2 = Ventilation basic status 
                                                                //Value: 3 = Ventilation extended status 
                                                                //Value: 4 = Reserved 
                                                                //Value: 5 = Reserved 
                                                                //Value: 6 = Reserved 
                                                                //Value: 7 = Reserved 
{  5 , 3 , "RMT"      ,   0 ,   0 ,   0 ,   0 , "Requested Message Type"},//Value: 0 = Ventilation basic status 
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
T_DATAFIELD D25000_CMD2 [] = {
{  0 , 3 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 0 = Ventilation remote transmission request 
                                                                //Value: 1 = Ventilation control 
                                                                //Value: 2 = Ventilation basic status 
                                                                //Value: 3 = Ventilation extended status 
                                                                //Value: 4 = Reserved 
                                                                //Value: 5 = Reserved 
                                                                //Value: 6 = Reserved 
                                                                //Value: 7 = Reserved 
{  4 , 4 , "DOMC"     ,   0 ,   0 ,   0 ,   0 , "Direct Operation Mode Control"},//Value: 0 = Off 
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
{  8 , 2 , "OMC"      ,   0 ,   0 ,   0 ,   0 , "Operation Mode Control"},//Value: 0 = no action 
                                                                          //Value: 1 = select next operation mode (edge-trigger) 
                                                                          //Value: 2 = select previous operation mode (edge-trigger) 
                                                                          //Value: 3 = Reserved 
{ 10 , 2 , "HBC"      ,   0 ,   0 ,   0 ,   0 , "Heat Exchanger Bypass Control"},//Value: 0 = no action 
                                                                                 //Value: 1 = close bypass (edge-trigger) 
                                                                                 //Value: 2 = open bypass (edge-trigger) 
                                                                                 //Value: 3 = Reserved 
{ 16 , 1 , "TOMC"     ,   0 ,   0 ,   0 ,   0 , "Timer Operation Mode Control"},//Value: 0 = no action 
                                                                                //Value: 1 = start timer operation mode (edge-trigger) 
{ 17 , 7 , "COT"      ,   0 ,   0 ,   0 ,   0 , "CO2 Threshold"},
{ 25 , 7 , "HT"       ,   0 ,   0 ,   0 ,   0 , "Humidity Threshold"},
{ 33 , 7 , "AQT"      ,   0 ,   0 ,   0 ,   0 , "Air Quality Threshold"},
{ 41 , 7 , "RTT"      ,   0 ,   0 ,   0 ,   0 , "Room temperature threshold"},
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
T_DATAFIELD D25000_CMD3 [] = {
{  0 , 3 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 0 = Ventilation remote transmission request 
                                                                //Value: 1 = Ventilation control 
                                                                //Value: 2 = Ventilation basic status 
                                                                //Value: 3 = Ventilation extended status 
                                                                //Value: 4 = Reserved 
                                                                //Value: 5 = Reserved 
                                                                //Value: 6 = Reserved 
                                                                //Value: 7 = Reserved 
{  4 , 4 , "OMS"      ,   0 ,   0 ,   0 ,   0 , "Operation Mode Status"},//Value: 0 = Off 
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
{ 12 , 1 , "SMS"      ,   0 ,   0 ,   0 ,   0 , "Safety Mode Status"},//Value: 0 = fireplace safety mode disabled 
                                                                      //Value: 1 = fireplace safety mode enabled 
{ 13 , 1 , "HBS"      ,   0 ,   0 ,   0 ,   0 , "Heat Exchanger Bypass Status"},//Value: 0 = bypass closed (heatrecovery active) 
                                                                                //Value: 1 = bypass opened (heatrecovery inactive) 
{ 14 , 1 , "SFP"      ,   0 ,   0 ,   0 ,   0 , "Supply Air Flap Position"},//Value: 0 = supply air flap closed 
                                                                            //Value: 1 = supply air flap opened 
{ 15 , 1 , "EFP"      ,   0 ,   0 ,   0 ,   0 , "Exhaust Air Flap Position"},//Value: 0 = exhaust air flap closed 
                                                                             //Value: 1 = exhaust air flap opened 
{ 16 , 1 , "DMS"      ,   0 ,   0 ,   0 ,   0 , "Defrost Mode Status"},//Value: 0 = defrost mode inactive 
                                                                       //Value: 1 = defrost mode active 
{ 17 , 1 , "CPS"      ,   0 ,   0 ,   0 ,   0 , "Cooling Protection Status"},//Value: 0 = cooling protection mode inactive 
                                                                             //Value: 1 = cooling protection mode active 
{ 18 , 1 , "OHS"      ,   0 ,   0 ,   0 ,   0 , "Outdoor Air Heater Status"},//Value: 0 = inactive 
                                                                             //Value: 1 = active 
{ 19 , 1 , "SHS"      ,   0 ,   0 ,   0 ,   0 , "Supply Air Heater Status"},//Value: 0 = inactive 
                                                                            //Value: 1 = active 
{ 20 , 1 , "DHS"      ,   0 ,   0 ,   0 ,   0 , "Drain Heater Status"},//Value: 0 = inactive 
                                                                       //Value: 1 = active 
{ 21 , 1 , "TOMS"     ,   0 ,   0 ,   0 ,   0 , "Timer Operation Mode Status"},//Value: 0 = timer operation mode inactive 
                                                                               //Value: 1 = timer operation mode active 
{ 22 , 1 , "FMS"      ,   0 ,   0 ,   0 ,   0 , "Filter Maintenance Status"},//Value: 0 = Maintenance not required 
                                                                             //Value: 1 = Maintenance required 
{ 23 , 1 , "WTPS"     ,   0 ,   0 ,   0 ,   0 , "Weekly Timer Program Status"},//Value: 0 = weekly timer program disabled or not configured 
                                                                               //Value: 1 = weekly timer program active 
{ 24 , 1 , "RTCS"     ,   0 ,   0 ,   0 ,   0 , "Room Temperature Control Status"},//Value: 0 = room temperature control inactive 
                                                                                   //Value: 1 = room temperature control active 
{ 25 , 7 , "AQS1"     ,   0 ,   0 ,   0 ,   0 , "Air Quality Sensor 1"},
{ 32 , 1 , "MSS"      ,   0 ,   0 ,   0 ,   0 , "Master/Slave Configuration Status"},//Value: 0 = Master 
                                                                                     //Value: 1 = Slave 
{ 33 , 7 , "AQS2"     ,   0 ,   0 ,   0 ,   0 , "Air Quality Sensor 2"},
{ 40 , 7 , "OUTT"     , -64 ,  63 , -64 ,  63 , "Outdoor Air Temperature"},
{ 47 , 7 , "SPLYT"    , -64 ,  63 , -64 ,  63 , "Supply Air Temperature"},
{ 54 , 7 , "INT"      , -64 ,  63 , -64 ,  63 , "Indoor Air Temperature"},
{ 61 , 7 , "EXHT"     , -64 ,  63 , -64 ,  63 , "Exhaust Air Temperature"},
{ 68 ,10 , "SPLYFF"   ,   0 , 1023 ,   0 , 1023 , "Supply Air Fan Air Flow Rate"},
{ 78 ,10 , "EXHFF"    ,   0 , 1023 ,   0 , 1023 , "Exhaust Air Fan Air Flow Rate"},
{ 88 ,12 , "SPLYFS"   ,   0 , 4095 ,   0 , 4095 , "Supply Fan Speed"},
{ 100 ,12 , "EXHFS"    ,   0 , 4095 ,   0 , 4095 , "Exhaust Fan Speed"},
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
T_DATAFIELD D25000_CMD4 [] = {
{  0 , 3 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 0 = Ventilation remote transmission request 
                                                                //Value: 1 = Ventilation control 
                                                                //Value: 2 = Ventilation basic status 
                                                                //Value: 3 = Ventilation extended status 
                                                                //Value: 4 = Reserved 
                                                                //Value: 5 = Reserved 
                                                                //Value: 6 = Reserved 
                                                                //Value: 7 = Reserved 
{  4 ,12 , "SVI"      ,   0 , 4095 ,   0 , 4095 , "Software Version Info"},
{ 16 ,16 , "OHC"      ,   0 , 196605 ,   0 , 589815 , "Operation Hours Counter"},
{ 32 ,16 , "DIS"      ,   0 ,   0 ,   0 ,   0 , "Digital Input 0...15 Status"},//Value: 0x0001 = input no. 00 active 
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
{ 48 ,16 , "DOS"      ,   0 ,   0 ,   0 ,   0 , "Digital Output 0...15 Status"},//Value: 0x0001 = output no. 00 active 
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
{ 64 ,16 , "IMS"      ,   0 ,   0 ,   0 ,   0 , "Info Message 0...15 Status"},//Value: 0x0001 = info no. 00 active 
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
{ 80 ,32 , "FS"       ,   0 ,   0 ,   0 ,   0 , "Fault 0...31 Status"},//Value: 0x00000001 = fault no. 00 active 
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
// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2 , 0x50 , 0x01 , "Heat Recovery Ventilation                                                        ",  "Type 0x01 (description: see table)                                               " },
// function number :0xA0 : Standard Valve 
// function type :0x01 : Valve Control 
//{ 0xD2 , 0xA0 , 0x01 , "Standard Valve                                                                   ",  "Valve Control                                                                    " },

// TITLE:
T_DATAFIELD D2A001_CMD1 [] = {
{  6 , 2 , "FDB"      ,   0 ,   0 ,   0 ,   0 , "Feedback"},//Value: 0b00 = Not defined 
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
T_DATAFIELD D2A001_CMD2 [] = {
{  6 , 2 , "REQ"      ,   0 ,   0 ,   0 ,   0 , "Request"},//Value: 0b00 = No change (request of feedback) 
                                                           //Value: 0b01 = Request to close valve 
                                                           //Value: 0b10 = Request to open valve 
                                                           //Value: 0b11 = Request to close valve 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define D2A001_CMD2_REQ        0
#define D2A001_CMD2_NB_DATA    1
#define D2A001_CMD2_DATA_SIZE  1
