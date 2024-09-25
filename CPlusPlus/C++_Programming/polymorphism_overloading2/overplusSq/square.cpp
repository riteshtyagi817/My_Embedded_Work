#include "headers.h"
#include "declarations.h"
namespace mywork{

	Square::Square(){
#ifdef DEBUG
		cout << __func__ << " start "  << endl;
#endif
	cout << "zero arg constructor called " << endl;
	side = 0.0;
#ifdef DEBUG
		cout << __func__ << " end "  << endl;
#endif

	}
	Square::Square(double side):side(side){
		
#ifdef DEBUG
		cout << __func__ << " start "  << endl;
#endif
		cout << "one arg constructor called " << endl;
	

#ifdef DEBUG
		cout << __func__ << " end "  << endl;
#endif

	}
	Square::~Square(){

#ifdef DEBUG
		cout << __func__ << " start "  << endl;
#endif
		cout << "destructor called " << endl;
#ifdef DEBUG
		cout << __func__ << " end "  << endl;
#endif

	}
	Square Square::operator + (const Square &other){

#ifdef DEBUG
		cout << __func__ << " start "  << endl;
#endif
		double resultSide = side + other.side;
		return Square(resultSide);

#ifdef DEBUG
		cout << __func__ << " end "  << endl;
#endif
	}
	double Square::getSide(){

#ifdef DEBUG
		cout << __func__ << " start "  << endl;
#endif
		return side;

#ifdef DEBUG
		cout << __func__ << " end "  << endl;
#endif
	}
	void Square::printArea(){

#ifdef DEBUG
		cout << __func__ << " start "  << endl;
#endif
	cout << " The area of the square is " << getArea() << endl;	

#ifdef DEBUG
		cout << __func__ << " end "  << endl;
#endif

	}
	double Square::getArea(){
	
#ifdef DEBUG
		cout << __func__ << " start "  << endl;
#endif
		return side*side;
#ifdef DEBUG
		cout << __func__ << " end "  << endl;
#endif

	}





}// mywork namespace
