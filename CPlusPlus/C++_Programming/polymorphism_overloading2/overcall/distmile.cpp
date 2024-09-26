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
	DistMile::DistMile(double miles, double meters):miles(miles),meters(meters){

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
	DistKm DistMile::operator()(double miles, double meters){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		double kms = (miles*1.60);
		double mts = meters;
		mts += (kms*1000);
		kms = 0.0;
		while(mts >= 1000){

			kms++;
			mts -= 1000;
		}
		return DistKm(kms,mts);


#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif	

	}
	DistKm::DistKm(){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << " zero arg constructor " << endl;
		kms = 0.0;
		mtrs = 0.0;


#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif	
	}
	DistKm::DistKm(double kms, double mtrs):kms(kms),mtrs(mtrs){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << " two arg constructor called " << endl;

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif	

	}
	DistKm::~DistKm(){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << " Destructor called "  << endl;

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif	
	}

	double DistKm::getKms(){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		return kms;

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif	
	}
	double DistKm::getMtrs(){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		return mtrs;

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif	

	}
	void DistKm::printDistKm(){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << " Kms : " << kms << endl;
		cout << " Meters: " << mtrs << endl;


#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif	
	}




} // namespace mywork
