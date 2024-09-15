#include "headers.h"
#include "declarations.h"
int main(){

#ifdef DEBUG
        cout << __func__ << "start" << endl;
#endif

	cout << "Enter 10 integers one by one: ";	
	int *input = new int[10];
	if(!input){
		perror("Issue with new in main\n");
		return 1;

	}
	
	for(int  i = 0;  i < 10;++i)
	{
			cin >> input[i];

	}
	StdDev std;
	
	StdDev stdobj(input,10);
	cout << stdobj.findStdDev() << endl;	

	if(!input){

		delete [] input;
		input = nullptr;
	}

#ifdef DEBUG
        cout << __func__ << "end" << endl;
#endif
	return 0;
}
