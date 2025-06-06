#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

	char filename[100];
	printf("Enter the file name to compile: ");
	memset(filename, '\0',sizeof(filename));
	fgets(filename, sizeof(filename), stdin);
	size_t len  = strlen(filename);
	if(len > 0 && filename[len-1] == '\n'){

		filename[len-1] = '\0';
	}
	char command[150] =  "gcc -o a.out ";
	strcat(command, filename);
	printf("Compiling file using %s\n", command);
	system(command);
	printf("Running file\n");
	system("./a.out");
	return 0;


}
