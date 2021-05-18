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

T_EEP_CASE_ D20001_CASE1 = { D20001_CMD1,"Message type A / ID 01 (First User Action on RCP)","Direction: Sensor -> Gateway" } ;// Index of field
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

T_EEP_CASE_ D20001_CASE2 = { D20001_CMD2,"Message Type B / ID 02 (Display Content)","Direction: Gateway -> Sensor" } ;// Index of field
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

T_EEP_CASE_ D20001_CASE3 = { D20001_CMD3,"Message Type C / ID 03 (Repeated User Action on RCP)","Direction: Sensor -> Gateway" } ;// Index of field
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

T_EEP_CASE_ D20001_CASE4 = { D20001_CMD4,"Message Type D / ID 04 (Measurement Result)","Direction: Sensor -> Gateway" } ;// Index of field
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

T_EEP_CASE_ D20001_CASE5 = { D20001_CMD5,"Message Type E / ID 05 (Sensor Configuration)","Direction: Gateway -> Sensor" } ;// Index of field
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

T_EEP_CASE_* D20001_CASES [] = {
&D20001_CASE1 ,
&D20001_CASE2 ,
&D20001_CASE3 ,
&D20001_CASE4 ,
&D20001_CASE5 ,
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

T_EEP_CASE_ D20100_CASE1 = { D20100_CMD1,"CMD 0x1 - Actuator Set Output","This message is sent to an actuator. It controls switching / dimming of one or all channels of an actuator." } ;// Index of field
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

T_EEP_CASE_ D20100_CASE2 = { D20100_CMD2,"CMD 0x2 - Actuator Set Local","This message is sent to an actuator. It configures one or all channels of an actuator." } ;// Index of field
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

T_EEP_CASE_ D20100_CASE3 = { D20100_CMD3,"CMD 0x3 - Actuator Status Query","This message is sent to an actuator. It requests the status of one or all channels of an actuator." } ;// Index of field
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

T_EEP_CASE_ D20100_CASE4 = { D20100_CMD4,"CMD 0x4 - Actuator Status Response","This message is sent by an actuator if one of the following events occurs:" } ;// Index of field
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

T_EEP_CASE_ D20100_CASE5 = { D20100_CMD5,"CMD 0x5 - Actuator Set Measurement","The command defines values at offset 32 and at offset 40 which are the limits for the transmission periodicity of messages. MIT must not be set to 0, MAT >= MIT." } ;// Index of field
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

T_EEP_CASE_ D20100_CASE6 = { D20100_CMD6,"CMD 0x6 - Actuator Measurement Query","This message is sent to an actuator. The actuator replies with an Actuator Measurement Response message." } ;// Index of field
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

T_EEP_CASE_ D20100_CASE7 = { D20100_CMD7,"CMD 0x7 - Actuator Measurement Response","This message is sent by an actuator if one of the following events occurs:" } ;// Index of field
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

T_EEP_CASE_ D20100_CASE8 = { D20100_CMD8,"CMD 0x8 - Actuator Set Pilot Wire Mode","" } ;// Index of field
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

T_EEP_CASE_ D20100_CASE9 = { D20100_CMD9,"CMD 0x9 - Actuator Pilot Wire Mode Query","" } ;// Index of field
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

T_EEP_CASE_ D20100_CASE10 = { D20100_CMD10,"CMD 0xA - Actuator Pilot Wire Mode Response","" } ;// Index of field
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

T_EEP_CASE_ D20100_CASE11 = { D20100_CMD11,"CMD 0xB - Actuator Set External Interface Settings","" } ;// Index of field
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

T_EEP_CASE_ D20100_CASE12 = { D20100_CMD12,"CMD 0xC - Actuator External Interface Settings Query","" } ;// Index of field
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

T_EEP_CASE_ D20100_CASE13 = { D20100_CMD13,"CMD 0xD - Actuator External Interface Settings Response","" } ;// Index of field
#define D20100_CMD13_CMD        0
#define D20100_CMD13_I_O        1
#define D20100_CMD13_AOT        2
#define D20100_CMD13_DOT        3
#define D20100_CMD13_EBM        4
#define D20100_CMD13_SWT        5
#define D20100_CMD13_NB_DATA    6
#define D20100_CMD13_DATA_SIZE  7

T_EEP_CASE_* D20100_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2, 0x01, 0x01, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x01 (description: see table)                                              " },

T_EEP_CASE_* D20101_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x02 : Type 0x02 (description: see table) 
//{ 0xD2, 0x01, 0x02, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x02 (description: see table)                                              " },

T_EEP_CASE_* D20102_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x03 : Type 0x03 (description: see table) 
//{ 0xD2, 0x01, 0x03, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x03 (description: see table)                                              " },

T_EEP_CASE_* D20103_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x04 : Type 0x04 (description: see table) 
//{ 0xD2, 0x01, 0x04, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x04 (description: see table)                                              " },

T_EEP_CASE_* D20104_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x05 : Type 0x05 (description: see table) 
//{ 0xD2, 0x01, 0x05, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x05 (description: see table)                                              " },

T_EEP_CASE_* D20105_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x06 : Type 0x06 (description: see table) 
//{ 0xD2, 0x01, 0x06, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x06 (description: see table)                                              " },

T_EEP_CASE_* D20106_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x07 : Type 0x07 (description: see table) 
//{ 0xD2, 0x01, 0x07, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x07 (description: see table)                                              " },

T_EEP_CASE_* D20107_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x08 : Type 0x08 (description: see table) 
//{ 0xD2, 0x01, 0x08, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x08 (description: see table)                                              " },

T_EEP_CASE_* D20108_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x09 : Type 0x09 (description: see table) 
//{ 0xD2, 0x01, 0x09, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x09 (description: see table)                                              " },

T_EEP_CASE_* D20109_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x0A : Type 0x0A (description: see table) 
//{ 0xD2, 0x01, 0x0A, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0A (description: see table)                                              " },

T_EEP_CASE_* D2010A_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x0B : Type 0x0B (description: see table) 
//{ 0xD2, 0x01, 0x0B, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0B (description: see table)                                              " },

T_EEP_CASE_* D2010B_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x0C : Type 0x0C 
//{ 0xD2, 0x01, 0x0C, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0C                                                                       " },

T_EEP_CASE_* D2010C_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x0D : Type 0x0D 
//{ 0xD2, 0x01, 0x0D, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0D                                                                       " },

T_EEP_CASE_* D2010D_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x0E : Type 0x0E 
//{ 0xD2, 0x01, 0x0E, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0E                                                                       " },

T_EEP_CASE_* D2010E_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x0F : Type 0x0F 
//{ 0xD2, 0x01, 0x0F, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0F                                                                       " },

T_EEP_CASE_* D2010F_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x10 : Type 0x10 (description: see table) 
//{ 0xD2, 0x01, 0x10, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x10 (description: see table)                                              " },

T_EEP_CASE_* D20110_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x11 : Type 0x11 (description: see table) 
//{ 0xD2, 0x01, 0x11, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x11 (description: see table)                                              " },

T_EEP_CASE_* D20111_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
{0 }
};

