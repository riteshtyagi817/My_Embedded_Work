#include<stdio.h>
int main(){

	int days = 0;
	int yy,mm,dd;
	int copy = 0;
	printf("Enter the number of days: ");
	scanf("%d",&days);
	copy = days;
	yy = days/365;
	days = days%365;
	mm = days/30;
	dd = days%30;
	printf("%d days: %d years, %d months, %d days.\n",copy,yy,mm,dd);

	return 0;
}
