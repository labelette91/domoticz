// function number :0x02 : Temperature Sensors 
// function type :0x01 : Temperature Sensor Range -40øC to 0øC 
//{ 0xA5 , 0x02 , 0x01 , "Temperature Sensors                                                              ",  "Temperature Sensor Range -40øC to 0øC                                            " },

// TITLE:
T_DATAFIELD A50201 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , -40 ,   0 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50201_LRNB       0
#define A50201_TMP        1
#define A50201_NB_DATA    2
#define A50201_DATA_SIZE  3
// function type :0x02 : Temperature Sensor Range -30øC to +10øC 
//{ 0xA5 , 0x02 , 0x02 , "Temperature Sensors                                                              ",  "Temperature Sensor Range -30øC to +10øC                                          " },

// TITLE:
T_DATAFIELD A50202 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , -30 , +10 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50202_LRNB       0
#define A50202_TMP        1
#define A50202_NB_DATA    2
#define A50202_DATA_SIZE  3
// function type :0x03 : Temperature Sensor Range -20øC to +20øC 
//{ 0xA5 , 0x02 , 0x03 , "Temperature Sensors                                                              ",  "Temperature Sensor Range -20øC to +20øC                                          " },

// TITLE:
T_DATAFIELD A50203 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , -20 , +20 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50203_LRNB       0
#define A50203_TMP        1
#define A50203_NB_DATA    2
#define A50203_DATA_SIZE  3
// function type :0x04 : Temperature Sensor Range -10øC to +30øC 
//{ 0xA5 , 0x02 , 0x04 , "Temperature Sensors                                                              ",  "Temperature Sensor Range -10øC to +30øC                                          " },

// TITLE:
T_DATAFIELD A50204 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , -10 , +30 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50204_LRNB       0
#define A50204_TMP        1
#define A50204_NB_DATA    2
#define A50204_DATA_SIZE  3
// function type :0x05 : Temperature Sensor Range 0øC to +40øC 
//{ 0xA5 , 0x02 , 0x05 , "Temperature Sensors                                                              ",  "Temperature Sensor Range 0øC to +40øC                                            " },

// TITLE:
T_DATAFIELD A50205 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50205_LRNB       0
#define A50205_TMP        1
#define A50205_NB_DATA    2
#define A50205_DATA_SIZE  3
// function type :0x06 : Temperature Sensor Range +10øC to +50øC 
//{ 0xA5 , 0x02 , 0x06 , "Temperature Sensors                                                              ",  "Temperature Sensor Range +10øC to +50øC                                          " },

// TITLE:
T_DATAFIELD A50206 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , +10 , +50 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50206_LRNB       0
#define A50206_TMP        1
#define A50206_NB_DATA    2
#define A50206_DATA_SIZE  3
// function type :0x07 : Temperature Sensor Range +20øC to +60øC 
//{ 0xA5 , 0x02 , 0x07 , "Temperature Sensors                                                              ",  "Temperature Sensor Range +20øC to +60øC                                          " },

// TITLE:
T_DATAFIELD A50207 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , +20 , +60 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50207_LRNB       0
#define A50207_TMP        1
#define A50207_NB_DATA    2
#define A50207_DATA_SIZE  3
// function type :0x08 : Temperature Sensor Range +30øC to +70øC 
//{ 0xA5 , 0x02 , 0x08 , "Temperature Sensors                                                              ",  "Temperature Sensor Range +30øC to +70øC                                          " },

// TITLE:
T_DATAFIELD A50208 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , +30 , +70 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50208_LRNB       0
#define A50208_TMP        1
#define A50208_NB_DATA    2
#define A50208_DATA_SIZE  3
// function type :0x09 : Temperature Sensor Range +40øC to +80øC 
//{ 0xA5 , 0x02 , 0x09 , "Temperature Sensors                                                              ",  "Temperature Sensor Range +40øC to +80øC                                          " },

// TITLE:
T_DATAFIELD A50209 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , +40 , +80 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50209_LRNB       0
#define A50209_TMP        1
#define A50209_NB_DATA    2
#define A50209_DATA_SIZE  3
// function type :0x0A : Temperature Sensor Range +50øC to +90øC 
//{ 0xA5 , 0x02 , 0x0A , "Temperature Sensors                                                              ",  "Temperature Sensor Range +50øC to +90øC                                          " },

// TITLE:
T_DATAFIELD A5020A [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , +50 , +90 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5020A_LRNB       0
#define A5020A_TMP        1
#define A5020A_NB_DATA    2
#define A5020A_DATA_SIZE  3
// function type :0x0B : Temperature Sensor Range +60øC to +100øC 
//{ 0xA5 , 0x02 , 0x0B , "Temperature Sensors                                                              ",  "Temperature Sensor Range +60øC to +100øC                                         " },

// TITLE:
T_DATAFIELD A5020B [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , +60 , +100 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5020B_LRNB       0
#define A5020B_TMP        1
#define A5020B_NB_DATA    2
#define A5020B_DATA_SIZE  3
// function type :0x10 : Temperature Sensor Range -60øC to +20øC 
//{ 0xA5 , 0x02 , 0x10 , "Temperature Sensors                                                              ",  "Temperature Sensor Range -60øC to +20øC                                          " },

// TITLE:
T_DATAFIELD A50210 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , -60 , +20 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50210_LRNB       0
#define A50210_TMP        1
#define A50210_NB_DATA    2
#define A50210_DATA_SIZE  3
// function type :0x11 : Temperature Sensor Range -50øC to +30øC 
//{ 0xA5 , 0x02 , 0x11 , "Temperature Sensors                                                              ",  "Temperature Sensor Range -50øC to +30øC                                          " },

// TITLE:
T_DATAFIELD A50211 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , -50 , +30 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50211_LRNB       0
#define A50211_TMP        1
#define A50211_NB_DATA    2
#define A50211_DATA_SIZE  3
// function type :0x12 : Temperature Sensor Range -40øC to +40øC 
//{ 0xA5 , 0x02 , 0x12 , "Temperature Sensors                                                              ",  "Temperature Sensor Range -40øC to +40øC                                          " },

// TITLE:
T_DATAFIELD A50212 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , -40 , +40 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50212_LRNB       0
#define A50212_TMP        1
#define A50212_NB_DATA    2
#define A50212_DATA_SIZE  3
// function type :0x13 : Temperature Sensor Range -30øC to +50øC 
//{ 0xA5 , 0x02 , 0x13 , "Temperature Sensors                                                              ",  "Temperature Sensor Range -30øC to +50øC                                          " },

// TITLE:
T_DATAFIELD A50213 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , -30 , +50 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50213_LRNB       0
#define A50213_TMP        1
#define A50213_NB_DATA    2
#define A50213_DATA_SIZE  3
// function type :0x14 : Temperature Sensor Range -20øC to +60øC 
//{ 0xA5 , 0x02 , 0x14 , "Temperature Sensors                                                              ",  "Temperature Sensor Range -20øC to +60øC                                          " },

// TITLE:
T_DATAFIELD A50214 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , -20 , +60 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50214_LRNB       0
#define A50214_TMP        1
#define A50214_NB_DATA    2
#define A50214_DATA_SIZE  3
// function type :0x15 : Temperature Sensor Range -10øC to +70øC 
//{ 0xA5 , 0x02 , 0x15 , "Temperature Sensors                                                              ",  "Temperature Sensor Range -10øC to +70øC                                          " },

// TITLE:
T_DATAFIELD A50215 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , -10 , +70 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50215_LRNB       0
#define A50215_TMP        1
#define A50215_NB_DATA    2
#define A50215_DATA_SIZE  3
// function type :0x16 : Temperature Sensor Range 0øC to +80øC 
//{ 0xA5 , 0x02 , 0x16 , "Temperature Sensors                                                              ",  "Temperature Sensor Range 0øC to +80øC                                            " },

// TITLE:
T_DATAFIELD A50216 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +80 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50216_LRNB       0
#define A50216_TMP        1
#define A50216_NB_DATA    2
#define A50216_DATA_SIZE  3
// function type :0x17 : Temperature Sensor Range +10øC to +90øC 
//{ 0xA5 , 0x02 , 0x17 , "Temperature Sensors                                                              ",  "Temperature Sensor Range +10øC to +90øC                                          " },

// TITLE:
T_DATAFIELD A50217 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , +10 , +90 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50217_LRNB       0
#define A50217_TMP        1
#define A50217_NB_DATA    2
#define A50217_DATA_SIZE  3
// function type :0x18 : Temperature Sensor Range +20øC to +100øC 
//{ 0xA5 , 0x02 , 0x18 , "Temperature Sensors                                                              ",  "Temperature Sensor Range +20øC to +100øC                                         " },

// TITLE:
T_DATAFIELD A50218 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , +20 , +100 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50218_LRNB       0
#define A50218_TMP        1
#define A50218_NB_DATA    2
#define A50218_DATA_SIZE  3
// function type :0x19 : Temperature Sensor Range +30øC to +110øC 
//{ 0xA5 , 0x02 , 0x19 , "Temperature Sensors                                                              ",  "Temperature Sensor Range +30øC to +110øC                                         " },

// TITLE:
T_DATAFIELD A50219 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , +30 , +110 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50219_LRNB       0
#define A50219_TMP        1
#define A50219_NB_DATA    2
#define A50219_DATA_SIZE  3
// function type :0x1A : Temperature Sensor Range +40øC to +120øC 
//{ 0xA5 , 0x02 , 0x1A , "Temperature Sensors                                                              ",  "Temperature Sensor Range +40øC to +120øC                                         " },

// TITLE:
T_DATAFIELD A5021A [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , +40 , +120 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5021A_LRNB       0
#define A5021A_TMP        1
#define A5021A_NB_DATA    2
#define A5021A_DATA_SIZE  3
// function type :0x1B : Temperature Sensor Range +50øC to +130øC 
//{ 0xA5 , 0x02 , 0x1B , "Temperature Sensors                                                              ",  "Temperature Sensor Range +50øC to +130øC                                         " },

// TITLE:
T_DATAFIELD A5021B [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 , +50 , +130 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5021B_LRNB       0
#define A5021B_TMP        1
#define A5021B_NB_DATA    2
#define A5021B_DATA_SIZE  3
// function type :0x20 : 10 Bit Temperature Sensor Range -10øC to +41.2øC 
//{ 0xA5 , 0x02 , 0x20 , "Temperature Sensors                                                              ",  "10 Bit Temperature Sensor Range -10øC to +41.2øC                                 " },

// TITLE:
T_DATAFIELD A50220 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 14 ,10 , "TMP"      , 1023 ,   0 , -10 , +41.2 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50220_LRNB       0
#define A50220_TMP        1
#define A50220_NB_DATA    2
#define A50220_DATA_SIZE  3
// function type :0x30 : 10 Bit Temperature Sensor Range -40øC to +62.3øC 
//{ 0xA5 , 0x02 , 0x30 , "Temperature Sensors                                                              ",  "10 Bit Temperature Sensor Range -40øC to +62.3øC                                 " },

// TITLE:
T_DATAFIELD A50230 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 14 ,10 , "TMP"      , 1023 ,   0 , -40 , +62.3 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50230_LRNB       0
#define A50230_TMP        1
#define A50230_NB_DATA    2
#define A50230_DATA_SIZE  3
// function number :0x04 : Temperature and Humidity Sensor 
// function type :0x01 : Range 0øC to +40øC and 0% to 100% 
//{ 0xA5 , 0x04 , 0x01 , "Temperature and Humidity Sensor                                                  ",  "Range 0øC to +40øC and 0% to 100%                                                " },

// TITLE:
T_DATAFIELD A50401 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  8 , 8 , "HUM"      ,   0 , 250 ,   0 , 100 , "Humidity"},
{ 16 , 8 , "TMP"      ,   0 , 250 ,   0 , +40 , "Temperature"},
{ 30 , 1 , "TSN"      ,   0 ,   0 ,   0 ,   0 , "T-Sensor"},//Value: 0 = not available 
                                                            //Value: 1 = available 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50401_LRNB       0
#define A50401_HUM        1
#define A50401_TMP        2
#define A50401_TSN        3
#define A50401_NB_DATA    4
#define A50401_DATA_SIZE  4
// function type :0x02 : Range -20øC to +60øC and 0% to 100% 
//{ 0xA5 , 0x04 , 0x02 , "Temperature and Humidity Sensor                                                  ",  "Range -20øC to +60øC and 0% to 100%                                              " },

// TITLE:
T_DATAFIELD A50402 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  8 , 8 , "HUM"      ,   0 , 250 ,   0 , 100 , "Humidity"},
{ 16 , 8 , "TMP"      ,   0 , 250 , -20 , +60 , "Temperature"},
{ 30 , 1 , "TSN"      ,   0 ,   0 ,   0 ,   0 , "T-Sensor"},//Value: 0 = not available 
                                                            //Value: 1 = available 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50402_LRNB       0
#define A50402_HUM        1
#define A50402_TMP        2
#define A50402_TSN        3
#define A50402_NB_DATA    4
#define A50402_DATA_SIZE  4
// function type :0x03 : Range -20øC to +60øC 10bit-measurement and 0% to 100% 
//{ 0xA5 , 0x04 , 0x03 , "Temperature and Humidity Sensor                                                  ",  "Range -20øC to +60øC 10bit-measurement and 0% to 100%                            " },

// TITLE:
T_DATAFIELD A50403 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "HUM"      ,   0 , 255 ,   0 , 100 , "Humidity"},
{ 14 ,10 , "TMP"      ,   0 , 1023 , -20 , +60 , "Temperature"},
{ 31 , 1 , "TTP"      ,   0 ,   0 ,   0 ,   0 , "Telegram Type"},//Value: 0 = Heartbeat 
                                                                 //Value: 1 = Event triggered 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50403_LRNB       0
#define A50403_HUM        1
#define A50403_TMP        2
#define A50403_TTP        3
#define A50403_NB_DATA    4
#define A50403_DATA_SIZE  4
// function number :0x05 : Barometric Sensor 
// function type :0x01 : Range 500 to 1150 hPa 
//{ 0xA5 , 0x05 , 0x01 , "Barometric Sensor                                                                ",  "Range 500 to 1150 hPa                                                            " },

// TITLE:
T_DATAFIELD A50501 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  6 ,10 , "BAR"      ,   0 , 1023 , 500 , 1150 , "Barometer"},
{ 31 , 1 , "TTP"      ,   0 ,   0 ,   0 ,   0 , "Telegram Type"},//Value: 0 = Heartbeat 
                                                                 //Value: 1 = Event triggered 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50501_LRNB       0
#define A50501_BAR        1
#define A50501_TTP        2
#define A50501_NB_DATA    3
#define A50501_DATA_SIZE  4
// function number :0x06 : Light Sensor 
// function type :0x01 : Range 300lx to 60.000lx 
//{ 0xA5 , 0x06 , 0x01 , "Light Sensor                                                                     ",  "Range 300lx to 60.000lx                                                          " },

// TITLE:
T_DATAFIELD A50601 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 255 ,   0 , 5.1 , "Supply voltage"},
{  8 , 8 , "ILL2"     ,   0 , 255 , 300 , 30000 , "Illumination"},
{ 16 , 8 , "ILL1"     ,   0 , 255 , 600 , 60000 , "Illumination"},
{ 31 , 1 , "RS"       ,   0 ,   0 ,   0 ,   0 , "Range select"},//Value: 0 = Range acc. to DB_1 (ILL1) 
                                                                //Value: 1 = Range acc. to DB_2 (ILL2) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50601_LRNB       0
#define A50601_SVC        1
#define A50601_ILL2       2
#define A50601_ILL1       3
#define A50601_RS         4
#define A50601_NB_DATA    5
#define A50601_DATA_SIZE  4
// function type :0x02 : Range 0lx to 1.020lx 
//{ 0xA5 , 0x06 , 0x02 , "Light Sensor                                                                     ",  "Range 0lx to 1.020lx                                                             " },

// TITLE:
T_DATAFIELD A50602 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 255 ,   0 , 5.1 , "Supply voltage"},
{  8 , 8 , "ILL2"     ,   0 , 255 ,   0 , 510 , "Illumination"},
{ 16 , 8 , "ILL1"     ,   0 , 255 ,   0 , 1020 , "Illumination"},
{ 31 , 1 , "RS"       ,   0 ,   0 ,   0 ,   0 , "Range select"},//Value: 0 = Range acc. to DB_1 (ILL1) 
                                                                //Value: 1 = Range acc. to DB_2 (ILL2) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50602_LRNB       0
#define A50602_SVC        1
#define A50602_ILL2       2
#define A50602_ILL1       3
#define A50602_RS         4
#define A50602_NB_DATA    5
#define A50602_DATA_SIZE  4
// function type :0x03 : 10-bit measurement (1-Lux resolution) with range 0lx to 1000lx 
//{ 0xA5 , 0x06 , 0x03 , "Light Sensor                                                                     ",  "10-bit measurement (1-Lux resolution) with range 0lx to 1000lx                   " },

// TITLE:
T_DATAFIELD A50603 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 250 ,   0 , 5.0 , "Supply voltage"},
{  8 ,10 , "ILL"      ,   0 , 1000 ,   0 , 1000 , "Illumination"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50603_LRNB       0
#define A50603_SVC        1
#define A50603_ILL        2
#define A50603_NB_DATA    3
#define A50603_DATA_SIZE  3
// function type :0x04 : Curtain Wall Brightness Sensor 
//{ 0xA5 , 0x06 , 0x04 , "Light Sensor                                                                     ",  "Curtain Wall Brightness Sensor                                                   " },

// TITLE:
T_DATAFIELD A50604 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "TEMP"     ,   0 , 255 , -20 , +60 , "Temperature"},
{  8 ,16 , "ILL"      ,   0 , 65535 ,   0 , 65535 , "Illuminance"},
{ 24 , 4 , "SV"       ,   0 ,  15 ,   0 , 100 , "Energy Storage"},
{ 30 , 1 , "TMPAV"    ,   0 ,   0 ,   0 ,   0 , "Temperature Availability"},//Value: 0 = Temperature data is unavailable 
                                                                            //Value: 1 = Temperature data is available 
{ 31 , 1 , "ENAV"     ,   0 ,   0 ,   0 ,   0 , "Energy Storage Availability"},//Value: 0 = Energy storage data is unavailable 
                                                                               //Value: 1 = Energy storage data is available 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50604_LRNB       0
