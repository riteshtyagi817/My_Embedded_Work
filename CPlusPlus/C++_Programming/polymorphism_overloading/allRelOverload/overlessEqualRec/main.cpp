#include "headers.h"
#include "declarations.h"
using mywork::Rectangle;
int main(){

	int len1;
	int len2;
	int brd1;
	int brd2;
	cout <<  "Enter the length of first Rectangle\n";
	cin >> len1;
	cout <<  "Enter the breadth of first Rectangle\n";
	cin >> brd1;

	cout <<  "Enter the length of second Rectangle\n";
	cin >> len2;
	cout <<  "Enter the breadth of second Rectangle\n";
	cin >> brd2;

	Rectangle r1;
	Rectangle r2(5,6);
	Rectangle r3(r2);
	Rectangle rec1(len1, brd1);
	Rectangle rec2(len2, brd2);
	Rectangle result = rec1 + rec2;
	cout << "First Rectangle length: " <<  rec1.getLength() << endl;
	cout << "First Rectangle breadth: " <<  rec1.getBreadth() << endl;
	cout << "Second Rectangle length: " <<  rec2.getLength() << endl;
	cout << "First Rectangle length: " <<  rec2.getBreadth() << endl;
	cout << "Resulting Rectangle length after addition: " <<  result.getLength() << endl;
	cout << "Resulting Rectangle breadth after addition: " <<  result.getBreadth() << endl;

	if(rec1 <= rec2){
		cout << "Rectangle 1 has less or equal area to Rectangle 2. " << endl;

	}
	else{
		cout << "Rectangle 1 has larger area than Rectangle 2. " << endl;

	}




	
	return 0;

}
