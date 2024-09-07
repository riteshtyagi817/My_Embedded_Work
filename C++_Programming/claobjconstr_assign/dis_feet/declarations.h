#ifndef DECLARATIONS_H
#define DECLARATIONS_H
#include "headers.h"
class DistFeet{

	public:
	DistFeet();
	DistFeet(double value);
	DistFeet(double feet, double inch);
	~DistFeet();
	double getFeet();
	double getInch();

	private:
	double feet;
	double inch;
};
#endif
