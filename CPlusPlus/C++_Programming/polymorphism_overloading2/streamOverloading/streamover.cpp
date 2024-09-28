#include "headers.h"
#include "declarations.h"
namespace mywork{
	StreamDemo::StreamDemo(){
#ifdef DEBUG
		cout << __func__ << " start " << endl; 
#endif
		cout << " zero arg constructor called " << endl;
		val = 0;
#ifdef DEBUG
		cout << __func__ << " end " << endl; 
#endif

	}
	StreamDemo::StreamDemo(int value):val(value){
#ifdef DEBUG
		cout << __func__ << " start " << endl; 
#endif
		cout << " one arg constructor called " << endl;

#ifdef DEBUG
		cout << __func__ << " end " << endl; 
#endif
	}
	istream & operator >> (istream &in,StreamDemo &source){

#ifdef DEBUG
		cout << __func__ << " start " << endl; 
#endif
		cout << "Enter the value for this object: ";
		in >> source.val;

		return in;
#ifdef DEBUG
		cout << __func__ << " end " << endl; 

#endif
	}
	ostream & operator << (ostream &out,const StreamDemo &source){

#ifdef DEBUG
		cout << __func__ << " start " << endl; 
#endif
		cout << "Displaying the value for this object: ";
		out << source.val << endl;
		return out;	
#ifdef DEBUG
		cout << __func__ << " end " << endl; 

#endif
	}
} // namespace mywork



