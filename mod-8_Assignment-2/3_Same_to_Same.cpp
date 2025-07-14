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

bool same_to_same(Node*head, Node*head2) {
    while (head != NULL && head2 != NULL){
        if(head->val != head2->val) {
            return false;
        }
        head = head->next;
        head2 = head2->next;
    }
    return head == NULL && head2 == NULL;
}

int main()
{
    Node *head = NULL;
    Node *head2 = NULL;
    Node *tail = NULL;
    Node *tail2 = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }

    bool ok = same_to_same(head, head2);
    
    if(ok) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
