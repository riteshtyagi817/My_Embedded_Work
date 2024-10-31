#include<stdio.h>
int getValue(){
	int a = 2;
	return a+2;

}
int getValue(int c){


	int a = 2;
	return a+c+3;
}
int main(){


	int val = getValue();
	int val1 = getValue(4);
	printf("value is %d\n",val);

	return 0;
}
