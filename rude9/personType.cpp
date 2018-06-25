// File:     dateType.cpp
// Author:   Joseph Rude
// Date:     4/15/18

// Description
// This file contains the implementation for the personType class

#include <iomanip>
#include <iostream>
#include "dateType.h"
#include "personType.h"
using namespace std;

// input as 4/23/2018
// istream& operator>>(istream& i, personType& p)
// {
//     int month, day, year;
//     char slash;
//     i >> month;
//     i >> slash;
//     i >> day;
//     i >> slash;
//     i >> year;
//     d.setDate(month,day,year);
//     return i;
// }

ostream& operator<<(ostream& out,const personType& p)
{
    out << p.getName()<< " " << p.getBirthday();
   return out;
}

bool personType::operator==(const personType& p) const
{
   return (getBirthday() == p.getBirthday());
}

bool personType::operator<(const personType& p) const
{
   return getBirthday() < p.getBirthday();
}

bool personType::operator<=(const personType& p) const
{
   return *this<p || *this==p;
}

bool personType::operator>(const personType& p) const
{
   return !(*this<=p);
}

bool personType::operator>=(const personType& p) const
{
   return !(*this<p);
}

bool personType::operator!=(const personType& p) const
{
   return !(*this==p);
}

personType::personType()
{
    dateType d;
    setName("(NoName)");
    setBirthday(d);
}

personType::personType(string n, dateType d)
{
    setName(n);
    setBirthday(d);
}

void personType::setBirthday(dateType d)
{
    birthday = d;
}

void personType::setName(string n)
{
    name = n;
}

string personType::getName() const
{
    return name;
}

dateType personType::getBirthday() const
{
    return birthday;
}





