#include "headers.h"
#include "declarations.h"
namespace mywork{
	Char::Char():val('\0'){
#ifdef DEBUG
	cout << __func__ << " start  " << endl;
#endif
	cout << " default constructor called. " << endl;
#ifdef DEBUG
	cout << __func__ << " end  " << endl;
#endif

	}
	Char::Char(char ch):val(ch){

#ifdef DEBUG
	cout << __func__ << " start  " << endl;
#endif
	cout << " one arg constructor called. " << endl;
#ifdef DEBUG
	cout << __func__ << " end  " << endl;
#endif

	}
	Char::~Char(){

#ifdef DEBUG
	cout << __func__ << " start  " << endl;
#endif
	cout << " destructor called " << endl;

#ifdef DEBUG
	cout << __func__ << " end  " << endl;
#endif

	}
	void Char::display(){

#ifdef DEBUG
	cout << __func__ << " start  " << endl;
#endif
	cout << " char value in object: ";
	cout << val << endl;

#ifdef DEBUG
	cout << __func__ << " end  " << endl;
#endif

	}
	Char::operator int() const{

#ifdef DEBUG
	cout << __func__ << " start  " << endl;
#endif
	int value = val;
	return value;

#ifdef DEBUG
	cout << __func__ << " end  " << endl;
#endif

	}






} // mywork namespace 

