#include "headers.h"
#include "declarations.h"

Convert::Convert(){
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "zero arg constructor called." << endl;
	dec = 0;


#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}
Convert::Convert(int val){
#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "one arg constructor called." << endl;
	dec = val;


#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}
Convert::~Convert(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif


#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
void Convert::displayBinary(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif
	cout << "Decimal value: " << dec << endl;

	cout << "Binary Value: " << convertToBin(dec) << endl;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif
}
std::string Convert::convertToBin(int val){
	
	int size = sizeof(val);
	std::string out;
	size *= 8;
	while(size--){
		if(val & 1) out += '1';
		else out += '0';
		val >>= 1;
	}
	reverse(out.begin(),out.end());
	return out;

}
void Convert::displayHex(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif

	cout << "Decimal value: " << dec << endl;

	cout << "Hex Value: 0x" << std::hex << dec << endl;

#ifdef DEBUG
	cout << __func__ << "end" << endl;

#endif
}

void Convert::displayOct(){

#ifdef DEBUG
	cout << __func__ << "start" << endl;
#endif

	cout << "Decimal value: " << std::dec <<dec << endl;

	cout << "Oct Value: 0" << std::oct << dec << endl;

#ifdef DEBUG
	cout << __func__ << "end" << endl;
#endif

}

