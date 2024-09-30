#include "headers.h"
#include "declarations.h"
namespace mywork{

	Distance::Distance():feet(0),inches(0){
#ifdef DEBUG
	cout << __func__ << " start " << endl;
#endif
	cout << " zero arg constructor called " << endl;
#ifdef DEBUG
	cout << __func__ << " end " << endl;
#endif
	}
	Distance::Distance(int feet, int inches):feet(feet), inches(inches){

#ifdef DEBUG
	cout << __func__ << " start " << endl;

#endif
	cout << " two arg constructor called " << endl;


#ifdef DEBUG
	cout << __func__ << " end " << endl;
#endif

	}
	Distance::~Distance(){

#ifdef DEBUG
	cout << __func__ << " start " << endl;

#endif
	cout << " Destructor called " << endl;

#ifdef DEBUG
	cout << __func__ << " end " << endl;
#endif

	}
	void Distance::display(){

#ifdef DEBUG
	cout << __func__ << " start " << endl;

#endif
	cout << "feets: " << feet << endl;
	cout << "inches: " << inches << endl;


#ifdef DEBUG
	cout << __func__ << " end " << endl;
#endif
	}
	Distance::operator float(){
		
#ifdef DEBUG
	cout << __func__ << " start " << endl;

#endif
	//int inches = source.inches;
	//int feet = source.feet;

	while(inches >= 12){
		feet++;
		inches -= 12;

	}
	float value = feet + ((float)inches/12);

	return value;

#ifdef DEBUG
	cout << __func__ << " end " << endl;
#endif

	}




} // mywork namespace
