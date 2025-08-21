/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

********************** Coding Ninja **************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root == NULL) {
        return false;
    }
    if(root->val == data) {
        return true;
    }
    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);
    
    return (l || r);
}