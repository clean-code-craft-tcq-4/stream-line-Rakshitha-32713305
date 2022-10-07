#include "Receiver.h"

void call()
{
  int temp[50];
  int soc[50];
  int i=0;
  printf("Reading the data from console\n");
  for(i=0; i<50; i++)
  {
    scanf("%f,%f\n",&temp[i],&soc[i]);
  }
    
  
  
  printf("print the data from console\n");
  for(i=0; i<50; i++)
  {
    printf("%f,%f\n",**temp[i],**soc[i]);
  }
  
}
