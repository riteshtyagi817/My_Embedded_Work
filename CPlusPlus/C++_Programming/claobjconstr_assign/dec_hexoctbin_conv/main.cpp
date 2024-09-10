#include "headers.h"
#include "declarations.h"
int main(){

#ifdef DEBUG
        cout << __func__ << "start" << endl;
#endif

	Convert c;
	cout << "Enter the decimal value which need to be shown as binary, hex and oct: ";
	int in;
	cin >> in;
	Convert cov(in);
	cov.displayBinary();
	cov.displayHex();
	cov.displayOct();

#ifdef DEBUG
        cout << __func__ << "end" << endl;
#endif

	return 0;
}
