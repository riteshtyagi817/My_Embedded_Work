#include "headers.h"
#include "declarations.h"

int main(){
#ifdef DEBUG
        cout << __func__ << "start" << endl;
#endif
	double x1,y1,x2,y2;
	
	cout << "Enter x1: ";
	cin >> x1;
	cout << "Enter y1: ";
	cin >> y1;
	cout << "Enter x2: ";
	cin >> x2;
	cout << "Enter y2: ";
	cin >> y2;
	

	Distance d;
	Distance dobj(x1,y1,x2,y2);
	Distance dcopy(dobj);

	cout << d.getDistance() << endl;
	cout << dobj.getDistance() << endl;
	cout << dcopy.getDistance() << endl;


#ifdef DEBUG
        cout << __func__ << "end" << endl;
#endif

	return 0;
}
