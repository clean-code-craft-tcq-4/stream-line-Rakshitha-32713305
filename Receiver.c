#include "Receiver.h"

void call()
{
  int temp[50] = {0};
  int soc[50] = {0};
  int i=0;
  printf("Reading the data from console\n");
  for(i=0; i<50; i++)
  {
    scanf("%d,%d\n",&temp[i],&soc[i]);
  }
    
  
  
  printf("print the data from console\n");
  for(i=0; i<50; i++)
  {
    printf("%d,%d\n",temp[i],soc[i]);
  }
  
}

