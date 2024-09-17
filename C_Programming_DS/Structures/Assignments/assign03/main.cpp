#include "headers.h"
#include "declarations.h"
int main(){


	Car cars[3] = {{"Toyota Camry",2019,24000},
			{"Honda Civic",2019,20000},
			{"Ford Mustang",2021,35000}};

	printf("Printing the car details\n");

	for(int i = 0; i < 3;++i){

		printf("Model: %s ,Year: %d , Price: $%.2f\n",cars[i].model,cars[i].year,cars[i].price);

	}

	return 0;
}
