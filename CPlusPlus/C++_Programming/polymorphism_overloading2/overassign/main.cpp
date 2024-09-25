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


	cout << "Enter the distance in feet and inches for the object " << endl;
	cout << "Feet: " ;
	cin >> feet;
	cout << "Inches: ";
	cin >> inches;


	DistFeet distobj(feet,inches);
	cout << "First object display:\n";
        distobj.display();

	DistMeter distmet;

	distmet = distobj;

	cout << "After assignment showing another object:" << endl;
	distmet.display();	

	return 0;
}
