#include "headers.h"
#include "declarations.h"
using mywork::Char;
int main(){

#ifdef DEBUG
	cout << __func__ << " start " << endl;
#endif
	Char a;
	Char obj('A');
	obj.display();
	char ch;
	cout << "Please enter char value which you want to convert to int: ";
        cin >> 	ch;
	Char obj1(ch);
	obj1.display();
	int out = static_cast<int>(obj1);
	cout << "After converting it to int the output is: ";
	cout << out << endl;




#ifdef DEBUG
	cout << __func__ << " end " << endl;
#endif


	return 0;
}
