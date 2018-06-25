// File:    outputSummary.cpp
// Author:  Joseph Rude
// Program: assignment #6
// Date:    3/20/18

// Description: This file contains the function: outputSummary


// Function: outputSummary
// Description: This function will print out a summary of the array of 
//		scores and some data about them. It uses the average, median, 
//		and StdDev functions to complete this. The data is printed out
//		to the file called "testsummary".
// Input:  names (array of strings)
//	   scores (array of ints)
//	   count (int) - number of values in the array
//	   maximum (int) - maximum test score
// Output: data is output to the file called "testsummary".
// Preconditions:  There must be at least one value in the arrays.
// Postconditions: Summary info will be displayed in the file "testsummary".

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

// prototypes for other functions used
double average(const int scores[], int count);
double median(const int scores[], int count);
double StdDev(const int scores[], int count);

void outputSummary(const int scores[], int count, int maximum)
{
    ofstream outfile;
    outfile.open("testsummary");
  
    outfile << "-----Summary-----" << endl;
    outfile << "Maximum Score: " << maximum << endl;;
    outfile << "Number of Students: " << count << endl;
    outfile << "High Score: " << scores[0] << endl;
    outfile << "Low Score: " << scores[count-1] << endl;
    outfile << "Range of Scores: " << scores[0]-scores[count-1] << endl;
    outfile << "Average of Scores: " << average(scores,count) << endl;
    outfile << "Median Score: " << median(scores,count) << endl;
    outfile << "Standard Deviation: " << StdDev(scores,count) << endl;
    
    outfile.close();
}