#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch/catch.hpp"
#include "Receiver.h"

TEST_CASE("positive case: test1 - reads the parameters from the console input") {
  
  BMSData_s sensorData_s;

  sensorData_s.chargeRate_minvalue = 0;
  sensorData_s.chargeRate_maxvalue = 100;
  sensorData_s.temp_minvalue = 0;
  sensorData_s.temp_maxvalue = 75;
  sensorData_s.totalNoofValues = 50;
  
  Main(sensorData_s);  
}

