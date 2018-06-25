// File:     personType.h
// Author:   Joseph Rude
// Date:     4/15/18

// Description
// This file contains the specification for the personType class

#ifndef _PERSON_TYPE_H_
#define _PERSON_TYPE_H_

#include "dateType.h"
using namespace std;

class personType
{
   public:
      // method - constructor
      // description - construct a new personType object (no parameters)
      // preconditions - none
      // postconditions - person object created with values set to "(NoName)"
      //   	and 1/1/2000
      // method input - none (values set to "(NoName)" and 1/1/2000)
      // method output - none
      personType();

      // method - constructor
      // description - construct a new personType object
      // preconditions - person is correct
      // postconditions - person object created and initialized 
      //    to values given
      // method input - name (string), birthday (dateType)
      // method output - none
      personType(const string& name, const dateType& birthday);


      // method - setName
      // description - sets the name of the personType object
      // preconditions - personType exists
      // postconditions - personType object name is set
      //    
      // method input - name (string)
      // method output - none
      void setName(const string&);
      
      // method - setBirthday
      // description - sets the birthday of the personType object
      // preconditions - personType exists
      // postconditions - personType object birthday is set
      //    
      // method input - birthday (dateType)
      // method output - none
      void setBirthday(const dateType&);
      
      // method - getName
      // description - returns the name of the personType object
      // preconditions - personType object has been initialized
      // postconditions - personType name has been returned
      //    
      // method input - none
      // method output - name of the personType object : string
      string getName() const;
      
      // method - getBirthday
      // description - returns the birthday of the personType object
      // preconditions - personType object has been initialized
      // postconditions - birthday of the personType object has been returned
      //    
      // method input - none
      // method output - birthday of the personType object : dateType
      dateType getBirthday() const;
      
      
      
      // overloads
      
      // method - operator<
      // description - overload for the < operator. Compares birthday of two
      // 		personType objects and returns a boolean value
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator<(const personType&) const; 
      
      // method - operator<=
      // description - overload for the <= operator. Compares birthday of two
      // 		personType objects and returns a boolean value accordingly
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator<=(const personType&) const; 
      
      // method - operator>
      // description - overload for the > operator. Compares birthday of two
      // 		personType objects and returns a boolean value accordingly
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator>(const personType&) const; 
      
      // method - operator>=
      // description - overload for the >= operator. Compares birthday of two
      // 		personType objects and returns a boolean value accordingly
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator>=(const personType&) const;
      
      // method - operator==
      // description - overload for the == operator. Compares birthday of two
      // 		personType objects and returns a boolean value accordingly
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator==(const personType&) const; 
      
      // method - operator!=
      // description - overload for the != operator. Compares birthday of two
      // 		personType objects and returns a boolean value accordingly
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator!=(const personType&) const;
     
    private:
      string name;
      dateType birthday;
};

// overloads

// method - operator<<
// description - output overloader. This will output the object to any output
//			source. 
// preconditions - class object is being used as output
// postconditions - class object is output to the output stream
//
// method input - ostream, class object
// method output - class object is sent to output stream
ostream& operator<<(ostream&,const personType&);

// method - operator>>
// description - input overloader. This will method will allow an input stream
//			to handle the class object
// preconditions - class object is being used as input
// postconditions - input stream accepts object
//
// method input - istream, class object
// method output - class object is sent to input stream
//istream& operator>>(istream&,personType&);

#endif