#include <stdio.h>
#include "BST.h"

BST * CreateNewNode()
{
	BST *NewNode = (BST *)malloc(sizeof(BST));
	NewNode->left = NULL;
	NewNode->right = NULL;

	printf("\nEnter the data of the Node : ");
	scanf_s("%d", &NewNode->Data);
	return NewNode;

}
BST *AddNewNode(BST *root)
{
	if (root == NULL)
	{
		BST *NewNode = CreateNewNode();
		root = NewNode;
	}
	else
	{
		BST *temp = root;
		int flag = 0;
		BST *NewNode = CreateNewNode();
		while (!flag )
		{
			if (NewNode->Data < temp->Data)
			{
				if (temp->left != NULL)
				{
					temp = temp->left;
				}
				else
				{
					temp->left = NewNode;
					flag = 1;
				}

			}
			else
			{
				if (temp->right != NULL)
				{
					temp = temp->right;
				}
				else
				{
					temp->right = NewNode;
					flag = 1;
				}
			}
		}
	}
	return root;
}
BST *DeleteNode(BST *root)
{

}

void  *Preorder(BST *root)
{
	BST *temp = root;
	if (temp != NULL)
	{
		printf("%d ->", temp->Data);
		Preorder(temp->left);
		Preorder(temp->right);
	}

}
void  *Inorder(BST *root)
{
	BST *temp = root;
	if (temp != NULL)
	{
		
		Inorder(temp->left);
		printf("%d ->", temp->Data);
		Inorder(temp->right);
	}

}
void  *Postorder(BST *root)
{
	BST *temp = root;
	if (temp != NULL)
	{

		Postorder(temp->left);
		Postorder(temp->right);
		printf("%d ->", temp->Data);
		
	}

}