#include"headers.h"
#include "declarations.h"
int main()
{
	FeetInch ftobj(3,4.5);
	MetreCm  mobj(5,34.43);
	ftobj.getDistance();
	mobj.getDistance();
		
	mobj.convertMtCm(ftobj);
	mobj.display(ftobj);
	

	return 0;

}
