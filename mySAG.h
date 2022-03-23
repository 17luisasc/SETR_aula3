/** @file mySAG.h
 * @brief mySAG is module that computes integers from a stream. 
 *
 * This module is composed by 6 functions, with the purpose of computing
 * aggregated values from a stream.
 * The array with the values from the stream, which is entitled "stream",
 * is inicialized as an extern global variable.
 * 
 * @author Ana Luísa Coelho
 * @verbatim 
 * This is my email:luisasc@ua.pt
 * @endverbatim
 * @date 22 March 2022
 * @bug It was not tested yet.
 */

#ifndef _mysag_h
#define _mysag_h

extern int stream[50];

/**
 * @brief Init the module.
 *
 * It evaluates if the array size chosen by the user is lesser or greater the array size 
 * that was given in the code.
 * If it's lesser than the size given in the code, it returns one, telling the array has enough 
 * positions to fill.
 * If it's greater, it return zero, meaning there's not enough space in the array.
 * @param size 	This integer parameter is the size of the array chosen by the user.
 * @return 	This function returns 0 or 1 as mentioned before.
 */
int MySAGInit(int size);

/**
 * @brief Adds an element to the stream.
 *
 * This function  adds an element to the array, directly from the terminal.
 * It appears a message in the terminal a message asking the user to chose  
 * an integer to fill it. 
 * @param size  This integer parameter is the size of the array chosen by the user.
 * @return      It doesn't return anything.
 */
void MySAGInsert(int size);

/**
 * @brief Returns the maximum value of the stream window
 *
 * This function goes through all the values of the array and finds the maximum value. 
 * @param size  This integer parameter is the size of the array chosen by the user.
 * @return      It returns maximum value of the array (int).

 */
int MySAGMax();

/**
 * @brief Returns the minimum value of the stream window
 *
 * This function goes through all the values of the array and finds the minimum value. 
 * @return       It returns minimum value of the array (int).

 */
int MySAGMin();

/**
 * @brief Returns the average of the values of the stream
window
 *
 * This function calculates the average (rounded to an int) of all the values that the array contains. 
 * @return      It returns the average (int).
 */
int MySAGAvg();

/**
 * @brief It should return the number of times that a given value, passed as argument,
exists in the stream window
 *
 * It was not developed.
 * @return      In this case returns 0.
 */
int MySAGFreq();

#endif
