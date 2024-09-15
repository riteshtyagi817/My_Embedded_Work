#ifndef DECLARATIONS_H
#define DECLARATIONS_H
class StdDev{

	public:
	StdDev();
	StdDev(int *arr,int size);
	~StdDev();
	double findStdDev();

	private:
	int *input;

};


#endif
