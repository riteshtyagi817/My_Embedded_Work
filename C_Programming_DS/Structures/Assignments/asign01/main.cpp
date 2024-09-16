#include "headers.h"
#include "declarations.h"
int main(){
	
	Employee e;
	printf("the size of the structure is %ld\n",sizeof(e));

	printf("Offset of name: %ld bytes\n", offsetof(Employee,name));
	printf("Offset of id: %ld bytes\n", offsetof(Employee,id));
	printf("Offset of salary: %ld bytes\n", offsetof(Employee,salary));

	Employee earr[100];

	printf("the size of the structure is %ld\n",sizeof(earr));
	return 0;
}
