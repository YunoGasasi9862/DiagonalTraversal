#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <vector>
#include <stdio.h>
#include <stdbool.h>
#include "Queue.h"
#include "Binary.h"

std::vector<int> Diagonal(BinaryTree* root) //I DID IT MYSELF! I CREATED THE ALOGIRTHM! and DID IT!!
{
	Queue Temp;
	Temp.Insert(&Temp, root);
	std::vector<int> traversal;
	  //for the first node
	BinaryTree* temptree;
	while (!Temp.isEmptyQ(&Temp))
	{
		temptree = Temp.remove(&Temp);
		traversal.push_back(temptree->data);
		if (temptree->left != NULL)
		{
			Temp.Insert(&Temp, temptree->left);

		}
		while (temptree->right != NULL)
		{
			temptree = temptree->right;
			traversal.push_back(temptree->data);
			if (temptree->left != NULL)
				Temp.Insert(&Temp, temptree->left);
		}

	}
	return traversal;
}


int main(void)
{
	//Queue q; //class instance
	BinaryTree* root = NULL;
	root = root->getBinaryNode(8); //THIS IS HOW YOU FUCLING USE CLASSES BILAL!!! YAYAYAYA I LEARNED IT AND IMPROVISED ON MY OWN!
	root->right=root->getBinaryNode(10);
	root->left = root->getBinaryNode(3);
	root->right->right = root->getBinaryNode(14);
	root->right->right->left = root->getBinaryNode(13);
	root->left->left = root->getBinaryNode(1);
	root->left->right = root->getBinaryNode(6);
	root->left->right->right = root->getBinaryNode(7);
	root->left->right->left = root->getBinaryNode(4);
	
	
	//root->Inorder(root);
	std::vector<int> answer;
	answer=Diagonal(root);

	for (int i = 0; i < answer.size(); i++)
		printf("%d ", answer[i]);


	return 0;
}