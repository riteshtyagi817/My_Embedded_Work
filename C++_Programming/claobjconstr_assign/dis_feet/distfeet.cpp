#include "headers.h"
#include "declarations.h"

DistFeet::DistFeet(){
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	feet = 0.0;
	inch = 0.0;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}

DistFeet::DistFeet(double value){
	
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	while(value >= 12){
		value -= 12;
		feet++;

	}
	inch = value;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}
DistFeet::DistFeet(double feet, double inch){
	
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	this->feet = feet;
	while(inch >= 12){
		inch -= 12;
		this->feet++;

	}
	this->inch = inch;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}

double DistFeet::getFeet(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	return feet;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}

double DistFeet::getInch(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	return inch;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
DistFeet::~DistFeet(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
