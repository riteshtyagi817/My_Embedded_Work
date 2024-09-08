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
Sample & Sample::operator ++ (){

	++(this->value);
	return *this;	

}
int Sample::getValue(){

	return value;
}
