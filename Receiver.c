#include "Receiver.h"

void MinimumValueFromIncomingStream(int *data, int min)
{
  int i;
  min=data[0];
  for(i=0; i<50; i++)
  {
    if(data[i] < min)
    {
      min=data[i]; 
    }
  }
    
}

void MaximumValueFromIncomingStream(int *data, int max)
{
  int i;
  max=data[0];
  for(i=0; i<50; i++)
  {
    if(data[i] > max)
    {
      max=data[i];  
    }
  }    
}

void ReadParameterFromConsole(int *temp, int *soc, int min, int max)
{
  int i;

  printf("Reading the data from console\n");
  for(i=0; i<count; i++)
  {
    scanf("%d,%d\n",&temp[i],&soc[i]);
  }
  
  MinimumValueFromIncomingStream(temp,min);
  printf("minimum value of temperature is %d\n", min);
  MaximumValueFromIncomingStream(temp,max);
  printf("maximum value of temperature is %d\n", max);
  
  
  MinimumValueFromIncomingStream(soc,min);
  printf("minimum value of soc is %d\n", min);
  MaximumValueFromIncomingStream(soc,max);
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
