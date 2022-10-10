#include "Receiver.h"

//to check the minimum of incoming stream data
int MinimumValueFromIncomingStream(int *data)
{
  int i,min;
  min=data[0];
  
  for(i=0; i<count; i++)
  {
    if(data[i] < min)
    {
      min=data[i]; 
    }
  }
    
  return min;
}

//to check the maximum of incoming stream data
int MaximumValueFromIncomingStream(int *data)
{
  int i,max;
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

//to calculate the average of incoming stream data
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
  printf("Average of temperature is %f\n", temp);
  
  min = MinimumValueFromIncomingStream(soc);
  printf("Minimum value of soc is %d\n", min);
  max = MaximumValueFromIncomingStream(soc);
  printf("Maximum value of soc is %d\n", max);
  average = calculateSimpleMovingAverage(soc);
  printf("Average of soc is %f\n", soc);
}

void PrintDataOnConsole(int *temp, int *soc)
{
  int i;
  for(int index=0; index<count; index++)
  {
    printf("%d,%d\n",temp[index],soc[index]);
  }
  
}                              
