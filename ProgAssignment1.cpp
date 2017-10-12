/*******************************************************************
*   CS 121 Programming Assignment 1
*   File: ProgAssignment1
*   Author: Kyle Daigle
*   Desc: Calculates n factorial, in this case n=15, using the traditional method and Stirling's formula. Also calculates the difference.
*   Date: 2/12/2017
*
*   I attest that this program is entirely my own work
*******************************************************************/

#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	double x = 15.0; //variable for tradiational factorial calculation
	double n = 15.0; //variable for Stirling's Formula
	double factorialResult = 0; //result of each step of tradiational factorial calculation

	for (int i = 15; i > 1; i--) {
		factorialResult = x * (i - 1); //i and x start at same initial value. As i counts down, x stores previous calculation
		x = factorialResult; //set x to previous result

	}
	cout << fixed << n << "! using traditional methods is " << factorialResult << "\n" << endl;

	double Sterling = exp(-n)*pow(n, n)*sqrt(2.0 * 3.141592*n); //Sterling's equation

	cout << fixed << n << "! using Sterling's formula is " << Sterling << "\n" << endl;

	cout << fixed << "The difference between them is " << factorialResult - Sterling << endl; // calculates and displays the difference.
}