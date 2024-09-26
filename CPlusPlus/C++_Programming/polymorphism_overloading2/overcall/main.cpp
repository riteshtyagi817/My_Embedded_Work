#include "headers.h"
#include "declarations.h"
using mywork::DistKm;
using mywork::DistMile;

int main(){
#ifdef DEBUG
	cout << __func__ << " start " << endl;
#endif
	DistKm dk;
	DistMile dm;
	DistKm dk1(12,21);
	DistMile dm1(24,43);

	double miles = 0.0;
	double meters = 0.0;
	cout << "Enter the distance in miles: " ;
	cin >> miles;

	cout << "Enter the distance in meters: " ;
	cin >> meters;


	DistMile dmobj(miles,meters);
	cout << " displaying miles and meters object " << endl;
		
	dmobj.printDistMile();

	DistKm dkobj = dmobj(miles,meters);

	cout <<  " printing corresponding kms and meters from kms object " << endl;
	dkobj.printDistKm();





#ifdef DEBUG
	cout << __func__ << " end " << endl;
#endif
	return 0;
}
