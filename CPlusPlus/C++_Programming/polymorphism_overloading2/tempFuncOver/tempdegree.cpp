#include "headers.h"
#include "declarations.h"
namespace mywork{


	TempDeg::TempDeg():TempDeg(0.0){
#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
	cout << " zero arg constructor called " << endl;
#ifdef DEBUG
		cout << __func__ <<  " end " << endl;
#endif
	}
	TempDeg::TempDeg(double temp_dgr):temp_deg(temp_dgr){

#ifdef DEBUG
		cout << __func__ << "  start " << endl;
#endif
		cout << " one arg constructor called " << endl;

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif
	}
	TempDeg::~TempDeg(){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << " destructor called " << endl;

#ifdef DEBUG
		cout << __func__ << "end " << endl;
#endif
	}
	void TempDeg::display(){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << " temperature in degree celcius " << temp_deg << " celcius. " << endl; 

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif

	}
	TempFar TempDeg::operator()(double degree){

#ifdef DEBUG
		cout << __func__  << " start " << endl;
#endif
		double far = degree*(9.0/5) + 32;
		return TempFar(far);

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif

	}






} //namspace mywork
