#include "headers.h"
#include "Distance.h"

int main()
{
	Distance da,db;

#ifdef DEBUG
	cout << __func__ << "Begin" << endl;
#endif

	da.getDistance();
	da.display();

	db.getDistance();
	db.display();

#ifdef DEBUG
	cout << __func__ << "End" << endl;
#endif
	return 0;

}
