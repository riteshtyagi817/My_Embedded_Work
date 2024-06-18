#include"headers.h"
int main()
{
	printf("%s begin\n", __func__);
	char ch;
	char input_str[40];
	printf("Enter any character\n");
	scanf("%c",&ch);
	printf("Entered character is %c\n",ch);
	printf("Enter any string upto 40 chars\n");
	scanf("%s",input_str);
	printf("Entered string is %s\n",input_str);
	printf("%s end\n", __func__);
	return 0;
}
