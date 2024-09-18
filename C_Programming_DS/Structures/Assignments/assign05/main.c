#include "headers.h"
#include "declarations.h"
int main(){

#ifdef DEBUG
	printf("%s start\n",__func__);
#endif
	TreeNode *root = NULL;
	root = createTree(root);
	display(root);	

#ifdef DEBUG
	printf("%s end\n",__func__);
#endif
	return 0;

}
