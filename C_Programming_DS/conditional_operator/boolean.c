#include<stdio.h>
#include<stdbool.h>
int main(){


	bool isWeekend = true;
	char *activity = (isWeekend == 1)?"Relax":"Work";
	printf("Today's activity is %s\n",activity);

	return 0;

}
