// MathFunctionsDLL.h

#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API	__declspec(dllexport)
#else
#define MATHFUNCSDLL_API	__declspec(dllimport)
#endif

namespace Celerity
{
	// This class is exported from the HelloDLL.dll.
	class MathFunctions
	{
	public:
		// default constructor.
		MathFunctions();

		// add two numbers as a + b.
		static MATHFUNCSDLL_API double add(double a, double b);

		// substract two numbers as a - b.
		static MATHFUNCSDLL_API double substract(double a, double b);

		// multiply two numbers as a * b.
		static MATHFUNCSDLL_API double multiply(double a, double b);

		// divide two numbers as a / b.  THrows an exception if b = 0.
		static MATHFUNCSDLL_API double divide(double a, double b);

		// calculate the circumference of a circle as pi * radius * 2.
		static MATHFUNCSDLL_API double circumference(double radius);
	
		// calculate the area of a circle as pi * radius ^ 2.
		static MATHFUNCSDLL_API double area(double radius);
	
	private:
	};
}