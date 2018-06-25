// File:    sort.cpp
// Author:  Joseph Rude
// Program: assignment #6
// Date:    3/20/18

// Description: This file contains the function: sort


// Function: sort
// Description: This function will sort an array of ints and an array of
//	strings. These are parallel arrays and will be sorted in descending
//	order according to the array of ints.
// Input:  names (array of strings)
//	   scores (array of int)
//	   count (int) - number of values in the array
// Output: scores (array of int) sorted accordingly
//	   names (array of string) sorted along with the score to keep the
//				  two arrays indexed together.
// Preconditions:  count contains the number of values in the array.
// Postconditions: The array of ints is arranged in descending order. With the
//	           array of names sorted along with it.
#include <string>
using namespace std;

void sort(string names[], int scores[], int count)
{
   int temp;
   string tempName;
   int large;
   for (int i=0; i<count-1; i++)  // put count-1 ints in their correct spot
   {
      large=i;
      for (int j=i+1; j<count; j++)  // loop to find the largest
         if (scores[j] > scores[large])
            large=j;
      temp = scores[i];         // put largest in proper position
      tempName = names[i];		// sort name with the score
      scores[i] = scores[large];
      scores[large] = temp;		
      names[i] = names[large];		// sort name with the score
      names[large] = tempName;		// sort name with the score
   }
}