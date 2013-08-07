// DLLUser.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MathFunctions.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double a = 7.4;
	double b = 99;
	double r = 3;

	cout << "a + b  = " << Celerity::MathFunctions::add(a, b) << "\n";

	cout << "circumference of a circle of radius " << r << " is " << Celerity::MathFunctions::circumference(r) << "\n";

	cout << "area of a circle of radius " << r << " is " << Celerity::MathFunctions::area(r) << "\n";

	cout << "Type Ctl c to exit\n";
	char c;
	scanf_s("%c", &c);

	return 0;
}
