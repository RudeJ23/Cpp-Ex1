// File:     dateType.h
// Author:   Joseph Rude
// Date:     4/3/18

// Description
// This file contains the specification for the dateType class

#ifndef _DATE_TYPE_H_
#define _DATE_TYPE_H_

using namespace std;

class dateType
{
   public:
      // method - constructor
      // description - construct a new dateType object (no parameters)
      // preconditions - none
      // postconditions - date object created with values set to 1/1/2000
      //   
      // method input - none (values set to 1/1/2000)
      // method output - none
      dateType();

      // method - constructor
      // description - construct a new dateType object
      // preconditions - date is correct
      // postconditions - date object created and initialized 
      //    to values given
      // method input - month, day, year as ints
      // method output - none
      dateType(int month, int day,int year);


      // method - setDate
      // description - sets the date of the dateType object
      // preconditions - date is correct
      // postconditions - dateType object date is set
      //    
      // method input - month, day, year : all as ints
      // method output - none
      void setDate(int,int,int);
      
      // method - getYear
      // description - returns the year of the dateType object
      // preconditions - dateType object has been initialized
      // postconditions - dateType year has been returned
      //    
      // method input - none
      // method output - year of the dateType object : int
      int getYear() const;
      
      // method - getMonth
      // description - returns the month of the dateType object
      // preconditions - dateType object has been initialized
      // postconditions - month of the dateType object has been returned
      //    
      // method input - none
      // method output - month of the dateType object : int
      int getMonth() const;
      
      // method - getDay
      // description - returns the day of the dateType object
      // preconditions - dateType object has been initialized
      // postconditions - day of the dateType object has been returned
      //    
      // method input - none
      // method output - day of the dateType object: int
      int getDay() const;
      
      // method - print
      // description - prints the value of the dateType object to the screen
      // in Month Day, Year format. Example: November 5, 1955
      // preconditions - dateType object has been initialized
      // postconditions - dateType values are printed to screen
      //    
      // method input - none
      // method output - none (dateType values are printed to screen)
//      void print() const;
      
      
      // overloads
      
      // method - operator<
      // description - overload for the < operator. Compares dates of two
      // 		dateType objects and returns a boolean value
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator<(const dateType&) const; 
      
      // method - operator<=
      // description - overload for the <= operator. Compares dates of two
      // 		dateType objects and returns a boolean value accordingly
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator<=(const dateType&) const; 
      
      // method - operator>
      // description - overload for the > operator. Compares dates of two
      // 		dateType objects and returns a boolean value accordingly
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator>(const dateType&) const; 
      
      // method - operator>=
      // description - overload for the >= operator. Compares dates of two
      // 		dateType objects and returns a boolean value accordingly
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator>=(const dateType&) const;
      
      // method - operator==
      // description - overload for the == operator. Compares dates of two
      // 		dateType objects and returns a boolean value accordingly
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator==(const dateType&) const; 
      
      // method - operator!=
      // description - overload for the != operator. Compares dates of two
      // 		dateType objects and returns a boolean value accordingly
      // preconditions - both object and parameter are class objects
      // postconditions - boolean value is returned
      //
      // method input - another object of the class
      // method output - bool
      bool operator!=(const dateType&) const;
     
    private:
      int year;	 	// the year
      int month; 	// the month
      int day; 		// the day
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
ostream& operator<<(ostream&,const dateType&);

// method - operator>>
// description - input overloader. This will method will allow an input stream
//			to handle the class object
// preconditions - class object is being used as input
// postconditions - input stream accepts object
//
// method input - istream, class object
// method output - class object is sent to input stream
istream& operator>>(istream&,dateType&);

#endif