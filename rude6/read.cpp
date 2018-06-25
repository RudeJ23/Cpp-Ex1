// File:    read.cpp
// Author:  Joseph Rude
// Program: assignment #6
// Date:    3/20/18

// Description: This file contains the function: read


// Function: read
// Description: This function will take input from the file "testscores". The 
// input will consist of the maximum possible test score, the names as strings, 
// and the test scores as ints. The maximum test score will be stored, 
// the names will be stored in an array of strings, and the individual scores 
// achieved will be stored in an array of ints. A counter will be used to
// keep track of the number of scores in the array. This file
// uses the constants.h file for the constants needed for the array.
// Input: "testscores"
// Output:   names (array of strings)
// 	  scores (array of ints)
// 	   count (int) - number of values in the array
// 	   maximum (int) - maximum possible score
// Preconditions:  There must be a file "testscores" containing the data.
// Postconditions: The arrays names[] and scores[] will be populated with 
// values from data file. The variable count will be used to keep
// track of the number of values in the array. The maximum
// possible score is stored in the variable maximum.

#include <iostream>
#include <fstream>
#include <string>
#include "constants.h"
using namespace std;

void read(string names[], int scores[], int &count, int &maximum)
{
    ifstream infile;
    count = 0;
    string name;
    
    // get maximum score from file
    infile.open("testscores");
    if (infile.fail())
	cout << "opening the input file has failed\n"; 
    infile >> maximum;
    infile.ignore(80,'\n');
    
    // get name/score pairs from file
    getline(infile,name);
    while (!infile.eof() && count < arraysize)
    {
	names[count] = name;
	infile >> scores[count];
	infile.ignore(80,'\n');
	count++;
	getline(infile,name);
    }
    infile.close();
}