#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
int chargeRate_minvalue ;
int chargeRate_maxvalue ;
int temp_minvalue; 
int temp_maxvalue ;
int totalNoofValues;
}MBMSData_s;

void MGetSensorOutput(int minValue, int maxValue, int * Array, int Range );
void MPrintOnConsole(int * SensorData1 ,int * SensorData2 ,int Range);
void main();
