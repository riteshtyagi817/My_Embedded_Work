// this program will print all the environment variables used by operating system.

#include<stdio.h>
int main(){


	extern char **environ;
	char **environment_list = environ;

	while(*environment_list != NULL){

		printf("%s\n",*environment_list);
		environment_list++;

	}



	return 0;

}
