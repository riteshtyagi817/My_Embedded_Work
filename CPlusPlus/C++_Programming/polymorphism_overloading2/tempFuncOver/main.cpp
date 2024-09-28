#include "headers.h"
#include "declarations.h"
using mywork::TempDeg;
using mywork::TempFar;

int main(){

#ifdef DEBUG
	cout << __func__ << " start " << endl;
#endif
	TempDeg tmpdg;
	TempFar tmpfar;
	TempDeg tmpdg1(20.0);
	TempFar tmpfar1(30.0);

	double tmp_degree = 0.0;
	cout << "Enter the temperature in degree celcius to convert to farenhite " << endl;
	cin >> tmp_degree;

	TempDeg tmpDegree(tmp_degree);
	cout << " Displaying temp object "  << endl;
	tmpDegree.display();

	cout << "after conversion displaying farenhite object " << endl;
	TempFar tmp_far = tmpDegree(tmp_degree);

	tmp_far.display();
	
	double tmpFar = 0.0;
	cout << "Enter the temperature in farenhite to degree celcius " << endl;
	cin >> tmpFar;

	TempFar tmpFar1(tmpFar);
	cout << " Displaying  object "  << endl;
	tmpFar1.display();

	cout << "after conversion displaying degree celcius object " << endl;
	TempDeg tmp_deg = tmpFar1(tmpFar);
	tmp_deg.display();

#ifdef DEBUG
	cout << __func__ << "end " << endl;
#endif

	return 0;
}
