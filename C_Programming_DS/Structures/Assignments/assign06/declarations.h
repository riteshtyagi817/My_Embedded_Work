#ifndef DECLARATIONS_H
#define DECLARATIONS_H
typedef struct first{

	int value;
	struct second *bPtr;

}A;
typedef struct second{

	int value;
	struct first *aPtr;

}B;

#endif
