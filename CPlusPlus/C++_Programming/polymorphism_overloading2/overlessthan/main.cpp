#include "headers.h"
#include "declarations.h"
using mywork::Time;
int main(){

	Time t;
	Time tt(23,34,35);
	Time tc(tt);

	int hr1,min1,sec1;
	cout << "Enter the hours for first object: ";
	cin >> hr1;
	cout << "Enter the minutes for first object: ";
	cin >> min1;
	cout << "Enter the seconds for first object: ";
	cin >> sec1;

	int hr2,min2,sec2;
	cout << "Enter the hours for second bject: ";
	cin >> hr2;
	cout << "Enter the minutes for second object: ";
	cin >> min2;
	cout << "Enter the seconds for second object: ";
	cin >> sec2;

	Time t1(hr1,min1,sec1);
	Time t2(hr2,min2,sec2);

	cout << "printing time for first object " ;
	t1.printTime();
	cout << "printing time for second object " ;
	t2.printTime();


	if(t1 < t2){

		cout << " first object time is lesser or equal " << endl;
	}
	else{ 
		cout << "first object time is greater " << endl;

	}

	return 0;
}
