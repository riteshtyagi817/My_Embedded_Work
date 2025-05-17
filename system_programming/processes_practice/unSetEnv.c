#include<stdio.h>
#include<stdlib.h>
int main(){


	char var_name[50];
	printf("Enter the variable to delete: ");
	scanf("%s",var_name);
	int status = unsetenv(var_name);
	if(status == 0){

		printf("Environment variable is deleted successfully\n");
	}else{
		printf("Environment variable could not be deleted\n");
	}

	return 0;
}
