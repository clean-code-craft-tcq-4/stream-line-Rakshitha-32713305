#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define count 50

void ReadParameterFromConsole(int *temp, int *soc);
void PrintDataOnConsole(int *temp, int *soc);
int MinimumValueFromIncomingStream(int *data);
int MaximumValueFromIncomingStream(int *data);
float calculateSimpleMovingAverage(int *data);
