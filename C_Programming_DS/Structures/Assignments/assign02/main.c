#include "headers.h"
#include "declarations.h"
int main(){

	Book bk = {"C Programming","John Doe", 500,29.99};
	printf("Printing Book Details:\n");
	printf("Title of the book is %s\n",bk.title);
	printf("Author of the book is %s\n",bk.author);
	printf("Book Pages: %d\n",bk.pages);
	printf("Price of the book is $%.2f\n",bk.price);

	return 0;
}
