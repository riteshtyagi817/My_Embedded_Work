#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[]){


	int a = atoi(argv[1]);
	int b  = atoi(argv[2]);
	volatile int c = 0;
	int sum = 0;
	for(int i =0; i < 1000;i++){
		
		c  = a+(b*200);
		sum = c + i;

	}






	return 0;
}
