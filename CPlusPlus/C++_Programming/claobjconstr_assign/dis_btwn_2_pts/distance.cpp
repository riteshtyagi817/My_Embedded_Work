#include "headers.h"
#include "declarations.h"

Distance::Distance(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif

	cout << "Zero arg constructor called. " << endl;
	x1 = y1 = x2 = y2 = 0;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}
Distance::Distance(double x1, double y1,double x2, double y2){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "Four arg constructor called. " << endl;
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}
Distance::Distance(const Distance &source){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "copy constructor called. " << endl;
	
	x1 = source.x1;
	y1 = source.y1;
	x2 = source.x2;
	y2 = source.y2;


#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif


}
Distance::~Distance(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "Destructor called." << endl;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
double Distance::getDistance(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	return sqrt(pow((x2 -x1),2) + pow((y2-y1),2));	


#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}


