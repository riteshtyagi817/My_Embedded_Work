#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc, char *argv[]){

#ifdef DEBUG
	cout << __func__ << " start " << endl; 
#endif
	int ret = 0;
	printf("Start: Function name: %s , File Name: %s , pid: %d , ppid: %d\n",
	__func__,__FILE__,getpid(),getppid());

	char *prms[] = {"second","learning", "is","a","key",NULL};
	ret = execv("./second",prms);
	if(ret){

		perror("Some Issue with execl\n");
		exit(EXIT_FAILURE);
	}


	printf("End: Function name: %s , File Name: %s , pid: %d , ppid: %d\n",
	__func__,__FILE__,getpid(),getppid());

#ifdef DEBUG
	cout << __func__ << " end " << endl; 
#endif
}
