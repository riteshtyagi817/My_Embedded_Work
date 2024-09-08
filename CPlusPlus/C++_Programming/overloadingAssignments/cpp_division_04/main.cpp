#include "headers.h"
#include "declarations.h"

int main(){

	Sample s1;
	double val1, val2;
	cout << "Enter first value for division: " ;
	cin >> val1;
	cout << "Enter second value for division: " ;
	cin >> val2;

	Sample s2(val1);
	Sample s3(val2);
	Sample check = s3;

	cout << "first object value: " << s2.getValue() << endl;
	cout << "second object value: " << s3.getValue() << endl;
	Sample result = s2 / s3;
	cout << "result value after / operator overloading: " << result.getValue() << endl;


	return 0;


}
