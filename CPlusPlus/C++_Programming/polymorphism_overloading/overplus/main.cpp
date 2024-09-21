#include "headers.h"
#include "declarations.h"
using mywork::Circle;
int main(){

	int rad1;
	int rad2;
	cout <<  "Enter the radius of first circle\n";
	cin >> rad1;
	cout <<  "Enter the radius of second circle\n";
	cin >> rad2;

	Circle c1;
	Circle c2(5);
	Circle c3(c2);
	Circle cir1(rad1);
	Circle cir2(rad2);
	Circle result = cir1 + cir2;
	cout << "First Circle radius: " <<  cir1.getRadius() << endl;
	cout << "Second Circle radius: " <<  cir2.getRadius() << endl;
	cout << "Resulting Circle radius after addition: " <<  result.getRadius() << endl;
	
	return 0;

}
