#include "Receiver.h"

void GetSensorOutput(int minValue, int maxValue, int * Array, int Range )
{
    for(int i =0; i < Range; i++)
    {
        Array[i] = (rand() % (maxValue - minValue+1) + minValue);
    }
}
