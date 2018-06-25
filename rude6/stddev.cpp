// File:    stddev.cpp
// Author:  Joseph Rude
// Program: assignment #6
// Date:    3/20/18

// Description: This file contains the function: StdDev

// Function: StdDev
// Description: This function will calculate the standard deviation of an 
//		array of int and return the value.
// Input:  scores (array of int)
//	   count (int) - number of values in the array
// Output: The standard deviation will be returned
// Preconditions: There must be at least one value in the array. count contains
//		  the number of values in the array.
// Postconditions: The standard deviation is returned.

#include <cmath>
double StdDev(const int scores[], int count)
{
    double stddev;
    double tmp=0;
    double sum=0;
    double average=0;
    for (int i=0; i<count; i++) {
	sum += scores[i];
    }
    
    average = sum/count;
    
    for (int i=0; i<count; i++) {
	tmp += pow(scores[i] - average,2);
    }
    stddev = sqrt(tmp / count); 
    return stddev;
}