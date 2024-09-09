#include "headers.h"
#include "declarations.h"

int main(){
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	int a, b,c;
	cout << "Enter the values of a , b and c with space in between: ";
	cin >> a >> b >> c;
	QuadRoots qd(a,b,c);
	qd.displayEquation();
	qd.findRoots();
	qd.displayRoots();


#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