#define A50604_TEMP       1
#define A50604_ILL        2
#define A50604_SV         3
#define A50604_TMPAV      4
#define A50604_ENAV       5
#define A50604_NB_DATA    6
#define A50604_DATA_SIZE  4
// function type :0x05 : Range 0lx to 10.200lx 
//{ 0xA5 , 0x06 , 0x05 , "Light Sensor                                                                     ",  "Range 0lx to 10.200lx                                                            " },

// TITLE:
T_DATAFIELD A50605 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 255 ,   0 , 5.1 , "Supply voltage"},
{  8 , 8 , "ILL2"     ,   0 , 255 ,   0 , 5100 , "Illumination"},
{ 16 , 8 , "ILL1"     ,   0 , 255 ,   0 , 10200 , "Illumination"},
{ 31 , 1 , "RS"       ,   0 ,   0 ,   0 ,   0 , "Range select"},//Value: 0 = Range acc. to DB_1 (ILL1) 
                                                                //Value: 1 = Range acc. to DB_2 (ILL2) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50605_LRNB       0
#define A50605_SVC        1
#define A50605_ILL2       2
#define A50605_ILL1       3
#define A50605_RS         4
#define A50605_NB_DATA    5
#define A50605_DATA_SIZE  4
// function number :0x07 : Occupancy Sensor 
// function type :0x01 : Occupancy with Supply voltage monitor 
//{ 0xA5 , 0x07 , 0x01 , "Occupancy Sensor                                                                 ",  "Occupancy with Supply voltage monitor                                            " },

// TITLE:
T_DATAFIELD A50701 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 250 ,   0 , 5.0 , "Supply voltage (OPTIONAL)"},
{ 16 , 8 , "PIRS"     ,   0 ,   0 ,   0 ,   0 , "PIR Status"},
{ 31 , 1 , "SVA"      ,   0 ,   0 ,   0 ,   0 , "Supply voltage availability"},//Value: 0 = Supply voltage is not supported 
                                                                               //Value: 1 = Supply voltage is supported 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50701_LRNB       0
#define A50701_SVC        1
#define A50701_PIRS       2
#define A50701_SVA        3
#define A50701_NB_DATA    4
#define A50701_DATA_SIZE  4
// function type :0x02 : Occupancy with Supply voltage monitor 
//{ 0xA5 , 0x07 , 0x02 , "Occupancy Sensor                                                                 ",  "Occupancy with Supply voltage monitor                                            " },

// TITLE:
T_DATAFIELD A50702 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 250 ,   0 , 5.0 , "Supply voltage (REQUIRED)"},
{ 24 , 1 , "PIRS"     ,   0 ,   0 ,   0 ,   0 , "PIR Status"},//Value: 0 = Uncertain of occupancy status 
                                                              //Value: 1 = Motion detected 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50702_LRNB       0
#define A50702_SVC        1
#define A50702_PIRS       2
#define A50702_NB_DATA    3
#define A50702_DATA_SIZE  4
// function type :0x03 : Occupancy with Supply voltage monitor and 10-bit illumination measurement 
//{ 0xA5 , 0x07 , 0x03 , "Occupancy Sensor                                                                 ",  "Occupancy with Supply voltage monitor and 10-bit illumination measurement        " },

// TITLE:
T_DATAFIELD A50703 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 250 ,   0 , 5.0 , "Supply voltage (REQUIRED)"},
{  8 ,10 , "ILL"      ,   0 , 1000 ,   0 , 1000 , "Illumination"},
{ 24 , 1 , "PIRS"     ,   0 ,   0 ,   0 ,   0 , "PIR Status"},//Value: 1 = Motion detected 
                                                              //Value: 0 = Uncertain of occupancy status 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50703_LRNB       0
#define A50703_SVC        1
#define A50703_ILL        2
#define A50703_PIRS       3
#define A50703_NB_DATA    4
#define A50703_DATA_SIZE  4
// function number :0x08 : Light, Temperature and Occupancy Sensor 
// function type :0x01 : Range 0lx to 510lx, 0øC to +51øC and Occupancy Button 
//{ 0xA5 , 0x08 , 0x01 , "Light, Temperature and Occupancy Sensor                                          ",  "Range 0lx to 510lx, 0øC to +51øC and Occupancy Button                            " },

// TITLE:
T_DATAFIELD A50801 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 255 ,   0 , 5.1 , "Supply voltage"},
{  8 , 8 , "ILL"      ,   0 , 255 ,   0 , 510 , "Illumination"},
{ 16 , 8 , "TMP"      ,   0 , 255 ,   0 , +51 , "Temperature"},
{ 30 , 1 , "PIRS"     ,   0 ,   0 ,   0 ,   0 , "PIR Status"},//Value: 0 = PIR on 
                                                              //Value: 1 = PIR off 
{ 31 , 1 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy Button"},//Value: 0 = Button pressed 
                                                                    //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50801_LRNB       0
#define A50801_SVC        1
#define A50801_ILL        2
#define A50801_TMP        3
#define A50801_PIRS       4
#define A50801_OCC        5
#define A50801_NB_DATA    6
#define A50801_DATA_SIZE  4
// function type :0x02 : Range 0lx to 1020lx, 0øC to +51øC and Occupancy Button 
//{ 0xA5 , 0x08 , 0x02 , "Light, Temperature and Occupancy Sensor                                          ",  "Range 0lx to 1020lx, 0øC to +51øC and Occupancy Button                           " },

// TITLE:
T_DATAFIELD A50802 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 255 ,   0 , 5.1 , "Supply voltage"},
{  8 , 8 , "ILL"      ,   0 , 255 ,   0 , 1020 , "Illumination"},
{ 16 , 8 , "TMP"      ,   0 , 255 ,   0 , +51 , "Temperature"},
{ 30 , 1 , "PIRS"     ,   0 ,   0 ,   0 ,   0 , "PIR Status"},//Value: 0 = PIR on 
                                                              //Value: 1 = PIR off 
{ 31 , 1 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy Button"},//Value: 0 = Button pressed 
                                                                    //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50802_LRNB       0
#define A50802_SVC        1
#define A50802_ILL        2
#define A50802_TMP        3
#define A50802_PIRS       4
#define A50802_OCC        5
#define A50802_NB_DATA    6
#define A50802_DATA_SIZE  4
// function type :0x03 : Range 0lx to 1530lx, -30øC to +50øC and Occupancy Button 
//{ 0xA5 , 0x08 , 0x03 , "Light, Temperature and Occupancy Sensor                                          ",  "Range 0lx to 1530lx, -30øC to +50øC and Occupancy Button                         " },

// TITLE:
T_DATAFIELD A50803 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 255 ,   0 , 5.1 , "Supply voltage"},
{  8 , 8 , "ILL"      ,   0 , 255 ,   0 , 1530 , "Illumination"},
{ 16 , 8 , "TMP"      ,   0 , 255 , -30 , +50 , "Temperature"},
{ 30 , 1 , "PIRS"     ,   0 ,   0 ,   0 ,   0 , "PIR Status"},//Value: 0 = PIR on 
                                                              //Value: 1 = PIR off 
{ 31 , 1 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy Button"},//Value: 0 = Button pressed 
                                                                    //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50803_LRNB       0
#define A50803_SVC        1
#define A50803_ILL        2
#define A50803_TMP        3
#define A50803_PIRS       4
#define A50803_OCC        5
#define A50803_NB_DATA    6
#define A50803_DATA_SIZE  4
// function number :0x09 : Gas Sensor 
// function type :0x02 : CO-Sensor 0 ppm to 1020 ppm 
//{ 0xA5 , 0x09 , 0x02 , "Gas Sensor                                                                       ",  "CO-Sensor 0 ppm to 1020 ppm                                                      " },

// TITLE:
T_DATAFIELD A50902 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 255 ,   0 , 5.1 , "Supply voltage"},
{  8 , 8 , "Conc"     ,   0 , 255 ,   0 , 1020 , "Concentration"},
{ 16 , 8 , "TMP"      ,   0 , 255 ,   0 , +51 , "Temperature"},
{ 30 , 1 , "TSN"      ,   0 ,   0 ,   0 ,   0 , "T-Sensor"},//Value: 0 = Temperature Sensor not available 
                                                            //Value: 1 = Temperature Sensor available 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50902_LRNB       0
#define A50902_SVC        1
#define A50902_Conc       2
#define A50902_TMP        3
#define A50902_TSN        4
#define A50902_NB_DATA    5
#define A50902_DATA_SIZE  4
// function type :0x04 : CO2 Sensor 
//{ 0xA5 , 0x09 , 0x04 , "Gas Sensor                                                                       ",  "CO2 Sensor                                                                       " },

// TITLE:
T_DATAFIELD A50904 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "HUM"      ,   0 , 200 ,   0 , 100 , "Humidity"},
{  8 , 8 , "Conc"     ,   0 , 255 ,   0 , 2550 , "Concentration"},
{ 16 , 8 , "TMP"      ,   0 , 255 ,   0 , +51.0 , "Temperature"},
{ 29 , 1 , "HSN"      ,   0 ,   0 ,   0 ,   0 , "H-Sensor"},//Value: 0 = Humidity Sensor not available 
                                                            //Value: 1 = Humidity Sensor available 
{ 30 , 1 , "TSN"      ,   0 ,   0 ,   0 ,   0 , "T-Sensor"},//Value: 0 = Temperature Sensor not available 
                                                            //Value: 1 = Temperature Sensor available 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50904_LRNB       0
#define A50904_HUM        1
#define A50904_Conc       2
#define A50904_TMP        3
#define A50904_HSN        4
#define A50904_TSN        5
#define A50904_NB_DATA    6
#define A50904_DATA_SIZE  4
// function type :0x05 : VOC Sensor 
//{ 0xA5 , 0x09 , 0x05 , "Gas Sensor                                                                       ",  "VOC Sensor                                                                       " },

// TITLE:
T_DATAFIELD A50905 [] = {
{  0 ,16 , "Conc"     ,   0 , 65535 ,   0 , 65535 , "VOC"},
{ 16 , 8 , "VOC_ID"   ,   0 ,   0 ,   0 ,   0 , "VOC ID"},//Value: 0 = VOCT (total) 
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
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 30 , 2 , "SCM"      ,   0 ,   0 ,   0 ,   0 , "Scale Multiplier"},//Value: 0 = 0.01 
                                                                    //Value: 1 = 0.1 
                                                                    //Value: 2 = 1 
                                                                    //Value: 3 = 10 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50905_Conc       0
#define A50905_VOC_ID     1
#define A50905_LRNB       2
#define A50905_SCM        3
#define A50905_NB_DATA    4
#define A50905_DATA_SIZE  4
// function type :0x06 : Radon 
//{ 0xA5 , 0x09 , 0x06 , "Gas Sensor                                                                       ",  "Radon                                                                            " },

// TITLE:
T_DATAFIELD A50906 [] = {
{  0 ,10 , "Act"      ,   0 , 1023 ,   0 , 1023 , "Radon"},
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50906_Act        0
#define A50906_LRNB       1
#define A50906_NB_DATA    2
#define A50906_DATA_SIZE  4
// function type :0x07 : Particles 
//{ 0xA5 , 0x09 , 0x07 , "Gas Sensor                                                                       ",  "Particles                                                                        " },

// TITLE:
T_DATAFIELD A50907 [] = {
{  0 , 9 , "PM10"     ,   0 , 511 ,   0 , 511 , "Particles_10"},
{  9 , 9 , "PM2.5"    ,   0 , 511 ,   0 , 511 , "Particles_2.5"},
{ 18 , 9 , "PM1"      ,   0 , 511 ,   0 , 511 , "Particles_1"},
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 29 , 1 , "PM10a"    ,   0 ,   0 ,   0 ,   0 , "PM10 active"},//Value: 0 = PM10 not active 
                                                               //Value: 1 = PM10 active 
{ 30 , 1 , "PM2.5a"   ,   0 ,   0 ,   0 ,   0 , "PM2.5 active"},//Value: 0 = PM2.5 not active 
                                                                //Value: 1 = PM2.5 active 
{ 31 , 1 , "PM1a"     ,   0 ,   0 ,   0 ,   0 , "PM1 active"},//Value: 0 = PM1 not active 
                                                              //Value: 1 = PM1 active 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50907_PM10       0
#define A50907_PM2.5      1
#define A50907_PM1        2
#define A50907_LRNB       3
#define A50907_PM10a      4
#define A50907_PM2.5a     5
#define A50907_PM1a       6
#define A50907_NB_DATA    7
#define A50907_DATA_SIZE  4
// function type :0x08 : Pure CO2 Sensor 
//{ 0xA5 , 0x09 , 0x08 , "Gas Sensor                                                                       ",  "Pure CO2 Sensor                                                                  " },

// TITLE:
T_DATAFIELD A50908 [] = {
{ 16 , 8 , "CO2"      ,   0 , 255 ,   0 , 2000 , "CO2"},
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50908_CO2        0
#define A50908_LRNB       1
#define A50908_NB_DATA    2
#define A50908_DATA_SIZE  4
// function type :0x09 : Pure CO2 Sensor with Power Failure Detection 
//{ 0xA5 , 0x09 , 0x09 , "Gas Sensor                                                                       ",  "Pure CO2 Sensor with Power Failure Detection                                     " },

// TITLE:
T_DATAFIELD A50909 [] = {
{ 16 , 8 , "CO2"      ,   0 , 255 ,   0 , 2000 , "CO2"},
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 29 , 1 , "PFD"      ,   0 ,   0 ,   0 ,   0 , "Power Failure detection"},//Value: 0 = Power failure not detected 
                                                                           //Value: 1 = Power failure detected 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A50909_CO2        0
#define A50909_LRNB       1
#define A50909_PFD        2
#define A50909_NB_DATA    3
#define A50909_DATA_SIZE  4
// function type :0x0A : Hydrogen Gas Sensor 
//{ 0xA5 , 0x09 , 0x0A , "Gas Sensor                                                                       ",  "Hydrogen Gas Sensor                                                              " },

// TITLE:
T_DATAFIELD A5090A [] = {
{  0 ,16 , "Conc"     ,   0 , 65535 ,   0 , 65535 , "Concentration"},
{ 16 , 8 , "TEMP"     ,   0 , 255 , -20 , +60 , "Temperature"},
{ 24 , 4 , "SV"       ,   0 ,  15 , 2.0 , 5.0 , "Supply voltage"},
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 30 , 1 , "TSA"      ,   0 ,   0 ,   0 ,   0 , "Temp sensor availability"},//Value: 0 = Temp sensor is not supported 
                                                                            //Value: 1 = Temp sensor is supported 
{ 31 , 1 , "SVA"      ,   0 ,   0 ,   0 ,   0 , "Supply voltage availability"},//Value: 0 = Supply voltage is not supported 
                                                                               //Value: 1 = Supply voltage is supported 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5090A_Conc       0
#define A5090A_TEMP       1
#define A5090A_SV         2
#define A5090A_LRNB       3
#define A5090A_TSA        4
#define A5090A_SVA        5
#define A5090A_NB_DATA    6
#define A5090A_DATA_SIZE  4
// function type :0x0B : Radioactivity Sensor 
//{ 0xA5 , 0x09 , 0x0B , "Gas Sensor                                                                       ",  "Radioactivity Sensor                                                             " },

// TITLE:
T_DATAFIELD A5090B [] = {
{  0 , 4 , "SV"       ,   0 ,  15 , 2.0 , 5.0 , "Supply voltage"},
{  8 ,16 , "Ract"     ,   0 , 65535 ,   0 , 6553 , "Radioactivity"},
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 24 , 4 , "SCM"      ,   0 ,   0 ,   0 ,   0 , "Scale Multiplier"},//Value: 0 = 0.001 
                                                                    //Value: 1 = 0.01 
                                                                    //Value: 2 = 0.1 
                                                                    //Value: 3 = 1 
                                                                    //Value: 4 = 10 
                                                                    //Value: 5 = 100 
                                                                    //Value: 6 = 1000 
                                                                    //Value: 7 = 10000 
                                                                    //Value: 8 = 100000 
{ 29 , 2 , "VUNIT"    ,   0 ,   0 ,   0 ,   0 , "Value unit"},//Value: 0 = æSv/h 
                                                              //Value: 1 = cpm 
                                                              //Value: 2 = Bq/L 
                                                              //Value: 3 = Bq/kg 
{ 31 , 1 , "SVA"      ,   0 ,   0 ,   0 ,   0 , "Supply voltage availability"},//Value: 0 = Supply voltage is not supported 
                                                                               //Value: 1 = Supply voltage is supported 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5090B_SV         0
#define A5090B_Ract       1
#define A5090B_LRNB       2
#define A5090B_SCM        3
#define A5090B_VUNIT      4
#define A5090B_SVA        5
#define A5090B_NB_DATA    6
#define A5090B_DATA_SIZE  4
// function number :0x10 : Room Operating Panel 
// function type :0x01 : Temperature Sensor, Set Point, Fan Speed and Occupancy Control 
//{ 0xA5 , 0x10 , 0x01 , "Room Operating Panel                                                             ",  "Temperature Sensor, Set Point, Fan Speed and Occupancy Control                   " },

// TITLE:
T_DATAFIELD A51001 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "Turn-switch for fan speed"},
{  8 , 8 , "SP"       ,   0 , 255 ,   0 , 255 , "Set point"},
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature"},
{ 31 , 1 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy"},//Value: 1 = Button released 
                                                             //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51001_LRNB       0
#define A51001_FAN        1
#define A51001_SP         2
#define A51001_TMP        3
#define A51001_OCC        4
#define A51001_NB_DATA    5
#define A51001_DATA_SIZE  4
// function type :0x02 : Temperature Sensor, Set Point, Fan Speed and Day/Night Control 
//{ 0xA5 , 0x10 , 0x02 , "Room Operating Panel                                                             ",  "Temperature Sensor, Set Point, Fan Speed and Day/Night Control                   " },

// TITLE:
T_DATAFIELD A51002 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "Turn-switch for fan speed"},
{  8 , 8 , "SP"       ,   0 , 255 ,   0 , 255 , "Set point"},
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature"},
{ 31 , 1 , "SLSW"     ,   0 ,   0 ,   0 ,   0 , "Slide switch 0/I"},//Value: 0 = Position I / Night / Off 
                                                                    //Value: 1 = Position O / Day / On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51002_LRNB       0
#define A51002_FAN        1
#define A51002_SP         2
#define A51002_TMP        3
#define A51002_SLSW       4
#define A51002_NB_DATA    5
#define A51002_DATA_SIZE  4
// function type :0x03 : Temperature Sensor, Set Point Control 
//{ 0xA5 , 0x10 , 0x03 , "Room Operating Panel                                                             ",  "Temperature Sensor, Set Point Control                                            " },

// TITLE:
T_DATAFIELD A51003 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  8 , 8 , "SP"       ,   0 , 255 ,   0 , 255 , "Set point"},
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51003_LRNB       0
#define A51003_SP         1
#define A51003_TMP        2
#define A51003_NB_DATA    3
#define A51003_DATA_SIZE  3
// function type :0x04 : Temperature Sensor, Set Point and Fan Speed Control 
//{ 0xA5 , 0x10 , 0x04 , "Room Operating Panel                                                             ",  "Temperature Sensor, Set Point and Fan Speed Control                              " },

