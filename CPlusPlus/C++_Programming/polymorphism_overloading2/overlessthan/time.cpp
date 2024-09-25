#include "headers.h"
#include "declarations.h"
namespace mywork{
	Time::Time(){
#ifdef DEBUG
		cout << __func__ << "start " << endl;
#endif
		cout << "zero arg constructor called " << endl;
		hours = 0;
		minutes = 0;
		seconds = 0;

#ifdef DEBUG
		cout << __func__ << "end " << endl;
#endif

	}
	Time::Time(int hh, int mm, int ss):hours(hh),minutes(mm),seconds(ss){

#ifdef DEBUG
		cout << __func__ << "start " << endl;
#endif

		cout << "three arg constructor called " << endl;

#ifdef DEBUG
		cout << __func__ << "end " << endl;
#endif

	}
	Time::~Time(){

#ifdef DEBUG
		cout << __func__ << "start " << endl;
#endif
		cout << "destructor called " << endl;

#ifdef DEBUG
		cout << __func__ << "end " << endl;
#endif
	}
	Time::Time(const Time &other){

#ifdef DEBUG
		cout << __func__ << "start " << endl;
#endif

#ifdef DEBUG
		cout << __func__ << "end " << endl;
#endif

	}

	void Time::printTime(){

#ifdef DEBUG
		cout << __func__ << "start " << endl;
#endif
		cout << " Time  is " << hours << ":" << minutes << ":" << seconds << " IST" << endl;

#ifdef DEBUG
		cout << __func__ << "end " << endl;
#endif

	}
	bool Time::operator < (const Time &other){

#ifdef DEBUG
		cout << __func__ << "start " << endl;
#endif
		if(hours < other.hours ) return true;
		else if(hours > other.hours) return false;
		else {
			if(minutes < other.minutes) return true;
			else if(minutes > other.minutes) return false;
			else{
				if(seconds < other.seconds) return true;
				else if(seconds  > other.seconds) return false;
				else return true;
			}

		}	
		return true;

	

#ifdef DEBUG
		cout << __func__ << "end " << endl;
#endif
	}


}
