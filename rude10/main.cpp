// File:     main.cpp
// Author:   Joseph Rude
// Date:     4/19/18

// Description
// This program will test and use the studentType class

#include <iostream>
using namespace std;
#include "studentType.h"
#include "listType.h"
#include "dateType.h"
#include "personType.h"
#include <string>
#include <fstream>

void read(listType<studentType>&);
void output(const listType<studentType>&);

int main()
{
   listType<studentType> students;
   read(students);
   output(students);
   
//    studentType s1("me",100), s2;
//    cout << "first student: " << s1.getName() << " " << s1.getScore() << endl;
//    cout << "second student: " << s2.getName() << " " << s2.getScore() << endl;
   
   return 0;
}

