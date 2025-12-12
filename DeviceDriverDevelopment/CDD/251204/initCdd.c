#include "headers.h"
#include "declarations.h"
static int __init initFunc(void)
{
	printk(KERN_INFO "Hello kernel!");
	return 0;
}
module_init(initFunc);
