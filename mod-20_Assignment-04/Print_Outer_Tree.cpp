#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        return NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft = (l == -1) ? NULL : new Node(l);
        Node *myRight = (r == -1) ? NULL : new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if (myLeft)
        {
            q.push(myLeft);
        }
        if (myRight)
        {
            q.push(myRight);
        }
    }
    return root;
}

void printLeftBoundary(Node *root)
{
    Node *cur = root->left;
    while (cur)
    {
        if (!(cur->left == NULL && cur->right == NULL))
        {
            cout << cur->val << " ";
        }
        if (cur->left)
        {
            cur = cur->left;
        }
        else
        {
            cur = cur->right;
        }
    }
}

void printRightBoundary(Node *root)
{
    vector<int> temp;
    Node *cur = root->right;
    while (cur)
    {
        if (!(cur->left == NULL && cur->right == NULL))
        {
            temp.push_back(cur->val);
        }
        if (cur->right)
        {
            cur = cur->right;
        }
        else
        {
            cur = cur->left;
        }
    }
    for (int i = temp.size() - 1; i >= 0; i--)
    {
        cout << temp[i] << " ";
    }
}

void printLeaves(Node *root)
{
    if (!root)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->val << " ";
        return; 
    }
    printLeaves(root->left);
    printLeaves(root->right);
}

int main()
{
    Node *root = input_tree();
    if (!root)
    {
        return 0;
    }

    
    printLeftBoundary(root);

    // cout << root->val << " ";

    // printLeaves(root);

    // printRightBoundary(root);

    return 0;
}
