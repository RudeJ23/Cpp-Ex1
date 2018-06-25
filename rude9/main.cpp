// File:     main.cpp
// Author:   Joseph Rude
// Date:     4/15/18

// Description
// This program will test the dateType and personType classes

#include <iostream>
#include <iomanip>
#include "dateType.h"
#include "personType.h"
#include <string>
#include <fstream>
using namespace std;

int main()
{
   dateType date1(4,3,2018);
   dateType date2;
   dateType date3(2,2,2000);
   personType person1("Jim",date1);
   personType person2;
   string newName="Joe R";
   
   
   cout << "default date: " << date1 << endl;
   
   cout << person1 << endl; // << " year: " << person1.getBirthday().getYear() << endl;
   cout << "name: " << person1.getName() << " birthday: " 
	<< person1.getBirthday() << endl;
   
   
   cout << "------Printing default values------" << endl;
   cout << date2 << endl;
   cout << person2 << endl;
   cout << "name:" << person2.getName() << " birthday:" << person2.getBirthday() 
	<< endl;
	
   cout << "Testing < for person1<person2: " << (person1<person2) << endl;
   cout << "Testing <= for person1<=person2: " << (person1<=person2) << endl;
   cout << "Testing == for person1==person2: " << (person1==person2) << endl;
   cout << "Testing > for person1>person2: " << (person1>person2) << endl;
   cout << "Testing >= for person1>=person2: " << (person1>=person2) << endl;
   cout << "Testing != for person1!=person2: " << (person1!=person2) << endl;
   
   cout << "---Testing new values set for personType (Joe R,2/2/2000)---" 
	<< endl;
   person1.setBirthday(date3);
   person1.setName(newName);
   cout << "testing << operator: " << person1 << endl;
   cout << "testing getters: " << "name: " << person1.getName() << " birthday: " 
	<< person1.getBirthday() << endl;
   
   cout << endl;
   
   return 0;
}