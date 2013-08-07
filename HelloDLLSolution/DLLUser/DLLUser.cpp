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

	cout << "a + b  = " << Celerity::MathFunctions::add(a, b);

	cout << "Type Ctl c to exit\n";
	char c;
	scanf_s("%c", &c);

	return 0;
}

