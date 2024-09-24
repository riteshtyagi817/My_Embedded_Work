#include "headers.h"
#include "declarations.h"
namespace mywork {
	Rectangle::Rectangle(){
#ifdef DEBUG
		cout << __func__ << "start" << endl;
#endif

		cout <<  "Zero arg constructor called\n" << endl;
		length = 0;
		breadth = 0;
#ifdef DEBUG
		cout << __func__ << "end" << endl;
#endif

	}

	Rectangle::Rectangle(int len, int brd){
#ifdef DEBUG
		cout << __func__ << "start" << endl;
#endif

		cout << " two arg constructor called\n" << endl;
		length = len;
		breadth = brd;
#ifdef DEBUG
		cout << __func__ << "end" << endl;
#endif

	}


	Rectangle::~Rectangle(){
#ifdef DEBUG
		cout << __func__ << "start" << endl;
#endif

		cout << " destructor called\n" << endl;
#ifdef DEBUG
		cout << __func__ << "end" << endl;
#endif
	}

	Rectangle::Rectangle(const Rectangle &other){
#ifdef DEBUG
		cout << __func__ << "start" << endl;
#endif
		cout << " copy constructor called\n" << endl;
		length = other.length;
		breadth = other.breadth;
#ifdef DEBUG
		cout << __func__ << "end" << endl;
#endif
	}

	Rectangle Rectangle::operator + (const Rectangle &other) const{
#ifdef DEBUG
		cout << __func__ << "start" << endl;
#endif
		cout << " operator + called\n" << endl;
		int len = length + other.length;
		int brd = breadth + other.breadth;
		return Rectangle(len,brd);

#ifdef DEBUG
		cout << __func__ << "end" << endl;
#endif
	}

	int Rectangle::getLength(){
#ifdef DEBUG
		cout << __func__ << "start" << endl;
#endif

		return length;

#ifdef DEBUG
		cout << __func__ << "end" << endl;
#endif


	}


	int Rectangle::getBreadth(){
#ifdef DEBUG
		cout << __func__ << "start" << endl;
#endif

		return breadth;

#ifdef DEBUG
		cout << __func__ << "end" << endl;
#endif


	}
	int Rectangle::getArea() const {

#ifdef DEBUG
		cout << __func__ << "start" << endl;
#endif
		return length*breadth;


#ifdef DEBUG
		cout << __func__ << "end" << endl;
#endif

	}
	bool Rectangle::operator <= (const Rectangle &other) const{

#ifdef DEBUG
		cout << __func__ << "start" << endl;
#endif
	if(getArea() <= other.getArea()) return true;
	else return false;

#ifdef DEBUG
		cout << __func__ << "end" << endl;
#endif


	}

} // namespace end

