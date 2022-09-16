#include "Receiver.h"

void MGetSensorOutput(int minValue, int maxValue, int * Array, int Range )
{
    for(int i =0; i < Range; i++)
    {
        Array[i] = (rand() % (maxValue - minValue+1) + minValue);
    }
}

void MPrintOnConsole(int * SensorData1 ,int * SensorData2 ,int Range)
{
  for(int data = 0; data < Range ; data ++)
  {
      printf("%d,%d\n", SensorData1[data], SensorData2[data]);
  }
}

void Main(BMSData_s sensorData_s)
{ 
  int chargeRate[sensorData_s.totalNoofValues];
  int temperature[sensorData_s.totalNoofValues];

  MGetSensorOutput(sensorData_s.chargeRate_minvalue,sensorData_s.chargeRate_maxvalue,chargeRate,sensorData_s.totalNoofValues);
  MGetSensorOutput(sensorData_s.temp_minvalue,sensorData_s.temp_maxvalue,temperature,sensorData_s.totalNoofValues);
  
  MPrintOnConsole( &chargeRate[0], &temperature[0],sensorData_s.totalNoofValues);
 
}
