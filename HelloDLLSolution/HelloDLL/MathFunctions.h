// MathFunctionsDLL.h

#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API	__declspec(dllexport)
#else
#define MATHFUNCSDLL_API	__declspec(dllimport)
#endif

namespace Celerity
{
	// This class is exported from the DLL.
	class MathFunctions
	{
	public:
		static MATHFUNCSDLL_API double add(double a, double b);

		static MATHFUNCSDLL_API double substract(double a, double b);

		static MATHFUNCSDLL_API double multiply(double a, double b);

		static MATHFUNCSDLL_API double divide(double a, double b);
	};
}