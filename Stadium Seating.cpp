// Stadium Seating.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Chapter 3 C++ Early Objects Exercise #2 Stadium Seating
// Author: Steven C Love  3/18/2019

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	double A = 15.00, B = 12.00, C = 9.00;
	double num1, num2, num3, total;
	double aSales, bSales, cSales;

	// Get the sales for each class of seats
	cout << " Enter the ticket sold for Class A. \n ";
	cin >> num1;
	cout << " Enter the ticket sold for Class B \n ";
	cin >> num2;
	cout << " Enter the ticket sold for Class C \n ";
	cin >> num3;

	// Calculate the sales
	aSales = num1 * A;
	bSales = num2 * B;
	cSales = num3 * C;

	// calculate total
	total = aSales + bSales + cSales;
	

	// Display the sales figures
	cout << "\nSales Figures\n";
	cout << "-----------------\n";
	cout << setprecision(2);
	cout << fixed << showpoint << " Class A tickets sold \n $" << setw(2) << aSales << endl;
	cout << fixed << showpoint << " Class B tickets sold \n $" << setw(2) << bSales << endl;
	cout << fixed << showpoint << " Class C tickets sold \n $" << setw(2) << cSales << endl;
	cout << fixed << showpoint << " Total Ticket Sales \n $" << setw(2) << total << endl;
	return 0;



	system("pause");
}
   

