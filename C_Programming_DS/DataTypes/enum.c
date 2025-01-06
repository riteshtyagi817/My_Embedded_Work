#include<stdio.h>
int main(){

	typedef enum  Month { Jan = 0, Feb, March}Month;
	Month month = March;
	if(month == 0){
		printf("month is Jan.\n");
	}else if(month == 1){
		printf("month is Feb.\n");
	}
	else if(month ==  2){

		printf("month is March\n");
	}

	return 0;

}
