#include "headers.h"
#include "declarations.h"
static void __exit cleanUpFunc(void){

	printk(KERN_INFO "Bye\n");
	return ;
}
module_exit(cleanUpFunc);
