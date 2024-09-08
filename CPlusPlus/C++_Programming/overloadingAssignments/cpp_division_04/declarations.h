#include "headers.h"

class Sample{
	public:
	Sample();
	Sample(double val);
	Sample(const Sample &source);
	Sample operator / (const Sample &right);
	double getValue();
	private:
	double value;

};
