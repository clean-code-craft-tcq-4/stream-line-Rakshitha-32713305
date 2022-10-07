#include "Receiver.h"

int MinimumValueFromIncomingStream(int *data)
{
  int i,min;
  min=data[0];
  
  for(i=0; i<50; i++)
  {
    if(data[i] < min)
    {
      min=data[i]; 
    }
  }
    
  return min;
}

int MaximumValueFromIncomingStream(int *data)
{
  int i,max;
  max=data[0];
  for(i=0; i<50; i++)
  {
    if(data[i] > max)
    {
      max=data[i];  
    }
  }    
  
  return max;
}

void ReadParameterFromConsole(int *temp, int *soc)
{
  int i,min,max;

  printf("Reading the data from console\n");
  for(i=0; i<count; i++)
  {
    scanf("%d,%d\n",&temp[i],&soc[i]);
  }
  
  min = MinimumValueFromIncomingStream(temp);
  printf("minimum value of temperature is %d\n", min);
  max = MaximumValueFromIncomingStream(temp);
  printf("maximum value of temperature is %d\n", max);
  
  
  min = MinimumValueFromIncomingStream(soc);
  printf("minimum value of soc is %d\n", min);
  max = MaximumValueFromIncomingStream(soc);
  printf("maximum value of soc is %d\n", max);
}

void PrintDataOnConsole(int *temp, int *soc)
{
  int i;
  for(i=0; i<count; i++)
  {
    printf("%d,%d\n",temp[i],soc[i]);
  }
  
}                              
