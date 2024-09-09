#include "headers.h"
#include "declarations.h"

QuadRoots::QuadRoots(){
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "zero arg constructor called." << endl;
	a = b = c = 0;
	firstRoot = 0.0;
	secondRoot = 0.0;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}

QuadRoots::QuadRoots(int a, int b, int c){
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "3 arg constructor called." << endl;
	this->a = a;
	this->b = b;
	this->c = c;
	firstRoot = 0.0;
	secondRoot = 0.0;
	
#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}
QuadRoots::~QuadRoots(){
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "destructor called." << endl;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
void QuadRoots::findRoots(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	if( (b*b - 4*a*c) > 0){

		firstRoot = (-b+sqrt(pow(b,2) - 4*a*c))/(2*a);
		secondRoot = (-b-sqrt(pow(b,2) - 4*a*c))/(2*a);
	}
	else{
		cout <<	"finding roots not applicable with given a,b and c values." << endl;
	}

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
void QuadRoots::displayEquation(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "The formed equation using a: " << a << " b: " << " c: " << c << " is ";
	cout << a <<" x*x  + " << b << "x + " << c  << endl; 	

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
void QuadRoots::displayRoots(){
	
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "First root is : " << firstRoot << endl;
	cout << "Second root is : " << secondRoot << endl;


#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}

