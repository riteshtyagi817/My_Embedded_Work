#include "headers.h"
#include "declarations.h"
using mywork::Int;
int main(){

#ifdef DEBUG
	cout << __func__ << " start " << endl;
#endif
	Int a;
	Int obj(65);
	obj.display();
	uint16_t value;
	cout << "Please enter one byte unsigned value which you want to convert to char: ";
        cin >> 	value;
	Int obj1(value);
	obj1.display();
	char out = static_cast<char>(obj1);
	cout << "After converting it to char the output is: ";
	cout << out << endl;




#ifdef DEBUG
	cout << __func__ << " end " << endl;
#endif


	return 0;
}
