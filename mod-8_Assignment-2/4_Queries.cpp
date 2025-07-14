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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
    if (tail == NULL)
        tail = head;
}

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

void delete_at_index(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
        return;

    int size = get_size(head);
    if (idx < 0 || idx >= size)
        return;

    if (idx == 0)
    {
        Node *temp = head;
        head = head->next;
        if (head == NULL)
            tail = NULL;
        delete temp;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }

    Node *deletenode = temp->next;
    temp->next = temp->next->next;

    if (temp->next == NULL)
        tail = temp;

    delete deletenode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int tc;
    cin >> tc;

    while (tc--)
    {
        int index, val;
        cin >> index >> val;

        if (index == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if (index == 1)
        {
            insert_at_tail(head, tail, val);
        }
        else if (index == 2)
        {
            delete_at_index(head, tail, val);
        }

        print_linked_list(head);
    }

    return 0;
}
