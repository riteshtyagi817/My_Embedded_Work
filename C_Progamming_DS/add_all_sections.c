/*
 * Document Section
 * C Programming Examples 
 * Author: Ritesh Tyagi
 * Date: 19-05-2024
 * */
#include<stdio.h> /* Link Section */
int total = 0; /* Global Declaration and Definition Section */
int sum(int a, int b); /* Function Declaration Section */
int main(void) /* Main Function */
{
	printf("This is a basic C Program\n");
	total = sum(1,2);
	printf("Sum of two numbers: %d\n", total);
	return 0;

}
int sum(int a, int b) /* Definition of user defined function */
{

	return a+b;
}
