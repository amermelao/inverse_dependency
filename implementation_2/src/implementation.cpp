#include <implementation.h>

int hola(void)
{
	return 14;
}

int Implementation::add (int a, int b)
{
	return a + b + hola();
}