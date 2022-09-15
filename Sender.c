#include "Sender.h"

void GetSensorOutput(int minValue, int maxValue, int * Array, int Range )
{
    for(int i =0; i < Range; i++)
    {
        Array[i] = (rand() % (maxValue - minValue+1) + minValue);
    }
}

void PrintOnConsole(int * SensorData1 ,int * SensorData2 ,int Range)
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

  GetSensorOutput(sensorData_s.chargeRate_minvalue,sensorData_s.chargeRate_maxvalue,chargeRate,sensorData_s.totalNoofValues);
  GetSensorOutput(sensorData_s.temp_minvalue,sensorData_s.temp_maxvalue,temperature,sensorData_s.totalNoofValues);
  
  PrintOnConsole( &chargeRate[0], &temperature[0],sensorData_s.totalNoofValues);
 
}

void minimum_and_maximum_value_in_incoming_stream_SensorData1(int * SensorData1 , int Range)
{
   int min,max;
   min=max=a[0];
   for(int data = 0; data < Range ; data ++)
   {
        if(min>SensorData1[i])
		    min=SensorData1[i];   
		if(max<SensorData1[i])
		    max=SensorData1[i];       
   }
   printf("minimum of array is : %d",min);
   printf("\nmaximum of array is : %d",max);
}

void minimum_and_maximum_value_in_incoming_stream_SensorData2(int * SensorData2 , int Range)
{
   int min,max;
   min=max=a[0];
   for(int data = 0; data < Range ; data ++)
   {
        if(min>SensorData2[i])
		    min=SensorData2[i];   
		if(max<SensorData2[i])
		    max=SensorData2[i];       
   }
   printf("minimum of array is : %d",min);
   printf("\nmaximum of array is : %d",max);
}
