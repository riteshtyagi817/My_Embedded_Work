#include "headers.h"
#include "declarations.h"
int main(){
	Time t = {20,34,45};
	Time t1 = {14,45,48};
	TimeDiff td;
	TimeDiff td1(t);
	TimeDiff td2(td1);

	TimeDiff td3(t1);

	td.display();
	td1.display();
	td2.display();
	td3.display();

	td1.timeDiff(td3);
	
	return 0;

}
