#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

	char variable_name[255];
	char variable_value[255];
	int overWrittenValue = 0;
	
	memset(variable_name,'\0', sizeof(variable_name));
	memset(variable_value,'\0', sizeof(variable_value));
	printf("Enter your variable name: ");
	scanf("%s", variable_name);
	printf("Enter your variable value: ");
	scanf("%s", variable_value);
	printf("Enter overridden value: ");
	scanf("%d",&overWrittenValue);
	int status = setenv(variable_name, variable_value, overWrittenValue);

	if(status == 0){
		printf("Env varible successfully created.\n");
	}else{
		printf("Env varible could not be successfully created.\n");

	}
	printf("The value of %s is %s\n", variable_name, getenv(variable_name));


	return 0;

}
