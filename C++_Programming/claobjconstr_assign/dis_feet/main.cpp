#include "headers.h"
#include "declarations.h"

int main(){
	
	DistFeet obj1;
	DistFeet obj2(15);
	DistFeet obj3(20.12,12.32);


	double result_feet = obj1.getFeet() + obj2.getFeet() + obj3.getFeet();
	double result_inch = obj1.getInch() + obj2.getInch() + obj3.getInch();

	while(result_inch >= 12){
		result_inch -= 12;
		result_feet++;
	}
	cout << "Total Distance in feet and inches are \' " << result_feet  << "\'" << "\"" << result_inch << "\"" << endl;  
	return 0;

}
