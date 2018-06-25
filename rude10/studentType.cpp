// File:     studentType.cpp
// Author:   Joseph Rude
// Date:     4/21/18

// Description
// This file contains the implementation for the studentType class

#include <iomanip>
#include <iostream>
#include "personType.h"
using namespace std;
#include "studentType.h"

istream& operator>>(istream& i, studentType& s)
{
    int score;
    string name;

    getline(i,name);
    s.setName(name);
    i >> score;
    s.setScore(score);
    i.ignore(80,'\n');
    return i;
}

ostream& operator<<(ostream& out,const studentType& s)
{
    out << s.getName()<< " " << s.getScore();
   return out;
}

bool studentType::operator==(const studentType& s) const
{
   return (getScore() == s.getScore());
}

bool studentType::operator<(const studentType& s) const
{
   return getScore() < s.getScore();
}

bool studentType::operator<=(const studentType& s) const
{
   return *this<s || *this==s;
}

bool studentType::operator>(const studentType& s) const
{
   return !(*this<=s);
}

bool studentType::operator>=(const studentType& s) const
{
   return !(*this<s);
}

bool studentType::operator!=(const studentType& s) const
{
   return !(*this==s);
}

void studentType::setScore(int s)
{
   score = s;
}

int studentType::getScore() const
{
   return score;
}

studentType::studentType(const string& n, int s)
{
   setScore(s);
   setName(n);
}

studentType::studentType()
{
   setScore(0);
   setName("");
}