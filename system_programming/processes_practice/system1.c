#include<stdio.h>
#include<stdlib.h>
int main(){


	int retCode = system("echo Hello World!");
	if(retCode == 0){

		printf("Command executed successfully.\n");
	}else{
		printf("Command execution failed.\n");
	}


	return 0;

}