// function type :0x12 : Type 0x12 
//{ 0xD2, 0x01, 0x12, "Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x12                                                                       " },

T_EEP_CASE_* D20112_CASES [] = {
&D20100_CASE1 ,
&D20100_CASE2 ,
&D20100_CASE3 ,
&D20100_CASE4 ,
&D20100_CASE5 ,
&D20100_CASE6 ,
&D20100_CASE7 ,
&D20100_CASE8 ,
&D20100_CASE9 ,
&D20100_CASE10 ,
&D20100_CASE11 ,
&D20100_CASE12 ,
&D20100_CASE13 ,
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

T_EEP_CASE_ D20200_CASE1 = { D20200_CMD1,"CMD 0x1 - Sensor Measurement","This message is sent by a sensor if one of the following events occurs:" } ;// Index of field
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

T_EEP_CASE_ D20200_CASE2 = { D20200_CMD2,"CMD 0x2 - Sensor Test/Trigger","This message is sent to a sensor. It causes the sensor to enter self-test mode or trigger an alarm (if supported)." } ;// Index of field
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

T_EEP_CASE_ D20200_CASE3 = { D20200_CMD3,"CMD 0x3 - Actuator Set Measurement","This message is sent to a sensor. It configures the measurement behaviour of the sensor." } ;// Index of field
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

T_EEP_CASE_ D20200_CASE4 = { D20200_CMD4,"CMD 0x4 - Sensor Measurement Query","This message is sent to a sensor. The sensor replies with an Sensor Measurement message." } ;// Index of field
#define D20200_CMD4_CMD        0
#define D20200_CMD4_qu         1
#define D20200_CMD4_NB_DATA    2
#define D20200_CMD4_DATA_SIZE  2

T_EEP_CASE_* D20200_CASES [] = {
&D20200_CASE1 ,
&D20200_CASE2 ,
&D20200_CASE3 ,
&D20200_CASE4 ,
{0 }
};

// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2, 0x02, 0x01, "Sensors for Temperature, Illumination, Occupancy And Smoke                      " , "Type 0x01 (description: see table)                                              " },

T_EEP_CASE_* D20201_CASES [] = {
&D20200_CASE1 ,
&D20200_CASE2 ,
&D20200_CASE3 ,
&D20200_CASE4 ,
{0 }
};

// function type :0x02 : Type 0x02 (description: see table) 
//{ 0xD2, 0x02, 0x02, "Sensors for Temperature, Illumination, Occupancy And Smoke                      " , "Type 0x02 (description: see table)                                              " },

T_EEP_CASE_* D20202_CASES [] = {
&D20200_CASE1 ,
&D20200_CASE2 ,
&D20200_CASE3 ,
&D20200_CASE4 ,
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

T_EEP_CASE_ D20300_CASE1 = { D20300_CMD1,"","The encrypted telegram has the R-ORG 0x30. The payload (4 bits) is encrypted. That telegram can be repeated. After decryption and the authentication of the CMAC, the telegram turns into a non-encrypted EnOcean telegram with the R-ORG 0x32. The payload will be expanded to 8 bits (4 MSB set to zero) and can then be interpreted as described in the telegram definition table." } ;// Index of field
#define D20300_CMD1_RI2        0
#define D20300_CMD1_NB_DATA    1
#define D20300_CMD1_DATA_SIZE  1

T_EEP_CASE_* D20300_CASES [] = {
&D20300_CASE1 ,
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

T_EEP_CASE_ D20310_CASE1 = { D20310_CMD1,"","" } ;// Index of field
#define D20310_CMD1_WIN        0
#define D20310_CMD1_NB_DATA    1
#define D20310_CMD1_DATA_SIZE  1

T_EEP_CASE_* D20310_CASES [] = {
&D20310_CASE1 ,
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

T_EEP_CASE_ D20320_CASE1 = { D20320_CMD1,"","" } ;// Index of field
#define D20320_CMD1_ES         0
#define D20320_CMD1_NB_DATA    1
#define D20320_CMD1_DATA_SIZE  1

T_EEP_CASE_* D20320_CASES [] = {
&D20320_CASE1 ,
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

T_EEP_CASE_ D20400_CASE1 = { D20400_CMD1,"","The manufacturer will indicate emission rates versus battery autonomy and day night status." } ;// Index of field
#define D20400_CMD1_CO2        0
#define D20400_CMD1_HUM        1
#define D20400_CMD1_TMP        2
#define D20400_CMD1_DN         3
#define D20400_CMD1_BA         4
#define D20400_CMD1_NB_DATA    5
#define D20400_CMD1_DATA_SIZE  4

T_EEP_CASE_* D20400_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2, 0x04, 0x01, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x01 (description: see table)                                              " },

T_EEP_CASE_* D20401_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function type :0x02 : Type 0x02 (description: see table) 
//{ 0xD2, 0x04, 0x02, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x02 (description: see table)                                              " },

T_EEP_CASE_* D20402_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function type :0x03 : Type 0x03 (description: see table) 
//{ 0xD2, 0x04, 0x03, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x03 (description: see table)                                              " },

T_EEP_CASE_* D20403_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function type :0x04 : Type 0x04 (description: see table) 
//{ 0xD2, 0x04, 0x04, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x04 (description: see table)                                              " },

T_EEP_CASE_* D20404_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function type :0x05 : Type 0x05 (description: see table) 
//{ 0xD2, 0x04, 0x05, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x05 (description: see table)                                              " },

T_EEP_CASE_* D20405_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function type :0x06 : Type 0x06 (description: see table) 
//{ 0xD2, 0x04, 0x06, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x06 (description: see table)                                              " },

T_EEP_CASE_* D20406_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function type :0x07 : Type 0x07 (description: see table) 
//{ 0xD2, 0x04, 0x07, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x07 (description: see table)                                              " },

T_EEP_CASE_* D20407_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function type :0x08 : Type 0x08 (description: see table) 
//{ 0xD2, 0x04, 0x08, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x08 (description: see table)                                              " },

T_EEP_CASE_* D20408_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function type :0x09 : Type 0x09 (description: see table) 
//{ 0xD2, 0x04, 0x09, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x09 (description: see table)                                              " },

T_EEP_CASE_* D20409_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function type :0x10 : Type 0x10 (description: see table) 
//{ 0xD2, 0x04, 0x10, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x10 (description: see table)                                              " },

T_EEP_CASE_* D20410_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function type :0x1A : Type 0x1A (description: see table) 
//{ 0xD2, 0x04, 0x1A, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1A (description: see table)                                              " },

T_EEP_CASE_* D2041A_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function type :0x1B : Type 0x1B (description: see table) 
//{ 0xD2, 0x04, 0x1B, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1B (description: see table)                                              " },

T_EEP_CASE_* D2041B_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function type :0x1C : Type 0x1C (description: see table) 
//{ 0xD2, 0x04, 0x1C, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1C (description: see table)                                              " },

T_EEP_CASE_* D2041C_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function type :0x1D : Type 0x1D (description: see table) 
//{ 0xD2, 0x04, 0x1D, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1D (description: see table)                                              " },

T_EEP_CASE_* D2041D_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function type :0x1E : Type 0x1E (description: see table) 
//{ 0xD2, 0x04, 0x1E, "CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1E (description: see table)                                              " },

T_EEP_CASE_* D2041E_CASES [] = {
&D20400_CASE1 ,
{0 }
};

// function number :0x05 : Blinds Control for Position and Angle 
// function type :0x00 : Type 0x00 
//{ 0xD2, 0x05, 0x00, "Blinds Control for Position and Angle                                           " , "Type 0x00                                                                       " },

// TITLE:CMD 1 - Go to Position and Angle
// DESC :Once the actuator is configured either by the  Set Parameters  command or through manual configuration (using local buttons) the position of the blinds can be controlled with this command.
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

T_EEP_CASE_ D20500_CASE1 = { D20500_CMD1,"CMD 1 - Go to Position and Angle","Once the actuator is configured either by the  Set Parameters  command or through manual configuration (using local buttons) the position of the blinds can be controlled with this command." } ;// Index of field
#define D20500_CMD1_POS        0
#define D20500_CMD1_ANG        1
#define D20500_CMD1_REPO       2
#define D20500_CMD1_LOCK       3
#define D20500_CMD1_CHN        4
#define D20500_CMD1_CMD        5
#define D20500_CMD1_NB_DATA    6
#define D20500_CMD1_DATA_SIZE  4

// TITLE:CMD 2 - Stop
// DESC :This command immediately stops a running blind motor. It has no effect when the actuator is in  blockage  or  alarm  mode, i.e. it will not stop an eventual  go up  or  go down  alarm action.
T_DATAFIELD D20500_CMD2 [] = {
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "CHN"      , "Channel"},//Value: 0 = Channel 1 
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 2 = Stop command 
{  0 , 0 , 0          , 0           }
};

T_EEP_CASE_ D20500_CASE2 = { D20500_CMD2,"CMD 2 - Stop","This command immediately stops a running blind motor. It has no effect when the actuator is in  blockage  or  alarm  mode, i.e. it will not stop an eventual  go up  or  go down  alarm action." } ;// Index of field
#define D20500_CMD2_CHN        0
#define D20500_CMD2_CMD        1
#define D20500_CMD2_NB_DATA    2
#define D20500_CMD2_DATA_SIZE  1

// TITLE:CMD 3 - Query Position and Angle
// DESC :This command requests the actuator to return a  reply  command.
T_DATAFIELD D20500_CMD3 [] = {
{  0 , 4 ,     0 ,     0 ,     0 ,     0 , "CHN"      , "Channel"},//Value: 0 = Channel 1 
{  4 , 4 ,     0 ,     0 ,     0 ,     0 , "CMD"      , "Command ID"},//Value: 3 = Query command 
{  0 , 0 , 0          , 0           }
};

T_EEP_CASE_ D20500_CASE3 = { D20500_CMD3,"CMD 3 - Query Position and Angle","This command requests the actuator to return a  reply  command." } ;// Index of field
#define D20500_CMD3_CHN        0
#define D20500_CMD3_CMD        1
#define D20500_CMD3_NB_DATA    2
#define D20500_CMD3_DATA_SIZE  1

// TITLE:CMD 4 - Reply Position and Angle
// DESC :Either upon request ( Query  command) or after an internal trigger (see EEP Properties) the actuator sends this command to inform about its current state.
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

T_EEP_CASE_ D20500_CASE4 = { D20500_CMD4,"CMD 4 - Reply Position and Angle","Either upon request ( Query  command) or after an internal trigger (see EEP Properties) the actuator sends this command to inform about its current state." } ;// Index of field
#define D20500_CMD4_POS        0
#define D20500_CMD4_ANG        1
#define D20500_CMD4_LOCK       2
#define D20500_CMD4_CHN        3
#define D20500_CMD4_CMD        4
#define D20500_CMD4_NB_DATA    5
#define D20500_CMD4_DATA_SIZE  4

// TITLE:CMD 5 - Set parameters
// DESC :This command sets one or multiple configuration parameters of the actuator. When a parameter value is set to  -> no change  this parameter will not be modified. The VERT and ROT parameters describe the duration needed by the motor for a full run of the blind, or for a complete turn of the slats, respectively. They have to be measured on site and assigned to the actuator.
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

T_EEP_CASE_ D20500_CASE5 = { D20500_CMD5,"CMD 5 - Set parameters","This command sets one or multiple configuration parameters of the actuator. When a parameter value is set to  -> no change  this parameter will not be modified. The VERT and ROT parameters describe the duration needed by the motor for a full run of the blind, or for a complete turn of the slats, respectively. They have to be measured on site and assigned to the actuator." } ;// Index of field
#define D20500_CMD5_VERT       0
#define D20500_CMD5_ROT        1
#define D20500_CMD5_AA         2
#define D20500_CMD5_CHN        3
#define D20500_CMD5_CMD        4
#define D20500_CMD5_NB_DATA    5
#define D20500_CMD5_DATA_SIZE  5

T_EEP_CASE_* D20500_CASES [] = {
&D20500_CASE1 ,
&D20500_CASE2 ,
&D20500_CASE3 ,
&D20500_CASE4 ,
&D20500_CASE5 ,
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

T_EEP_CASE_ D20601_CASE1 = { D20601_CMD1,"Message Type 0x00: Sensor Values","" } ;// Index of field
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

T_EEP_CASE_ D20601_CASE2 = { D20601_CMD2,"Message Type 0x10: Configuration Report","" } ;// Index of field
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

T_EEP_CASE_ D20601_CASE3 = { D20601_CMD3,"Message Type 0x20: Log Data 01","" } ;// Index of field
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

T_EEP_CASE_ D20601_CASE4 = { D20601_CMD4,"Message Type 0x21: Log Data 02","" } ;// Index of field
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

T_EEP_CASE_ D20601_CASE5 = { D20601_CMD5,"Message Type 0x22: Log Data 03","" } ;// Index of field
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

T_EEP_CASE_ D20601_CASE6 = { D20601_CMD6,"Message Type 0x23: Log Data 04","" } ;// Index of field
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

T_EEP_CASE_ D20601_CASE7 = { D20601_CMD7,"Message Type 0x80: Control and Settings","" } ;// Index of field
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

T_EEP_CASE_* D20601_CASES [] = {
&D20601_CASE1 ,
&D20601_CASE2 ,
&D20601_CASE3 ,
&D20601_CASE4 ,
&D20601_CASE5 ,
&D20601_CASE6 ,
&D20601_CASE7 ,
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

T_EEP_CASE_ D21000_CASE1 = { D21000_CMD1,"General Message","" } ;// Index of field
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

T_EEP_CASE_ D21000_CASE2 = { D21000_CMD2,"Data Message","" } ;// Index of field
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

T_EEP_CASE_ D21000_CASE3 = { D21000_CMD3,"Configuration Message","" } ;// Index of field
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

T_EEP_CASE_ D21000_CASE4 = { D21000_CMD4,"Room Control Setup","" } ;// Index of field
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

T_EEP_CASE_ D21000_CASE5 = { D21000_CMD5,"Time Program Setup","" } ;// Index of field
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

T_EEP_CASE_* D21000_CASES [] = {
&D21000_CASE1 ,
&D21000_CASE2 ,
&D21000_CASE3 ,
&D21000_CASE4 ,
&D21000_CASE5 ,
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

T_EEP_CASE_ D21001_CASE1 = { D21001_CMD1,"General Message","" } ;// Index of field
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

T_EEP_CASE_ D21001_CASE2 = { D21001_CMD2,"Data Message","" } ;// Index of field
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

T_EEP_CASE_ D21001_CASE3 = { D21001_CMD3,"Configuration Message","" } ;// Index of field
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

T_EEP_CASE_ D21001_CASE4 = { D21001_CMD4,"Room Control Setup","" } ;// Index of field
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

T_EEP_CASE_ D21001_CASE5 = { D21001_CMD5,"Time Program Setup","" } ;// Index of field
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

T_EEP_CASE_* D21001_CASES [] = {
&D21001_CASE1 ,
&D21001_CASE2 ,
&D21001_CASE3 ,
&D21001_CASE4 ,
&D21001_CASE5 ,
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

T_EEP_CASE_ D21002_CASE1 = { D21002_CMD1,"General Message","" } ;// Index of field
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

T_EEP_CASE_ D21002_CASE2 = { D21002_CMD2,"Data Message","" } ;// Index of field
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

T_EEP_CASE_ D21002_CASE3 = { D21002_CMD3,"Configuration Message","" } ;// Index of field
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

T_EEP_CASE_ D21002_CASE4 = { D21002_CMD4,"Room Control Setup","" } ;// Index of field
#define D21002_CMD4_MID        0
#define D21002_CMD4_MCF        1
#define D21002_CMD4_SPE        2
#define D21002_CMD4_SPC        3
#define D21002_CMD4_SFE        4
#define D21002_CMD4_SFC        5
#define D21002_CMD4_NB_DATA    6
#define D21002_CMD4_DATA_SIZE  6

T_EEP_CASE_* D21002_CASES [] = {
&D21002_CASE1 ,
&D21002_CASE2 ,
&D21002_CASE3 ,
&D21002_CASE4 ,
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

T_EEP_CASE_ D21101_CASE1 = { D21101_CMD1,"Message type A / ID 0 (First switch press after sleep-mode, request new data)","Direction: Sensor -> Gateway" } ;// Index of field
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

T_EEP_CASE_ D21101_CASE2 = { D21101_CMD2,"Message type B / ID 1 (Override device parameter, reply to data request)","Direction: Gateway -> Sensor" } ;// Index of field
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

T_EEP_CASE_ D21101_CASE3 = { D21101_CMD3,"Message type C / ID 2 (Transmit actual data)","Direction: Sensor -> Gateway" } ;// Index of field
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

T_EEP_CASE_* D21101_CASES [] = {
&D21101_CASE1 ,
&D21101_CASE2 ,
&D21101_CASE3 ,
{0 }
};

// function type :0x02 : Type 0x02 (description: see table) 
//{ 0xD2, 0x11, 0x02, "Bidirectional Room Operating Panel                                              " , "Type 0x02 (description: see table)                                              " },

T_EEP_CASE_* D21102_CASES [] = {
&D21101_CASE1 ,
&D21101_CASE2 ,
&D21101_CASE3 ,
{0 }
};

// function type :0x03 : Type 0x03 (description: see table) 
//{ 0xD2, 0x11, 0x03, "Bidirectional Room Operating Panel                                              " , "Type 0x03 (description: see table)                                              " },

T_EEP_CASE_* D21103_CASES [] = {
&D21101_CASE1 ,
&D21101_CASE2 ,
&D21101_CASE3 ,
{0 }
};

// function type :0x04 : Type 0x04 (description: see table) 
//{ 0xD2, 0x11, 0x04, "Bidirectional Room Operating Panel                                              " , "Type 0x04 (description: see table)                                              " },

T_EEP_CASE_* D21104_CASES [] = {
&D21101_CASE1 ,
&D21101_CASE2 ,
&D21101_CASE3 ,
{0 }
};

// function type :0x05 : Type 0x05 (description: see table) 
//{ 0xD2, 0x11, 0x05, "Bidirectional Room Operating Panel                                              " , "Type 0x05 (description: see table)                                              " },

T_EEP_CASE_* D21105_CASES [] = {
&D21101_CASE1 ,
&D21101_CASE2 ,
&D21101_CASE3 ,
{0 }
};

// function type :0x06 : Type 0x06 (description: see table) 
//{ 0xD2, 0x11, 0x06, "Bidirectional Room Operating Panel                                              " , "Type 0x06 (description: see table)                                              " },

T_EEP_CASE_* D21106_CASES [] = {
&D21101_CASE1 ,
&D21101_CASE2 ,
&D21101_CASE3 ,
{0 }
};

// function type :0x07 : Type 0x07 (description: see table) 
//{ 0xD2, 0x11, 0x07, "Bidirectional Room Operating Panel                                              " , "Type 0x07 (description: see table)                                              " },

T_EEP_CASE_* D21107_CASES [] = {
&D21101_CASE1 ,
&D21101_CASE2 ,
&D21101_CASE3 ,
{0 }
};

// function type :0x08 : Type 0x08 (description: see table) 
//{ 0xD2, 0x11, 0x08, "Bidirectional Room Operating Panel                                              " , "Type 0x08 (description: see table)                                              " },

T_EEP_CASE_* D21108_CASES [] = {
&D21101_CASE1 ,
&D21101_CASE2 ,
&D21101_CASE3 ,
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

T_EEP_CASE_ D22000_CASE1 = { D22000_CMD1,"Telegram Definition : 'Fan Control Message'","* Devices with discrete fan speed levels instead of a continuous fan speed range should divide the full range linearly and match values beside those discrete levels to the next lower fan speed level." } ;// Index of field
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

T_EEP_CASE_ D22000_CASE2 = { D22000_CMD2,"Telegram Definition : 'Fan Status Message'","" } ;// Index of field
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

T_EEP_CASE_* D22000_CASES [] = {
&D22000_CASE1 ,
&D22000_CASE2 ,
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

T_EEP_CASE_ D22001_CASE1 = { D22001_CMD1,"Telegram Definition : 'Fan Control Message'","* Devices with discrete fan speed levels instead of a continuous fan speed range should divide the full range linearly and match values beside those discrete levels to the next lower fan speed level." } ;// Index of field
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

T_EEP_CASE_ D22001_CASE2 = { D22001_CMD2,"Telegram Definition : 'Fan Status Message'","" } ;// Index of field
#define D22001_CMD2_OMS        0
#define D22001_CMD2_MT         1
#define D22001_CMD2_RSR        2
#define D22001_CMD2_RSS        3
#define D22001_CMD2_FSS        4
#define D22001_CMD2_NB_DATA    5
#define D22001_CMD2_DATA_SIZE  4

T_EEP_CASE_* D22001_CASES [] = {
&D22001_CASE1 ,
&D22001_CASE2 ,
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

T_EEP_CASE_ D22002_CASE1 = { D22002_CMD1,"Telegram Definition : 'Fan Control Message'","* Devices with discrete fan speed levels instead of a continuous fan speed range should divide the full range linearly and match values beside those discrete levels to the next lower fan speed level." } ;// Index of field
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

T_EEP_CASE_ D22002_CASE2 = { D22002_CMD2,"Telegram Definition : 'Fan Status Message'","" } ;// Index of field
#define D22002_CMD2_MT         0
#define D22002_CMD2_HCS        1
#define D22002_CMD2_RSR        2
#define D22002_CMD2_RSS        3
#define D22002_CMD2_FSS        4
#define D22002_CMD2_NB_DATA    5
#define D22002_CMD2_DATA_SIZE  4

T_EEP_CASE_* D22002_CASES [] = {
&D22002_CASE1 ,
&D22002_CASE2 ,
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

T_EEP_CASE_ D23000_CASE1 = { D23000_CMD1,"CMD 0x1 - Set heating controls output","This message is sent to a floor heating actuator. It controls the valve position of one channel or of all channels of the floor heating controls." } ;// Index of field
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

T_EEP_CASE_ D23000_CASE2 = { D23000_CMD2,"CMD 0x2 - Heating controls status query","This message is sent to a floor heating actuator. It requests the status of one channel or the status of the global control unit of an actuator." } ;// Index of field
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

T_EEP_CASE_ D23000_CASE3 = { D23000_CMD3,"CMD 0x3 - Heating controls status response / CH = 0...15","This message is sent by a floor heating controls if one of the following events occurs:" } ;// Index of field
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

T_EEP_CASE_ D23000_CASE4 = { D23000_CMD4,"CMD 0x3 - Heating controls status response / CH = 31","If the response is for global floor heating controls unit data (CH = 31):" } ;// Index of field
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

T_EEP_CASE_ D23000_CASE5 = { D23000_CMD5,"CMD 0x6 - Set meter configuration / MBUS (BUS = 1)","This message is sent to a metering device gateway to configure the meter settings for one channel." } ;// Index of field
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

T_EEP_CASE_ D23000_CASE6 = { D23000_CMD6,"CMD 0x6 - Set meter configuration / S0 (BUS = 2)","" } ;// Index of field
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

T_EEP_CASE_ D23000_CASE7 = { D23000_CMD7,"CMD 0x6 - Set meter configuration / D0 (BUS = 3)","" } ;// Index of field
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

T_EEP_CASE_ D23000_CASE8 = { D23000_CMD8,"CMD 0x7 - Meter Status Query","This message is sent to a metering device gateway to query the status of a meter." } ;// Index of field
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

T_EEP_CASE_ D23000_CASE9 = { D23000_CMD9,"CMD 0x8 - Meter reading report / status response","This message is sent by a metering device gateway to report the meter values for each configured channel. It is sent if one of the following events occurs:" } ;// Index of field
#define D23000_CMD9_MSTAT      0
#define D23000_CMD9_CMD        1
#define D23000_CMD9_BUS        2
#define D23000_CMD9_MCH        3
#define D23000_CMD9_VSEL       4
#define D23000_CMD9_VUNIT      5
#define D23000_CMD9_VAL        6
#define D23000_CMD9_NB_DATA    7
#define D23000_CMD9_DATA_SIZE  7

T_EEP_CASE_* D23000_CASES [] = {
&D23000_CASE1 ,
&D23000_CASE2 ,
&D23000_CASE3 ,
&D23000_CASE4 ,
&D23000_CASE5 ,
&D23000_CASE6 ,
&D23000_CASE7 ,
&D23000_CASE8 ,
&D23000_CASE9 ,
{0 }
};

// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2, 0x30, 0x01, "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x01 (description: see table)                                              " },

T_EEP_CASE_* D23001_CASES [] = {
&D23000_CASE1 ,
&D23000_CASE2 ,
&D23000_CASE3 ,
&D23000_CASE4 ,
&D23000_CASE5 ,
&D23000_CASE6 ,
&D23000_CASE7 ,
&D23000_CASE8 ,
&D23000_CASE9 ,
{0 }
};

// function type :0x02 : Type 0x02 (description: see table) 
//{ 0xD2, 0x30, 0x02, "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x02 (description: see table)                                              " },

T_EEP_CASE_* D23002_CASES [] = {
&D23000_CASE1 ,
&D23000_CASE2 ,
&D23000_CASE3 ,
&D23000_CASE4 ,
&D23000_CASE5 ,
&D23000_CASE6 ,
&D23000_CASE7 ,
&D23000_CASE8 ,
&D23000_CASE9 ,
{0 }
};

// function type :0x03 : Type 0x03 (description: see table) 
//{ 0xD2, 0x30, 0x03, "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x03 (description: see table)                                              " },

T_EEP_CASE_* D23003_CASES [] = {
&D23000_CASE1 ,
&D23000_CASE2 ,
&D23000_CASE3 ,
&D23000_CASE4 ,
&D23000_CASE5 ,
&D23000_CASE6 ,
&D23000_CASE7 ,
&D23000_CASE8 ,
&D23000_CASE9 ,
{0 }
};

// function type :0x04 : Type 0x04 (description: see table) 
//{ 0xD2, 0x30, 0x04, "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x04 (description: see table)                                              " },

T_EEP_CASE_* D23004_CASES [] = {
&D23000_CASE1 ,
&D23000_CASE2 ,
&D23000_CASE3 ,
&D23000_CASE4 ,
&D23000_CASE5 ,
&D23000_CASE6 ,
&D23000_CASE7 ,
&D23000_CASE8 ,
&D23000_CASE9 ,
{0 }
};

// function type :0x05 : Type 0x05 (description: see table) 
//{ 0xD2, 0x30, 0x05, "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x05 (description: see table)                                              " },

T_EEP_CASE_* D23005_CASES [] = {
&D23000_CASE1 ,
&D23000_CASE2 ,
&D23000_CASE3 ,
&D23000_CASE4 ,
&D23000_CASE5 ,
&D23000_CASE6 ,
&D23000_CASE7 ,
&D23000_CASE8 ,
&D23000_CASE9 ,
{0 }
};

// function type :0x06 : Type 0x06 (description: see table) 
//{ 0xD2, 0x30, 0x06, "Floor Heating Controls and Automated Meter Reading                              " , "Type 0x06 (description: see table)                                              " },

T_EEP_CASE_* D23006_CASES [] = {
&D23000_CASE1 ,
&D23000_CASE2 ,
&D23000_CASE3 ,
&D23000_CASE4 ,
&D23000_CASE5 ,
&D23000_CASE6 ,
&D23000_CASE7 ,
&D23000_CASE8 ,
&D23000_CASE9 ,
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

T_EEP_CASE_ D23100_CASE1 = { D23100_CMD1,"CMD 0x6 - Set meter configuration / MBUS (BUS = 1)","This message is sent to a metering device gateway to configure the meter settings for one channel." } ;// Index of field
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

T_EEP_CASE_ D23100_CASE2 = { D23100_CMD2,"CMD 0x6 - Set meter configuration / S0 (BUS = 2)","" } ;// Index of field
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

T_EEP_CASE_ D23100_CASE3 = { D23100_CMD3,"CMD 0x6 - Set meter configuration / D0 (BUS = 3)","" } ;// Index of field
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

T_EEP_CASE_ D23100_CASE4 = { D23100_CMD4,"CMD 0x7 - Meter Status Query","This message is sent to a metering device gateway to query the status of a meter." } ;// Index of field
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

T_EEP_CASE_ D23100_CASE5 = { D23100_CMD5,"CMD 0x8 - Meter reading report / status response","This message is sent by a metering device gateway to report the meter values for each configured channel. It is sent if one of the following events occurs:" } ;// Index of field
#define D23100_CMD5_MSTAT      0
#define D23100_CMD5_CMD        1
#define D23100_CMD5_BUS        2
#define D23100_CMD5_MCH        3
#define D23100_CMD5_VSEL       4
#define D23100_CMD5_VUNIT      5
#define D23100_CMD5_VAL        6
#define D23100_CMD5_NB_DATA    7
#define D23100_CMD5_DATA_SIZE  7

T_EEP_CASE_* D23100_CASES [] = {
&D23100_CASE1 ,
&D23100_CASE2 ,
&D23100_CASE3 ,
&D23100_CASE4 ,
&D23100_CASE5 ,
{0 }
};

// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2, 0x31, 0x01, "Automated Meter Reading Gateway                                                 " , "Type 0x01 (description: see table)                                              " },

T_EEP_CASE_* D23101_CASES [] = {
&D23100_CASE1 ,
&D23100_CASE2 ,
&D23100_CASE3 ,
&D23100_CASE4 ,
&D23100_CASE5 ,
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

T_EEP_CASE_ D23200_CASE1 = { D23200_CMD1,"","" } ;// Index of field
#define D23200_CMD1_PF         0
#define D23200_CMD1_DIV        1
#define D23200_CMD1_CH1        2
#define D23200_CMD1_NB_DATA    3
#define D23200_CMD1_DATA_SIZE  3

T_EEP_CASE_* D23200_CASES [] = {
&D23200_CASE1 ,
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

T_EEP_CASE_ D23201_CASE1 = { D23201_CMD1,"","" } ;// Index of field
#define D23201_CMD1_PF         0
#define D23201_CMD1_DIV        1
#define D23201_CMD1_CH1        2
#define D23201_CMD1_CH2        3
#define D23201_CMD1_NB_DATA    4
#define D23201_CMD1_DATA_SIZE  4

T_EEP_CASE_* D23201_CASES [] = {
&D23201_CASE1 ,
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

T_EEP_CASE_ D23202_CASE1 = { D23202_CMD1,"","" } ;// Index of field
#define D23202_CMD1_PF         0
#define D23202_CMD1_DIV        1
#define D23202_CMD1_CH1        2
#define D23202_CMD1_CH2        3
#define D23202_CMD1_CH3        4
#define D23202_CMD1_NB_DATA    5
#define D23202_CMD1_DATA_SIZE  6

T_EEP_CASE_* D23202_CASES [] = {
&D23202_CASE1 ,
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

T_EEP_CASE_ D24000_CASE1 = { D24000_CMD1,"","" } ;// Index of field
#define D24000_CMD1_OUTEN      0
#define D24000_CMD1_DRA        1
#define D24000_CMD1_DHAR       2
#define D24000_CMD1_OCC        3
#define D24000_CMD1_SREAS      4
#define D24000_CMD1_MI         5
#define D24000_CMD1_DLVL       6
#define D24000_CMD1_NB_DATA    7
#define D24000_CMD1_DATA_SIZE  2

T_EEP_CASE_* D24000_CASES [] = {
&D24000_CASE1 ,
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

T_EEP_CASE_ D24001_CASE1 = { D24001_CMD1,"","" } ;// Index of field
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

T_EEP_CASE_* D24001_CASES [] = {
&D24001_CASE1 ,
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

T_EEP_CASE_ D25000_CASE1 = { D25000_CMD1,"Telegram Definition: 'Ventilation Remote Transmission Request Message'","The 'Ventilation Remote Transmission Request Message' queries a particular status message from the heat-recovery ventilation unit. Thus status messages can be obtained at any time or at a higher update rate than the heartbeat rate, e.g. during commissioning." } ;// Index of field
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

T_EEP_CASE_ D25000_CASE2 = { D25000_CMD2,"Telegram Definition: 'Ventilation Control Message'","The 'Ventilation Control Message' changes the operating mode, the state of several actuators and a subset of control parameters." } ;// Index of field
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

T_EEP_CASE_ D25000_CASE3 = { D25000_CMD3,"Telegram Definition: 'Ventilation Basic Status Message'","The 'Ventilation Basic Status Message' provides current sensor values and internal control status information. It is triggered once at power-on and on particular value changes." } ;// Index of field
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

T_EEP_CASE_ D25000_CASE4 = { D25000_CMD4,"Telegram Definition: 'Ventilation Extended Status Message'","The 'Ventilation Extended Status Message' provides additional information, e.g. active failure information. It is triggered once at power-on and on particular value changes." } ;// Index of field
#define D25000_CMD4_MT         0
#define D25000_CMD4_SVI        1
#define D25000_CMD4_OHC        2
#define D25000_CMD4_DIS        3
#define D25000_CMD4_DOS        4
#define D25000_CMD4_IMS        5
#define D25000_CMD4_FS         6
#define D25000_CMD4_NB_DATA    7
#define D25000_CMD4_DATA_SIZE  14

T_EEP_CASE_* D25000_CASES [] = {
&D25000_CASE1 ,
&D25000_CASE2 ,
&D25000_CASE3 ,
&D25000_CASE4 ,
{0 }
};

// function type :0x01 : Type 0x01 (description: see table) 
//{ 0xD2, 0x50, 0x01, "Heat Recovery Ventilation                                                       " , "Type 0x01 (description: see table)                                              " },

T_EEP_CASE_* D25001_CASES [] = {
&D23100_CASE1 ,
&D23100_CASE2 ,
&D23100_CASE3 ,
&D23100_CASE4 ,
&D23100_CASE5 ,
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

T_EEP_CASE_ D2A001_CASE1 = { D2A001_CMD1,"","" } ;// Index of field
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

T_EEP_CASE_ D2A001_CASE2 = { D2A001_CMD2,"","" } ;// Index of field
#define D2A001_CMD2_REQ        0
#define D2A001_CMD2_NB_DATA    1
#define D2A001_CMD2_DATA_SIZE  1

T_EEP_CASE_* D2A001_CASES [] = {
&D2A001_CASE1 ,
&D2A001_CASE2 ,
{0 }
};


// Profils list 
T_PROFIL_LIST Profillist [] = {
{ 0xD20001, 0xD2 , 0x00, 0x01, D20001_CASES ,  5 ,"Room Control Panel (RCP)                                                        " , "RCP with Temperature Measurement and Display (BI-DIR)                           " },
{ 0xD20100, 0xD2 , 0x01, 0x00, D20100_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x00                                                                       " },
{ 0xD20101, 0xD2 , 0x01, 0x01, D20101_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x01 (description: see table)                                              " },
{ 0xD20102, 0xD2 , 0x01, 0x02, D20102_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x02 (description: see table)                                              " },
{ 0xD20103, 0xD2 , 0x01, 0x03, D20103_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x03 (description: see table)                                              " },
{ 0xD20104, 0xD2 , 0x01, 0x04, D20104_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x04 (description: see table)                                              " },
{ 0xD20105, 0xD2 , 0x01, 0x05, D20105_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x05 (description: see table)                                              " },
{ 0xD20106, 0xD2 , 0x01, 0x06, D20106_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x06 (description: see table)                                              " },
{ 0xD20107, 0xD2 , 0x01, 0x07, D20107_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x07 (description: see table)                                              " },
{ 0xD20108, 0xD2 , 0x01, 0x08, D20108_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x08 (description: see table)                                              " },
{ 0xD20109, 0xD2 , 0x01, 0x09, D20109_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x09 (description: see table)                                              " },
{ 0xD2010A, 0xD2 , 0x01, 0x0A, D2010A_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0A (description: see table)                                              " },
{ 0xD2010B, 0xD2 , 0x01, 0x0B, D2010B_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0B (description: see table)                                              " },
{ 0xD2010C, 0xD2 , 0x01, 0x0C, D2010C_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0C                                                                       " },
{ 0xD2010D, 0xD2 , 0x01, 0x0D, D2010D_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0D                                                                       " },
{ 0xD2010E, 0xD2 , 0x01, 0x0E, D2010E_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0E                                                                       " },
{ 0xD2010F, 0xD2 , 0x01, 0x0F, D2010F_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x0F                                                                       " },
{ 0xD20110, 0xD2 , 0x01, 0x10, D20110_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x10 (description: see table)                                              " },
{ 0xD20111, 0xD2 , 0x01, 0x11, D20111_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x11 (description: see table)                                              " },
{ 0xD20112, 0xD2 , 0x01, 0x12, D20112_CASES , 13 ,"Electronic switches and dimmers with Energy Measurement and Local Control       " , "Type 0x12                                                                       " },
{ 0xD20200, 0xD2 , 0x02, 0x00, D20200_CASES ,  4 ,"Sensors for Temperature, Illumination, Occupancy And Smoke                      " , "Type 0x00                                                                       " },
{ 0xD20201, 0xD2 , 0x02, 0x01, D20201_CASES ,  4 ,"Sensors for Temperature, Illumination, Occupancy And Smoke                      " , "Type 0x01 (description: see table)                                              " },
{ 0xD20202, 0xD2 , 0x02, 0x02, D20202_CASES ,  4 ,"Sensors for Temperature, Illumination, Occupancy And Smoke                      " , "Type 0x02 (description: see table)                                              " },
{ 0xD20300, 0xD2 , 0x03, 0x00, D20300_CASES ,  1 ,"Light, Switching + Blind Control                                                " , "Type 0x00                                                                       " },
{ 0xD20310, 0xD2 , 0x03, 0x10, D20310_CASES ,  1 ,"Light, Switching + Blind Control                                                " , "Mechanical Handle                                                               " },
{ 0xD20320, 0xD2 , 0x03, 0x20, D20320_CASES ,  1 ,"Light, Switching + Blind Control                                                " , "Beacon with Vibration Detection                                                 " },
{ 0xD20400, 0xD2 , 0x04, 0x00, D20400_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x00                                                                       " },
{ 0xD20401, 0xD2 , 0x04, 0x01, D20401_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x01 (description: see table)                                              " },
{ 0xD20402, 0xD2 , 0x04, 0x02, D20402_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x02 (description: see table)                                              " },
{ 0xD20403, 0xD2 , 0x04, 0x03, D20403_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x03 (description: see table)                                              " },
{ 0xD20404, 0xD2 , 0x04, 0x04, D20404_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x04 (description: see table)                                              " },
{ 0xD20405, 0xD2 , 0x04, 0x05, D20405_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x05 (description: see table)                                              " },
{ 0xD20406, 0xD2 , 0x04, 0x06, D20406_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x06 (description: see table)                                              " },
{ 0xD20407, 0xD2 , 0x04, 0x07, D20407_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x07 (description: see table)                                              " },
{ 0xD20408, 0xD2 , 0x04, 0x08, D20408_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x08 (description: see table)                                              " },
{ 0xD20409, 0xD2 , 0x04, 0x09, D20409_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x09 (description: see table)                                              " },
{ 0xD20410, 0xD2 , 0x04, 0x10, D20410_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x10 (description: see table)                                              " },
{ 0xD2041A, 0xD2 , 0x04, 0x1A, D2041A_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1A (description: see table)                                              " },
{ 0xD2041B, 0xD2 , 0x04, 0x1B, D2041B_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1B (description: see table)                                              " },
{ 0xD2041C, 0xD2 , 0x04, 0x1C, D2041C_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1C (description: see table)                                              " },
{ 0xD2041D, 0xD2 , 0x04, 0x1D, D2041D_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1D (description: see table)                                              " },
{ 0xD2041E, 0xD2 , 0x04, 0x1E, D2041E_CASES ,  1 ,"CO2, Humidity, Temperature, Day/Night and Autonomy                              " , "Type 0x1E (description: see table)                                              " },
{ 0xD20500, 0xD2 , 0x05, 0x00, D20500_CASES ,  5 ,"Blinds Control for Position and Angle                                           " , "Type 0x00                                                                       " },
{ 0xD20601, 0xD2 , 0x06, 0x01, D20601_CASES ,  7 ,"Multisensor Window Handle                                                       " , "Alarm, Position Sensor, Vacation Mode, Optional Sensors                         " },
{ 0xD21000, 0xD2 , 0x10, 0x00, D21000_CASES ,  5 ,"Room Control Panels with Temperature & Fan Speed Control, Room Status Information and Time Program" , "Type 0x00                                                                       " },
{ 0xD21001, 0xD2 , 0x10, 0x01, D21001_CASES ,  5 ,"Room Control Panels with Temperature & Fan Speed Control, Room Status Information and Time Program" , "Type 0x01                                                                       " },
{ 0xD21002, 0xD2 , 0x10, 0x02, D21002_CASES ,  4 ,"Room Control Panels with Temperature & Fan Speed Control, Room Status Information and Time Program" , "Type 0x02                                                                       " },
{ 0xD21101, 0xD2 , 0x11, 0x01, D21101_CASES ,  3 ,"Bidirectional Room Operating Panel                                              " , "Type 0x01                                                                       " },
{ 0xD21102, 0xD2 , 0x11, 0x02, D21102_CASES ,  3 ,"Bidirectional Room Operating Panel                                              " , "Type 0x02 (description: see table)                                              " },
{ 0xD21103, 0xD2 , 0x11, 0x03, D21103_CASES ,  3 ,"Bidirectional Room Operating Panel                                              " , "Type 0x03 (description: see table)                                              " },
{ 0xD21104, 0xD2 , 0x11, 0x04, D21104_CASES ,  3 ,"Bidirectional Room Operating Panel                                              " , "Type 0x04 (description: see table)                                              " },
{ 0xD21105, 0xD2 , 0x11, 0x05, D21105_CASES ,  3 ,"Bidirectional Room Operating Panel                                              " , "Type 0x05 (description: see table)                                              " },
{ 0xD21106, 0xD2 , 0x11, 0x06, D21106_CASES ,  3 ,"Bidirectional Room Operating Panel                                              " , "Type 0x06 (description: see table)                                              " },
{ 0xD21107, 0xD2 , 0x11, 0x07, D21107_CASES ,  3 ,"Bidirectional Room Operating Panel                                              " , "Type 0x07 (description: see table)                                              " },
{ 0xD21108, 0xD2 , 0x11, 0x08, D21108_CASES ,  3 ,"Bidirectional Room Operating Panel                                              " , "Type 0x08 (description: see table)                                              " },
{ 0xD22000, 0xD2 , 0x20, 0x00, D22000_CASES ,  2 ,"Fan Control                                                                     " , "Type 0x00                                                                       " },
{ 0xD22001, 0xD2 , 0x20, 0x01, D22001_CASES ,  2 ,"Fan Control                                                                     " , "Type 0x01                                                                       " },
{ 0xD22002, 0xD2 , 0x20, 0x02, D22002_CASES ,  2 ,"Fan Control                                                                     " , "Type 0x02                                                                       " },
{ 0xD23000, 0xD2 , 0x30, 0x00, D23000_CASES ,  9 ,"Floor Heating Controls and Automated Meter Reading                              " , "Type 0x00                                                                       " },
{ 0xD23001, 0xD2 , 0x30, 0x01, D23001_CASES ,  9 ,"Floor Heating Controls and Automated Meter Reading                              " , "Type 0x01 (description: see table)                                              " },
{ 0xD23002, 0xD2 , 0x30, 0x02, D23002_CASES ,  9 ,"Floor Heating Controls and Automated Meter Reading                              " , "Type 0x02 (description: see table)                                              " },
{ 0xD23003, 0xD2 , 0x30, 0x03, D23003_CASES ,  9 ,"Floor Heating Controls and Automated Meter Reading                              " , "Type 0x03 (description: see table)                                              " },
{ 0xD23004, 0xD2 , 0x30, 0x04, D23004_CASES ,  9 ,"Floor Heating Controls and Automated Meter Reading                              " , "Type 0x04 (description: see table)                                              " },
{ 0xD23005, 0xD2 , 0x30, 0x05, D23005_CASES ,  9 ,"Floor Heating Controls and Automated Meter Reading                              " , "Type 0x05 (description: see table)                                              " },
{ 0xD23006, 0xD2 , 0x30, 0x06, D23006_CASES ,  9 ,"Floor Heating Controls and Automated Meter Reading                              " , "Type 0x06 (description: see table)                                              " },
{ 0xD23100, 0xD2 , 0x31, 0x00, D23100_CASES ,  5 ,"Automated Meter Reading Gateway                                                 " , "Type 0x00                                                                       " },
{ 0xD23101, 0xD2 , 0x31, 0x01, D23101_CASES ,  5 ,"Automated Meter Reading Gateway                                                 " , "Type 0x01 (description: see table)                                              " },
{ 0xD23200, 0xD2 , 0x32, 0x00, D23200_CASES ,  1 ,"A.C. Current Clamp                                                              " , "Type 0x00                                                                       " },
{ 0xD23201, 0xD2 , 0x32, 0x01, D23201_CASES ,  1 ,"A.C. Current Clamp                                                              " , "Type 0x01                                                                       " },
{ 0xD23202, 0xD2 , 0x32, 0x02, D23202_CASES ,  1 ,"A.C. Current Clamp                                                              " , "Type 0x02                                                                       " },
{ 0xD24000, 0xD2 , 0x40, 0x00, D24000_CASES ,  1 ,"LED Controller Status                                                           " , "Type 0x00                                                                       " },
{ 0xD24001, 0xD2 , 0x40, 0x01, D24001_CASES ,  1 ,"LED Controller Status                                                           " , "Type 0x01                                                                       " },
{ 0xD25000, 0xD2 , 0x50, 0x00, D25000_CASES ,  4 ,"Heat Recovery Ventilation                                                       " , "Type 0x00                                                                       " },
{ 0xD25001, 0xD2 , 0x50, 0x01, D25001_CASES ,  5 ,"Heat Recovery Ventilation                                                       " , "Type 0x01 (description: see table)                                              " },
{ 0xD2A001, 0xD2 , 0xA0, 0x01, D2A001_CASES ,  2 ,"Standard Valve                                                                  " , "Valve Control                                                                   " },
{0 }
};

