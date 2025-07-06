#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

	char input[100];
	memset(input, '\0', sizeof(input));
	printf("Enter the Env varible to get the value: \n");
	scanf("%s",input);
	printf("The value of %s is %s\n", input,getenv(input));
	
	return 0;

}
