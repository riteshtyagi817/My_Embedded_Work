#include "headers.h"

class Sample{
	public:
	Sample();
	Sample(int val);
	Sample(const Sample &source);
	Sample operator % (const Sample &right);
	int getValue();
	private:
	int value;

};
