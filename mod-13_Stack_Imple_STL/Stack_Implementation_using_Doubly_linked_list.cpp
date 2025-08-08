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

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int x) // O(1)
    {
        sz++;
        Node *newnode = new Node(x);
        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    void pop() // O(1)
    {
        sz--;
        Node *deletenode = tail;
        tail = tail->prev;
        delete deletenode;

        if (tail == NULL)
        {
            tail->next = NULL;
        }
    }
    int top() // O(1)
    {
        return tail->val;
    }
    bool empty() // O(1)
    {
        if (head == NULL)
        {
            return true;
        }
        return false;
    }
    int size() // O(1)
    {
        return sz;
    }
};

int main()
{
    myStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.top() << endl;
    cout << s.top() << endl;

    return 0;
}
