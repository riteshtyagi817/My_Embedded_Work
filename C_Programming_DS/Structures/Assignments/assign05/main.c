#include "headers.h"
#include "declarations.h"
int main(){

#ifdef DEBUG
	printf("%s start\n",__func__);
#endif
	char space[30];
	memset(space,'\0',sizeof(space));
	strcpy(space,"");
	TreeNode *root = NULL;
	root = createTree(root);
	display(root,space);
	freeTree(root);	

#ifdef DEBUG
	printf("%s end\n",__func__);
#endif
	return 0;

}