// TITLE:
T_DATAFIELD A51004 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "Turn-switch for fan speed"},
{  8 , 8 , "SP"       ,   0 , 255 ,   0 , 255 , "Set point"},
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51004_LRNB       0
#define A51004_FAN        1
#define A51004_SP         2
#define A51004_TMP        3
#define A51004_NB_DATA    4
#define A51004_DATA_SIZE  3
// function type :0x05 : Temperature Sensor, Set Point and Occupancy Control 
//{ 0xA5 , 0x10 , 0x05 , "Room Operating Panel                                                             ",  "Temperature Sensor, Set Point and Occupancy Control                              " },

// TITLE:
T_DATAFIELD A51005 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  8 , 8 , "SP"       ,   0 , 255 ,   0 , 255 , "Set point"},
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature"},
{ 31 , 1 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy"},//Value: 1 = Button released 
                                                             //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51005_LRNB       0
#define A51005_SP         1
#define A51005_TMP        2
#define A51005_OCC        3
#define A51005_NB_DATA    4
#define A51005_DATA_SIZE  4
// function type :0x06 : Temperature Sensor, Set Point and Day/Night Control 
//{ 0xA5 , 0x10 , 0x06 , "Room Operating Panel                                                             ",  "Temperature Sensor, Set Point and Day/Night Control                              " },

// TITLE:
T_DATAFIELD A51006 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  8 , 8 , "SP"       ,   0 , 255 ,   0 , 255 , "Set point"},
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature"},
{ 31 , 1 , "SLSW"     ,   0 ,   0 ,   0 ,   0 , "Slide switch 0/I"},//Value: 0 = Position I / Night / Off 
                                                                    //Value: 1 = Position O / Day / On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51006_LRNB       0
#define A51006_SP         1
#define A51006_TMP        2
#define A51006_SLSW       3
#define A51006_NB_DATA    4
#define A51006_DATA_SIZE  4
// function type :0x07 : Temperature Sensor, Fan Speed Control 
//{ 0xA5 , 0x10 , 0x07 , "Room Operating Panel                                                             ",  "Temperature Sensor, Fan Speed Control                                            " },

// TITLE:
T_DATAFIELD A51007 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "Turn-switch for fan speed"},
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51007_LRNB       0
#define A51007_FAN        1
#define A51007_TMP        2
#define A51007_NB_DATA    3
#define A51007_DATA_SIZE  3
// function type :0x08 : Temperature Sensor, Fan Speed and Occupancy Control 
//{ 0xA5 , 0x10 , 0x08 , "Room Operating Panel                                                             ",  "Temperature Sensor, Fan Speed and Occupancy Control                              " },

// TITLE:
T_DATAFIELD A51008 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "Turn-switch for fan speed"},
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature"},
{ 31 , 1 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy"},//Value: 1 = Button released 
                                                             //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51008_LRNB       0
#define A51008_FAN        1
#define A51008_TMP        2
#define A51008_OCC        3
#define A51008_NB_DATA    4
#define A51008_DATA_SIZE  4
// function type :0x09 : Temperature Sensor, Fan Speed and Day/Night Control 
//{ 0xA5 , 0x10 , 0x09 , "Room Operating Panel                                                             ",  "Temperature Sensor, Fan Speed and Day/Night Control                              " },

// TITLE:
T_DATAFIELD A51009 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "Turn-switch for fan speed"},
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature"},
{ 31 , 1 , "SLSW"     ,   0 ,   0 ,   0 ,   0 , "Slide switch 0/I"},//Value: 0 = Position I / Night / Off 
                                                                    //Value: 1 = Position O / Day / On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51009_LRNB       0
#define A51009_FAN        1
#define A51009_TMP        2
#define A51009_SLSW       3
#define A51009_NB_DATA    4
#define A51009_DATA_SIZE  4
// function type :0x0A : Temperature Sensor, Set Point Adjust and Single Input Contact 
//{ 0xA5 , 0x10 , 0x0A , "Room Operating Panel                                                             ",  "Temperature Sensor, Set Point Adjust and Single Input Contact                    " },

// TITLE:
T_DATAFIELD A5100A [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  8 , 8 , "SP"       ,   0 , 255 ,   0 , 255 , "Set point"},
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature"},
{ 31 , 1 , "CTST"     ,   0 ,   0 ,   0 ,   0 , "Contact State"},//Value: 0 = closed 
                                                                 //Value: 1 = open 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5100A_LRNB       0
#define A5100A_SP         1
#define A5100A_TMP        2
#define A5100A_CTST       3
#define A5100A_NB_DATA    4
#define A5100A_DATA_SIZE  4
// function type :0x0B : Temperature Sensor and Single Input Contact 
//{ 0xA5 , 0x10 , 0x0B , "Room Operating Panel                                                             ",  "Temperature Sensor and Single Input Contact                                      " },

