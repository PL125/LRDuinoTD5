// This is all the parameters and variables for our sensors

typedef struct
{
  bool senseactive;
  bool master;
  uint8_t slaveID;
  uint8_t senseorder;
  bool warnstatus;
  uint8_t sensefault;
  const unsigned char* senseglyphs;
  int sensevals;
  const uint8_t senseunits;
  const int sensemaxvals;
  const int8_t senseminvals;
  int sensepeakvals;
  int sensewarnhivals;
  int sensewarnlowvals;
  const char sensename[13];
  bool hidden;
} SingleSensor;

SingleSensor Sensors[16] = {
 //active  master slaveID senseorder	warnstatus    sensefault senseglyphs sensevals  units maxvals minvals peakvals warnhivals warnlovals  sensename       hidden
  {true,   true,  99,     0,			    false,        0,         trbBMP,     0,         1,    32,     0,      0,       29,        -999,	      "Boost",        false}, // Boost
  {true,   true,  99,     0,			    false,        0,         tboxBMP,    0,         0,    150,    -40,    -40,     140,       -999,	      "Tbox Temp",    false}, // Transfer Box Temp
  {true,   true,  99,     0,			    false,        0,         egtBMP,     0,         0,    900,    -40,    -40,     750,       -999,	      "EGT",          false}, // EGT
  {true,   true,  4,      0,			    false,        0,         eopBMP,     0,         1,    72,     0,      0,       60,        20,	        "Oil Pressure", false}, // Oil Pressure
  {true,   false, 99,     0,			    false,        0,         eotBMP,     0,         0,    150,    -40,    -40,     100,       -999,	      "Oil Temp",     false}, // Oil Temp
  {true,   true,  11,     0,			    false,        0,         coollev,    0,         2,    1,      0,      1,       999,       1,	        "Coolant Lvl",  false}, // Coolant Level
  {false,  true,  7,      0,			    false,        0,         D2a0,       0,         3,    45,     -45,    0,       30,        -30,	      "Roll",         false}, // Vehicle Roll
  {false,  false, 99,     0,			    false,        0,         D2p0,       0,         3,    60,     -60,    0,       45,        -45,	      "Pitch",        false}, // Vehicle Pitch
  {false,  true,  99,     0,			    false,        0,         compass,    0,         3,    360,    0,      0,       999,       -999,	      "Compass",      false}, // Magnetometer
  {true,   true,  99,     0,			    false,        0,         Gauge,      0,         4,    4500,   0,      0,       4500,      600,	      "RPM (OBD)",    false}, // RPM
  {true,   true,  99,     0,			    false,        0,         Gauge,      0,         5,    100,    -30,    0,       100,       -30,	      "Speed (OBD)",  false}, // Roadspeed
  {true,   false, 99,     0,			    false,        0,         cooltmp,    0,         0,    130,    -30,    0,       100,       -999,	      "ECT (OBD)",    false}, // Coolant
  {true,   true,  99,     0,			    false,        0,         OBDII,   	 0,         7,    16,     0,	    0,       15,        11,	        "BtV (OBD)",    false}, // Battery Voltage
  {false,  true,  99,     0,			    true,         0,         OBDII,   	 0,         0,    100,    -40,	  0,       50,        -999,	      "InT (OBD)",    false}, // Inlet Temperature
  {false,  true,  99,     0,			    true,         0,         OBDII,   	 0,         0,    100,    -40,	  0,       75,        -999,	      "FlT (OBD)",    false}, // Fuel Temperature
  {false,  true,  99,     0,			    true,         0,         OBDII,   	 0,         1,    20,     0,	    0,       16,        12,	        "AAP (OBD)",    false}  // Ambient Pressure
};

const uint8_t totalsensors = 16; //this is the actual number of definitions above