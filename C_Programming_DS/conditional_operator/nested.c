#include<stdio.h>
int main(){

	int marks  = 0;
	printf("Enter the marks: ");
	scanf("%d",&marks);
	char *grade = (marks >= 90)?"A":(marks >= 75)?"B":(marks >= 50)?"C":"F";
	printf("Grade is %s\n",grade);

	return 0;

}
