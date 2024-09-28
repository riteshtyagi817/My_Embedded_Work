#include "headers.h"
#include "declarations.h"

int main(){

#ifdef DEBUG
	cout << __func__ << " start " << endl;
#endif
	mywork::StreamDemo sd;
	mywork::StreamDemo sd1(5);

	mywork::StreamDemo sd2;
	cin >> sd2;
	cout << sd2;


#ifdef DEBUG
	cout << __func__ << " end " << endl;
#endif
	return 0;
}
