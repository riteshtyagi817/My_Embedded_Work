#ifndef DECLARATIONS_H
#define DECLARATIONS_H

class Convert{

	public:
	Convert();
	Convert(int val);
	~Convert();
	void displayBinary();
	void displayHex();
	void displayOct();
	private:
	int dec;
	std::string convertToBin(int val);

};
#endif
