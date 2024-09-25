#include "headers.h"
#include "declarations.h"
using mywork::Square;
using mywork::Square;

int main(){

	Square s;
	Square s1(2);

	double side1,side2;
	cout << "Enter the side of the first square: ";
	cin >> side1;
	cout << "Enter the side of the second square: ";	
	cin >> side2;
	Square first(side1);
	Square second(side2);
	
	cout << "printing area of first square " << endl;
	first.printArea();	
	cout << "printing area of second square " << endl;
	second.printArea();

	Square result = first + second;

	cout << "Resulting area of adding both objects is " << endl;
	result.printArea();


	return 0;
}
