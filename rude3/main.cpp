// File:      main.cpp
// Name:      Joseph Rude
// Class:     CSIS 252
// Program:   assignment #3
// Date:      2/5/18

// Description: Various tasks using arrays in C++
// Note: Each step that requires output checks to see if there are numbers in the array. If there aren't any numbers,
// a statement will be output informing the user.

#include <iostream>
#include <iomanip>

using namespace std;

const int sentinel = 0;
const int arraysize = 20;

int main()
{
  
    //variables
    int count = 0, pCount=0, nCount=0, eCount=0, oCount=0;
    int num, pos, sumEven=0, sumOdd=0;
    int posArray[arraysize], negArray[arraysize], evenArray[arraysize], oddArray[arraysize];
    double avgEven, avgOdd;
    bool found;
    
    
    // step 1
    cout << endl;
    cout << "Input ints. Enter 0 to stop: ";
    cin >> num;
    while (num != sentinel && count < arraysize)
    {
	if (num > 0)
	{
	    posArray[pCount] = num;
	    pCount++;
	    count++;
	}
	else if (num < 0)
	{
	    negArray[nCount] = num;
	    nCount++;
	    count++;
	}
	cin >> num;    
    }
    
    
    // step 2
    cout << "Negative array values: ";
    if (nCount > 0)
    {
	for (int i=0; i < nCount; i++)
	    cout << negArray[i] << ' ';
	cout << endl;
    }
    else
	cout << "There are no numbers in the negative array" << endl;
  
    
    // step 3
    cout << "Absolute values of negatives in reverse order: ";
    if (nCount > 0)
    {
	for (int i=0; i < nCount; i++)
	    negArray[i] = negArray[i] * -1;
	for (int i=nCount-1; i >= 0; i--)
	    cout << negArray[i] << ' ';
	cout << endl;
    }
    else
	cout << "There are no numbers in the negative array" << endl;
    
    
    // step 4
    for (int i=0; i < pCount; i++)
    {
	if ( (posArray[i] % 2) == 0 )
	{
	    evenArray[eCount] = posArray[i];
	    eCount++;
	}
	else
	{
	    oddArray[oCount] = posArray[i];
	    oCount++;
	}
    }

    cout << "Even positive array values: ";
    if (eCount > 0)
    {
	for (int i=0; i<eCount; i++)
	    cout << evenArray[i] << ' ';
	cout << endl;
    }
    else
	cout << "There are no numbers in the even array" << endl;
    
    cout << "Odd positive array values: ";
    if (oCount > 0)
    {
	for (int i=0; i<oCount; i++)
	    cout << oddArray[i] << ' ';
	cout << endl;
    }
    else
	cout << "There are no numbers in the odd array" << endl;
    
    
    // step 5
    cout << "Average of even positive array: ";
    if (eCount > 0)
    {
	for (int i=0; i<eCount; i++)
	    sumEven += evenArray[i];
	avgEven = static_cast<double>(sumEven) / eCount;
	cout << fixed << showpoint << setprecision(2);
	cout << avgEven << endl;  
    }
    else
	cout << "There are no numbers in the even array" << endl;
   
    
    // step 6
    cout << "Average of odd positive array: ";
    if (oCount > 0)
    {
	for (int i=0; i<oCount; i++)
	    sumOdd += oddArray[i];
	avgOdd = static_cast<double>(sumOdd) / oCount;
	cout << avgOdd << endl;
	cout << setprecision(0);
    }
    else
	cout << "There are no numbers in the odd array" << endl;
    
    
    // step 7
    found = false;
    pos = 0;
    cout << "The first value in the even positive array <= to the "
		"average is: ";
    if (eCount > 0)
    {
	while (!found && pos < eCount)
	{
	    if (evenArray[pos] <= avgEven)
		found = true;
	    else
		pos++;
	}
	cout << evenArray[pos];
	cout << "  --- The index it was found at was: " << pos << endl;
    }
    else
	cout << "There are no numbers in the even array" << endl;
    
    
    // step 8
    found = false;
    cout << "The first value in the odd positive array (from end to start) "
		 ">= to the average is: ";
    if (oCount > 0)
    {
	pos = oCount-1;
	while (!found && pos >= 0)
	{
	    if (oddArray[pos] >= avgOdd)
		found = true;
	    else
		pos--;
	}
	cout << oddArray[pos];
	cout << "  --- The index it was found at was: " << pos << endl;
    }
    else
	cout << "There are no numbers in the odd array" << endl;
    
    cout << endl;
    return 0;
}
