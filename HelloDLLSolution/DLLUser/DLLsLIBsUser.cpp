// DLLUser.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MathDllFunctions.h"
#include "MathLibFunctions.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double a = 7.4;
	double b = 99;
	double r = 3;
	
	cout << "DLL: Use funcitons in CelerityDLL from the HelloDLL.dll:\n";

	cout << "a + b  = " << CelerityDLL::MathFunctions::add(a, b) << "\n";

	cout << "circumference of a circle of radius " << r << " is " << CelerityDLL::MathFunctions::circumference(r) << "\n";

	cout << "area of a circle of radius " << r << " is " << CelerityDLL::MathFunctions::area(r) << "\n";

	cout << "\n";

	cout << "Lib: Use funcitons in CelerityLib from the HelloDLL.dll:\n";

	cout << "a + b  = " << CelerityDLL::MathFunctions::add(a, b) << "\n";

	cout << "circumference of a circle of radius " << r << " is " << CelerityDLL::MathFunctions::circumference(r) << "\n";

	cout << "area of a circle of radius " << r << " is " << CelerityDLL::MathFunctions::area(r) << "\n";

	cout << "\n";

	cout << "Type any key to exit\n";
	char c;
	scanf_s("%c", &c);

	return 0;
}
