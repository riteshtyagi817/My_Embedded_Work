#include<stdio.h>
extern "C" int getValue(){
	int a = 2;
	return a+2;

}
int main(){


	int val = getValue();

	printf("value is %d\n",val);

	return 0;
}
