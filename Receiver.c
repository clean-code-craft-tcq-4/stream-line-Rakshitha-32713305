#include "Receiver.h"

void MinimumValueFromIncomingStream(int *data, int min)
{
  int i;
  min=data[0];
  for(i=0; i<count; i++)
  {
    if(min>data[i])
      min=data[i]; 
  }
    
}

void MaximumValueFromIncomingStream(int *data, int max)
{
  int i;
  max=data[0];
  for(i=0; i<count; i++)
  {
    if(max<data[i])
      max=data[i];  
  }    
}

void ReadParameterFromConsole(int *temp, int *soc)
{
  int i;

  printf("Reading the data from console\n");
  for(i=0; i<count; i++)
  {
    scanf("%d,%d\n",&temp[i],&soc[i]);
  }
  
  MinimumValueFromIncomingStream(temp,min);
  MaximumValueFromIncomingStream(temp,max);
  
  MinimumValueFromIncomingStream(soc,min);
  MaximumValueFromIncomingStream(soc,max);
}

void PrintDataOnConsole(int *temp, int *soc)
{
  int i;
  for(i=0; i<count; i++)
  {
    printf("%d,%d\n",temp[i],soc[i]);
  }
  
}                              
