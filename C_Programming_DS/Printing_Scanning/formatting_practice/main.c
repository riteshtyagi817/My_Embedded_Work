#include"headers.h"
int main()
{
	printf("%s begin\n", __func__);
	float f = 9.5434;
	int i = 23;
	int oct = 12;
	int hex = 15;
	printf("float value is exponential format %e\n", f);
	printf("Integer value is %i\n", i);
	printf(" 12 in octal is %o\n",oct);
	printf(" 15 in hexadecimal is %x\n",hex);
	printf("Printing %%\n");
	printf("Beautification with left justification\n");
	printf("%-d\n",45);
	printf("we can print 2 zeros before 1 like this %03d\n",1);
	printf(" %4.3f\n",10.345642);
	printf("Usage of some special characters\n");
	printf("audible alert\a\n");

	printf("backspace\b\n");
	printf("line feed\n\f");
	printf("carriage return\r\n");
	printf("new line\n");
	printf("\t tabi\n");
	printf("vertical tab\v\n");
	printf("back slash\\\n");

	printf("%s end\n", __func__);
	return 0;
}
