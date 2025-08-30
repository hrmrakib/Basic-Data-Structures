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

void traverse_left(Node *root)
{
    Node *cur = root;
    while (cur)
    {
        cout << cur->val << " ";
        if (cur->left)
            cur = cur->left;
        else if (cur->right)
            cur = cur->right;
        else
            break;
    }
}

void traverse_right(Node *root)
{
    Node *cur = root;
    stack<int> st;
    while (cur)
    {
        st.push(cur->val);
        if (cur->right)
            cur = cur->right;
        else if (cur->left)
            cur = cur->left;
        else
            break;
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    Node *root = input_tree();
    
    traverse_left(root->left);

    cout<< root->val << " ";

    traverse_right(root->right);

    return 0;
}
