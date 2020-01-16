#pragma once
#include<stdio.h>
typedef struct BinarySearchTree
{
	int Data;
	struct BinarySearchTree *left, *right;

}BST;

BST * CreateNewNode();
BST *AddNewNode(BST *root);
BST *DeleteNode(BST *root);

void  *Preorder(BST *root);
void  *Inorder(BST *root);
void  *Postorder(BST *root);
