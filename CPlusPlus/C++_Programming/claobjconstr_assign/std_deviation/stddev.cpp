#include "headers.h"
#include "declarations.h"

StdDev::StdDev(){
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "zero arg constructor\n";
	input = new int[10];
	if(!input){
		perror("new failed in zero arg\n");
	}
	for(int i = 0; i < 10;++i){
		*(input + i) = i;
	}

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}
StdDev::StdDev(int *arr,int size){
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "one arg constructor\n";
	input = new int[10];
	if(!input){
		perror("new failed in zero arg\n");
	}
	for(int i = 0; i < size;++i){
		*(input + i) = arr[i];
		cout << input[i] << " ";
		
	}
	cout << endl;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}
StdDev::~StdDev(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout <<  " destructor got called " << endl;

	if(input != nullptr){	
		delete[] input;
		input = nullptr;
	}	
	
#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif


}

double StdDev::findStdDev(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	float sum = 0;
	for(int i = 0; i < 10;i++) sum += *(input + i);

	float mean = sum/10;

	double stdsum = 0.0;

	for(int i = 0; i < 10;i++) {
		stdsum += pow((*(input + i) - mean),2);

	}
	stdsum /= 9;
	return sqrt(stdsum);

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}

