#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
int count = 0;
int sum = 0;
#define MAX 100
pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond1 = PTHREAD_COND_INITIALIZER;
pthread_cond_t cond2 = PTHREAD_COND_INITIALIZER;
void * even_function(void *){

	pthread_mutex_lock(&mtx);
	while(count <= MAX){

		if(count % 2 == 0){
			sum += count;
			printf("even: %d\n",count);
			count++;
			pthread_mutex_unlock(&mtx);
			pthread_cond_signal(&cond2);
		}else
		pthread_cond_wait(&cond1,&mtx);
	}
	pthread_mutex_unlock(&mtx);
	
	return  NULL;

}
void * odd_function(void *){

	pthread_mutex_lock(&mtx);
	while(count <= MAX){
		if(count % 2 != 0){
			sum += count;
			printf("odd: %d\n",count);
			count++;
			pthread_mutex_unlock(&mtx);
			pthread_cond_signal(&cond1);
			
		}else
		pthread_cond_wait(&cond2,&mtx);

	}
	pthread_mutex_unlock(&mtx);
	return NULL ;


}

int main(){
	
	
	pthread_t pid1;
	pthread_t pid2;

	printf("main function\n");
	int ret = pthread_create(&pid1,NULL,even_function,NULL);
	ret = pthread_create(&pid2,NULL,odd_function,NULL);


	pthread_join(pid1,NULL);
	pthread_join(pid2,NULL);
	printf("total sum is %d\n",sum);
	printf("by calculation:%d\n",(MAX*(MAX+1))/2);


	return 0;
}
