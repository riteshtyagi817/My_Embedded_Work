#include "headers.h"
#include "declarations.h"

Test::Test(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "zero arg constructor called " << endl;
	value = 0;
	++count;
#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}

Test::Test(int val){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "one arg constructor called " << endl;
	value = val;
	++count;
#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
Test::Test(const Test &other){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "copy constructor called " << endl;
	value = other.value;
	++count;
	
#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
Test::~Test(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
int Test::count = 0;
int Test::getobjCount(){
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	return count;
#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}



