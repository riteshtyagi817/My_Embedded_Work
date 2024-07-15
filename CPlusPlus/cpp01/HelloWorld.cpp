#include "headers.h"
#include "HelloWorld.h"
void HelloWorld::sayHelloWorld()
{
#ifdef DEBUG
	cout << __func__ << "begin" << endl;

#endif
	cout << " This is first cpp program just saying Hello World " << endl;
	cout << "Hello World Bye!!" << endl;

#ifdef DEBUG
	cout << __func__ << "End" << endl;

#endif



	return;


}
