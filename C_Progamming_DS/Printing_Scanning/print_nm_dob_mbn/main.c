#include<stdio.h>
#define PI 3.14
int main()
{
	char name[20];
	int day,month,year;
	long mobNum;
	
	printf("Enter your name: ");
	scanf("%s",name);
	
	printf("Enter day of dob: ");
	scanf("%d",&day);
	
	printf("Enter month of dob: ");
	scanf("%d",&month);
	
	printf("Enter year of dob: ");
	scanf("%d",&year);

	printf("Enter the mobile number: ");
	scanf("%ld",&mobNum);

	printf("Name: %s\n",name);

	printf("DOB: %d-%d-%d\n",day,month,year);

	printf("Mob Num: %ld\n",mobNum);
	


	return 0;
}
