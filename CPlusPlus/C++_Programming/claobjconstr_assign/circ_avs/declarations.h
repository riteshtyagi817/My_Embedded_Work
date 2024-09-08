#include "headers.h"

class Circle{

	public:
	Circle();
	Circle(double rad);
	~Circle();
	
	double getArea();
	double getVolume();
	double getSurfaceArea();


	private:
	double radius;
	const double PI = 3.1415;
};
