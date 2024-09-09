#ifndef DECLARATIONS_H
#define DECLARATIONS_H
class QuadRoots{

	public:
	QuadRoots();
	QuadRoots(int a, int b, int c);
	~QuadRoots();
	void findRoots();
	void displayEquation();
	void displayRoots();
	
	private:
	int a;
	int b;
	int c;
	double firstRoot;
	double secondRoot;

};


#endif
