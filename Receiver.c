#include "Receiver.h"

//to check the minimum of incoming stream data
int MinimumValueFromIncomingStream(int *data)
{
  int min;
  min=data[0];
  
  for(int index=0; index<count; index++)
  {
    if(data[index] < min)
    {
      min=data[index]; 
    }
  }
    
  return min;
}

//to check the maximum of incoming stream data
int MaximumValueFromIncomingStream(int *data)
{
  int max;
  max=data[0];
  for(int index=0; index<count; index++)
  {
    if(data[index] > max)
    {
      max=data[index];  
    }
  }    
  
  return max;
}

//to calculate the simple moving average of the last 5 values of incoming stream data
float calculateSimpleMovingAverage(int *data)
{
  float SMAvalue = 0.0;
  float total = 0.0;
  for(int index = (count-5); index < count; index++)
  {
    total += data[index];
  }
  SMAvalue = total/5; 
  return SMAvalue;
}

//to check and print the maximum and minimum values in the incoming stream
void ReadParameterFromConsole(int *temp, int *soc)
{
  int min,max;
  float average;

  printf("Reading the data from console\n");
  for(int index=0; index<count; index++)
  {
    scanf("%d,%d\n",&temp[index],&soc[index]);
  }
  
  min = MinimumValueFromIncomingStream(temp);
  printf("Minimum value of temperature is %d\n", min);
  max = MaximumValueFromIncomingStream(temp);
  printf("Maximum value of temperature is %d\n", max);
  average = calculateSimpleMovingAverage(temp);
  printf("simple moving average of the last 5 values of temperature is %f\n", average);
  
  min = MinimumValueFromIncomingStream(soc);
  printf("Minimum value of soc is %d\n", min);
  max = MaximumValueFromIncomingStream(soc);
  printf("Maximum value of soc is %d\n", max);
  average = calculateSimpleMovingAverage(soc);
  printf("simple moving average of the last 5 values of soc is %f\n", average);
}

void PrintDataOnConsole(int *temp, int *soc)
{
  int i;
  for(int index=0; index<count; index++)
  {
    printf("%d,%d\n",temp[index],soc[index]);
  }
  
}                              
