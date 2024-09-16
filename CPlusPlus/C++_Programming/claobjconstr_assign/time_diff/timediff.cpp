#include "headers.h"
#include "declarations.h"

TimeDiff::TimeDiff(){
#ifdef DEBUG
	cout << __func__ << " start " << endl;
#endif
	cout << "zero arg constructor " << endl;
	time.hour = 0;
	time.min = 0;
	time.sec = 0;
#ifdef DEBUG
	cout << __func__ << " end " << endl;
#endif
}

TimeDiff::TimeDiff(Time td){
#ifdef DEBUG
	cout << __func__ << " start " << endl;
#endif
	cout << "one arg constructor " << endl;
	time.hour = td.hour;
	time.min = td.min;
	time.sec = td.sec;

#ifdef DEBUG
	cout << __func__ << " end " << endl;
#endif
}

TimeDiff::TimeDiff(const TimeDiff &other){

#ifdef DEBUG
	cout << __func__ << " start " << endl;
#endif
	cout << "copy constructor called " << endl;
	time = other.time;
	
#ifdef DEBUG
	cout << __func__ << " end " << endl;
#endif
}
void TimeDiff::display(){

#ifdef DEBUG
	cout << __func__ << " start " << endl;
#endif
	cout << time.hour << ":" << time.min << ":" << time.sec << " IST" << endl;

#ifdef DEBUG
	cout << __func__ << " end " << endl;
#endif
}
void TimeDiff::timeDiff(TimeDiff &other){
	
#ifdef DEBUG
	cout << __func__ << " start " << endl;
#endif
	cout << " first object time ";
	display();
	cout << " second object time ";
	other.display();
	if(time.sec < other.time.sec){
		time.sec += 60;
		time.min -= 1;
	}
	if(time.min < other.time.min){
		time.min += 60;
		time.hour -= 1;		
	}

	cout << "Time Difference between these two " << time.hour - other.time.hour << ":"
	<< time.min - other.time.min << ":" << time.sec - other.time.sec << " IST" << endl;

#ifdef DEBUG
	cout << __func__ << " end " << endl;
#endif
	
	return;
}
TimeDiff::~TimeDiff(){

#ifdef DEBUG
	cout << __func__ << " start " << endl;
#endif
	cout << "destructor called " << endl;

#ifdef DEBUG
	cout << __func__ << " end " << endl;
#endif
}



