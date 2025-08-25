// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int val;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *input_tree()
// {
//     int val;
//     cin >> val;
//     Node *root;
//     if (val == -1)
//     {
//         return NULL;
//     }
//     else
//     {
//         root = new Node(val);
//     }
//     queue<Node *> q;
//     if (root != NULL)
//     {
//         q.push(root);
//     }
//     while (!q.empty())
//     {
//         Node *f = q.front();
//         q.pop();

//         int l, r;
//         cin >> l >> r;

//         Node *myLeft, *myRight;
//         if (l == -1)
//         {
//             myLeft = NULL;
//         }
//         else
//         {
//             myLeft = new Node(l);
//         }
//         if (r == -1)
//         {
//             myRight = NULL;
//         }
//         else
//         {
//             myRight = new Node(r);
//         }

//         f->left = myLeft;
//         f->right = myRight;

//         if (f->left)
//         {
//             q.push(f->left);
//         }
//         if (f->right)
//         {
//             q.push(f->right);
//         }
//     }

//     return root;
// }

// void print_leaf_nodes(Node *root, vector<int> &leaf_nodes)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     if (root->left == NULL && root->right == NULL)
//     {
//         leaf_nodes.push_back(root->val);
//     }
//     print_leaf_nodes(root->left, leaf_nodes);
//     print_leaf_nodes(root->right, leaf_nodes);
// }

// int main()
// {
//     Node *root = input_tree();

//     vector<int> leaf_nodes;
//     print_leaf_nodes(root, leaf_nodes);

//     // sort(leaf_nodes.begin(), leaf_nodes.end());

//     for (int val : leaf_nodes)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

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
            q.push(myLeft);
        if (myRight)
            q.push(myRight);
    }
    return root;
}

void collect_leaf_nodes(Node *root, vector<int> &leaf_nodes)
{
    if (root == NULL)
    {
        return;
    }
    collect_leaf_nodes(root->left, leaf_nodes);
    collect_leaf_nodes(root->right, leaf_nodes);

    if (root->left == NULL && root->right == NULL)
    {
        leaf_nodes.push_back(root->val);
    }
}

int main()
{
    Node *root = input_tree();

    vector<int> leaf_nodes;
    collect_leaf_nodes(root, leaf_nodes);

    sort(leaf_nodes.rbegin(), leaf_nodes.rend());

    for (size_t i = 0; i < leaf_nodes.size(); i++)
    {
        if (i > 0)
            cout << " ";
        cout << leaf_nodes[i];
    }

    return 0;
}
