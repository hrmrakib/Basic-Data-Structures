#include <bits/stdc++.h>
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

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> ans;
    queue<pair<TreeNode<int> *, int>> q;
    bool freq[3005] = {false};

    if (root)
    {
        q.push({root, 1});
    }

    while (!q.empty())
    {
        pair<TreeNode<int> *, int> parent = q.front();
        q.pop();

        TreeNode<int> *node = parent.first;
        int level = parent.second;

        if (freq[level] == false)
        {
            ans.push_back(node->data);
            freq[level] = true;
        }

        if (node->left)
        {
            q.push({node->left, level + 1});
        }

        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
    return ans;
}