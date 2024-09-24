#include "headers.h"
#include "declarations.h"
namespace mywork {
	Circle::Circle(){
#ifdef DEBUG
		cout << __func__ << "start" << endl;
#endif

		cout <<  "Zero arg constructor called\n" << endl;
		radius = 0.0;
#ifdef DEBUG
		cout << __func__ << "end" << endl;
#endif

	}

	Circle::Circle(double radius){
#ifdef DEBUG
		cout << __func__ << "start" << endl;
#endif

		cout << " One arg constructor called\n" << endl;
		this->radius = radius;
#ifdef DEBUG
		cout << __func__ << "end" << endl;
#endif

	}


	Circle::~Circle(){
#ifdef DEBUG
		cout << __func__ << "start" << endl;
#endif

		cout << " destructor called\n" << endl;
#ifdef DEBUG
		cout << __func__ << "end" << endl;
#endif
	}

	Circle::Circle(const Circle &other){
#ifdef DEBUG
		cout << __func__ << "start" << endl;
#endif
		cout << " copy constructor called\n" << endl;
		radius = other.radius;
#ifdef DEBUG
		cout << __func__ << "end" << endl;
#endif
	}

	Circle Circle::operator + (const Circle &other) const{
#ifdef DEBUG
		cout << __func__ << "start" << endl;
#endif
		cout << " operator + called\n" << endl;
		double result = radius + other.radius;
		return Circle(result);

#ifdef DEBUG
		cout << __func__ << "end" << endl;
#endif
	}

	double Circle::getRadius(){
#ifdef DEBUG
		cout << __func__ << "start" << endl;
#endif

		return radius;

#ifdef DEBUG
		cout << __func__ << "end" << endl;
#endif


	}
}
