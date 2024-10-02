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

	printf(" Program name First is executing \n");

	printf("End: Function name: %s , File Name: %s , pid: %d , ppid: %d\n",
	__func__,__FILE__,getpid(),getppid());

#ifdef DEBUG
	cout << __func__ << " end " << endl; 
#endif
}
