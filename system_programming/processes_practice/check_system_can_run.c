#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

	if(system(NULL)){

		printf("Command processor exists\n");
	}else{
		printf("Command processor doesn't exist\n");
	}


	return 0;
}