// TITLE:
T_DATAFIELD A5100B [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature"},
{ 31 , 1 , "CTST"     ,   0 ,   0 ,   0 ,   0 , "Contact State"},//Value: 0 = closed 
                                                                 //Value: 1 = open 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5100B_LRNB       0
#define A5100B_TMP        1
#define A5100B_CTST       2
#define A5100B_NB_DATA    3
#define A5100B_DATA_SIZE  4
// function type :0x0C : Temperature Sensor and Occupancy Control 
//{ 0xA5 , 0x10 , 0x0C , "Room Operating Panel                                                             ",  "Temperature Sensor and Occupancy Control                                         " },

// TITLE:
T_DATAFIELD A5100C [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature"},
{ 31 , 1 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy"},//Value: 1 = Button released 
                                                             //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5100C_LRNB       0
#define A5100C_TMP        1
#define A5100C_OCC        2
#define A5100C_NB_DATA    3
#define A5100C_DATA_SIZE  4
// function type :0x0D : Temperature Sensor and Day/Night Control 
//{ 0xA5 , 0x10 , 0x0D , "Room Operating Panel                                                             ",  "Temperature Sensor and Day/Night Control                                         " },

// TITLE:
T_DATAFIELD A5100D [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature"},
{ 31 , 1 , "SLSW"     ,   0 ,   0 ,   0 ,   0 , "Slide switch"},//Value: 0 = Position I / Night / Off 
                                                                //Value: 1 = Position O / Day / On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5100D_LRNB       0
#define A5100D_TMP        1
#define A5100D_SLSW       2
#define A5100D_NB_DATA    3
#define A5100D_DATA_SIZE  4
// function type :0x10 : Temperature and Humidity Sensor, Set Point and Occupancy Control 
//{ 0xA5 , 0x10 , 0x10 , "Room Operating Panel                                                             ",  "Temperature and Humidity Sensor, Set Point and Occupancy Control                 " },

// TITLE:
T_DATAFIELD A51010 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SP"       ,   0 , 255 ,   0 , 255 , "Set point"},
{  8 , 8 , "HUM"      ,   0 , 250 ,   0 , 100 , "Humidity"},
{ 16 , 8 , "TMP"      ,   0 , 250 ,   0 , +40 , "Temperature"},
{ 31 , 1 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy"},//Value: 1 = Button released 
                                                             //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51010_LRNB       0
#define A51010_SP         1
#define A51010_HUM        2
#define A51010_TMP        3
#define A51010_OCC        4
#define A51010_NB_DATA    5
#define A51010_DATA_SIZE  4
// function type :0x11 : Temperature and Humidity Sensor, Set Point and Day/Night Control 
//{ 0xA5 , 0x10 , 0x11 , "Room Operating Panel                                                             ",  "Temperature and Humidity Sensor, Set Point and Day/Night Control                 " },

// TITLE:
T_DATAFIELD A51011 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SP"       ,   0 , 255 ,   0 , 255 , "Set point"},
{  8 , 8 , "HUM"      ,   0 , 250 ,   0 , 100 , "Humidity"},
{ 16 , 8 , "TMP"      ,   0 , 250 ,   0 , +40 , "Temperature"},
{ 31 , 1 , "SLSW"     ,   0 ,   0 ,   0 ,   0 , "Slide switch"},//Value: 0 = Position I / Night / Off 
                                                                //Value: 1 = Position O / Day / On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51011_LRNB       0
#define A51011_SP         1
#define A51011_HUM        2
#define A51011_TMP        3
#define A51011_SLSW       4
#define A51011_NB_DATA    5
#define A51011_DATA_SIZE  4
// function type :0x12 : Temperature and Humidity Sensor and Set Point 
//{ 0xA5 , 0x10 , 0x12 , "Room Operating Panel                                                             ",  "Temperature and Humidity Sensor and Set Point                                    " },

// TITLE:
T_DATAFIELD A51012 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SP"       ,   0 , 255 ,   0 , 255 , "Set point"},
{  8 , 8 , "HUM"      ,   0 , 250 ,   0 , 100 , "Humidity"},
{ 16 , 8 , "TMP"      ,   0 , 250 ,   0 , +40 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51012_LRNB       0
#define A51012_SP         1
#define A51012_HUM        2
#define A51012_TMP        3
#define A51012_NB_DATA    4
#define A51012_DATA_SIZE  3
// function type :0x13 : Temperature and Humidity Sensor, Occupancy Control 
//{ 0xA5 , 0x10 , 0x13 , "Room Operating Panel                                                             ",  "Temperature and Humidity Sensor, Occupancy Control                               " },

// TITLE:
T_DATAFIELD A51013 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  8 , 8 , "HUM"      ,   0 , 250 ,   0 , 100 , "Humidity"},
{ 16 , 8 , "TMP"      ,   0 , 250 ,   0 , +40 , "Temperature"},
{ 31 , 1 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy"},//Value: 1 = Button released 
                                                             //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51013_LRNB       0
#define A51013_HUM        1
#define A51013_TMP        2
#define A51013_OCC        3
#define A51013_NB_DATA    4
#define A51013_DATA_SIZE  4
// function type :0x14 : Temperature and Humidity Sensor, Day/Night Control 
//{ 0xA5 , 0x10 , 0x14 , "Room Operating Panel                                                             ",  "Temperature and Humidity Sensor, Day/Night Control                               " },

// TITLE:
T_DATAFIELD A51014 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  8 , 8 , "HUM"      ,   0 , 250 ,   0 , 100 , "Humidity"},
{ 16 , 8 , "TMP"      ,   0 , 250 ,   0 , +40 , "Temperature"},
{ 31 , 1 , "SLSW"     ,   0 ,   0 ,   0 ,   0 , "Slide switch"},//Value: 0 = Position I / Night / Off 
                                                                //Value: 1 = Position O / Day / On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51014_LRNB       0
#define A51014_HUM        1
#define A51014_TMP        2
#define A51014_SLSW       3
#define A51014_NB_DATA    4
#define A51014_DATA_SIZE  4
// function type :0x15 : 10 Bit Temperature Sensor, 6 bit Set Point Control 
//{ 0xA5 , 0x10 , 0x15 , "Room Operating Panel                                                             ",  "10 Bit Temperature Sensor, 6 bit Set Point Control                               " },

// TITLE:
T_DATAFIELD A51015 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 14 ,10 , "TMP"      , 1023 ,   0 , -10 , +41.2 , "Temperature"},
{  8 , 6 , "SP"       ,   0 ,  63 ,   0 ,  63 , "Set point"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51015_LRNB       0
#define A51015_TMP        1
#define A51015_SP         2
#define A51015_NB_DATA    3
#define A51015_DATA_SIZE  2
// function type :0x16 : 10 Bit Temperature Sensor, 6 bit Set Point Control;Occupancy Control 
//{ 0xA5 , 0x10 , 0x16 , "Room Operating Panel                                                             ",  "10 Bit Temperature Sensor, 6 bit Set Point Control;Occupancy Control             " },

// TITLE:
T_DATAFIELD A51016 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 14 ,10 , "TMP"      , 1023 ,   0 , -10 , +41.2 , "Temperature"},
{  8 , 6 , "SP"       ,   0 ,  63 ,   0 ,  63 , "Set point"},
{ 31 , 1 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy"},//Value: 1 = Button released 
                                                             //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51016_LRNB       0
#define A51016_TMP        1
#define A51016_SP         2
#define A51016_OCC        3
#define A51016_NB_DATA    4
#define A51016_DATA_SIZE  4
// function type :0x17 : 10 Bit Temperature Sensor, Occupancy Control 
//{ 0xA5 , 0x10 , 0x17 , "Room Operating Panel                                                             ",  "10 Bit Temperature Sensor, Occupancy Control                                     " },

// TITLE:
T_DATAFIELD A51017 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 14 ,10 , "TMP"      , 1023 ,   0 , -10 , +41.2 , "Temperature"},
{ 31 , 1 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy"},//Value: 1 = Button released 
                                                             //Value: 0 = Button pressed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51017_LRNB       0
#define A51017_TMP        1
#define A51017_OCC        2
#define A51017_NB_DATA    3
#define A51017_DATA_SIZE  4
// function type :0x18 : Illumination, Temperature Set Point, Temperature Sensor, Fan Speed and Occupancy Control 
//{ 0xA5 , 0x10 , 0x18 , "Room Operating Panel                                                             ",  "Illumination, Temperature Set Point, Temperature Sensor, Fan Speed and Occupancy Control " },

// TITLE:
T_DATAFIELD A51018 [] = {
{ 25 , 3 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "Fan Speed"},//Value: 0 = Auto 
                                                             //Value: 1 = Speed 0 
                                                             //Value: 2 = Speed 1 
                                                             //Value: 3 = Speed 2 
                                                             //Value: 4 = Speed 3 
                                                             //Value: 5 = Speed 4 
                                                             //Value: 6 = Speed 5 
                                                             //Value: 7 = Off 
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "ILL"      ,   0 , 250 ,   0 , 1000 , "Illumination"},
{  8 , 8 , "TMPSP"    , 250 ,   0 ,   0 , +40 , "Temp Setpoint"},
{ 16 , 8 , "TMP"      , 250 ,   0 ,   0 , +40 , "Temperature"},
{ 30 , 1 , "OED"      ,   0 ,   0 ,   0 ,   0 , "Occupancy enable/disable"},//Value: 0 = Occupancy enabled 
                                                                            //Value: 1 = Occupancy disabled 
{ 31 , 1 , "OB"       ,   0 ,   0 ,   0 ,   0 , "Occupancy button"},//Value: 0 = Button pressed 
                                                                    //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51018_FAN        0
#define A51018_LRNB       1
#define A51018_ILL        2
#define A51018_TMPSP      3
#define A51018_TMP        4
#define A51018_OED        5
#define A51018_OB         6
#define A51018_NB_DATA    7
#define A51018_DATA_SIZE  4
// function type :0x19 : Humidity, Temperature Set Point, Temperature Sensor, Fan Speed and Occupancy Control 
//{ 0xA5 , 0x10 , 0x19 , "Room Operating Panel                                                             ",  "Humidity, Temperature Set Point, Temperature Sensor, Fan Speed and Occupancy Control " },

// TITLE:
T_DATAFIELD A51019 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "HUM"      ,   0 , 250 ,   0 , 100 , "Humidity"},
{  8 , 8 , "TMP_Sp"   , 250 ,   0 ,   0 , +40 , "Temp Setpoint"},
{ 16 , 8 , "TMP"      , 250 ,   0 ,   0 , +40 , "Temperature"},
{ 25 , 3 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "Fan speed"},//Value: 0 = Auto 
                                                             //Value: 1 = Speed 0 
                                                             //Value: 2 = Speed 1 
                                                             //Value: 3 = Speed 2 
                                                             //Value: 4 = Speed 3 
                                                             //Value: 5 = Speed 4 
                                                             //Value: 6 = Speed 5 
                                                             //Value: 7 = Off 
{ 31 , 1 , "OED"      ,   0 ,   0 ,   0 ,   0 , "Occupancy enable/disable"},//Value: 0 = Occupancy enabled 
                                                                            //Value: 1 = Occupancy disabled 
{ 30 , 1 , "OB"       ,   0 ,   0 ,   0 ,   0 , "Occupancy button"},//Value: 0 = Button pressed 
                                                                    //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51019_LRNB       0
#define A51019_HUM        1
#define A51019_TMP_Sp     2
#define A51019_TMP        3
#define A51019_FAN        4
#define A51019_OED        5
#define A51019_OB         6
#define A51019_NB_DATA    7
#define A51019_DATA_SIZE  4
// function type :0x1A : Supply voltage monitor, Temperature Set Point, Temperature Sensor, Fan Speed and Occupancy Control 
//{ 0xA5 , 0x10 , 0x1A , "Room Operating Panel                                                             ",  "Supply voltage monitor, Temperature Set Point, Temperature Sensor, Fan Speed and Occupancy Control " },

// TITLE:
T_DATAFIELD A5101A [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SV"       ,   0 , 250 ,   0 ,   5 , "Supply Voltage"},
{  8 , 8 , "TMP_Sp"   , 250 ,   0 ,   0 , +40 , "Temp Setpoint"},
{ 16 , 8 , "TMP"      , 250 ,   0 ,   0 , +40 , "Temperature"},
{ 25 , 3 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "Fan speed"},//Value: 0 = Auto 
                                                             //Value: 1 = Speed 0 
                                                             //Value: 2 = Speed 1 
                                                             //Value: 3 = Speed 2 
                                                             //Value: 4 = Speed 3 
                                                             //Value: 5 = Speed 4 
                                                             //Value: 6 = Speed 5 
                                                             //Value: 7 = Off 
{ 30 , 1 , "OED"      ,   0 ,   0 ,   0 ,   0 , "Occupancy enable/disable"},//Value: 0 = Occupancy enabled 
                                                                            //Value: 1 = Occupancy disabled 
{ 31 , 1 , "OB"       ,   0 ,   0 ,   0 ,   0 , "Occupancy button"},//Value: 0 = Button pressed 
                                                                    //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5101A_LRNB       0
#define A5101A_SV         1
#define A5101A_TMP_Sp     2
#define A5101A_TMP        3
#define A5101A_FAN        4
#define A5101A_OED        5
#define A5101A_OB         6
#define A5101A_NB_DATA    7
#define A5101A_DATA_SIZE  4
// function type :0x1B : Supply Voltage Monitor, Illumination, Temperature Sensor, Fan Speed and Occupancy Control 
//{ 0xA5 , 0x10 , 0x1B , "Room Operating Panel                                                             ",  "Supply Voltage Monitor, Illumination, Temperature Sensor, Fan Speed and Occupancy Control " },

// TITLE:
T_DATAFIELD A5101B [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SV"       ,   0 , 250 ,   0 ,   5 , "Supply Voltage"},
{  8 , 8 , "ILL"      ,   0 , 250 ,   0 , 1000 , "Illumination"},
{ 16 , 8 , "TMP"      , 250 ,   0 ,   0 , +40 , "Temperature"},
{ 25 , 3 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "Fan speed"},//Value: 0 = Auto 
                                                             //Value: 1 = Speed 0 
                                                             //Value: 2 = Speed 1 
                                                             //Value: 3 = Speed 2 
                                                             //Value: 4 = Speed 3 
                                                             //Value: 5 = Speed 4 
                                                             //Value: 6 = Speed 5 
                                                             //Value: 7 = Off 
{ 30 , 1 , "OED"      ,   0 ,   0 ,   0 ,   0 , "Occupancy enable/disable"},//Value: 0 = Occupancy enabled 
                                                                            //Value: 1 = Occupancy disabled 
{ 31 , 1 , "OB"       ,   0 ,   0 ,   0 ,   0 , "Occupancy button"},//Value: 0 = Button pressed 
                                                                    //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5101B_LRNB       0
#define A5101B_SV         1
#define A5101B_ILL        2
#define A5101B_TMP        3
#define A5101B_FAN        4
#define A5101B_OED        5
#define A5101B_OB         6
#define A5101B_NB_DATA    7
#define A5101B_DATA_SIZE  4
// function type :0x1C : Illumination, Illumination Set Point, Temperature Sensor, Fan Speed and Occupancy Control 
//{ 0xA5 , 0x10 , 0x1C , "Room Operating Panel                                                             ",  "Illumination, Illumination Set Point, Temperature Sensor, Fan Speed and Occupancy Control " },

// TITLE:
T_DATAFIELD A5101C [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "ILL"      ,   0 , 250 ,   0 , 1000 , "Illumination"},
{  8 , 8 , "ILLSP"    ,   0 , 250 ,   0 , 1000 , "Illumination Set Point"},
{ 16 , 8 , "TMP"      , 250 ,   0 ,   0 , +40 , "Temperature"},
{ 25 , 3 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "Fan speed"},//Value: 0 = Auto 
                                                             //Value: 1 = Speed 0 
                                                             //Value: 2 = Speed 1 
                                                             //Value: 3 = Speed 2 
                                                             //Value: 4 = Speed 3 
                                                             //Value: 5 = Speed 4 
                                                             //Value: 6 = Speed 5 
                                                             //Value: 7 = Off 
{ 30 , 1 , "OED"      ,   0 ,   0 ,   0 ,   0 , "Occupancy enable/disable"},//Value: 0 = Occupancy enabled 
                                                                            //Value: 1 = Occupancy disabled 
{ 31 , 1 , "OB"       ,   0 ,   0 ,   0 ,   0 , "Occupancy button"},//Value: 0 = Button pressed 
                                                                    //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5101C_LRNB       0
#define A5101C_ILL        1
#define A5101C_ILLSP      2
#define A5101C_TMP        3
#define A5101C_FAN        4
#define A5101C_OED        5
#define A5101C_OB         6
#define A5101C_NB_DATA    7
#define A5101C_DATA_SIZE  4
// function type :0x1D : Humidity, Humidity Set Point, Temperature Sensor, Fan Speed and Occupancy Control 
//{ 0xA5 , 0x10 , 0x1D , "Room Operating Panel                                                             ",  "Humidity, Humidity Set Point, Temperature Sensor, Fan Speed and Occupancy Control " },

// TITLE:
T_DATAFIELD A5101D [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "HUM"      ,   0 , 250 ,   0 , 100 , "Humidity"},
{  8 , 8 , "HUMSP"    ,   0 , 250 ,   0 , 100 , "Humidity Set Point"},
{ 16 , 8 , "TMP"      , 250 ,   0 ,   0 , +40 , "Temperature"},
{ 25 , 3 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "Fan speed"},//Value: 0 = Auto 
                                                             //Value: 1 = Speed 0 
                                                             //Value: 2 = Speed 1 
                                                             //Value: 3 = Speed 2 
                                                             //Value: 4 = Speed 3 
                                                             //Value: 5 = Speed 4 
                                                             //Value: 6 = Speed 5 
                                                             //Value: 7 = Off 
{ 30 , 1 , "OED"      ,   0 ,   0 ,   0 ,   0 , "Occupancy enable/disable"},//Value: 0 = Occupancy enabled 
                                                                            //Value: 1 = Occupancy disabled 
{ 31 , 1 , "OB"       ,   0 ,   0 ,   0 ,   0 , "Occupancy button"},//Value: 0 = Button pressed 
                                                                    //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5101D_LRNB       0
#define A5101D_HUM        1
#define A5101D_HUMSP      2
#define A5101D_TMP        3
#define A5101D_FAN        4
#define A5101D_OED        5
#define A5101D_OB         6
#define A5101D_NB_DATA    7
#define A5101D_DATA_SIZE  4
// function type :0x1E : see A5-10-1B 
//{ 0xA5 , 0x10 , 0x1E , "Room Operating Panel                                                             ",  "see A5-10-1B                                                                     " },
// function type :0x1F : Temperature Sensor, Set Point, Fan Speed, Occupancy and Unoccupancy Control 
//{ 0xA5 , 0x10 , 0x1F , "Room Operating Panel                                                             ",  "Temperature Sensor, Set Point, Fan Speed, Occupancy and Unoccupancy Control      " },

// TITLE:
T_DATAFIELD A5101F [] = {
{  0 , 8 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "Turn-switch for fan speed"},
{  8 , 8 , "SP"       ,   0 , 255 ,   0 , 255 , "Set Point"},
{ 16 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature"},
{ 25 , 1 , "TMP_F"    ,   0 ,   0 ,   0 ,   0 , "Temperature flag"},//Value: 1 = Temperature present 
                                                                    //Value: 0 = Temperature absent 
{ 26 , 1 , "SP_F"     ,   0 ,   0 ,   0 ,   0 , "Set point flag"},//Value: 1 = Set point present 
                                                                  //Value: 0 = Set point absent 
{ 27 , 1 , "FAN_F"    ,   0 ,   0 ,   0 ,   0 , "Fan speed flag"},//Value: 1 = Fan speed present 
                                                                  //Value: 0 = Fan speed absent 
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 30 , 1 , "UNOCC"    ,   0 ,   0 ,   0 ,   0 , "Unoccupancy"},//Value: 0 = Button pressed 
                                                               //Value: 1 = Button released 
{ 31 , 1 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy"},//Value: 0 = Button pressed 
                                                             //Value: 1 = Button released 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A5101F_FAN        0
#define A5101F_SP         1
#define A5101F_TMP        2
#define A5101F_TMP_F      3
#define A5101F_SP_F       4
#define A5101F_FAN_F      5
#define A5101F_LRNB       6
#define A5101F_UNOCC      7
#define A5101F_OCC        8
#define A5101F_NB_DATA    9
#define A5101F_DATA_SIZE  4
// function type :0x20 : Temperature and Set Point with Special Heating States 
//{ 0xA5 , 0x10 , 0x20 , "Room Operating Panel                                                             ",  "Temperature and Set Point with Special Heating States                            " },

// TITLE:
T_DATAFIELD A51020 [] = {
{  0 , 8 , "SP"       ,   0 , 255 ,   0 , 255 , "Set Point"},
{ 16 , 8 , "TMP"      ,   0 , 250 ,   0 , +40 , "Temperature"},
{ 25 , 2 , "SPM"      ,   0 ,   0 ,   0 ,   0 , "Set point mode"},//Value: 0 = Room temperature defined by SP 
                                                                  //Value: 1 = Frost protection 
                                                                  //Value: 2 = Automatic control (e.g. defined by time program) 
                                                                  //Value: 3 = Reserved 
{ 27 , 1 , "BATT"     ,   0 ,   0 ,   0 ,   0 , "Battery state"},//Value: 0 = Battery ok 
                                                                 //Value: 1 = Battery low 
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 31 , 1 , "ACT"      ,   0 ,   0 ,   0 ,   0 , "User activity"},//Value: 0 = No user action 
                                                                 //Value: 1 = User interaction 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51020_SP         0
#define A51020_TMP        1
#define A51020_SPM        2
#define A51020_BATT       3
#define A51020_LRNB       4
#define A51020_ACT        5
#define A51020_NB_DATA    6
#define A51020_DATA_SIZE  4
// function type :0x21 : Temperature, Humidity and Set Point with Special Heating States 
//{ 0xA5 , 0x10 , 0x21 , "Room Operating Panel                                                             ",  "Temperature, Humidity and Set Point with Special Heating States                  " },

// TITLE:
T_DATAFIELD A51021 [] = {
{  0 , 8 , "SP"       ,   0 , 255 ,   0 , 255 , "Set Point"},
{  8 , 8 , "HUM"      ,   0 , 250 ,   0 , 100 , "Humidity"},
{ 16 , 8 , "TMP"      ,   0 , 250 ,   0 , +40 , "Temperature"},
{ 25 , 2 , "SPM"      ,   0 ,   0 ,   0 ,   0 , "Set point mode"},//Value: 0 = Room temperature defined by SP 
                                                                  //Value: 1 = Frost protection 
                                                                  //Value: 2 = Automatic control 
                                                                  //Value: 3 = Reserved 
{ 27 , 1 , "BATT"     ,   0 ,   0 ,   0 ,   0 , "Battery state"},//Value: 0 = Battery ok 
                                                                 //Value: 1 = Battery low 
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 31 , 1 , "ACT"      ,   0 ,   0 ,   0 ,   0 , "User activity"},//Value: 0 = No user action 
                                                                 //Value: 1 = User interaction 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51021_SP         0
#define A51021_HUM        1
#define A51021_TMP        2
#define A51021_SPM        3
#define A51021_BATT       4
#define A51021_LRNB       5
#define A51021_ACT        6
#define A51021_NB_DATA    7
#define A51021_DATA_SIZE  4
// function type :0x22 : Temperature, Setpoint, Humidity and Fan Speed 
//{ 0xA5 , 0x10 , 0x22 , "Room Operating Panel                                                             ",  "Temperature, Setpoint, Humidity and Fan Speed                                    " },

// TITLE:
T_DATAFIELD A51022 [] = {
{  0 , 8 , "SP"       ,   0 , 255 ,   0 , 255 , "Relative Setpoint"},
{  8 , 8 , "HUM"      ,   0 , 250 ,   0 , 100 , "Humidity"},
{ 16 , 8 , "TMP"      ,   0 , 250 ,   0 , +40 , "Temperature"},
{ 24 , 3 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "Fanspeed"},//Value: 0 = Auto 
                                                            //Value: 1 = Speed 0 / OFF 
                                                            //Value: 2 = Speed 1 
                                                            //Value: 3 = Speed 2 
                                                            //Value: 4 = Speed 3 
                                                            //Value: 5 ... 7 = Reserved 
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51022_SP         0
#define A51022_HUM        1
#define A51022_TMP        2
#define A51022_FAN        3
#define A51022_LRNB       4
#define A51022_NB_DATA    5
#define A51022_DATA_SIZE  4
// function type :0x23 : Temperature, Setpoint, Humidity, Fan Speed and Occupancy 
//{ 0xA5 , 0x10 , 0x23 , "Room Operating Panel                                                             ",  "Temperature, Setpoint, Humidity, Fan Speed and Occupancy                         " },

// TITLE:
T_DATAFIELD A51023 [] = {
{  0 , 8 , "SP"       ,   0 , 255 ,   0 , 255 , "Relative Setpoint"},
{  8 , 8 , "HUM"      ,   0 , 250 ,   0 , 100 , "Humidity"},
{ 16 , 8 , "TMP"      ,   0 , 250 ,   0 , +40 , "Temperature"},
{ 24 , 3 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "Fanspeed"},//Value: 0 = Auto 
                                                            //Value: 1 = Speed 0 / OFF 
                                                            //Value: 2 = Speed 1 
                                                            //Value: 3 = Speed 2 
                                                            //Value: 4 = Speed 3 
                                                            //Value: 5 ... 7 = Reserved 
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 31 , 1 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy"},//Value: 0 = Unoccupied 
                                                             //Value: 1 = Occupied 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51023_SP         0
#define A51023_HUM        1
#define A51023_TMP        2
#define A51023_FAN        3
#define A51023_LRNB       4
#define A51023_OCC        5
#define A51023_NB_DATA    6
#define A51023_DATA_SIZE  4
// function number :0x11 : Controller Status 
// function type :0x01 : Lighting Controller 
//{ 0xA5 , 0x11 , 0x01 , "Controller Status                                                                ",  "Lighting Controller                                                              " },

// TITLE:
T_DATAFIELD A51101 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "ILL"      ,   0 , 255 ,   0 , 510 , "Illumination"},
{  8 , 8 , "ISP"      ,   0 , 255 ,   0 , 255 , "Illumination Set Point"},
{ 16 , 8 , "DIM"      ,   0 , 255 ,   0 , 255 , "Dimming Output Level"},
{ 24 , 1 , "REP"      ,   0 ,   0 ,   0 ,   0 , "Repeater"},//Value: 0 = disabled 
                                                            //Value: 1 = enabled 
{ 25 , 1 , "PRT"      ,   0 ,   0 ,   0 ,   0 , "Power Relay Timer"},//Value: 0 = disabled 
                                                                     //Value: 1 = enabled 
{ 26 , 1 , "DHV"      ,   0 ,   0 ,   0 ,   0 , "Daylight Harvesting"},//Value: 0 = disabled 
                                                                       //Value: 1 = enabled 
{ 27 , 1 , "EDIM"     ,   0 ,   0 ,   0 ,   0 , "Dimming"},//Value: 0 = switching load 
                                                           //Value: 1 = dimming load 
{ 29 , 1 , "MGC"      ,   0 ,   0 ,   0 ,   0 , "Magnet Contact"},//Value: 0 = open 
                                                                  //Value: 1 = closed 
{ 30 , 1 , "OCC"      ,   0 ,   0 ,   0 ,   0 , "Occupancy"},//Value: 0 = unoccupied 
                                                             //Value: 1 = occupied 
{ 31 , 1 , "PWR"      ,   0 ,   0 ,   0 ,   0 , "Power Relay"},//Value: 0 = off 
                                                               //Value: 1 = on 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51101_LRNB       0
#define A51101_ILL        1
#define A51101_ISP        2
#define A51101_DIM        3
#define A51101_REP        4
#define A51101_PRT        5
#define A51101_DHV        6
#define A51101_EDIM       7
#define A51101_MGC        8
#define A51101_OCC        9
#define A51101_PWR        10
#define A51101_NB_DATA    11
#define A51101_DATA_SIZE  4
// function type :0x02 : Temperature Controller Output 
//{ 0xA5 , 0x11 , 0x02 , "Controller Status                                                                ",  "Temperature Controller Output                                                    " },

// TITLE:
T_DATAFIELD A51102 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "CVAR"     ,   0 , 255 ,   0 , 100 , "Control Variable"},
{  8 , 8 , "FAN"      ,   0 ,   0 ,   0 ,   0 , "FanStage"},//Value: 0 = Stage 0 Manual 
                                                            //Value: 1 = Stage 1 Manual 
                                                            //Value: 2 = Stage 2 Manual 
                                                            //Value: 3 = Stage 3 Manual 
                                                            //Value: 16 = Stage 0 Automatic 
                                                            //Value: 17 = Stage 1 Automatic 
                                                            //Value: 18 = Stage 2 Automatic 
                                                            //Value: 19 = Stage 3 Automatic 
                                                            //Value: 255 = Not Available 
{ 16 , 8 , "ASP"      ,   0 , 255 ,   0 , +51.2 , "Actual Setpoint"},
{ 24 , 1 , "ALR"      ,   0 ,   0 ,   0 ,   0 , "Alarm"},//Value: 0 = No alarm 
                                                         //Value: 1 = Alarm 
{ 25 , 2 , "CTM"      ,   0 ,   0 ,   0 ,   0 , "Controller mode"},//Value: 1 = Heating 
                                                                   //Value: 2 = Cooling 
                                                                   //Value: 3 = Off 
{ 27 , 1 , "CST"      ,   0 ,   0 ,   0 ,   0 , "Controller state"},//Value: 0 = Automatic 
                                                                    //Value: 1 = Override 
{ 29 , 1 , "ERH"      ,   0 ,   0 ,   0 ,   0 , "Energy hold-off"},//Value: 0 = Normal 
                                                                   //Value: 1 = Energy hold-off/ Dew point 
{ 30 , 2 , "RO"       ,   0 ,   0 ,   0 ,   0 , "Room occupancy"},//Value: 0 = Occupied 
                                                                  //Value: 1 = Unoccupied 
                                                                  //Value: 2 = StandBy 
                                                                  //Value: 3 = Frost 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51102_LRNB       0
#define A51102_CVAR       1
#define A51102_FAN        2
#define A51102_ASP        3
#define A51102_ALR        4
#define A51102_CTM        5
#define A51102_CST        6
#define A51102_ERH        7
#define A51102_RO         8
#define A51102_NB_DATA    9
#define A51102_DATA_SIZE  4
// function type :0x03 : Blind Status 
//{ 0xA5 , 0x11 , 0x03 , "Controller Status                                                                ",  "Blind Status                                                                     " },

// TITLE:
T_DATAFIELD A51103 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "BSP"      ,   0 , 100 ,   0 , 100 , "Blind/shutter pos."},
{  8 , 1 , "AS"       ,   0 ,   0 ,   0 ,   0 , "Angle sign"},//Value: 0 = Positive sign 
                                                              //Value: 1 = Negative sign 
{  9 , 7 , "AN"       ,   0 ,  90 ,   0 , 180 , "Angle"},
{ 16 , 1 , "PVF"      ,   0 ,   0 ,   0 ,   0 , "Position value flag"},//Value: 0 = No Position value available 
                                                                       //Value: 1 = Position value available 
{ 17 , 1 , "AVF"      ,   0 ,   0 ,   0 ,   0 , "Angle value flag"},//Value: 0 = No Angle value available 
                                                                    //Value: 1 = Angle value available 
{ 18 , 2 , "ES"       ,   0 ,   0 ,   0 ,   0 , "Error state"},//Value: 0 = No error present 
                                                               //Value: 1 = End-positions are not configured 
                                                               //Value: 2 = Internal failure 
                                                               //Value: 3 = Not used 
{ 20 , 2 , "EP"       ,   0 ,   0 ,   0 ,   0 , "End-position"},//Value: 0 = No End-position available 
                                                                //Value: 1 = No End-position reached 
                                                                //Value: 2 = Blind fully open 
                                                                //Value: 3 = Blind fully closed 
{ 22 , 2 , "ST"       ,   0 ,   0 ,   0 ,   0 , "Status"},//Value: 0 = No Status available 
                                                          //Value: 1 = Blind is stopped 
                                                          //Value: 2 = Blind opens 
                                                          //Value: 3 = Blind closes 
{ 24 , 1 , "SM"       ,   0 ,   0 ,   0 ,   0 , "Service Mode"},//Value: 0 = Normal mode 
                                                                //Value: 1 = Service mode is activated (For example for maintenance) 
{ 25 , 1 , "MOTP"     ,   0 ,   0 ,   0 ,   0 , "Mode of the position"},//Value: 0 = Normal mode: 
                                                                        //Value: 1 = Inverse mode: 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51103_LRNB       0
#define A51103_BSP        1
#define A51103_AS         2
#define A51103_AN         3
#define A51103_PVF        4
#define A51103_AVF        5
#define A51103_ES         6
#define A51103_EP         7
#define A51103_ST         8
#define A51103_SM         9
#define A51103_MOTP       10
#define A51103_NB_DATA    11
#define A51103_DATA_SIZE  4
// function type :0x04 : Extended Lighting Status 
//{ 0xA5 , 0x11 , 0x04 , "Controller Status                                                                ",  "Extended Lighting Status                                                         " },

// TITLE:
T_DATAFIELD A51104 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "P1"       ,   0 ,   0 ,   0 ,   0 , "Parameter 1"},
{  8 , 8 , "P2"       ,   0 ,   0 ,   0 ,   0 , "Parameter 2"},
{ 16 , 8 , "P3"       ,   0 ,   0 ,   0 ,   0 , "Parameter 3"},
{ 24 , 1 , "SM"       ,   0 ,   0 ,   0 ,   0 , "Service Mode"},//Value: 0 = Normal mode 
                                                                //Value: 1 = Service mode is activated. 
{ 25 , 1 , "OHF"      ,   0 ,   0 ,   0 ,   0 , "Operating hours flag"},//Value: 0 = No lamp operating hours available 
                                                                        //Value: 1 = Lamp operating hours available 
{ 26 , 2 , "ES"       ,   0 ,   0 ,   0 ,   0 , "Error state"},//Value: 0 = No error present 
                                                               //Value: 1 = Lamp-failure 
                                                               //Value: 2 = Internal failure 
                                                               //Value: 3 = Failure on the external periphery 
{ 29 , 2 , "PM"       ,   0 ,   0 ,   0 ,   0 , "Parameter Mode"},//Value: 0 = 8 Bit Dimmer Value and Lamp operating hours 
                                                                  //Value: 1 = RGB Value 
                                                                  //Value: 2 = Energy metering value 
                                                                  //Value: 3 = Not used 
{ 31 , 1 , "ST"       ,   0 ,   0 ,   0 ,   0 , "Status"},//Value: 0 = Lighting off 
                                                          //Value: 1 = Lighting on 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51104_LRNB       0
#define A51104_P1         1
#define A51104_P2         2
#define A51104_P3         3
#define A51104_SM         4
#define A51104_OHF        5
#define A51104_ES         6
#define A51104_PM         7
#define A51104_ST         8
#define A51104_NB_DATA    9
#define A51104_DATA_SIZE  4
// function type :0x05 : Dual-Channel Switch Actuator 
//{ 0xA5 , 0x11 , 0x05 , "Controller Status                                                                ",  "Dual-Channel Switch Actuator                                                     " },

// TITLE:
T_DATAFIELD A51105 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 31 , 1 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 0 = Request 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51105_LRNB       0
#define A51105_MT         1
#define A51105_NB_DATA    2
#define A51105_DATA_SIZE  4

// TITLE:
T_DATAFIELD A51105 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 25 , 3 , "WM"       ,   0 ,   0 ,   0 ,   0 , "Working Mode"},//Value: 0b001 = mode 1 
{ 29 , 2 , "RS"       ,   0 ,   0 ,   0 ,   0 , "Relay Status"},//Value: 0b00 = CH1 off, CH2 off 
{ 31 , 1 , "MT"       ,   0 ,   0 ,   0 ,   0 , "Message Type"},//Value: 1 = Status Report 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51105_LRNB       0
#define A51105_WM         1
#define A51105_RS         2
#define A51105_MT         3
#define A51105_NB_DATA    4
#define A51105_DATA_SIZE  4
// function number :0x12 : Automated Meter Reading (AMR) 
// function type :0x00 : Counter 
//{ 0xA5 , 0x12 , 0x00 , "Automated Meter Reading (AMR)                                                    ",  "Counter                                                                          " },

// TITLE:
T_DATAFIELD A51200 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 ,24 , "MR"       ,   0 , 16777215 ,   0 ,   0 , "Meter reading"},
{ 24 , 4 , "CH"       ,   0 ,  15 ,   0 ,  15 , "Measurement channel"},
{ 29 , 1 , "DT"       ,   0 ,   0 ,   0 ,   0 , "Data type (unit)"},//Value: 0 = Cumulative value 
                                                                    //Value: 1 = Current value 
{ 30 , 2 , "DIV"      ,   0 ,   0 ,   0 ,   0 , "Divisor (scale)"},//Value: 0 = x/1 
                                                                   //Value: 1 = x/10 
                                                                   //Value: 2 = x/100 
                                                                   //Value: 3 = x/1000 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51200_LRNB       0
#define A51200_MR         1
#define A51200_CH         2
#define A51200_DT         3
#define A51200_DIV        4
#define A51200_NB_DATA    5
#define A51200_DATA_SIZE  4
// function type :0x01 : Electricity 
//{ 0xA5 , 0x12 , 0x01 , "Automated Meter Reading (AMR)                                                    ",  "Electricity                                                                      " },

// TITLE:
T_DATAFIELD A51201 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 ,24 , "MR"       ,   0 , 16777215 ,   0 ,   0 , "Meter reading"},
{ 24 , 4 , "TI"       ,   0 ,  15 ,   0 ,  15 , "Tariff info"},
{ 29 , 1 , "DT"       ,   0 ,   0 ,   0 ,   0 , "Data type (unit)"},//Value: 0 = Cumulative value 
                                                                    //Value: 1 = Current value 
{ 30 , 2 , "DIV"      ,   0 ,   0 ,   0 ,   0 , "Divisor (scale)"},//Value: 0 = x/1 
                                                                   //Value: 1 = x/10 
                                                                   //Value: 2 = x/100 
                                                                   //Value: 3 = x/1000 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51201_LRNB       0
#define A51201_MR         1
#define A51201_TI         2
#define A51201_DT         3
#define A51201_DIV        4
#define A51201_NB_DATA    5
#define A51201_DATA_SIZE  4
// function type :0x02 : Gas 
//{ 0xA5 , 0x12 , 0x02 , "Automated Meter Reading (AMR)                                                    ",  "Gas                                                                              " },

// TITLE:
T_DATAFIELD A51202 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 ,24 , "MR"       ,   0 , 16777215 ,   0 ,   0 , "meter reading"},
{ 24 , 4 , "TI"       ,   0 ,  15 ,   0 ,  15 , "Tariff info"},
{ 29 , 1 , "DT"       ,   0 ,   0 ,   0 ,   0 , "data type (unit)"},//Value: 0 = Cumulative value 
                                                                    //Value: 1 = Current value 
{ 30 , 2 , "DIV"      ,   0 ,   0 ,   0 ,   0 , "divisor (scale)"},//Value: 0 = x/1 
                                                                   //Value: 1 = x/10 
                                                                   //Value: 2 = x/100 
                                                                   //Value: 3 = x/1000 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51202_LRNB       0
#define A51202_MR         1
#define A51202_TI         2
#define A51202_DT         3
#define A51202_DIV        4
#define A51202_NB_DATA    5
#define A51202_DATA_SIZE  4
// function type :0x03 : Water 
//{ 0xA5 , 0x12 , 0x03 , "Automated Meter Reading (AMR)                                                    ",  "Water                                                                            " },

// TITLE:
T_DATAFIELD A51203 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 ,24 , "MR"       ,   0 , 16777215 ,   0 ,   0 , "Meter reading"},
{ 24 , 4 , "TI"       ,   0 ,  15 ,   0 ,  15 , "Tariff info"},
{ 29 , 1 , "DT"       ,   0 ,   0 ,   0 ,   0 , "Data type (unit)"},//Value: 0 = Cumulative value 
                                                                    //Value: 1 = Current value 
{ 30 , 2 , "DIV"      ,   0 ,   0 ,   0 ,   0 , "Divisor (scale)"},//Value: 0 = x/1 
                                                                   //Value: 1 = x/10 
                                                                   //Value: 2 = x/100 
                                                                   //Value: 3 = x/1000 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51203_LRNB       0
#define A51203_MR         1
#define A51203_TI         2
#define A51203_DT         3
#define A51203_DIV        4
#define A51203_NB_DATA    5
#define A51203_DATA_SIZE  4
// function type :0x04 : Temperature and Load Sensor 
//{ 0xA5 , 0x12 , 0x04 , "Automated Meter Reading (AMR)                                                    ",  "Temperature and Load Sensor                                                      " },

// TITLE:
T_DATAFIELD A51204 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 ,14 , "MR"       ,   0 , 16383 ,   0 , 16383 , "Meter reading"},
{ 16 , 8 , "TMP"      ,   0 , 255 , -40 , +40 , "Temperature"},
{ 30 , 2 , "BL"       ,   0 ,   0 ,   0 ,   0 , "Battery Level"},//Value: 0 = 100-75% 
                                                                 //Value: 1 = 75-50% 
                                                                 //Value: 2 = 50-25% 
                                                                 //Value: 3 = 25-0% 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51204_LRNB       0
