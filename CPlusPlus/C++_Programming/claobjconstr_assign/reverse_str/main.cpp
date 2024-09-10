#include "headers.h"
#include "declarations.h"
int main(){

#ifdef DEBUG
        cout << __func__ << "start" << endl;
#endif

	cout << "Enter the string you want to see the reverse output: ";
	std::string input;
	getline(cin,input);
	Reverse rev(input);
	cout << "Input string: " << input << endl;
	cout << "Reverse string: " << rev.reverseString() << endl;
	


#ifdef DEBUG
        cout << __func__ << "end" << endl;
#endif
	return 0;	

}
