#include "headers.h"
#include "declarations.h"
namespace mywork{


	TempFar::TempFar():TempFar(0.0){
#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
	cout << " zero arg constructor called " << endl;
#ifdef DEBUG
		cout << __func__  << " end " << endl;
#endif
	}
	TempFar::TempFar(double temp_far):temp_far(temp_far){

#ifdef DEBUG
		cout << __func__ <<  " start " << endl;
#endif
		cout << " one arg constructor called " << endl;

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif
	}
	TempFar::~TempFar(){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << " destructor called " << endl;

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif
	}
	void TempFar::display(){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << " temperature in Farenhite  " << temp_far << " farenhite. " << endl; 

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif

	}
	TempDeg TempFar::operator()(double temp_far){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		double degree = (temp_far-32)*(5.0/9);
		
		return TempDeg(degree);

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif

	}






} //namspace mywork
