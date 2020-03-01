#include <module.h>

int calculate(int a, int b, ICalc &calculate)
{
	int result = calculate.add(a, b);
	return result;
}
