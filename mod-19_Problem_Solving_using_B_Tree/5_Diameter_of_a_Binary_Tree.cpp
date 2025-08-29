/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int mx;

int get_height(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    int left_height = get_height(root->left);
    int right_height = get_height(root->right);
    int diameter = left_height + right_height;
    mx = max(mx, diameter);
    return 1 + max(left_height, right_height);
}

int diameterOfBinaryTree(TreeNode<int> *root)
{
    mx = 0;
    get_height(root);
    return mx;
}
