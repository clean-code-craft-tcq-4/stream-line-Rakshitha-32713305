#include "Receiver.h"

void ReadParameterFromConsole()
{

  int i=0;
  printf("Reading the data from console\n");
  for(i=0; i<50; i++)
  {
    scanf("%d,%d\n",&temp[i],&soc[i]);
  }
    
  for(i=0; i<50; i++)
  {
    printf("%d,%d\n",temp[i],soc[i]);
  }
  
}

