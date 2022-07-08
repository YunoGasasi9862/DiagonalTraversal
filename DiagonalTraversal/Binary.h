#pragma once
typedef int BType;

class BinaryTree  //IM SO FREAKING HAPPY! I WAS ABLE TO IMPLEMENT THE BINARYTREE CLASS VERSION!
{
   
public:
    BType data;
    BinaryTree* right;
    BinaryTree* left;
    BinaryTree* getBinaryNode(BType data)
    {
        BinaryTree* root;
        root = (BinaryTree*)malloc(sizeof(BinaryTree));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return root;
    }


    void Inorder(BinaryTree* root)
    {

        if (root != NULL)
        {
            Inorder(root->left);
            printf("%d -> ", root->data);
            Inorder(root->right);
        }
    }

};