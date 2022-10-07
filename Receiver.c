#include "Receiver.h"

void MinimumMaximumValueFromIncomingStream(int *data)
{
  int i;
  int min=data[0];
  int max=data[0];
  for(i=0; i<count; i++)
  {
    if(min>data[i])
      min=data[i];
    if(max<data[i])
      max=data[i];  
  }
  
  printf("Minimum Temperature value from incoming stream is %d\n", min);
  printf("Maximum SOC value from incoming stream is %d\n", max);
    
}

void ReadParameterFromConsole(int *temp, int *soc)
{
  int i;

  printf("Reading the data from console\n");
  for(i=0; i<count; i++)
  {
    scanf("%d,%d\n",&temp[i],&soc[i]);
  }
  
  MinimumMaximumValueFromIncomingStream(temp);
  MinimumMaximumValueFromIncomingStream(soc);
}

void PrintDataOnConsole(int *temp, int *soc)
{
  int i;
  for(i=0; i<count; i++)
  {
    printf("%d,%d\n",temp[i],soc[i]);
  }
  
}                              
