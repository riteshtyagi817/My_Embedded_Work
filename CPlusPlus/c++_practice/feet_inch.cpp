#include "headers.h"
#include "declarations.h"

/*FeetInch::FeetInch(int ft, float inch):feet(ft),inches(inch)
{
	
}
MetreCm::MetreCm(int mt, float c):metre(mt),cm(c)
{
	
} */


void FeetInch::getDistance()
{
	cout << " Enter the distance in feet and inches with spaces in between: " << endl;
	cin >> feet >> inches;

}
int FeetInch::getFeet()
{
	return feet;
}
float FeetInch::getInches()
{
	return inches;
}
