#include<stdio.h>
int *fun(){


	int data;
	int *ptr = &data;
	*ptr = 5;
	return ptr;
}

int main(){

	int *ptr = fun();
	// behavior is undefined
	printf("%d\n",*ptr);
	return 0;

}
