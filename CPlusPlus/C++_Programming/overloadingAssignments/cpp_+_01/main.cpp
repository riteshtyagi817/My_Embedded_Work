#include "headers.h"
#include "declarations.h"

int main(){

	Sample s1;
	Sample s2(12);
	Sample s3(24);


	cout << "first object value: " << s2.getValue() << endl;
	cout << "second object value: " << s3.getValue() << endl;
	Sample result = s2 + s3;
	cout << "result value after + operator overloading: " << result.getValue() << endl;


	return 0;


}
