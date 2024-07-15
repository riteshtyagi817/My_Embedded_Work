#include "headers.h"
#include "Distance.h"
int Distance::getDistance()
{
#ifdef DEBUG
	cout << __func__ << "begin" << endl;

#endif
	cout << "Enter the distance in feet first "  << endl;
	cin >> feet;
	cout << "Enter the distance in inches " << endl;
	cin >> inch;
#ifdef DEBUG
	cout << __func__ << "End" << endl;

#endif



	return EXIT_SUCCESS;


}
void Distance::display()
{
#ifdef DEBUG
	cout << __func__ << "begin" << endl;

#endif
	cout << "feet: " << feet << "\' inches: " << inch << "\"" << endl;

#ifdef DEBUG
	cout << __func__ << "End" << endl;
#endif
	return;
}
