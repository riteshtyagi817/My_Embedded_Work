#include "headers.h"
#include "declarations.h"
namespace mywork{

	Subscript::Subscript(){
#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
	cout << " zero arg constructor " << endl;
	for(int i = 0; i < 10;++i){
		*(arr + i) = i+1;

	}
#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif

	}
	int & Subscript::operator[](int idx){

#ifdef DEBUG
		cout << __func__ << " start " << endl;
#endif
		return arr[idx];

#ifdef DEBUG
		cout << __func__ << " end " << endl;
#endif

	}




} // namespace mywork
