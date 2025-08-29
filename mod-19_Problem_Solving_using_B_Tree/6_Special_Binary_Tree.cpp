#include <bits/stdc++.h>
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

bool isSpecialBinaryTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return true;

    if ((root->left != NULL && root->right == NULL) || (root->left == NULL && root->right != NULL))
    {
        return false;
    }
    return isSpecialBinaryTree(root->left) && isSpecialBinaryTree(root->right);
}