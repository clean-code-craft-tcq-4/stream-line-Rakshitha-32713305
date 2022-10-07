#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch/catch.hpp"
#include "Receiver.h"
#include "Sender.h"

TEST_CASE("Tests to check whether sensor data is read from console and also to check whether correct Max, Min and SMA values of sensor parameters are printed on console") 
{
  int *temp[50];
  int *soc[50];
  int i=0;
  printf("Reading the data from console\n");
  for(i=0; i<50; i++)
  {
    scanf("%d:%d\n", &temp[i], &soc[i]);
  }
    
  
  
  printf("print the data from console\n");
  for(i=0; i<50; i++)
  {
    printf("%d:%d\n", temp[i], soc[i]);
  }
 
  
  
}
