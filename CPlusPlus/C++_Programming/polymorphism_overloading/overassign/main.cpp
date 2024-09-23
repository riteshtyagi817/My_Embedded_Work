#include "headers.h"
#include "declarations.h"
using mywork::DistFeet;
using mywork::DistMeter;
int main(){
	DistMeter dm;
	DistMeter dm1(12,32);
	dm.display();
	dm1.display();
	
	DistFeet df;
	DistFeet df1;
	df.display();
	df1.display();
	
	double feet = 0.0;
	double inches  = 0.0;
	double meters = 0.0;
	double centi = 0.0;


	cout << "Enter the distance in feet and inches for the object " << end;
	cout << "Feet: " ;
	cin >> feet;
	cout << "Inches: ";
	cin >> inches;

	cout << "Enter the distance in meter and centimeters for the object " << end;
	cout << "meters: " ;
	cin >> meters;
	cout << "centimeters: ";
	cin >> centi;





	return 0;
}
