#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define readings 50

void readDataFromConsole(float* Temperature, float* SOC);
float getMaxValue(float *sensorparameter);
float getMinValue(float *sensorparameter);
float calculateSimpleMovingAverage(float *sensorparameter);
int printReceivedDataToConsole(float *sensorparameter, float maxvalue, float minvalue, float SMA);
void receiveAndProcessSensorData(float* Temperature, float* SOC);
