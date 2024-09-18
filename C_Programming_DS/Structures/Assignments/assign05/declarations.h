#ifndef DECLARATIONS_H
#define DECLARATIONS_H
typedef struct TreeNode{

	int value;
	struct TreeNode *child;
	struct TreeNode *brother;

}TreeNode;
TreeNode * createTree(TreeNode *root);
void display(TreeNode *root);
#endif
