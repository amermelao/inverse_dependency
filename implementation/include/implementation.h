#ifndef IMPLEMENTATION_H
#define IMPLEMENTATION_H

#include <interface.h>

class Implementation : public ICalc {
	public:
		int add(int a, int b);
};
#endif
