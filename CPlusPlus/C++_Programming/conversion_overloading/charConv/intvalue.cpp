#include "headers.h"
#include "declarations.h"
namespace mywork{
	Int::Int():value(0){
#ifdef DEBUG
	cout << __func__ << " start  " << endl;
#endif
	cout << " default constructor called. " << endl;
#ifdef DEBUG
	cout << __func__ << " end  " << endl;
#endif

	}
	Int::Int(uint8_t value):value(value){

#ifdef DEBUG
	cout << __func__ << " start  " << endl;
#endif
	cout << " one arg constructor called. " << endl;
#ifdef DEBUG
	cout << __func__ << " end  " << endl;
#endif

	}
	Int::~Int(){

#ifdef DEBUG
	cout << __func__ << " start  " << endl;
#endif
	cout << " destructor called " << endl;

#ifdef DEBUG
	cout << __func__ << " end  " << endl;
#endif

	}
	Int::display(){

#ifdef DEBUG
	cout << __func__ << " start  " << endl;
#endif
	cout << " One byte unsigned int value: ";
	cout << value << endl;

#ifdef DEBUG
	cout << __func__ << " end  " << endl;
#endif

	}
	operator char() const{

#ifdef DEBUG
	cout << __func__ << " start  " << endl;
#endif
	char ch = value;
	return ch;

#ifdef DEBUG
	cout << __func__ << " end  " << endl;
#endif

	}






} // mywork namespace 

