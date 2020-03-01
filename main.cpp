#include <iostream>

#include <module.h>
#include <implementation.h>

int main(void)
{
	ICalc *calculator = new Implementation;
	int b = calculate(2, 1, *calculator);

	std::cout << b << std::endl;
	return 0;	
}