#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){


	char in[100];
	memset(in, 0, sizeof(in));
	char val[100];
	memset(in,'\0', sizeof(val));
	printf("Enter the env variable name: ");
	scanf("%s", in);
	printf("Enter the env variable value: ");
	scanf("%s",val);

	int ret = setenv(in,val,1);
	if(ret == -1){
		perror("setenv");
		exit(1);
	}
	printf("the value of env variable %s is %s\n",in, getenv(in));
	ret = unsetenv(in);
	if(ret == -1){
		perror("unsetenv");
		exit(1);
	}
	printf("the value of env variable after unset  %s is %s\n",in, getenv(in));

	return 0;
}
