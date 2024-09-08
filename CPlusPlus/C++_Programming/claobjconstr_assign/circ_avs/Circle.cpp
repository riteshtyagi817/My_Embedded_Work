#include "headers.h"
#include "declarations.h"

Circle::Circle(){
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	radius = 0.0;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}

Circle::Circle(double rad){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	radius = rad;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}

Circle::~Circle(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
double Circle::getArea(){
	
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	return PI*(radius*radius);

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}
double Circle::getVolume(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "Although Circle does not have volume but we are just calculating assuming it sphere." << endl;
	return (4/3)*PI*(radius*radius*radius);	

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}
double Circle::getSurfaceArea(){
	
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "Although Circle does not have surface area but we are just calculating assuming it sphere." << endl;
	return 4*PI*(radius*radius);

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}
