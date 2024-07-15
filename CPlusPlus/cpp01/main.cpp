#include "headers.h"
#include "HelloWorld.h"

int main()
{
	HelloWorld hw;

#ifdef DEBUG
	cout << __func__ << "Begin" << endl;
#endif

	hw.sayHelloWorld();


#ifdef DEBUG
	cout << __func__ << "End" << endl;
#endif
	return 0;

}
