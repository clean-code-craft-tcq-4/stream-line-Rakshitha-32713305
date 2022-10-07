#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define count 50

void ReadParameterFromConsole(int *temp, int *soc);
void PrintDataOnConsole(int *temp, int *soc);
void MinimumValueFromIncomingStream(int *data, int min);
void MaximumValueFromIncomingStream(int *data, int max)
