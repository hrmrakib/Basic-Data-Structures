#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int get_size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void insert_at_any_pos(Node *&head, Node *&tail, int index, int val)
{
    int size = get_size(head);

    if (index < 0 || index > size)
    {
        cout << "Invalid" << endl;
        return;
    }
    if (index == 0)
    {
        insert_at_head(head, tail, val);
    }
    else if (index == size)
    {
        insert_at_tail(head, tail, val);
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
        }
        Node *newnode = new Node(val);
        newnode->next = temp->next;
        temp->next->prev = newnode;
        temp->next = newnode;
        newnode->prev = temp;
    }

    print_forward(head);
    print_backward(tail);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int tc;
    cin >> tc;

    while (tc--)
    {
        int x, v;
        cin >> x >> v;

        int size = get_size(head);
        if (x < 0 || x > size)
        {
            cout << "Invalid" << endl;
            continue;
        }

        insert_at_any_pos(head, tail, x, v);
    }

    return 0;
}
