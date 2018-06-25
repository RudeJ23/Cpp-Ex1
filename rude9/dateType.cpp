// File:     dateType.cpp
// Author:   Joseph Rude
// Date:     4/3/18

// Description
// This file contains the implementation for the dateType class

#include <iomanip>
#include <iostream>
#include "dateType.h"
using namespace std;

// input as 4/23/2018
istream& operator>>(istream& i, dateType& d)
{
    int month, day, year;
    char slash;
    i >> month;
    i >> slash;
    i >> day;
    i >> slash;
    i >> year;
    d.setDate(month,day,year);
    return i;
}

ostream& operator<<(ostream& out,const dateType& d)
{
   string mName;
    if (d.getMonth() == 1)
	mName = "January";
    if (d.getMonth() == 2)
	mName = "February";
    if (d.getMonth() == 3)
	mName = "March";
    if (d.getMonth() == 4)
	mName = "April";
    if (d.getMonth() == 5)
	mName = "May";
    if (d.getMonth() == 6)
	mName = "June";
    if (d.getMonth() == 7)
	mName = "July";
    if (d.getMonth() == 8)
	mName = "August";
    if (d.getMonth() == 9)
	mName = "September";
    if (d.getMonth() == 10)
	mName = "October";
    if (d.getMonth() == 11)
	mName = "November";
    if (d.getMonth() == 12)
	mName = "December";
    
    out << mName << " " << d.getDay() << ", " << d.getYear();
   return out;
}

bool dateType::operator==(const dateType& d) const
{
   return ( (getDay() == d.getDay()) && (getMonth() == d.getMonth())
      && (getYear() == d.getYear()) );
}

bool dateType::operator<(const dateType& d) const
{
   if ( (getYear() < d.getYear()) || (getYear() > d.getYear()) )
   {
     return getYear() < d.getYear();
   }
   else if (getYear() == d.getYear())
   {
     if ( (getMonth() < d.getMonth()) || (getMonth() > d.getMonth()) )
     {
	return getMonth() < d.getMonth(); 
     }
     else if (getMonth() == d.getMonth())
     {
	return getDay() < d.getDay();
     }
   }
}

bool dateType::operator<=(const dateType& d) const
{
   return *this<d || *this==d;
}

bool dateType::operator>(const dateType& d) const
{
   return !(*this<=d);
}

bool dateType::operator>=(const dateType& d) const
{
   return !(*this<d);
}

bool dateType::operator!=(const dateType& d) const
{
   return !(*this==d);
}

dateType::dateType()
{
    setDate(1,1,2000);
}

dateType::dateType(int m, int d, int y)
{
    setDate(m,d,y);
}

void dateType::setDate(int m, int d, int y)
{
    // check basic month and day numbers
    if (m < 1 || m > 12 || d < 1)
    {
	cerr << "Invalid date. Setting date to 1/1/2000. ";
	month = 1;
	day = 1;
	year = 2000;
    }
    else
    {
	// months of 31 days
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 
	  || m == 10 || m == 12)
	{
	    if (d > 31)
	    {
		cerr << "Invalid date. Setting date to 1/1/2000. ";
		month = 1;
		day = 1;
		year = 2000;
	    }
	    else
	    {
		month = m;
		day = d;
		year = y;
	    }
	}
	// february days
	else if (m == 2) /////// leap year
	{
	    // if it is a leap year
	    if ( (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0) )
	    {
		if (d > 29)
		{
		    cerr << "Invalid date. Setting date to 1/1/2000. ";
		    month = 1;
		    day = 1;
		    year = 2000;
		}
		else
		{
		    month = m;
		    day = d;
		    year = y;
		}
	    }
	    // if it is not a leap year
	    else
	    {
		if (d > 28)
		{
		    cerr << "Invalid date. Setting date to 1/1/2000. ";
		    month = 1;
		    day = 1;
		    year = 2000;
		}
		else
		{
		    month = m;
		    day = d;
		    year = y;
		}
	    }
	    
	}
	// months of 30 days
	else if (m == 4 || m == 6 || m == 9 || m == 11)
	{
	    if (d > 30)
	    {
		cerr << "Invalid date. Setting date to 1/1/2000. ";
		month = 1;
		day = 1;
		year = 2000;
	    }
	    else
	    {
		month = m;
		day = d;
		year = y;
	    }
	}
	
    }
}

int dateType::getYear() const
{
    return year;
}

int dateType::getMonth() const
{
    return month;
}

int dateType::getDay() const
{
    return day;
}

// void dateType::print() const
// {
//     string mName;
//     if (getMonth() == 1)
// 	mName = "January";
//     if (getMonth() == 2)
// 	mName = "February";
//     if (getMonth() == 3)
// 	mName = "March";
//     if (getMonth() == 4)
// 	mName = "April";
//     if (getMonth() == 5)
// 	mName = "May";
//     if (getMonth() == 6)
// 	mName = "June";
//     if (getMonth() == 7)
// 	mName = "July";
//     if (getMonth() == 8)
// 	mName = "August";
//     if (getMonth() == 9)
// 	mName = "September";
//     if (getMonth() == 10)
// 	mName = "October";
//     if (getMonth() == 11)
// 	mName = "November";
//     if (getMonth() == 12)
// 	mName = "December";
//     
//     cout << "Date: " << mName << " " << getDay() << ", " << getYear() << endl;
//     
// }




