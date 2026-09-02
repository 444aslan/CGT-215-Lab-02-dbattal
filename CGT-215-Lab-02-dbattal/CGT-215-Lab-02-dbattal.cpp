// CGT-215-Lab-02-dbattal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float x;
	cout << "Hello everyone! Today, we are solving the equation:" << endl;
	cout << "Ax + B = 0" << endl;
	cout << "For x" << endl;

	cout << endl;

	cout << "Please enter a value for A: ";
	cin >> A;

	cout << "Please enter a value for B: ";
	cin >> B;
	
	x = (0 - B) / A;
	
	cout << endl;

	cout << "The answer is:" << endl;
	cout << "x =" << x << endl;
}