#define A51204_MR         1
#define A51204_TMP        2
#define A51204_BL         3
#define A51204_NB_DATA    4
#define A51204_DATA_SIZE  4
// function type :0x05 : Temperature and Container Sensor 
//{ 0xA5 , 0x12 , 0x05 , "Automated Meter Reading (AMR)                                                    ",  "Temperature and Container Sensor                                                 " },

// TITLE:
T_DATAFIELD A51205 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 1 , "PS0"      ,   0 ,   0 ,   0 ,   0 , "Position Sensor 0"},//Value: 0 = not possessed 
                                                                     //Value: 1 = possessed 
{  1 , 1 , "PS1"      ,   0 ,   0 ,   0 ,   0 , "Position Sensor 1"},//Value: 0 = not possessed 
                                                                     //Value: 1 = possessed 
{  2 , 1 , "PS2"      ,   0 ,   0 ,   0 ,   0 , "Position Sensor 2"},//Value: 0 = not possessed 
                                                                     //Value: 1 = possessed 
{  3 , 1 , "PS3"      ,   0 ,   0 ,   0 ,   0 , "Position Sensor 3"},//Value: 0 = not possessed 
                                                                     //Value: 1 = possessed 
{  4 , 1 , "PS4"      ,   0 ,   0 ,   0 ,   0 , "Position Sensor 4"},//Value: 0 = not possessed 
                                                                     //Value: 1 = possessed 
{  5 , 1 , "PS5"      ,   0 ,   0 ,   0 ,   0 , "Position Sensor 5"},//Value: 0 = not possessed 
                                                                     //Value: 1 = possessed 
{  6 , 1 , "PS6"      ,   0 ,   0 ,   0 ,   0 , "Position Sensor 6"},//Value: 0 = not possessed 
                                                                     //Value: 1 = possessed 
{  7 , 1 , "PS7"      ,   0 ,   0 ,   0 ,   0 , "Position Sensor 7"},//Value: 0 = not possessed 
                                                                     //Value: 1 = possessed 
{  8 , 1 , "PS8"      ,   0 ,   0 ,   0 ,   0 , "Position Sensor 8"},//Value: 0 = not possessed 
                                                                     //Value: 1 = possessed 
{  9 , 1 , "PS9"      ,   0 ,   0 ,   0 ,   0 , "Position Sensor 9"},//Value: 0 = not possessed 
                                                                     //Value: 1 = possessed 
{ 16 , 8 , "TMP"      ,   0 , 255 , -40 , +40 , "Temperature"},
{ 30 , 2 , "BL"       ,   0 ,   0 ,   0 ,   0 , "Battery Level"},//Value: 0 = 100-75% 
                                                                 //Value: 1 = 75-50% 
                                                                 //Value: 2 = 50-25% 
                                                                 //Value: 3 = 25-0% 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51205_LRNB       0
#define A51205_PS0        1
#define A51205_PS1        2
#define A51205_PS2        3
#define A51205_PS3        4
#define A51205_PS4        5
#define A51205_PS5        6
#define A51205_PS6        7
#define A51205_PS7        8
#define A51205_PS8        9
#define A51205_PS9        10
#define A51205_TMP        11
#define A51205_BL         12
#define A51205_NB_DATA    13
#define A51205_DATA_SIZE  4
// function type :0x10 : Current meter 16 channels 
//{ 0xA5 , 0x12 , 0x10 , "Automated Meter Reading (AMR)                                                    ",  "Current meter 16 channels                                                        " },

// TITLE:
T_DATAFIELD A51210 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 ,24 , "MR"       ,   0 , 16777215 ,   0 ,   0 , "Meter reading"},
{ 24 , 4 , "CH"       ,   0 ,  15 ,   0 ,  15 , "Measurement channel"},
{ 29 , 1 , "DT"       ,   0 ,   0 ,   0 ,   0 , "Data type (unit)"},//Value: 0 = Cumulative value 
                                                                    //Value: 1 = Current value 
{ 30 , 2 , "DIV"      ,   0 ,   0 ,   0 ,   0 , "Divisor (scale)"},//Value: 0 = x/1 
                                                                   //Value: 1 = x/10 
                                                                   //Value: 2 = x/100 
                                                                   //Value: 3 = x/1000 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51210_LRNB       0
#define A51210_MR         1
#define A51210_CH         2
#define A51210_DT         3
#define A51210_DIV        4
#define A51210_NB_DATA    5
#define A51210_DATA_SIZE  4
// function number :0x13 : Environmental Applications 
// function type :0x01 : Weather Station 
//{ 0xA5 , 0x13 , 0x01 , "Environmental Applications                                                       ",  "Weather Station                                                                  " },

// TITLE:
T_DATAFIELD A51301 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "DWS"      ,   0 , 255 ,   0 , 999 , "Dawn sensor"},
{  8 , 8 , "TMP"      ,   0 , 255 , -40 , +80 , "Temperature"},
{ 16 , 8 , "WND"      ,   0 , 255 ,   0 ,  70 , "Wind speed"},
{ 24 , 4 , "ID"       ,   0 ,   0 ,   0 ,   0 , "Identifier"},//Value: 0x1 = (null) 
{ 29 , 1 , "D/N"      ,   0 ,   0 ,   0 ,   0 , "Day / Night"},//Value: 0 = Day 
                                                               //Value: 1 = Night 
{ 30 , 1 , "RAN"      ,   0 ,   0 ,   0 ,   0 , "Rain Indication"},//Value: 0 = No Rain 
                                                                   //Value: 1 = Rain 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51301_LRNB       0
#define A51301_DWS        1
#define A51301_TMP        2
#define A51301_WND        3
#define A51301_ID         4
#define A51301_D/N        5
#define A51301_RAN        6
#define A51301_NB_DATA    7
#define A51301_DATA_SIZE  4
// function type :0x02 : Sun Intensity 
//{ 0xA5 , 0x13 , 0x02 , "Environmental Applications                                                       ",  "Sun Intensity                                                                    " },

// TITLE:
T_DATAFIELD A51302 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SNW"      ,   0 , 255 ,   0 , 150 , "Sun - West"},
{  8 , 8 , "SNS"      ,   0 , 255 ,   0 , 150 , "Sun - South"},
{ 16 , 8 , "SNE"      ,   0 , 255 ,   0 , 150 , "Sun - East"},
{ 24 , 4 , "ID"       ,   0 ,   0 ,   0 ,   0 , "Identifier"},//Value: 0x2 = (null) 
{ 29 , 1 , "HEM"      ,   0 ,   0 ,   0 ,   0 , "Hemisphere"},//Value: 0 = North 
                                                              //Value: 1 = South 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51302_LRNB       0
