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
	pid_t pid;
	char buff[100] = "I am writing this content to this file so that I can verify the ipc using file communication...";
	printf("Start: Function name: %s , File Name: %s , pid: %d , ppid: %d\n",
	__func__,__FILE__,getpid(),getppid());

	fd = open("testFile",O_CREAT|O_RDWR,00775);
	if(fd < 0){
		perror("File open error\n");
		exit(EXIT_FAILURE);
	}
	printf("%s\n",buff);	
	ret = write(fd,buff,strlen(buff));
	if(ret < 0){
		perror("write issue in the file\n");
		exit(EXIT_FAILURE);
	}
	printf(" %d Bytes written\n",ret);

	char fdstr[12];
	memset(fdstr,'\0',sizeof(fdstr));
	sprintf(fdstr,"%d",fd);
	
	pid = fork();
	if(pid > 0){
		printf("Child case\n");
		ret = execl("./third","third",fdstr,NULL);
		if(ret){

			perror("Some Issue with execl\n");
			exit(EXIT_FAILURE);
		}
	}
	else if(0 == pid){
		
		printf("Parent case\n");
		printf("End: Function name: %s , File Name: %s , pid: %d , ppid: %d\n",
		__func__,__FILE__,getpid(),getppid());
	}
	else{
		perror("fork case failure\n");
		exit(EXIT_FAILURE);
	}

#ifdef DEBUG
	cout << __func__ << " end " << endl; 
#endif
}
