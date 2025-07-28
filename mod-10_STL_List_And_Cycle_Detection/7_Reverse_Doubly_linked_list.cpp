#include <bits/stdc++.h>
using namespace std;

class Node {
    public: 
        int val;
        Node *next;
        Node *prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val); 
    if(head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void reverse_doubly_linked_list(Node* head, Node* tail) {
    for (Node* i = head, *j = tail; i != j, i->prev != j; i = i->next, j = j->prev)
    {
        swap(i->val, j->val);
    }
}

void print_linked_list(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true) {
        cin >> val;
        if(val == -1) {
            break;
        }
        insert_at_tail(head, tail, val);
    } 
    print_linked_list(head);
    reverse_doubly_linked_list(head, tail);

    cout << head->val << endl;

    return 0;
}