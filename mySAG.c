#include <stdio.h>


extern int stream[50];


void MySAGInit(int size)
{
	int n=0;
	n=sizeof(stream)/sizeof(stream[0]); /* tamanho 50 */	
	if(size<=n)
		return TRUE;
	elseif
		return FALSE;
}
MySAGInsert(int size)
{
	scanf(%d, &stream[size+2]);
}
double MySAGMax(double *a)
{
	int i=0;
	double max=0;
	while(i!=(sizeof(a)/sizeof(a[0]))-1)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
		i++;
		
	}
	
	return max;
}
double MySAGMin(double *a)
{
	int i=0;
	double min=a[0];
	while(i!=(sizeof(a)/sizeof(a[0]))-1)
	{
		if(a[i] < min)
		{
			min = a[i];
		}
		i++;
		
	}
	
	return min;
}
double MySAGAverage(double *a)
{
	int i = 0;
	double sum = 0, average = 0;
	while(i!=(sizeof(a)/sizeof(a[0]))-1)
	{
		sum+=a[i];
		i++;
	}
	average = sum/i;
	return average;
}

MySAGFreq()
{
}
