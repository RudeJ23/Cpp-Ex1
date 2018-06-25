// File:    output.cpp
// Author:  Joseph Rude
// Program: assignment 10
// Date:    4/19/18

// Description: This file contains the function: output


// Function: output
// Description: This function will output each student in the studentType
// 		list to a file named "results". It will be formatted according
//		to assignment specifications
// Input:  listType of studentType
// Output:  "results" file
// Preconditions:  There should be at least one student in the list
// Postconditions: listType of studentType is output to the file "results"

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
#include "studentType.h"
#include "listType.h"
void output(const listType<studentType>& students)
{
   studentType s;
   ofstream o;
   o.open("results");
   o << "NAME                     SCORE" << endl;
   for (int i=0; i<students.listSize(); i++)
   {
      students.retrieveAt(i,s);
      o << setw(25) << left << s.getName() << setw(5) << right 
	<< s.getScore() << endl;
   }
   o.close();
}
