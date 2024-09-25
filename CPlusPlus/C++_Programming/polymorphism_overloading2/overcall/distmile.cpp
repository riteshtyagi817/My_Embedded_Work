#include "headers.h"
#include "declarations.h"
namespace mywork{

	DistMile::DistMile():DistMile(0.0,0.0){
#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif	
		cout << "zero arg constructor called " << endl;
	
#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif	

	}
	DistMile::DistMile(double miles, double meters);miles(miles),meters(meters){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << " two arg constructor called " << endl;	

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif	
	}
	DistMile::~DistMile(){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout <<  "destructor called "  << endl;

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif	
	}
	double DistMile::getMiles(){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		return miles;


#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif	
	}
	double DistMile::getMeters(){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		return meters;

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif	

	}
	void DistMile::printDistMile(){
		
#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << "Distance in miles and meters are as below: " << endl;
		cout << miles << " miles " << meters << " meters " << endl;

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif	

	}


} // namespace mywork
