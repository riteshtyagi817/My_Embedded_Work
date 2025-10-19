#ifndef _DS_H
#define _DS_H
#include "headers.h"
	
typedef struct Bundle{
	char ch;
	size_t freq;
}Bundle;
typedef struct masterStructure{
	Bundle *b;
	size_t size;
}mStruct;
typedef struct Node{

	bool code;
	int value;
	int freq;
	struct Node *left;
	struct Node *right;
	struct Node *parent;

}Node;
typedef struct PrQueue{

	int noi;
	Node **ppq;
}PrQueue;
#endif

