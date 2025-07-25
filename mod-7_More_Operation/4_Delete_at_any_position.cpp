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

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node*newnode = new Node(val);
    if(head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    // tail = tail->next; // or,
    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node* head) {
    Node*temp = head;
    while(temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void delete_at_head(Node* &head) {
    Node* deletenode = head;
    head = head->next;
    delete deletenode;
}

void delete_at_any_pos(Node*head, int idx) {
    Node* temp = head;
    for(int i = 1; i < idx; i++) {
        temp = temp->next;
    }
    Node* deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
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

    // delete_at_head(head);
    // delete_at_head(head);

    delete_at_any_pos(head, 2);
    print_linked_list(head);
    
    return 0;
}