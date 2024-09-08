#include "headers.h"
#include "declarations.h"

Sample::Sample(){
	value = 0.0;
}
Sample::Sample(double val){
	value = val;

}
Sample::Sample(const Sample &source){
	this->value = source.value;
}
Sample Sample::operator / (const Sample &right){

	
	double value = this->value / right.value;
	return Sample(value);

}
double Sample::getValue(){

	return value;
}
