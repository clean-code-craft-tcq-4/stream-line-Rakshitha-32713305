#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch/catch.hpp"
#include "Receiver.h"
#include "Sender.h"

TEST_CASE("Tests to check whether sensor data is read from console and also to check whether correct Max, Min and SMA values of sensor parameters are printed on console") 
{
  int temp[count] = {0};
  int soc[count] = {0};
  int expectedMinValue,expectedMaxValue,observedMinValue,observedMaxValue;
  ReadParameterFromConsole(temp,soc);
  PrintDataOnConsole(temp,soc);
  
  expectedMinValue = 0;
  expectedMaxValue = 75;
  observedMinValue = MinimumValueFromIncomingStream(&temp[0]);
  observedMinValue = MaximumValueFromIncomingStream(&temp[0]);
  REQUIRE(observedMaxValue == expectedMaxValue);
  REQUIRE(observedMinValue == expectedMinValue);
}

