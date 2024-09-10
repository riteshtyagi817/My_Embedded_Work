#ifndef DECLARATIONS_H
#define DECLARATIONS_H
class Reverse{

	public:
	Reverse();
	Reverse(std::string input);
	~Reverse();
	std::string reverseString();
	private:
	std::string input;
        void reverseStr(int start, int end, std::string &str);	

};
#endif
