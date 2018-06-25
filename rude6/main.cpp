// File:    main.cpp
// Author:  Joseph Rude
// Program: assignment #6
// Date: 3/20/18

// Description: This file contains the main function. The program will read 
// a maximum score, followed by name/score pairs from a text file "testscores".
// All input is read assuming each item is on a separate line in the text file. 
// The name/score pairs will be stored in parallel arrays. The output 
// will consist of the score, pct, and grade of each score in the file 
// "testresults". There will also be an output summary including: 
// number of students, high score, low score, range of scores, average of 
// scores, median score, and standard deviation of scores. This will be stored 
// in a file called "testsummary".


#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "constants.h"
using namespace std;

// function prototypes
double average(const int scores[], int count);
char grade(double pct);
double median(const int scores[], int count);
void outputScores(const string names[], const int scores[], int count, 
		  int maximum);
void outputSummary(const int scores[], int count, 
		   int maximum);
void read(string names[], int scores[], int &count, int &maximum);
void sort(string names[], int scores[], int count);
double StdDev(const int scores[], int count);

// Function: main
// Description: The main function of the program that calls other functions.
// Input:  <none>
// Output: <none>
// Preconditions: <none> 
// Postconditions: <none>
int main()
{
   // variables
   int scores[arraysize]; // create an array of constant arraysize
   string names[arraysize]; // create a string array of arraysize
   int count;		  // number of values in the array
   int maximum;		  // maximum test score
   
   read(names,scores,count,maximum);	// read into arrays from files
   sort(names,scores,count);			// sort array in decending order
   outputScores(names,scores,count,maximum);	// output list of scores 
   outputSummary(scores,count,maximum);	// output summary of all scores

   return 0;
}