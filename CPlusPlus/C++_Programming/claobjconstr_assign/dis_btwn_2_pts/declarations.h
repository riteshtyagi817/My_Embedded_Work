#ifndef DECLARATIONS_H
#define DECLARATIONS_H
#include "headers.h"

class Distance{

	public:
	Distance();
	Distance(double x1, double y1, double x2, double y2);
	~Distance();
	Distance(const Distance &source);
	double getDistance();

	private:
	double x1;
	double x2;
	double y1;
	double y2;
};
#endif
