#include "Receiver.h"

void readDataFromConsole(float* Temperature, float* SOC)
{
  for(int index = 0; index < readings; index++)
  {
    scanf("%f:%f\n",&Temperature[index],&SOC[index]);    
  }
}

float getMaxValue(float *sensorparameter)
{
  float maximumvalue = sensorparameter[0];
  for(int index = 0; index < readings; index++)
  {
    if(sensorparameter[index] > maximumvalue)
    {
      maximumvalue = sensorparameter[index];
    }
  }
  return maximumvalue;
}

float getMinValue(float *sensorparameter)
{
  float minimumvalue = sensorparameter[0]; 
  for(int index = 0; index < readings; index++)
  {
    if(sensorparameter[index] < minimumvalue)
    {
      minimumvalue = sensorparameter[index];
    }
  }
  return minimumvalue;
}

float calculateSimpleMovingAverage(float *sensorparameter)
{
  float SMAvalue = 0.0;
  float total = 0.0;
  for(int index = (readings-5); index < readings; index++)
  {
    total += sensorparameter[index];
  }
  SMAvalue = total/5; 
  return SMAvalue;
}

int printReceivedDataToConsole(float *sensorparameter, float maxvalue, float minvalue, float SMA)
{
  printf("Data received from sender\n");
  for(int index = 0; index < readings; index++)
  {
    printf("%f\n",sensorparameter[index]);
  }
  printf("Maximum value: %f, Minimum value: %f, SimpleMovingAverage of last 5 values: %f\n",maxvalue,minvalue,SMA);  
  return 1;
}

void receiveAndProcessSensorData(float* Temperature, float* SOC)
{
  readDataFromConsole(Temperature,SOC);
  printReceivedDataToConsole(Temperature,getMaxValue(Temperature),getMinValue(Temperature),calculateSimpleMovingAverage(Temperature));
  printReceivedDataToConsole(SOC,getMaxValue(SOC),getMinValue(SOC),calculateSimpleMovingAverage(SOC));
}
