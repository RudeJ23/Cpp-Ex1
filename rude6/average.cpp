// File:    average.cpp
// Author:  Joseph Rude
// Program: assignment #6
// Date:    3/20/18
// Description: This file contains the function: average



// Function: average
// Description: Takes an array of ints, sums them, finds the average, and
//		returns it
// Input:  scores (array of int)
//	   count (int)
// Output: average (double)
// Preconditions: There must be at least one value in the array.
// Postconditions: Returns the average of the array.

double average(const int scores[], int count)
{
    double average;
    double sum;
    for (int i=0; i<count; i++)
	sum += scores[i];
    average = sum/count;
    return average;
}