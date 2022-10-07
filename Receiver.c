#include "Receiver.h"

void ReadParameterFromConsole(int *temp, int *soc)
{
  printf("Reading the data from console\n");
  for(i=0; i<count; i++)
  {
    scanf("%d,%d\n",&temp[i],&soc[i]);
  }
}

void PrintDataOnConsole(int *temp, int *soc)
  for(i=0; i<count; i++)
  {
    printf("%d,%d\n",temp[i],soc[i]);
  }
  
}

