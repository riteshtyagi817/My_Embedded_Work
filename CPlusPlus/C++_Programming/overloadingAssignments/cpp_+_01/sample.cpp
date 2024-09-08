#include "headers.h"
#include "declarations.h"

Sample::Sample(){
	value = 0;
}
Sample::Sample(int val){
	value = val;

}
Sample::Sample(const Sample &source){
	this->value = source.value;
}
Sample Sample::operator +(const Sample &right){

	
	int value = this->value + right.value;
	return Sample(value);

}
int Sample::getValue(){

	return value;
}
