// File:     studentType.h
// Author:   Joseph Rude
// Date:     4/21/18

// Description
// This file contains the specification for the studentType class


#ifndef _STUDENTTYPE_H_
#define _STUDENTTYPE_H_

#include "personType.h"
#include<string>
class studentType : public personType
{
   public:
      
      // method - constructor
      // description - construct a new studentType object with name and score
      // preconditions - none
      // postconditions - student object created with string name and int score 
      //   	
      // method input - string (name), int (score)
      // method output - none
      studentType(const string& n, int s);
      
      /// method - constructor
      // description - construct a new studentType object (no parameters)
      // preconditions - none
      // postconditions - student object created with name "" and score 0
      //   	
      // method input - none , name set to "" score value set to 0
      // method output - none
      studentType();
      
      // method - setScore
      // description - sets the score of a studentType object to int
      // preconditions - studentType object exists
      // postconditions - studentType object score has been set
      //   	
      // method input - int
      // method output - none
      void setScore(int);
      
      // method - getScore
      // description - returns the score of the studentType object
      // preconditions - studentType object exists
      // postconditions - score returned
      //   	
      // method input - none
      // method output - int (score)
      int getScore() const;
      
      // overloads
      
      // method - operator<
      // description - overload for the < operator. Compares score of two
      // 		studentType objects and returns a boolean value
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator<(const studentType&) const; 
      
      // method - operator<=
      // description - overload for the <= operator. Compares score of two
      // 		studentType objects and returns a boolean value accordingly
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator<=(const studentType&) const; 
      
      // method - operator>
      // description - overload for the > operator. Compares score of two
      // 		studentType objects and returns a boolean value accordingly
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator>(const studentType&) const; 
      
      // method - operator>=
      // description - overload for the >= operator. Compares score of two
      // 		studentType objects and returns a boolean value accordingly
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator>=(const studentType&) const;
      
      // method - operator==
      // description - overload for the == operator. Compares score of two
      // 		studentType objects and returns a boolean value accordingly
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator==(const studentType&) const; 
      
      // method - operator!=
      // description - overload for the != operator. Compares score of two
      // 		studentType objects and returns a boolean value accordingly
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator!=(const studentType&) const;
      
   private:
      int score;
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
ostream& operator<<(ostream&,const studentType&);

// method - operator>>
// description - input overloader. This will method will allow an input stream
//			to handle the class object
// preconditions - class object is being used as input
// postconditions - input stream accepts object
//
// method input - istream, class object
// method output - class object is sent to input stream
istream& operator>>(istream&,studentType&);

#endif