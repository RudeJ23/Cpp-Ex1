// File:    median.cpp
// Author:  Joseph Rude
// Program: assignment #6
// Date:    3/20/18

// Description: This file contains the function: median


// Function: median
// Description: Takes an array of ints, finds the median value, and returns it.
// Input:  scores (array of ints)
//	   count (int) - the number of values in the array
// Output: median (double)
// Preconditions: There must be at least one value in the array.
// Postconditions: The median will be returned.

double median(const int scores[], int count)
{
    double median = 0.0;
    if (count % 2 == 0)
    {
	median = (scores[count/2] + scores[(count/2) -1])/ 2.0;
    }
    else
	median = scores[count/2];
     
    return median;
}