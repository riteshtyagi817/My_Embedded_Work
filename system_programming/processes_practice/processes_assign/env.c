#include<stdio.h>
#include<unistd.h>
int main(){

	extern char **environ;
	char *env;
	char **count = environ;
	while(env = *count){
		printf("Env value:%s\n",env);
		count++;
	}



	return 0;

}
