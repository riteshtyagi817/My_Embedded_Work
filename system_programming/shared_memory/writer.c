#include<stdio.h>
#include<stdlib.h>
#include<sys/shm.h>
#include<string.h>
int main(){

	int shmid = shmget((key_t)25,4096,IPC_CREAT|0666);
	if(shmid < 0){
		perror("some issue while creating shared memory\n");
		exit(EXIT_FAILURE);

	}
	printf("shared memory segment created\n");
	system("ipcs");

	char *data = shmat(shmid, (void *)0,0);
	if(!data){

		perror("Some Issue with shmat\n");
		exit(EXIT_FAILURE);
	}
	printf("Shared memory has been attached\n");
	system("ipcs");


	printf("writing some data to the shared memory\n");

	strcpy(data,"I am writing this data to shared memory to check the functionality\n");

	printf("Deattaching the shared memory\n");
	shmdt(data);
	system("ipcs");	



	return 0;
}
