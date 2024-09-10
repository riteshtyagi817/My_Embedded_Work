#include "headers.h"
#include "declarations.h"

Reverse::Reverse(){
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "zero arg constructor called " << endl;
	input = "";

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
Reverse::Reverse(std::string in){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "one arg constructor called. " << endl;
	input = in;
#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
Reverse::~Reverse(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
std::string Reverse::reverseString(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	std::string copy = input;
	int end = copy.length()-1;
	reverseStr(0,end, copy);
	return copy;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
void Reverse::reverseStr(int start, int end, std::string &str){

	if(start >= end)return;
	std::swap(str[start],str[end]);
	reverseStr(start+1,end-1,str);

}	

