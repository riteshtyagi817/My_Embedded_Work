#include "headers.h"
#include "declarations.h"
namespace mywork{
	DistFeet::DistFeet():feet(0.0),inches(0.0){
#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << "zero arg constructor called." << endl;
#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif
	}
	DistFeet::DistFeet(double feet,double inches):feet(feet),inches(inches){
#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << "two arg constructor called." << endl;
#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif
	}
	DistFeet::~DistFeet(){
#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << "DistFeet destructor called . " << endl;

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif

	}
	DistMeter & DistMeter::operator = (const DistFeet &other){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		double feet = other.getFeet();
		double inches = other.getInches();

		double total_inches = feet*12 + inches;
		
		double total_centi = 2.5*total_inches;
		double total_meters = 0.0;
		while(total_centi > 100)
		{
			total_meters++;
			total_centi -= 100;
		}
		meter = total_meters;
		centi = total_centi;
		return *this;


#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif

	}
	void DistFeet::display(){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << "Feet Distance: " << feet << endl;
		cout << "Inches Distance: " << inches << endl;

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif

	}
	DistMeter DistFeet::operator()(double feet,double inches){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		double feets = feet;
		double ichs = inches;
		double total_inches = (feets*12) + ichs;
		
		double total_centi = (2.5*total_inches);
		double total_meters = 0.0;
		while(total_centi >= 100)
		{
			total_meters++;
			total_centi -= 100;
		}
		double meter = total_meters;
		double centi = total_centi;
		return DistMeter(meter,centi);
		

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif

	}
	DistMeter::DistMeter():meter(0.0),centi(0.0){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << "zero arg constructor called . " <<endl;

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif

	}
	DistMeter::DistMeter(double meter,double centi):meter(meter),centi(centi){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << "two arg constructor called . " <<endl;

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif

	}
	DistMeter::~DistMeter(){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
	cout << "DistMeter destructor called. " << endl;
#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif
	}
	void DistMeter::display(){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		cout << "Distance meter: " << meter << endl;
		cout << "Distance centimeters: " << centi << endl;

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif

	}
	DistFeet DistMeter::operator()(double meter, double centi){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		double total_centi = (meter*100) + centi; 
		double total_inches = (total_centi/2.50);
		double total_feets = 0.0;
		while(total_inches >= 12){

			total_feets++;
			total_inches -= 12;

		}

		return DistFeet(total_feets,total_inches);

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif

	}

}