#include<stdio.h>
#define GNU_SOURCE
typedef unsigned long u64;
static u64 get_rcx(void){

	__asm__ __volatile__("push %rcx\n\t"
				"movq $5, %rcx\n\t"
				"movq %rcx, %rax");
	__asm__ __volatile__("pop %rcx");

}
int main(){

	printf("Hello, inline assembly:\n [RCX] = 0x%lx\n",get_rcx());

	return 0;

}
