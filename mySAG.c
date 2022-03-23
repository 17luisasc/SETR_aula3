#include "mySAG.h"

extern int stream[50];

int MySAGInit(int size)
{
	int n=0;
	n=sizeof(stream)/sizeof(stream[0]); /* tamanho 50 */	
	if(size<=n)
		return 1;
	else
		return 0;
}

int * MySAGInsert(int size)
{
	printf("Insert a new integer for array: ");
	scanf(%d, &stream[size+2]);
	return  stream;
}

int MySAGMax()
{
	int i=0;
	int max=0;
	while(i!=(sizeof(stream)/sizeof(stream[0]))-1)
	{
		if(stream[i] > max)
		{
			max = stream[i];
		}
		i++;
	}
	return max;
}

int MySAGMin()
{
	int i=0;
	int min=stream[0];
	while(i!=(sizeof(stream)/sizeof(stream[0]))-1)
	{
		if(stream[i] < min)
		{
			min = stream[i];
		}
		i++;
	}	
	return min;
}
int MySAGAverage()
{
	int i = 0, avg = 0;
	int sum = 0; 
	double average = 0;
	while(i!=(sizeof(stream)/sizeof(stream[0]))-1)
	{
		sum+=stream[i];
		i++;
	}
	average = sum/i;
	int avg = average; 
	return average;
}

int MySAGFreq()
{
	return 0;
}