#define A51302_SNW        1
#define A51302_SNS        2
#define A51302_SNE        3
#define A51302_ID         4
#define A51302_HEM        5
#define A51302_NB_DATA    6
#define A51302_DATA_SIZE  4
// function type :0x03 : Date Exchange 
//{ 0xA5 , 0x13 , 0x03 , "Environmental Applications                                                       ",  "Date Exchange                                                                    " },

// TITLE:
T_DATAFIELD A51303 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  3 , 5 , "DY"       ,   1 ,  31 ,   1 ,  31 , "Day"},
{ 12 , 4 , "MTH"      ,   1 ,  12 ,   1 ,  12 , "Month"},
{ 17 , 7 , "YR"       ,   0 ,  99 , 2000 , 2099 , "Year"},
{ 24 , 4 , "ID"       ,   0 ,   0 ,   0 ,   0 , "Identifier"},//Value: 0x3 = (null) 
{ 31 , 1 , "SRC"      ,   0 ,   0 ,   0 ,   0 , "Source"},//Value: 0 = Real Time Clock 
                                                          //Value: 1 = GPS or equivalent (e.g. DCF77, WWV) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51303_LRNB       0
#define A51303_DY         1
#define A51303_MTH        2
#define A51303_YR         3
#define A51303_ID         4
#define A51303_SRC        5
#define A51303_NB_DATA    6
#define A51303_DATA_SIZE  4
// function type :0x04 : Time and Day Exchange 
//{ 0xA5 , 0x13 , 0x04 , "Environmental Applications                                                       ",  "Time and Day Exchange                                                            " },

// TITLE:
T_DATAFIELD A51304 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 3 , "WDY"      ,   0 ,   0 ,   0 ,   0 , "Weekday"},//Value: 1 = Monday 
                                                           //Value: 2 = Tuesday 
                                                           //Value: 3 = Wednesday 
                                                           //Value: 4 = Thursday 
                                                           //Value: 5 = Friday 
                                                           //Value: 6 = Saturday 
                                                           //Value: 7 = Sunday 
{  3 , 5 , "HR"       ,   0 ,  23 ,   0 ,  23 , "Hour"},
{ 10 , 6 , "MIN"      ,   0 ,  59 ,   0 ,  59 , "Minute"},
{ 18 , 6 , "SEC"      ,   0 ,  59 ,   0 ,  59 , "Second"},
{ 24 , 4 , "ID"       ,   0 ,   0 ,   0 ,   0 , "Identifier"},//Value: 0x4 = (null) 
{ 29 , 1 , "TMF"      ,   0 ,   0 ,   0 ,   0 , "Time Format"},//Value: 0 = 24 hours 
                                                               //Value: 1 = 12 hours 
{ 30 , 1 , "A/PM"     ,   0 ,   0 ,   0 ,   0 , "AM/PM"},//Value: 0 = AM 
                                                         //Value: 1 = PM 
{ 31 , 1 , "SRC"      ,   0 ,   0 ,   0 ,   0 , "Source"},//Value: 0 = Real Time Clock 
                                                          //Value: 1 = GPS or equivalent (e.g. DCF77, WWV) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51304_LRNB       0
#define A51304_WDY        1
#define A51304_HR         2
#define A51304_MIN        3
#define A51304_SEC        4
#define A51304_ID         5
#define A51304_TMF        6
#define A51304_A/PM       7
#define A51304_SRC        8
#define A51304_NB_DATA    9
#define A51304_DATA_SIZE  4
// function type :0x05 : Direction Exchange 
//{ 0xA5 , 0x13 , 0x05 , "Environmental Applications                                                       ",  "Direction Exchange                                                               " },

// TITLE:
T_DATAFIELD A51305 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "ELV"      ,   0 , 180 , -90 , +90 , "Elevation"},
{ 15 , 9 , "AZM"      ,   0 , 359 ,   0 , 359 , "Azimut"},
{ 24 , 4 , "ID"       ,   0 ,   0 ,   0 ,   0 , "Identifier"},//Value: 0x5 = (null) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51305_LRNB       0
#define A51305_ELV        1
#define A51305_AZM        2
#define A51305_ID         3
#define A51305_NB_DATA    4
#define A51305_DATA_SIZE  4
// function type :0x06 : Geographic Position Exchange 
//{ 0xA5 , 0x13 , 0x06 , "Environmental Applications                                                       ",  "Geographic Position Exchange                                                     " },

// TITLE:
T_DATAFIELD A51306 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 4 , "LAT(MSB)" ,   0 ,   0 ,   0 ,   0 , "Latitude(MSB)"},
{  4 , 4 , "LOT(MSB)" ,   0 ,   0 ,   0 ,   0 , "Longitude(MSB)"},
{  8 , 8 , "LAT(LSB)" ,   0 , 4095 , -90 , +90 , "Latitude(LSB)"},
{ 16 , 8 , "LOT(LSB)" ,   0 , 4095 , -180 , +180 , "Longitude(LSB)"},
{ 24 , 4 , "ID"       ,   0 ,   0 ,   0 ,   0 , "Identifier"},//Value: 0x6 = (null) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51306_LRNB       0
#define A51306_LAT(MSB)   1
#define A51306_LOT(MSB)   2
#define A51306_LAT(LSB)   3
#define A51306_LOT(LSB)   4
#define A51306_ID         5
#define A51306_NB_DATA    6
#define A51306_DATA_SIZE  4
// function type :0x07 : Wind Sensor 
//{ 0xA5 , 0x13 , 0x07 , "Environmental Applications                                                       ",  "Wind Sensor                                                                      " },

// TITLE:
T_DATAFIELD A51307 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  4 , 4 , "WD"       ,   0 ,   0 ,   0 ,   0 , "Wind Direction"},//Value: 0 = NNE 
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
{  8 , 8 , "AWS"      ,   0 , 255 ,   1 , 199.9 , "Average Wind Speed"},
{ 16 , 8 , "MWS"      ,   0 , 255 ,   1 , 199.9 , "Maximum Wind Speed"},
{ 31 , 1 , "BS"       ,   0 ,   0 ,   0 ,   0 , "Battery Status"},//Value: 0 = Battery okay 
                                                                  //Value: 1 = Battery low 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51307_LRNB       0
#define A51307_WD         1
#define A51307_AWS        2
#define A51307_MWS        3
#define A51307_BS         4
#define A51307_NB_DATA    5
#define A51307_DATA_SIZE  4
// function type :0x08 : Rain Sensor 
//{ 0xA5 , 0x13 , 0x08 , "Environmental Applications                                                       ",  "Rain Sensor                                                                      " },

// TITLE:
T_DATAFIELD A51308 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  1 , 1 , "RAS"      ,   0 ,   0 ,   0 ,   0 , "Rainfall Adjust Sign"},//Value: 0 = Negative 
                                                                        //Value: 1 = Positive 
{  2 , 6 , "RFA"      ,   0 ,   0 ,   0 ,   0 , "Rainfall Adjust"},
{  8 ,16 , "RFC"      ,   0 , 65535 ,   0 , 65535 , "Rainfall Count"},
{ 31 , 1 , "BS"       ,   0 ,   0 ,   0 ,   0 , "Battery Status"},//Value: 0 = Battery okay 
                                                                  //Value: 1 = Battery low 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51308_LRNB       0
#define A51308_RAS        1
#define A51308_RFA        2
#define A51308_RFC        3
#define A51308_BS         4
#define A51308_NB_DATA    5
#define A51308_DATA_SIZE  4
// function type :0x10 : Sun position and radiation 
//{ 0xA5 , 0x13 , 0x10 , "Environmental Applications                                                       ",  "Sun position and radiation                                                       " },

// TITLE:
T_DATAFIELD A51310 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  7 , 1 , "D/N"      ,   0 ,   0 ,   0 ,   0 , "Day / Night"},//Value: 0 = Day 
                                                               //Value: 1 = Night 
{  0 , 7 , "SNE"      ,   0 ,  90 ,   0 ,  90 , "Sun Elevation"},
{  8 , 8 , "SNA"      ,   0 , 180 , -90 , +90 , "Sun Azimuth"},
{ 16 , 8 , "SRA_(MSB)" ,   0 ,   0 ,   0 ,   0 , "Solar Radiation (MSB)"},
{ 29 , 3 , "SRA_(LSB)" ,   0 , 2000 ,   0 , 2000 , "Solar Radiation (LSB)"},
{ 24 , 4 , "ID"       ,   0 ,   0 ,   0 ,   0 , "Identifier"},//Value: 0x7 = (null) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51310_LRNB       0
#define A51310_D/N        1
#define A51310_SNE        2
#define A51310_SNA        3
#define A51310_SRA_(MSB)  4
#define A51310_SRA_(LSB)  5
#define A51310_ID         6
#define A51310_NB_DATA    7
#define A51310_DATA_SIZE  4
// function number :0x14 : Multi-Func Sensor 
// function type :0x01 : Single Input Contact (Window/Door), Supply voltage monitor 
//{ 0xA5 , 0x14 , 0x01 , "Multi-Func Sensor                                                                ",  "Single Input Contact (Window/Door), Supply voltage monitor                       " },

// TITLE:
T_DATAFIELD A51401 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 250 ,   0 , 5.0 , "Supply voltage"},
{ 31 , 1 , "CT"       ,   0 ,   0 ,   0 ,   0 , "Contact"},//Value: 0b0 = Contact closed 
                                                           //Value: 0b1 = Contact open 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51401_LRNB       0
#define A51401_SVC        1
#define A51401_CT         2
#define A51401_NB_DATA    3
#define A51401_DATA_SIZE  4
// function type :0x02 : Single Input Contact (Window/Door), Supply voltage monitor and Illumination 
//{ 0xA5 , 0x14 , 0x02 , "Multi-Func Sensor                                                                ",  "Single Input Contact (Window/Door), Supply voltage monitor and Illumination      " },

// TITLE:
T_DATAFIELD A51402 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 250 ,   0 , 5.0 , "Supply voltage"},
{  8 , 8 , "ILL"      ,   0 , 250 ,   0 , 1000 , "Illumination"},
{ 31 , 1 , "CT"       ,   0 ,   0 ,   0 ,   0 , "Contact"},//Value: 0b0 = Contact closed 
                                                           //Value: 0b1 = Contact open 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51402_LRNB       0
#define A51402_SVC        1
#define A51402_ILL        2
#define A51402_CT         3
#define A51402_NB_DATA    4
#define A51402_DATA_SIZE  4
// function type :0x03 : Single Input Contact (Window/Door), Supply voltage monitor and Vibration 
//{ 0xA5 , 0x14 , 0x03 , "Multi-Func Sensor                                                                ",  "Single Input Contact (Window/Door), Supply voltage monitor and Vibration         " },

// TITLE:
T_DATAFIELD A51403 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 250 ,   0 , 5.0 , "Supply voltage"},
{ 30 , 1 , "VIB"      ,   0 ,   0 ,   0 ,   0 , "Vibration"},//Value: 0b0 = No vibration detected 
                                                             //Value: 0b1 = Vibration detected 
{ 31 , 1 , "CT"       ,   0 ,   0 ,   0 ,   0 , "Contact"},//Value: 0b0 = Contact closed 
                                                           //Value: 0b1 = Contact open 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51403_LRNB       0
#define A51403_SVC        1
#define A51403_VIB        2
#define A51403_CT         3
#define A51403_NB_DATA    4
#define A51403_DATA_SIZE  4
// function type :0x04 : Single Input Contact (Window/Door), Supply voltage monitor, Vibration and Illumination 
//{ 0xA5 , 0x14 , 0x04 , "Multi-Func Sensor                                                                ",  "Single Input Contact (Window/Door), Supply voltage monitor, Vibration and Illumination " },

// TITLE:
T_DATAFIELD A51404 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 250 ,   0 , 5.0 , "Supply voltage"},
{  8 , 8 , "ILL"      ,   0 , 250 ,   0 , 1000 , "Illumination"},
{ 30 , 1 , "VIB"      ,   0 ,   0 ,   0 ,   0 , "Vibration"},//Value: 0b0 = No vibration detected 
                                                             //Value: 0b1 = Vibration detected 
{ 31 , 1 , "CT"       ,   0 ,   0 ,   0 ,   0 , "Contact"},//Value: 0b0 = Contact closed 
                                                           //Value: 0b1 = Contact open 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51404_LRNB       0
#define A51404_SVC        1
#define A51404_ILL        2
#define A51404_VIB        3
#define A51404_CT         4
#define A51404_NB_DATA    5
#define A51404_DATA_SIZE  4
// function type :0x05 : Vibration/Tilt, Supply voltage monitor 
//{ 0xA5 , 0x14 , 0x05 , "Multi-Func Sensor                                                                ",  "Vibration/Tilt, Supply voltage monitor                                           " },

// TITLE:
T_DATAFIELD A51405 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 250 ,   0 , 5.0 , "Supply voltage"},
{ 30 , 1 , "VIB"      ,   0 ,   0 ,   0 ,   0 , "Vibration"},//Value: 0b0 = No vibration detected 
                                                             //Value: 0b1 = Vibration detected 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51405_LRNB       0
#define A51405_SVC        1
#define A51405_VIB        2
#define A51405_NB_DATA    3
#define A51405_DATA_SIZE  4
// function type :0x06 : Vibration/Tilt, Illumination and Supply voltage monitor 
//{ 0xA5 , 0x14 , 0x06 , "Multi-Func Sensor                                                                ",  "Vibration/Tilt, Illumination and Supply voltage monitor                          " },

// TITLE:
T_DATAFIELD A51406 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SVC"      ,   0 , 250 ,   0 , 5.0 , "Supply voltage"},
{  8 , 8 , "ILL"      ,   0 , 250 ,   0 , 1000 , "Illumination"},
{ 30 , 1 , "VIB"      ,   0 ,   0 ,   0 ,   0 , "Vibration"},//Value: 0b0 = No vibration detected 
                                                             //Value: 0b1 = Vibration detected 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A51406_LRNB       0
#define A51406_SVC        1
#define A51406_ILL        2
#define A51406_VIB        3
#define A51406_NB_DATA    4
#define A51406_DATA_SIZE  4
// function number :0x20 : HVAC Components 
// function type :0x01 : Battery Powered Actuator 
//{ 0xA5 , 0x20 , 0x01 , "HVAC Components                                                                  ",  "Battery Powered Actuator                                                         " },

// TITLE:
T_DATAFIELD A52001 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "CV"       ,   0 , 100 ,   0 , 100 , "Current Value"},
{  8 , 1 , "SO"       ,   0 ,   0 ,   0 ,   0 , "Service On"},//Value: 1 = on 
{  9 , 1 , "ENIE"     ,   0 ,   0 ,   0 ,   0 , "Energy input enabled"},//Value: 1 = true 
{ 10 , 1 , "ES"       ,   0 ,   0 ,   0 ,   0 , "Energy Storage"},//Value: 1 = true 
{ 11 , 1 , "BCAP"     ,   0 ,   0 ,   0 ,   0 , "Battery capacity"},//Value: 0 = true 
{ 12 , 1 , "CCO"      ,   0 ,   0 ,   0 ,   0 , "Contact, cover open"},//Value: 1 = true 
{ 13 , 1 , "FTS"      ,   0 ,   0 ,   0 ,   0 , "Failure temperature sensor, out off range"},//Value: 1 = true 
{ 14 , 1 , "DWO"      ,   0 ,   0 ,   0 ,   0 , "Detection, window open"},//Value: 1 = true 
{ 15 , 1 , "ACO"      ,   0 ,   0 ,   0 ,   0 , "Actuator obstructed"},//Value: 1 = true 
{ 16 , 8 , "TMP"      ,   0 , 255 ,   0 , +40 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52001_LRNB       0
#define A52001_CV         1
#define A52001_SO         2
#define A52001_ENIE       3
#define A52001_ES         4
#define A52001_BCAP       5
#define A52001_CCO        6
#define A52001_FTS        7
#define A52001_DWO        8
#define A52001_ACO        9
#define A52001_TMP        10
#define A52001_NB_DATA    11
#define A52001_DATA_SIZE  3

// TITLE:
T_DATAFIELD A52001 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "SP"       ,   0 , 100 or 255 ,   0 , 100 or +40 , "Valve position or Temperature Setpoint"},
{  8 , 8 , "TMP"      , 255 ,   0 ,   0 , +40 , "Temperature from RCU"},
{ 16 , 1 , "RIN"      ,   0 ,   0 ,   0 ,   0 , "Run init sequence"},//Value: 1 = true 
{ 17 , 1 , "LFS"      ,   0 ,   0 ,   0 ,   0 , "Lift set"},//Value: 1 = true 
{ 18 , 1 , "VO"       ,   0 ,   0 ,   0 ,   0 , "Valve open / maintenance"},//Value: 1 = true 
{ 19 , 1 , "VC"       ,   0 ,   0 ,   0 ,   0 , "Valve closed"},//Value: 1 = true 
{ 20 , 1 , "SB"       ,   0 ,   0 ,   0 ,   0 , "Summer bit, Reduction of energy consumption"},//Value: 1 = true 
{ 21 , 1 , "SPS"      ,   0 ,   0 ,   0 ,   0 , "Set Point Selection"},//Value: 0 = Valve position (0-100%). Unit respond to controller. 
                                                                       //Value: 1 = Temperature set point 0...40øC. Unit respond to room sensor and use internal PI loop. 
{ 22 , 1 , "SPN"      ,   0 ,   0 ,   0 ,   0 , "Set point inverse"},//Value: 1 = true 
{ 23 , 1 , "RCU"      ,   0 ,   0 ,   0 ,   0 , "Select function"},//Value: 0 = RCU 
                                                                   //Value: 1 = service on 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52001_LRNB       0
#define A52001_SP         1
#define A52001_TMP        2
#define A52001_RIN        3
#define A52001_LFS        4
#define A52001_VO         5
#define A52001_VC         6
#define A52001_SB         7
#define A52001_SPS        8
#define A52001_SPN        9
#define A52001_RCU        10
#define A52001_NB_DATA    11
#define A52001_DATA_SIZE  3
// function type :0x02 : Basic Actuator 
//{ 0xA5 , 0x20 , 0x02 , "HVAC Components                                                                  ",  "Basic Actuator                                                                   " },

