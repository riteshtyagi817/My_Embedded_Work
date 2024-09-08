#include "headers.h"
#include "declarations.h"

int main(){
#ifdef DEBUG
        cout << __func__ << "start" << endl;
#endif	
	double radius = 0.0;
	cout << "Enter the radius of the Circle: ";
	cin >> radius;
	Circle c1;
	Circle c2(radius);
	
	cout << c2.getArea() << endl;
	cout << c2.getSurfaceArea() << endl;
	cout << c2.getVolume() << endl;

#ifdef DEBUG
        cout << __func__ << "end" << endl;
#endif
	return 0;
}
