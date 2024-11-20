#include "headers.h"
#include "declarations.h"
void MetreCm::getDistance()
{
 	cout << " Enter the distance in metre and cm in between: " << endl;
 	cin >> metre >> cm ;
 
}
void MetreCm::convertMtCm(FeetInch &obj)
{
	int feet = obj.getFeet();
	float inches = obj.getInches();

	float total_inches = 12*feet + inches;

	float total_cm = 2.54*total_inches;

	int total_mt = 0;
	while(total_cm >= 100)
	{
		total_mt++;
		total_cm -= 100;
	}

	this->metre = total_mt;
	this->cm = total_cm;
		
	
}
void MetreCm::display(FeetInch &obj)
{
	cout << " Distance in feet " << obj.getFeet() << " ";
	cout << " Distance in inches " << obj.getInches() << endl;
	cout << " Distance in metres " << metre << " ";
	cout << " Distance in cm " << cm << " ";
	return;

}
