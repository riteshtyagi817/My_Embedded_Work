#include "../common/dataStructures.h"
#include "../common/headers.h"
int main(int argc, char *argv[]){

#ifdef DEBUG
	printf("%s start\n", __func__);
#endif	

	int pipeFd = atoi(argv[1]);
	int bytes_read = 0;
	int shmid = 0;
	char *data ;
	Result *res = (Result *)calloc(1,sizeof(Result));
	if(!res){

		perror("calloc failed in adder\n");
		exit(EXIT_FAILURE);
	}
	Request *req = (Request *)calloc(1, sizeof(Request));
	if(!req){

		perror("calloc failed in adder\n");
		exit(EXIT_FAILURE);
	}	
	bytes_read = read(pipeFd, req, sizeof(Request));
	if(bytes_read <= 0){
		printf("could not read anything\n");
		exit(EXIT_FAILURE);

	}
	printf("Request received from server\n");
	printf("Request:\n pid: %ld  opr1: %d opr2: %d operation: %c\n",req->pid, req->opr1, req->opr2,
			req->operation);



	// Finding the result and sending back to shared memory
	res->pid =  req->pid;
	res->result = req->opr1 + req->opr2;

	// getting the shared memory id and then write the response to it
	

	shmid = shmget((key_t)SHDMID, sizeof(Result),IPC_CREAT|0666);
	
	

	
	


#ifdef DEBUG
	printf("%s end\n",__func__);
		
#endif

}
