#include "headers.h"
#include "declarations.h"
using mywork::Distance;
int main(){

	Distance d;
	Distance d1(23,32);
	d.display();
	d1.display();
	int feets;
	int inches;
	cout << "Enter the distance in feet: " ;
	cin >> feets;
	cout << endl;
	cout << "Enter the distance in inches: ";
	cin >> inches;

	Distance dobj(feets, inches);
	dobj.display();

	cout << "After converting the above object in float, the value is: ";
	float value = static_cast<float>(dobj);
	
	cout <<  std::fixed << std::setprecision(2) << value << endl;
	return 0;


}
