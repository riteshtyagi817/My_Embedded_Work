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

	cout << "Demo showing function call operator "  << endl;
	cout << "Enter the distance in feet and inches for the object " << endl;
	cout << "Feet: " ;
	cin >> feet;
	cout << "Inches: ";
	cin >> inches;

	cout << "printing feet inch object " << endl;
	DistFeet distfeet(feet,inches);
	distfeet.display();

	DistMeter distmeter = distfeet(feet,inches);
	cout << "after converting it to meters and centi object through function call operator " << endl;

	distmeter.display();


	cout << "Enter the distance in meter and centimeters for the object " << endl;
	cout << "Meters: " ;
	double meters;
	double centi;
	cin >> meters;
	cout << "centimeters: ";
	cin >> centi;

	cout << "printing meters centimeters object " << endl;
	DistMeter distmtrs(meters,centi);
	distmtrs.display();

	DistFeet distfeetobj = distmtrs(meters,centi);
	cout << "after converting it to feet inches object through function call operator " << endl;

	distfeetobj.display();

	return 0;
}
