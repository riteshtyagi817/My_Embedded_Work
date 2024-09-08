#include "headers.h"
#include "declarations.h"

int main(){

	Sample s1;
	int val;
        cout << "Enter the value for postfix ++ operator: " ;
        cin >> val;
	
	Sample s2(val);

	cout << "object value before ++: " << (s2++).getValue() << endl;
	cout << "object value after ++: " << s2.getValue() << endl;
	Sample result = s2++;
	cout << "result value after ++ operator overloading: " << result.getValue() << endl;


	return 0;


}
