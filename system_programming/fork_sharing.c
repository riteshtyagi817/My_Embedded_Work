#include<stdio.h>
#include<unistd.h>

int main(){

	int n = 0;

	int ret = fork();
	switch(ret){

		case 0:
			n = 5;
			printf(" I am child and my pid is %d\n",getpid());
			printf(" child: value of n  is %d and address is %p\n",n,&n);
			break;
		case -1:
			perror("some issue with fork\n");
			break;
		default:
			n = 10;
			printf(" I am parent and my pid is %d\n",getpid());
			printf(" parent: value of n  is %d and address is %p\n",n,&n);
			sleep(2);

	}	
	


	return 0;

}
