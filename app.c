/** @file app.c
 * @brief It fills an array with integers chosen by the user and the array has a 
 * size also chosen by the user.
 * Then it calls functions that give information about the array and about what it contains. 
 *
 * app.c is the file that contains the main() function. 
 * 
 * @author Ana Luísa Coelho
 * @date 23 March 2022
 * @bug Not tested yet.
 */

/* Includes */
#include <stdio.h>
#include <stdlib.h>
#include "mySAG.h"

extern int stream[50];

/**
 * @brief It fills an array with integers chosen by the user and the array has a 
 * size also chosen by the user.
 * Then it calls functions that give information about the array and about what it contains. 
 *
 * It is asked to the user what is the size that they want to give to the array.
 * If it is to big it to fit the size of the array, it asks for a new size.
 * Then it asks for values to fill the array.
 * After that User can chose a mode, acordingly with what they want to know about 
 * the array.
 * Mode 1: the User chooses a new value to add to the array;
 * Mode 2: returns the max value of the array;
 * Mode 3: returns the min value of the array;
 * Mode 4: returns the average of the array;
 * After the choice of the User, the programme is terminated. 
 * (there's only one oportunity for the user to choose)
 * 
 * @return Returns 0
 */
int main(void)
{
	int size=0, i=0, can_fill=0, mode=0, max=0, min=0, avg=0;
	printf("\nEnter size of array: ");
	scanf(%d, &size);
	can_fill=MySAGInit(size+1); 
	while(can_fill!=1) 
        {
                printf("\nCannot fill array, not enough space!\nEnter new size value: ");
                scanf(%d, &size);
		can_fill=MySAGInit(size+1); 
        }	
	for(i=0, i<size-1, i++)
	{
		printf("\nEnter a value to fill the array: ");
		scanf(%d, &stream[i]);
	}
	printf("\nIf you want to know: If you want to insert another value in the array enter '1'")
	printf("\n                     The max value in the array                       enter '2'");
	printf("\n                     The min value in the array                       enter '3'");
	printf("\n                     The average of the values in the array           enter '4'");
	scanf(%d, &mode);
	if(mode=1)
	{
		can_fill=MySAGInit(size+1);
		if(can_fill!=1)
		{
			printf("\nEnter a smaller size of array: ");
       			scanf(%d, size);
			MySAGInsert(size);			
			printf("\nYou just inserted a new value in the array!");
		}
		else
		{
		MySAGInsert(size);                      
                printf("\nYou just inserted a new value in the array!");
		}
	}
	else if(mode=2)
	{
		max=MySAGMax();
		printf("\nMax value: %d", max);
	}
	else if(mode=3)
        {
                min=MySAGMin();
                printf("\nMin value: %d", min);
        }
	else if(mode=4)
        {
                avg=MySAGAvg();
                printf("\nAverage value: %d", avg);
        }	
	return 0;	
}
