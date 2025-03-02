#include<stdio.h>
int main(){

	int seconds;
	int hh,mm,ss;
	printf("Enter the seconds: ");
	scanf("%d",&seconds);
	hh = seconds/3600;
	seconds = seconds%3600;
	mm = seconds/60;
	ss = seconds%60;
	printf("%d seconds are %d hours, %d minutes and %d seconds.\n",seconds,hh,mm,ss);

	return 0;

}