// TITLE:
T_DATAFIELD A52002 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "AV"       ,   0 , 100 ,   0 , 100 , "Actual Value"},
{ 22 , 1 , "SPI"      ,   0 ,   0 ,   0 ,   0 , "Set point inverse"},//Value: 1 = true 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52002_LRNB       0
#define A52002_AV         1
#define A52002_SPI        2
#define A52002_NB_DATA    3
#define A52002_DATA_SIZE  3

// TITLE:
T_DATAFIELD A52002 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "VSP"      ,   0 , 100 ,   0 , 100 , "Valve Set point"},
{ 22 , 1 , "VSP"      ,   0 ,   0 ,   0 ,   0 , "Set point inverse"},//Value: 1 = true 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52002_LRNB       0
#define A52002_VSP        1
#define A52002_VSP        2
#define A52002_NB_DATA    3
#define A52002_DATA_SIZE  3
// function type :0x03 : Line powered Actuator 
//{ 0xA5 , 0x20 , 0x03 , "HVAC Components                                                                  ",  "Line powered Actuator                                                            " },

// TITLE:
T_DATAFIELD A52003 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "AV"       ,   0 , 100 ,   0 , 100 , "Actual valve"},
{ 16 , 8 , "TMP"      ,   0 , 255 ,   0 , +40 , "Temperature"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52003_LRNB       0
#define A52003_AV         1
#define A52003_TMP        2
#define A52003_NB_DATA    3
#define A52003_DATA_SIZE  3

// TITLE:
T_DATAFIELD A52003 [] = {
{ 22 , 1 , "Set_Point_Inverse" ,   0 ,   0 ,   0 ,   0 , "Set Point Inverse"},//Value: 1 = true 
{ 21 , 1 , "SPS"      ,   0 ,   0 ,   0 ,   0 , "Set Point Selection"},//Value: 0 = Actuator Setpoint (0-100%); Unit respond to controller. 
                                                                       //Value: 1 = Temperature Setpoint 0...+40øC; Unit respond to room sensor and use internal PI loop. 
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "ATS"      ,   0 , 100 or 255 ,   0 , 100 or +40 , "Actuator or Temperature Setpoint"},
{  8 , 8 , "TMPRC"    , 255 ,   0 ,   0 , +40 , "Temperature from RCU"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52003_Set_Point_Inverse 0
#define A52003_SPS        1
#define A52003_LRNB       2
#define A52003_ATS        3
#define A52003_TMPRC      4
#define A52003_NB_DATA    5
#define A52003_DATA_SIZE  2
// function type :0x04 : Heating Radiator Valve Actuating Drive with Feed and Room Temperature Measurement, Local Set Point Control and Display 
//{ 0xA5 , 0x20 , 0x04 , "HVAC Components                                                                  ",  "Heating Radiator Valve Actuating Drive with Feed and Room Temperature Measurement, Local Set Point Control and Display " },

// TITLE:
T_DATAFIELD A52004 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "CP"       ,   0 , 100 ,   0 , 100 , "Current Position"},
{  8 , 8 , "FTS"      ,   0 , 255 , 20 .. 80 , 10 .. 30 , "Feed Temperature OR Temperature Set Point"},
{ 16 , 8 , "TMPFC"    ,   0 ,   0 ,   0 ,   0 , "Room Temperature OR Failure Code"},
{ 24 , 1 , "MST"      ,   0 ,   0 ,   0 ,   0 , "Measurement Status"},//Value: 0 = Active 
                                                                      //Value: 1 = Inactive 
{ 25 , 1 , "STR"      ,   0 ,   0 ,   0 ,   0 , "Status Request"},//Value: 0 = No change 
                                                                  //Value: 1 = Status requested 
{ 29 , 1 , "BLS"      ,   0 ,   0 ,   0 ,   0 , "Button Lock Status"},//Value: 0 = Unlocked 
                                                                      //Value: 1 = Locked 
{ 30 , 1 , "TS"       ,   0 ,   0 ,   0 ,   0 , "Temperature Selection"},//Value: 0 = Feed temperature 
                                                                         //Value: 1 = Temperature set point 
{ 31 , 1 , "FL"       ,   0 ,   0 ,   0 ,   0 , "Failure"},//Value: 0 = No failure (TMP is transmitted) 
                                                           //Value: 1 = failure (FC is transmitted) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52004_LRNB       0
#define A52004_CP         1
#define A52004_FTS        2
#define A52004_TMPFC      3
#define A52004_MST        4
#define A52004_STR        5
#define A52004_BLS        6
#define A52004_TS         7
#define A52004_FL         8
#define A52004_NB_DATA    9
#define A52004_DATA_SIZE  4

// TITLE:
T_DATAFIELD A52004 [] = {
{  0 , 8 , "POS"      ,   0 , 100 ,   0 , 100 , "Valve Position"},
{  8 , 8 , "TSP"      ,   0 , 255 ,  10 ,  30 , "Temperature Set Point"},
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 17 , 1 , "MC"       ,   0 ,   0 ,   0 ,   0 , "Measurement Control"},//Value: 0 = Enable 
                                                                       //Value: 1 = Disable 
{ 18 , 6 , "WUC"      ,   0 ,   0 ,   0 ,   0 , "Wake-up Cycle"},//Value: 0 = 10 sec 
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
{ 26 , 2 , "DSO"      ,   0 ,   0 ,   0 ,   0 , "Display Orientation"},//Value: 0 = 0ø 
                                                                       //Value: 1 = 90ø 
                                                                       //Value: 2 = 180ø 
                                                                       //Value: 3 = 270ø 
{ 29 , 1 , "BLC"      ,   0 ,   0 ,   0 ,   0 , "Button Lock Control"},//Value: 0 = Unlocked 
                                                                       //Value: 1 = Locked 
{ 30 , 2 , "SER"      ,   0 ,   0 ,   0 ,   0 , "Service Command"},//Value: 0 = No change 
                                                                   //Value: 1 = Open valve 
                                                                   //Value: 2 = Run initialisation 
                                                                   //Value: 3 = Close valve 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52004_POS        0
#define A52004_TSP        1
#define A52004_LRNB       2
#define A52004_MC         3
#define A52004_WUC        4
#define A52004_DSO        5
#define A52004_BLC        6
#define A52004_SER        7
#define A52004_NB_DATA    8
#define A52004_DATA_SIZE  4
// function type :0x10 : Generic HVAC Interface 
//{ 0xA5 , 0x20 , 0x10 , "HVAC Components                                                                  ",  "Generic HVAC Interface                                                           " },

// TITLE:
T_DATAFIELD A52010 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "MD"       ,   0 ,   0 ,   0 ,   0 , "Mode"},//Value: 0 = Auto 
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

{  8 , 4 , "VPS"      ,   0 ,   0 ,   0 ,   0 , "Vane position"},//Value: 0 = Auto 
                                                                 //Value: 1 = Horizontal 
                                                                 //Value: 2 = Pos2 
                                                                 //Value: 3 = Pos3 
                                                                 //Value: 4 = Pos4 
                                                                 //Value: 5 = Vertical 
                                                                 //Value: 6 = Swing 

{ 12 , 4 , "FANSP"    ,   0 ,   0 ,   0 ,   0 , "Fan Speed"},//Value: 0 = Auto 

{ 16 , 8 , "CVAR"     ,   0 , 100, 255 ,   0 , 100 , "Control variable"},
{ 29 , 2 , "RO"       ,   0 ,   0 ,   0 ,   0 , "Room occupancy"},//Value: 0 = Occupied 
                                                                  //Value: 1 = StandBy (waiting to perform action) 
                                                                  //Value: 2 = Unoccupied (action performed) 
                                                                  //Value: 3 = Off (no occupancy and no action) 
{ 31 , 1 , "O/I"      ,   0 ,   0 ,   0 ,   0 , "On/Off"},//Value: 0 = off (the unit is not running) 
                                                          //Value: 1 = on 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52010_LRNB       0
#define A52010_MD         1
#define A52010_VPS        2
#define A52010_FANSP      3
#define A52010_CVAR       4
#define A52010_RO         5
#define A52010_O/I        6
#define A52010_NB_DATA    7
#define A52010_DATA_SIZE  4

// TITLE:
T_DATAFIELD A52010 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "MD"       ,   0 ,   0 ,   0 ,   0 , "Mode"},//Value: 0 = Auto 
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

{  8 , 4 , "VPS"      ,   0 ,   0 ,   0 ,   0 , "Vane position"},//Value: 0 = Auto 
                                                                 //Value: 1 = Horizontal 
                                                                 //Value: 2 = Pos2 
                                                                 //Value: 3 = Pos3 
                                                                 //Value: 4 = Pos4 
                                                                 //Value: 5 = Vertical 
                                                                 //Value: 6 = Swing 

{ 12 , 4 , "FANSP"    ,   0 ,   0 ,   0 ,   0 , "Fan Speed"},//Value: 0 = Auto 

{ 16 , 8 , "CVAR"     ,   0 , 100, 255 ,   0 , 100 , "Control variable"},
{ 29 , 2 , "RO"       ,   0 ,   0 ,   0 ,   0 , "Room occupancy"},//Value: 0 = Occupied 
                                                                  //Value: 1 = StandBy (waiting to perform action) 
                                                                  //Value: 2 = Unoccupied (action performed) 
                                                                  //Value: 3 = Off (no occupancy and no action) 
{ 31 , 1 , "O/I"      ,   0 ,   0 ,   0 ,   0 , "On/Off"},//Value: 0 = off 
                                                          //Value: 1 = on 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52010_LRNB       0
#define A52010_MD         1
#define A52010_VPS        2
#define A52010_FANSP      3
#define A52010_CVAR       4
#define A52010_RO         5
#define A52010_O/I        6
#define A52010_NB_DATA    7
#define A52010_DATA_SIZE  4
// function type :0x11 : Generic HVAC Interface - Error Control 
//{ 0xA5 , 0x20 , 0x11 , "HVAC Components                                                                  ",  "Generic HVAC Interface - Error Control                                           " },

// TITLE:
T_DATAFIELD A52011 [] = {
{ 29 , 1 , "DRC"      ,   0 ,   0 ,   0 ,   0 , "Disable remote controller"},//Value: 0 = Enable Remote controller 
                                                                             //Value: 1 = Disable Remote controller 
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 23 , 1 , "EXDS"     ,   0 ,   0 ,   0 ,   0 , "External disablement"},//Value: 0 = Not disabled 
                                                                        //Value: 1 = Disabled 
{ 30 , 1 , "WC"       ,   0 ,   0 ,   0 ,   0 , "Window contact"},//Value: 0 = Windows opened 
                                                                  //Value: 1 = Windows closed 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52011_DRC        0
#define A52011_LRNB       1
#define A52011_EXDS       2
#define A52011_WC         3
#define A52011_NB_DATA    4
#define A52011_DATA_SIZE  4

// TITLE:
T_DATAFIELD A52011 [] = {
{ 29 , 1 , "RCD"      ,   0 ,   0 ,   0 ,   0 , "Remote controller Disablement"},//Value: 0 = Remote controller enabled 
                                                                                 //Value: 1 = Remote controller disabled 
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 ,16 , "ERR"      ,   0 , 65535 ,   0 , 65535 , "Error Code"},
{ 16 , 4 , "RES"      ,   0 ,   0 ,   0 ,   0 , "Reserved"},//Value: (null) = Reserved 
{ 20 , 1 , "OD"       ,   0 ,   0 ,   0 ,   0 , "Other disablement"},//Value: 0 = Not disabled 
                                                                     //Value: 1 = Disabled 
{ 21 , 1 , "WCD"      ,   0 ,   0 ,   0 ,   0 , "Window contact disablement"},//Value: 0 = Not disabled 
                                                                              //Value: 1 = Disabled 
{ 22 , 1 , "KCD"      ,   0 ,   0 ,   0 ,   0 , "Key card disablement"},//Value: 0 = Not disabled 
                                                                        //Value: 1 = Disabled 
{ 23 , 1 , "ED"       ,   0 ,   0 ,   0 ,   0 , "External disablement"},//Value: 0 = Not disabled 
                                                                        //Value: 1 = Disabled 
{ 30 , 1 , "WC"       ,   0 ,   0 ,   0 ,   0 , "Window contact"},//Value: 0 = Windows opened 
                                                                  //Value: 1 = Windows closed 
{ 31 , 1 , "AS"       ,   0 ,   0 ,   0 ,   0 , "Alarm State"},//Value: 0 = Ok 
                                                               //Value: 1 = Error 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52011_RCD        0
#define A52011_LRNB       1
#define A52011_ERR        2
#define A52011_RES        3
#define A52011_OD         4
#define A52011_WCD        5
#define A52011_KCD        6
#define A52011_ED         7
#define A52011_WC         8
#define A52011_AS         9
#define A52011_NB_DATA    10
#define A52011_DATA_SIZE  4
// function type :0x12 : Temperature Controller Input 
//{ 0xA5 , 0x20 , 0x12 , "HVAC Components                                                                  ",  "Temperature Controller Input                                                     " },

// TITLE:
T_DATAFIELD A52012 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "CV"       ,   0 , 255 ,   0 , 100 , "Control Variable override"},
{  8 , 8 , "FANOR"    ,   0 ,   0 ,   0 ,   0 , "FanStage override"},//Value: 0 = Stage 0 
                                                                     //Value: 1 = Stage 1 
                                                                     //Value: 2 = Stage 2 
                                                                     //Value: 3 = Stage 3 
                                                                     //Value: 31 = auto 
                                                                     //Value: 255 = not available 
{ 16 , 8 , "SPS"      ,   0 , 255 , -10 , +10 , "Setpoint shift"},
{ 24 , 1 , "FANOR"    ,   0 ,   0 ,   0 ,   0 , "Fan override"},//Value: 0 = Automatic 
                                                                //Value: 1 = Override Fan DB2 
{ 25 , 2 , "CTM"      ,   0 ,   0 ,   0 ,   0 , "Controller mode"},//Value: 0 = Auto mode 
                                                                   //Value: 1 = Heating 
                                                                   //Value: 2 = Cooling 
                                                                   //Value: 3 = Off 
{ 27 , 1 , "CST"      ,   0 ,   0 ,   0 ,   0 , "Controller state"},//Value: 0 = Automatic 
                                                                    //Value: 1 = Override control variable DB3 
{ 29 , 1 , "ERH"      ,   0 ,   0 ,   0 ,   0 , "Energy hold-off / Dew point"},//Value: 0 = Normal 
                                                                               //Value: 1 = Energy hold-off/ Dew point 
{ 30 , 2 , "RO"       ,   0 ,   0 ,   0 ,   0 , "Room occupancy"},//Value: 0 = Occupied 
                                                                  //Value: 1 = Unoccupied 
                                                                  //Value: 2 = StandBy 
                                                                  //Value: 3 = Frost 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A52012_LRNB       0
#define A52012_CV         1
#define A52012_FANOR      2
#define A52012_SPS        3
#define A52012_FANOR      4
#define A52012_CTM        5
#define A52012_CST        6
#define A52012_ERH        7
#define A52012_RO         8
#define A52012_NB_DATA    9
#define A52012_DATA_SIZE  4
// function number :0x30 : Digital Input 
// function type :0x01 : Single Input Contact, Battery Monitor 
//{ 0xA5 , 0x30 , 0x01 , "Digital Input                                                                    ",  "Single Input Contact, Battery Monitor                                            " },

// TITLE:
T_DATAFIELD A53001 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  8 , 8 , "SVC"      ,   0 ,   0 ,   0 ,   0 , "Supply voltage"},
{ 16 , 8 , "IPS"      ,   0 ,   0 ,   0 ,   0 , "Input State"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53001_LRNB       0
#define A53001_SVC        1
#define A53001_IPS        2
#define A53001_NB_DATA    3
#define A53001_DATA_SIZE  3
// function type :0x02 : Single Input Contact 
//{ 0xA5 , 0x30 , 0x02 , "Digital Input                                                                    ",  "Single Input Contact                                                             " },

// TITLE:
T_DATAFIELD A53002 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 31 , 1 , "IPS"      ,   0 ,   0 ,   0 ,   0 , "Input State"},//Value: 0 = Contact closed 
                                                               //Value: 1 = Contact open 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53002_LRNB       0
#define A53002_IPS        1
#define A53002_NB_DATA    2
#define A53002_DATA_SIZE  4
// function type :0x03 : 4 Digital Inputs, Wake and Temperature 
//{ 0xA5 , 0x30 , 0x03 , "Digital Input                                                                    ",  "4 Digital Inputs, Wake and Temperature                                           " },

// TITLE:
T_DATAFIELD A53003 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  8 , 8 , "TMP"      , 255 ,   0 ,   0 ,  40 , "Temperature"},
{ 19 , 1 , "WA0"      ,   0 ,   0 ,   0 ,   0 , "Status of Wake"},//Value: 0 = Low 
                                                                  //Value: 1 = High 
{ 20 , 1 , "DI3"      ,   0 ,   0 ,   0 ,   0 , "Digital Input 3"},//Value: 0 = Low 
                                                                   //Value: 1 = High 
{ 21 , 1 , "DI2"      ,   0 ,   0 ,   0 ,   0 , "Digital Input 2"},//Value: 0 = Low 
                                                                   //Value: 1 = High 
{ 22 , 1 , "DI1"      ,   0 ,   0 ,   0 ,   0 , "Digital Input 1"},//Value: 0 = Low 
                                                                   //Value: 1 = High 
{ 23 , 1 , "DI0"      ,   0 ,   0 ,   0 ,   0 , "Digital Input 0"},//Value: 0 = Low 
                                                                   //Value: 1 = High 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53003_LRNB       0
#define A53003_TMP        1
#define A53003_WA0        2
#define A53003_DI3        3
#define A53003_DI2        4
#define A53003_DI1        5
#define A53003_DI0        6
#define A53003_NB_DATA    7
#define A53003_DATA_SIZE  3
// function type :0x04 : 3 Digital Inputs, 1 Digital Input 8 Bits 
//{ 0xA5 , 0x30 , 0x04 , "Digital Input                                                                    ",  "3 Digital Inputs, 1 Digital Input 8 Bits                                         " },

