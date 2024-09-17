#ifndef DECLARATIONS_H
#define DECLARATIONS_H
class Test{

	public:
	Test();
	Test(int val);
	~Test();
	static int getobjCount();
	Test(const Test &other);
	private:
	int value;
	static int count;

};


#endif
