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

void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. kaj kore ana
        cout << f->val << " ";

        // 3. children gulo push
        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
}

bool insert(Node *&root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return true;
    }
    if (root->val == val)
        return false;

    if (root->val < val)
    {
        if (root->right == NULL)
            root->right = new Node(val);

        else
            return insert(root->right, val);
    }
    else
    {
        if (root->left == NULL)
            root->left = new Node(val);

        else
            return insert(root->left, val);
    }
}

int main()
{
    Node *root = input_tree();

    int val;
    cin >> val;

    if (insert(root, val))
        cout << "Inserted\n";
    else
        cout << "Not Inserted\n";

    insert(root, 11);
    level_order(root);
    return 0;
}