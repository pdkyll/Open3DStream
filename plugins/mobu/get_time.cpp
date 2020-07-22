#include "get_time.h"
#include <windows.h>

double GetTime()
{
	LARGE_INTEGER StartTime;
	LARGE_INTEGER Freq;

	QueryPerformanceCounter(&StartTime);
	QueryPerformanceFrequency(&Freq);

	return (double)StartTime.QuadPart * 1000.0f / (double)Freq.QuadPart;
}