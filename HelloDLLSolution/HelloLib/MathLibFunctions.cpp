
// MathFunctionsDLL.cpp: implementation of the exported math functions as defined in MathFunctionsDLL.h
//

#include "MathLibFunctions.h"
#include <stdexcept>

using namespace std;

namespace CelerityLib
{
	static double pi = 3.1415926;

	MathFunctions::MathFunctions() 
	{
	}

	double MathFunctions::add(double a, double b)
	{
		return a + b;
	}

	double MathFunctions::substract(double a, double b)
	{
		return a - b;
	}

	double MathFunctions::multiply(double a, double b)
	{
		return a * b;
	}

	double MathFunctions::divide(double a, double b)
	{
		if(b == 0)
			throw invalid_argument("the divisor can't be zero");

		return a / b;
	}

	double MathFunctions::circumference(double r)
	{
		return pi * r * 2;
	}

	double MathFunctions::area(double r)
	{
		return pi * r * r;
	}
}
