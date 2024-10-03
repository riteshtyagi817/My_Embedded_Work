#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
int main(int argc, char *argv[]){

#ifdef DEBUG
	cout << __func__ << " start " << endl; 
#endif
	int ret = 0;
	int fd = 0;
	char buff[100];
	memset(buff,'\0',sizeof(buff));
	printf("Start: Function name: %s , File Name: %s , pid: %d , ppid: %d\n",
	__func__,__FILE__,getpid(),getppid());

	printf(" Program name Second is executing \n");
	printf("Displaying command line arguments\n");
	for(int i = 0; i < argc; ++i){
		printf(" arg %d: %s\n",i+1,argv[i]);
	}
	fd = atoi(argv[1]);
	printf("Reading in other process\n");

	lseek(fd,0,SEEK_SET);
	ret = read(fd,buff,sizeof(buff));
	if(ret < 0){
		perror("some issue with read\n");
		exit(EXIT_FAILURE);
	}

	printf(" %d Bytes read\n",ret);
	printf("%s\n",buff);
	printf("End: Function name: %s , File Name: %s , pid: %d , ppid: %d\n",
	__func__,__FILE__,getpid(),getppid());

	close(fd);
#ifdef DEBUG
	cout << __func__ << " end " << endl; 
#endif
}
