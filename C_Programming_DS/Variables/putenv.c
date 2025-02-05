#include<stdio.h>
#include<stdlib.h>
int main(){


	putenv("DIR=/usr/home/");
	printf("Dir name: %s\n",getenv("DIR"));

	return 0;

}
