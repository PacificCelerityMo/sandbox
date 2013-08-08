// MathFunctionsDLL.h

namespace CelerityLib
{
	// This class is exported from the HelloDLL.dll.
	class MathFunctions
	{
	public:
		// default constructor.
		MathFunctions();

		// add two numbers as a + b.
		static double add(double a, double b);

		// substract two numbers as a - b.
		static double substract(double a, double b);

		// multiply two numbers as a * b.
		static double multiply(double a, double b);

		// divide two numbers as a / b.  THrows an exception if b = 0.
		static double divide(double a, double b);

		// calculate the circumference of a circle as pi * radius * 2.
		static double circumference(double radius);
	
		// calculate the area of a circle as pi * radius ^ 2.
		static double area(double radius);
	
	private:
	};
}