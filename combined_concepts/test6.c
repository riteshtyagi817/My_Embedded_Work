#include<stdio.h>
int c = 0;
int d = 10;
#pragma GCC PUSH_OPTIONS
#pragma GCC optimize ("00")
int mul(int a, int b){
	if((c = a*b) && (d = a+b)){
		
		printf("Hi\n");
	}
	printf("c value: %d , d value %d\n",c,d);
	return 0;

}
#pragma GCC POP_OPTIONS
int main(){

	int a, b;
	scanf("%d%d",&a,&b);
	mul(a,b);
	return 0;

}
