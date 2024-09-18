#include "headers.h"
#include "declarations.h"

TreeNode * createTree(TreeNode *root){
#ifdef DEBUG
	printf("%s start\n", __func__);
#endif
	if(root == NULL){

		root = (TreeNode *)malloc(sizeof(TreeNode));
		if(!root){
			perror("Malloc failed in createTree \n");
			return NULL;
		}
		root->value = 10;
		root->child = NULL;
		root->brother = NULL;
		
		TreeNode *firstChild = NULL;
		firstChild = (TreeNode *)malloc(sizeof(TreeNode));
		if(!firstChild){
			perror("Malloc failed in createTree \n");
			return NULL;
		}
		firstChild->value = 20;
		firstChild->child = NULL;
		firstChild->brother = NULL;


		TreeNode *grandChild = NULL;
                grandChild = (TreeNode *)malloc(sizeof(TreeNode));
                if(!grandChild){
                        perror("Malloc failed in createTree \n");
                        return NULL;
                }
                grandChild->value = 40;
                grandChild->child = NULL;
                grandChild->brother = NULL;

		firstChild->child = grandChild;
		root->child = firstChild;


		TreeNode *firstBrother = NULL;
                firstBrother = (TreeNode *)malloc(sizeof(TreeNode));
                if(!firstBrother){
                        perror("Malloc failed in createTree \n");
                        return NULL;
                }
                firstBrother->value = 15;
                firstBrother->child = NULL;
                firstBrother->brother = NULL;

		root->brother = firstBrother;

		return root;


	}
	return root;
#ifdef DEBUG
	printf("%s end\n", __func__);
#endif

}
void display(TreeNode *root){


	TreeNode *temp = root;
	//printf("\t\t");
	if(temp != NULL){
		printf("Node value is %d\n",temp->value);
	        if(temp->child){
			printf("\t\tchild: ");
			display(temp->child);
			printf("\n");
		}
		if(temp->brother){
			printf("\tBrother: ");
			display(temp->brother);
			printf("\n");	
		}
	}
	

	return;	


}
