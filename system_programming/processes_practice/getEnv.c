#include<stdio.h>
#include<stdlib.h>
int main(){

	char env_name[50];
	printf("Enter the environment name: ");
	scanf("%s",env_name);
	printf("Environment value: %s\n", getenv(env_name));


	return 0;
}
