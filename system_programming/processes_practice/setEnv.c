#include<stdio.h>
#include<stdlib.h>
int main(){


	char variable_name[15];
	char variable_value[255];
	int overWrittenValue;

	printf("Enter the Variable name: ");
	scanf("%s",variable_name);
	printf("Enter the variable value: ");
	scanf("%s",variable_value);
	printf("Enter the overWritten value: ");
	scanf("%d",&overWrittenValue);
	int status = setenv(variable_name, variable_value, overWrittenValue);
	if(status == 0){

		printf("Environment variable %s created successfully.\n",getenv(variable_name));
	}else if(status == -1){

		printf("there was some error in env variable creation\n");

	}

	return 0;
}
