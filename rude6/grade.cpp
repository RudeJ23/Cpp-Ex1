// File:    grade.cpp
// Author:  Joseph Rude
// Program: assignment #6
// Date:    3/20/18
// Description: This file contains the function: grade


// Function: grade
// Description: Takes a percentage as input, and returns the corresponding
// 		letter grade for that percentage. The current grading scale
//		is a 90/80/70/60 scale, declared with constants.
// Input: pct (double)
// Output: grade (char)
// Preconditions:  The parameter passed must be a double.
// Postconditions: Returns the letter grade as a 'char' type.

char grade(double pct) 
{
    const double A_min = 90.0; // minimum pct for an A grade
    const double B_min = 80.0; // minimum pct for an B grade
    const double C_min = 70.0; // minimum pct for an C grade
    const double D_min = 60.0; // minimum pct for an D grade
    char grade;
    if (pct >= A_min)
	grade = 'A';
    else if (pct >= B_min)
	grade = 'B';
    else if (pct >= C_min)
	grade = 'C';
    else if (pct >= D_min)
	grade = 'D';
    else
	grade = 'F';
  
    return grade;
}