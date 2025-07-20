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

void print_forward(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node* tail) {
    Node* temp = tail;

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_any_pos(Node* &head, int index, int val) {
    Node* newnode = new Node(val);
    Node* temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    
    newnode->next = temp->next;
    temp->next->prev = newnode;
    newnode->prev = temp;
    temp->next = newnode;
}

void delete_at_any_position(Node* &head, int index) {
    Node* temp = head;
    for(int i = 1; i < index; i++){
        temp = temp->next;
    }
    Node* deletenode = temp->next;
    temp->next = deletenode->next->next;
    temp->next->next->prev = deletenode->prev;
    delete deletenode;
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    tail->prev = b;

   
    delete_at_any_position(head, 2);

    print_forward(head);

    return 0;
}