#include<stdio.h>
#include<stdlib.h>
int main(){

	setenv("DIR","/usr/bin/example/",50);
	printf("Directory name before modifying=\"%s\n\"",getenv("DIR"));


	return 0;
}
