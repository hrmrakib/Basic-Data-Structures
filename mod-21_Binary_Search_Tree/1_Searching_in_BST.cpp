#include <bits/stdc++.h>
using namespace std;

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

        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

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

bool search(Node *root, int val)
{
    if (root == NULL)
        return false;
    if (root->val == val)
        return true;

    if (root->val < val)
    {
        return search(root->right, val);
    }
    else
    {
        return search(root->left, val);
    }
}

int main()
{
    Node *root = input_tree();
    
    int val;
    cin >> val;

    if (search(root, val))
        cout << "Found\n";
    else
        cout << "Not Found\n";
    return 0;
}