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

stack<int> s;

void traverse_left(Node *root)
{
    while(root) {
        if(root->left) {
            if(root->val) {
                s.push(root->val);
            }
            root = root->left;
        }else{
            if(root->val) {
                s.push(root->val);
            }
            root = root->right;
        }
    }
}

void traverse_right(Node *root)
{
    while(root) {
        cout << root->val << " ";

        if(root->right) {
            root = root->right;
        }else {
            root = root->left;
        }
    }
}

int main()
{
    Node *root = input_tree();
    
    traverse_left(root->left);
    
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout<< root->val << " ";
    traverse_right(root->right);

    return 0;
}
