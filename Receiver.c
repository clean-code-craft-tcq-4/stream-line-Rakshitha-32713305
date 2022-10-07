#include "Receiver.h"

void MinimumMaximumValueFromIncomingStream(int *data, int count)
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
  
  printf("Minimum value from incoming stream is %d\n", min);
  printf("Maximum value from incoming stream is %d\n", max);
    
}

void ReadParameterFromConsole(int *temp, int *soc)
{
  int i;
  //int temp_buffer[count] =0;
  //int soc_buffer[count] =0;
  printf("Reading the data from console\n");
  for(i=0; i<count; i++)
  {
    scanf("%d,%d\n",&temp[i],&soc[i]);
    //temp_buffer[i] = temp[i];
    //soc_buffer[i] = soc[i];
  }
  
  MinimumMaximumValueFromIncomingStream(temp, count);
  MinimumMaximumValueFromIncomingStream(soc, count);
}

void PrintDataOnConsole(int *temp, int *soc)
{
  int i;
  for(i=0; i<count; i++)
  {
    printf("%d,%d\n",temp[i],soc[i]);
  }
  
}                              

