#include<stdio.h>
struct binarytree{
	int data;
	struct binarytree* left;
	struct binarytree* right;
	
}typedef tree;
tree* newnode(int data){
	tree* newnode=(tree*)malloc(sizeof(tree));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
void inorder(tree* root){
	stack<tree*> s;
	while(1){
		while(root){
			root=root->left;
		}
	}
}

int main(){
	tree *root= newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->right->left=newnode(6);
	root->right->right=newnode(7);
	printf("%d\n",root->data);
	printf("%d\n",root->left->data);
	printf("%d\n",root->right->data);
	printf("%d\n",root->left->left->data);
	printf("%d\n",root->left->right->data);
	printf("%d\n",root->right->left->data);
	printf("%d\n",root->right->right->data);
}

