#include "headers.h"
#include "declarations.h"

int main(){

	for(int i = 0; i < 9;++i){

		Test t;
		cout << Test::getobjCount() << endl;
		Test t1(i);
		Test t2(t1);
		Test t3(t);
		cout << Test::getobjCount() << endl;

	}
	return 0;	


}


