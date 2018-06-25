// File:    outputScores.cpp
// Author:  Joseph Rude
// Program: assignment #6
// Date:    3/20/18

// Description: This file contains the function: outputScores


// Function: outputScores
// Description: This function will take an array of strings, array of ints, 
// the number of values in the array, and the maximum score as input. Each score
// and name will then be output in formatted columns consisting of the name,
// score, percentage of maximum score, and letter grade. This function calls on 
// the grade function from grade.cpp. The output will be stored in a file 
// called "testresults".
// Input:    names (array of strings)
// 	  scores (array of ints)
// 	   count (int) - the number of values in the array
// 	   maximum (int) - the maximum test score
// Output: the output will go to the file called "testresults".
// Preconditions:  There must be at least one value in the array.
// Postconditions: The output will be delivered to the file "testresults".

#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// prototype for other functions used
char grade(double pct);

void outputScores(const string names[], const int scores[], int count, 
		  int maximum)
{
    ofstream outfile;
    outfile.open("testresults");
    
    outfile << fixed << showpoint << setprecision(2); // set precision
    outfile << "Name                        "
    "Score	PCT	 Grade" << endl;
    outfile << "--------------------------  " << "-----     " << "------     " 
	    << "-----" << endl;
    for (int i=0; i<count; i++)			// output each score, formatted
	outfile << setw(29) << left << names[i]
	    << setw(8) << left << scores[i]
	     << setw(6) << right << (static_cast<double>(scores[i])) / 
		    (maximum) * (100) << "%"
	     << setw(8) << right << 
		    grade((static_cast<double>(scores[i])/maximum)*100) << endl;
    
    outfile.close();
}