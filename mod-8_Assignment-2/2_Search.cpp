#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int find_index(Node *head, int x)
{
    int idx = 0;
    while (head != NULL)
    {
        if (head->val == x)
        {
            return idx;
        }
        head = head->next;
        idx++;
    }
    return -1;
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_at_tail(head, tail, val);
        }

        int x;
        cin >> x;

        cout << find_index(head, x) << endl;

        while (head != NULL)
        {
            Node *tmp = head;
            head = head->next;
            delete tmp;
        }
    }

    return 0;
}