// TITLE:
T_DATAFIELD A53004 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{ 16 , 8 , "DV0"      ,   0 , 255 ,   0 , 255 , "Digital value-input"},
{ 29 , 1 , "DI2"      ,   0 ,   0 ,   0 ,   0 , "Digital Input 2"},//Value: 0 = Low 
                                                                   //Value: 1 = High 
{ 30 , 1 , "DI1"      ,   0 ,   0 ,   0 ,   0 , "Digital Input 1"},//Value: 0 = Low 
                                                                   //Value: 1 = High 
{ 31 , 1 , "DI0"      ,   0 ,   0 ,   0 ,   0 , "Digital Input 0"},//Value: 0 = Low 
                                                                   //Value: 1 = High 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53004_LRNB       0
#define A53004_DV0        1
#define A53004_DI2        2
#define A53004_DI1        3
#define A53004_DI0        4
#define A53004_NB_DATA    5
#define A53004_DATA_SIZE  4
// function type :0x05 : Single Input Contact, Retransmission, Battery Monitor 
//{ 0xA5 , 0x30 , 0x05 , "Digital Input                                                                    ",  "Single Input Contact, Retransmission, Battery Monitor                            " },

// TITLE:
T_DATAFIELD A53005 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  8 , 8 , "VDD"      ,   0 , 255 ,   0 , 3.3 , "Supply voltage"},
{ 16 , 1 , "ST"       ,   0 ,   0 ,   0 ,   0 , "Signal type"},//Value: 0 = Normal signal 
                                                               //Value: 1 = Heart beat signal 
{ 17 , 7 , "IOS"      ,   0 ,   0 ,   0 ,   0 , "Index of Signals"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53005_LRNB       0
#define A53005_VDD        1
#define A53005_ST         2
#define A53005_IOS        3
#define A53005_NB_DATA    4
#define A53005_DATA_SIZE  3
// function number :0x37 : Energy Management 
// function type :0x01 : Demand Response 
//{ 0xA5 , 0x37 , 0x01 , "Energy Management                                                                ",  "Demand Response                                                                  " },

// TITLE:
T_DATAFIELD A53701 [] = {
{ 24 , 4 , "DRL"      ,   0 ,  15 ,   0 ,  15 , "DR Level"},
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "TMPD"     ,   0 , 255 ,   0 , 255 , "Temporary default"},
{  8 , 1 , "SPWRU"    ,   0 ,   0 ,   0 ,   0 , "Absolute/relative power usage"},//Value: 0 = Absolute power usage. Interpret DB_2.BIT_6...DB_2.BIT_0 as a percentage of the maximum power use. 
                                                                                 //Value: 1 = Relative power usage. Interpret DB_2.BIT_6...DB_2.BIT_0 as a percentage of the current power use. 
{  9 , 7 , "PWRU"     ,   0 , 100 ,   0 , 100 , "Power Usage"},
{ 16 , 8 , "TMOS"     ,   1 , 255 ,  15 , 3825 , "Timeout Setting"},
{ 29 , 1 , "RSD"      ,   0 ,   0 ,   0 ,   0 , "Random start delay"},//Value: 0 = False 
                                                                      //Value: 1 = True 
{ 30 , 1 , "RED"      ,   0 ,   0 ,   0 ,   0 , "Randomized end delay"},//Value: 0 = False 
                                                                        //Value: 1 = True 
{ 31 , 1 , "MPWRU"    ,   0 ,   0 ,   0 ,   0 , "Max/Min Power Usage for Default DR State"},//Value: 0 = Minimum Power usage 
                                                                                            //Value: 1 = Maximum Power usage 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53701_DRL        0
#define A53701_LRNB       1
#define A53701_TMPD       2
#define A53701_SPWRU      3
#define A53701_PWRU       4
#define A53701_TMOS       5
#define A53701_RSD        6
#define A53701_RED        7
#define A53701_MPWRU      8
#define A53701_NB_DATA    9
#define A53701_DATA_SIZE  4
// function number :0x38 : Central Command 
// function type :0x08 : Gateway 
//{ 0xA5 , 0x38 , 0x08 , "Central Command                                                                  ",  "Gateway                                                                          " },

// TITLE:0x01 Switching
T_DATAFIELD A53808 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "COM"      ,   0 ,   0 ,   0 ,   0 , "Command"},//Value: 0x01 = (null) 
{  8 ,16 , "TIM"      ,   1 , 65535 , 0.1 , 6553.5 , "Time"},
{ 29 , 1 , "LCK"      ,   0 ,   0 ,   0 ,   0 , "Lock/Unlock"},//Value: 0 = Unlock 
                                                               //Value: 1 = Lock 
{ 30 , 1 , "DEL"      ,   0 ,   0 ,   0 ,   0 , "Delay or duration"},//Value: 0 = Duration 
                                                                     //Value: 1 = Delay 
{ 31 , 1 , "SW"       ,   0 ,   0 ,   0 ,   0 , "Switching Command"},//Value: 0 = Off 
                                                                     //Value: 1 = On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53808_LRNB       0
#define A53808_COM        1
#define A53808_TIM        2
#define A53808_LCK        3
#define A53808_DEL        4
#define A53808_SW         5
#define A53808_NB_DATA    6
#define A53808_DATA_SIZE  4

// TITLE:0x02 Dimming
T_DATAFIELD A53808 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "COM"      ,   0 ,   0 ,   0 ,   0 , "Command"},//Value: 0x02 = (null) 
{  8 , 8 , "EDIM"     ,   0 , 255 ,   0 , 100 , "Dimming value"},
{ 16 , 8 , "RMP"      ,   0 , 255 ,   0 , 255 , "Ramping time"},
{ 29 , 1 , "EDIM_R"   ,   0 ,   0 ,   0 ,   0 , "Dimming Range"},//Value: 0 = Absolute value 
                                                                 //Value: 1 = Relative value 
{ 30 , 1 , "STR"      ,   0 ,   0 ,   0 ,   0 , "Store final value"},//Value: 0 = No 
                                                                     //Value: 1 = Yes 
{ 31 , 1 , "SW"       ,   0 ,   0 ,   0 ,   0 , "Switching Command"},//Value: 0 = Off 
                                                                     //Value: 1 = On 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53808_LRNB       0
#define A53808_COM        1
#define A53808_EDIM       2
#define A53808_RMP        3
#define A53808_EDIM_R     4
#define A53808_STR        5
#define A53808_SW         6
#define A53808_NB_DATA    7
#define A53808_DATA_SIZE  4

// TITLE:0x03 Setpoint shift
T_DATAFIELD A53808 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "COM"      ,   0 ,   0 ,   0 ,   0 , "Command"},//Value: 0x03 = (null) 
{ 16 , 8 , "SP"       ,   0 , 255 , -12.7 , 12.8 , "Setpoint"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53808_LRNB       0
#define A53808_COM        1
#define A53808_SP         2
#define A53808_NB_DATA    3
#define A53808_DATA_SIZE  3

// TITLE:0x04 Basic Setpoint
T_DATAFIELD A53808 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "COM"      ,   0 ,   0 ,   0 ,   0 , "Command"},//Value: 0x04 = (null) 
{ 16 , 8 , "BSP"      ,   0 , 255 ,   0 , +51.2 , "Basic Setpoint"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53808_LRNB       0
#define A53808_COM        1
#define A53808_BSP        2
#define A53808_NB_DATA    3
#define A53808_DATA_SIZE  3

// TITLE:0x05 Control variable
T_DATAFIELD A53808 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "COM"      ,   0 ,   0 ,   0 ,   0 , "Command"},//Value: 0x05 = (null) 
{ 16 , 8 , "CVOV"     ,   0 , 255 ,   0 , 100 , "Control variable override"},
{ 25 , 2 , "CM"       ,   0 ,   0 ,   0 ,   0 , "Controller mode"},//Value: 0 = Automatic mode selection 
                                                                   //Value: 1 = Heating 
                                                                   //Value: 2 = Cooling 
                                                                   //Value: 3 = Off 
{ 27 , 1 , "CS"       ,   0 ,   0 ,   0 ,   0 , "Controller state"},//Value: 0 = Automatic 
                                                                    //Value: 1 = Override 
{ 29 , 1 , "ENHO"     ,   0 ,   0 ,   0 ,   0 , "Energy hold off"},//Value: 0 = Normal 
                                                                   //Value: 1 = Energy holdoff/ Dew point 
{ 30 , 2 , "RMOCC"    ,   0 ,   0 ,   0 ,   0 , "Room occupancy"},//Value: 0 = Occupied 
                                                                  //Value: 1 = Unoccupied 
                                                                  //Value: 2 = Standby 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53808_LRNB       0
#define A53808_COM        1
#define A53808_CVOV       2
#define A53808_CM         3
#define A53808_CS         4
#define A53808_ENHO       5
#define A53808_RMOCC      6
#define A53808_NB_DATA    7
#define A53808_DATA_SIZE  4

// TITLE:0x06 Fan stage
T_DATAFIELD A53808 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "COM"      ,   0 ,   0 ,   0 ,   0 , "Command"},//Value: 0x06 = (null) 
{ 16 , 8 , "FO"       ,   0 ,   0 ,   0 ,   0 , "FanStage override"},//Value: 0 = Stage 0 
                                                                     //Value: 1 = Stage 1 
                                                                     //Value: 2 = Stage 2 
                                                                     //Value: 3 = Stage 3 
                                                                     //Value: 255 = Auto 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53808_LRNB       0
#define A53808_COM        1
#define A53808_FO         2
#define A53808_NB_DATA    3
#define A53808_DATA_SIZE  3

// TITLE:0x07 Blind Central Command
T_DATAFIELD A53808 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "COM"      ,   0 ,   0 ,   0 ,   0 , "Command"},//Value: 0x07 = Shutters / Blinds 
{  8 , 8 , "P1"       ,   0 ,   0 ,   0 ,   0 , "Parameter 1"},
{ 16 , 8 , "P2"       ,   0 ,   0 ,   0 ,   0 , "Parameter 2"},
{ 24 , 4 , "FUNC"     ,   0 ,   0 ,   0 ,   0 , "Function"},//Value: 0 = Do nothing, status request 
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
{ 29 , 1 , "SSF"      ,   0 ,   0 ,   0 ,   0 , "Send status flag"},//Value: 0 = Send new status of device 
                                                                    //Value: 1 = Send no status (e.g. Global central commands) 
{ 30 , 1 , "PAF"      ,   0 ,   0 ,   0 ,   0 , "Pos. and Angle flag"},//Value: 0 = No Angle and position value available 
                                                                       //Value: 1 = Angle and position value available 
{ 31 , 1 , "SMF"      ,   0 ,   0 ,   0 ,   0 , "Service Mode Flag"},//Value: 0 = Normal operation 
                                                                     //Value: 1 = Service mode: The module disables all senders, except this sender, which has set the service mode. (For example for maintenance) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53808_LRNB       0
#define A53808_COM        1
#define A53808_P1         2
#define A53808_P2         3
#define A53808_FUNC       4
#define A53808_SSF        5
#define A53808_PAF        6
#define A53808_SMF        7
#define A53808_NB_DATA    8
#define A53808_DATA_SIZE  4
// function type :0x09 : Extended Lighting-Control 
//{ 0xA5 , 0x38 , 0x09 , "Central Command                                                                  ",  "Extended Lighting-Control                                                        " },

// TITLE:
T_DATAFIELD A53809 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 8 , "P1"       ,   0 ,   0 ,   0 ,   0 , "Parameter 1"},
{  8 , 8 , "P2"       ,   0 ,   0 ,   0 ,   0 , "Parameter 2"},
{ 16 , 8 , "P3"       ,   0 ,   0 ,   0 ,   0 , "Parameter 3"},
{ 24 , 4 , "FUNC"     ,   0 ,   0 ,   0 ,   0 , "Function"},//Value: 0 = Do nothing, status request 
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
{ 29 , 1 , "SSF"      ,   0 ,   0 ,   0 ,   0 , "Send status flag"},//Value: 0 = Send new status of device 
                                                                    //Value: 1 = Send no status (e.g. Global central commands) 
{ 30 , 1 , "SFV"      ,   0 ,   0 ,   0 ,   0 , "Store final value"},//Value: 0 = No 
                                                                     //Value: 1 = Yes 
{ 31 , 1 , "SMF"      ,   0 ,   0 ,   0 ,   0 , "Service Mode Flag"},//Value: 0 = Normal operation 
                                                                     //Value: 1 = Service mode: The module disables all senders, except this sender, which has set the service mode. (For example for maintenance) 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53809_LRNB       0
#define A53809_P1         1
#define A53809_P2         2
#define A53809_P3         3
#define A53809_FUNC       4
#define A53809_SSF        5
#define A53809_SFV        6
#define A53809_SMF        7
#define A53809_NB_DATA    8
#define A53809_DATA_SIZE  4
// function number :0x3F : Universal 
// function type :0x00 : Radio Link Test 
//{ 0xA5 , 0x3F , 0x00 , "Universal                                                                        ",  "Radio Link Test                                                                  " },

// TITLE:RLT_MasterTest_4BS
T_DATAFIELD A53F00 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 ,28 , "Not_used" ,   0 ,   0 ,   0 ,   0 , "Not used"},//Value: 0 = (null) 
{ 29 , 2 , "MSGID"    ,   0 ,   0 ,   0 ,   0 , "MSG_ID"},//Value: 2 = (null) 
{ 31 , 1 , "MSGS"     ,   0 ,   0 ,   0 ,   0 , "MSG-Source"},//Value: 0 = RLT-Master 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53F00_LRNB       0
#define A53F00_Not_used   1
#define A53F00_MSGID      2
#define A53F00_MSGS       3
#define A53F00_NB_DATA    4
#define A53F00_DATA_SIZE  4

// TITLE:RLT_SlaveTest_4BS
T_DATAFIELD A53F00 [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 2 , "STCNT"    ,   0 ,   0 ,   0 ,   0 , "Sub-Telegram Counter"},//Value: 0 = not supported 
{  2 , 6 , "RSLV"     ,   0 ,   0 ,   0 ,   0 , "RSSI Level in dBm"},//Value: 0x00 = not supported 
                                                                     //Value: 0x01 = =-31 
                                                                     //Value: 0x02 = -32 
                                                                     //Value: 0x3F = =-93 
{  8 , 8 , "RSLV"     ,   0 ,   0 ,   0 ,   0 , "Sub-Telegram Counter/RSSI Level in dBm"},//Value: (null) = See prev 
{ 16 , 8 , "RSLV"     ,   0 ,   0 ,   0 ,   0 , "Sub-Telegram Counter/RSSI Level in dBm"},//Value: (null) = See prev 
{ 24 , 4 , "RSLV"     ,   0 ,   0 ,   0 ,   0 , "RSSI Level in dBm"},//Value: 0x00 = not supported 
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
{ 29 , 2 , "MSGID"    ,   0 ,   0 ,   0 ,   0 , "MSG_ID"},//Value: 2 = (null) 
{ 31 , 1 , "MSGS"     ,   0 ,   0 ,   0 ,   0 , "MSG-Source"},//Value: 1 = RLT-Slave 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53F00_LRNB       0
#define A53F00_STCNT      1
#define A53F00_RSLV       2
#define A53F00_RSLV       3
#define A53F00_RSLV       4
#define A53F00_RSLV       5
#define A53F00_MSGID      6
#define A53F00_MSGS       7
#define A53F00_NB_DATA    8
#define A53F00_DATA_SIZE  4

// TITLE:RLT_MasterTest_1BS
T_DATAFIELD A53F00 [] = {
{  4 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 4 , "MC_MSB"   ,   0 ,   0 ,   0 ,   0 , "RLT MSG-Counter MSB"},//Value: (null) = (null) 
{  5 , 2 , "MC_LSB"   ,   0 ,   0 ,   0 ,   0 , "RLT MSG-Counter LSB"},//Value: (null) = (null) 
{  7 , 1 , "MSGS"     ,   0 ,   0 ,   0 ,   0 , "MSG-Source"},//Value: 0 = RLT Master 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53F00_LRNB       0
#define A53F00_MC_MSB     1
#define A53F00_MC_LSB     2
#define A53F00_MSGS       3
#define A53F00_NB_DATA    4
#define A53F00_DATA_SIZE  1

// TITLE:RLT_SlaveTest_1BS
T_DATAFIELD A53F00 [] = {
{  4 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 , 4 , "MC_MSB"   ,   0 ,   0 ,   0 ,   0 , "RLT MSG-Counter MSB"},//Value: (null) = (null) 
{  5 , 2 , "MC_LSB"   ,   0 ,   0 ,   0 ,   0 , "RLT MSG-Counter LSB"},//Value: (null) = (null) 
{  7 , 1 , "MSGS"     ,   0 ,   0 ,   0 ,   0 , "MSG-Source"},//Value: 1 = RLT-Slave 
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53F00_LRNB       0
#define A53F00_MC_MSB     1
#define A53F00_MC_LSB     2
#define A53F00_MSGS       3
#define A53F00_NB_DATA    4
#define A53F00_DATA_SIZE  1
// function type :0x7F : Universal 
//{ 0xA5 , 0x3F , 0x7F , "Universal                                                                        ",  "Universal                                                                        " },

// TITLE:
T_DATAFIELD A53F7F [] = {
{ 28 , 1 , "LRNB"     ,   0 ,   0 ,   0 ,   0 , "LRN Bit"},//Value: 0 = Teach-in telegram 
                                                           //Value: 1 = Data telegram 
{  0 ,28 , "undef"    ,   0 ,   0 ,   0 ,   0 , "undefined"},
{ 29 , 3 , "undef"    ,   0 ,   0 ,   0 ,   0 , "undefined"},
{  0 , 0 , 0          , 0           }
};

// Index of field
#define A53F7F_LRNB       0
#define A53F7F_undef      1
#define A53F7F_undef      2
#define A53F7F_NB_DATA    3
#define A53F7F_DATA_SIZE  4
