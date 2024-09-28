#include "headers.h"
#include "declarations.h"
using mywork::Subscript;
int main(){

#ifdef DEBUG

	cout << __func__ << " start " << endl;
#endif
	double sum = 0.0;

	double mean = 0.0;
	Subscript subs;
	for(int i = 0; i < 10;++i){
		
		cout << " index " << i <<  "  " << subs[i] << endl;
		sum += subs[i];

	}
	mean = sum/10;
	cout << " The mean of 10 numbers using subscript operator is: " << mean << endl;
	
	for(int i = 0; i < 10;++i){
		subs[i] = i+2;

	}
	mean = 0.0;
	sum = 0.0;
	for(int i = 0; i < 10;++i){
		
		cout << " index " << i <<  "  " << subs[i] << endl;
		sum += subs[i];

	}
	mean = sum/10;
	cout << " The mean of 10 numbers using subscript operator is: " << mean << endl;



#ifdef DEBUG
	cout << __func__ << " start " << endl;
#endif

	return 0;

}
