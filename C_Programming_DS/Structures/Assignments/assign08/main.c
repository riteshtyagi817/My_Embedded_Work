#include "headers.h"
#include "declarations.h"
int main(int arg,char *argv[]){
	
	int size = 0;
	printf("please provide the size to initializes a buffer structure\n");
	scanf("%d",&size);

	Buffer b;
	initStruct(&b,size);
	int count = 0;
	printf("Add the count of numbers to add in the buffer: ");
	scanf("%d",&count);
	int value = 0;
	while(count--){

		printf("enter the value to add in the buffer: ");
		scanf("%d",&value);
		addData(&b,value);

	}
	display(&b);
	compressData(&b);
	display(&b);




	return 0;
}
