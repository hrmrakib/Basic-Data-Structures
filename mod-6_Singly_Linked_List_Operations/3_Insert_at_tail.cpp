#include <bits/stdc++.h>
using namespace std;

class Node {
    public: 
        int val;
        Node *next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* head, int val) {
    Node*newnode = new Node(val);
    
    if(head == NULL) {
        head = newnode;
        return;
    }

    Node*temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    // right now temp is at last node
    temp->next = newnode;
}

void print_linked_list(Node* head) {
    Node*temp = head;
    while(temp != NULL) {
        cout << temp->next << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    insert_at_tail(head, 50);
    print_linked_list(head);
    
    return 0;
}