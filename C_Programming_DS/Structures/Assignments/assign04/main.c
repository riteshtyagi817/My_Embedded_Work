#include "headers.h"
#include "declarations.h"
int main(){

	Student *students = (Student *)malloc(5*sizeof(Student));
	if(!students){
		perror("memory allocation failed\n");
		return 1;
	}
	for(int i = 0; i < 5;++i){

		students[i].scores = (int *)malloc(3*sizeof(int));
		if(!students[i].scores){

			perror("memory allocation failed for student scores\n");
		}


	}
	for(int i = 0; i < 5;++i){
		printf("Enter 3 subject scores for %d student\n",i);
		for(int j = 0; j < 3;++j){
			scanf("%d",&students[i].scores[j]);
		}

	}
	float average = 0;
	float sum = 0;
	for(int i = 0; i < 5;++i){
		sum = 0;
		for(int j = 0; j < 3;++j){
			sum += students[i].scores[j];
		}
		average = sum/3;
		printf("The average marks for student no %d is %.2f\n",i+1,average);
		
	}
	//freeing
	for(int i = 0;  i < 5;++i){
		free(students[i].scores);
	}
	free(students);
	students = NULL;
	

	return 0;
}
