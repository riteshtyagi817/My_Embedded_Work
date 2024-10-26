#include<stdio.h>
#include<sys/msg.h>
#include<stdlib.h>
int main(){



	int id = msgget((key_t)20,IPC_CREAT|IPC_EXCL);
	if(id < 0){

		perror("msgget failed\n");
		exit(EXIT_FAILURE);
	}

	printf("Msg queue got created.\n");
	system("ipcs");

	return 0;

}
