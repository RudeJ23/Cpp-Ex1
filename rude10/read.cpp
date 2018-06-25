// File:    read.cpp
// Author:  Joseph Rude
// Program: assignment 10
// Date:    4/19/18

// Description: This file contains the function: read


// Function: read
// Description: This function will take input from the file "scores". The 
// input will consist of the name and corresponding test score. Each student
// will be stored in a list of studentType
// Input: "scores"
// Output:  list of studentType is created from file data
// Preconditions:  There must be a file "scores" containing the data.
// Postconditions: The studentType list is created

#include<fstream>
#include<string>
using namespace std;
#include "studentType.h"
#include "listType.h"

void read(listType<studentType>& scores)
{
   ifstream infile;
   studentType student;
   infile.open("scores");
   infile >> student;
   while (!infile.eof() && !scores.isFull())
   {
      scores.insert(student);
      infile >> student;
   }
   infile.close();
}

