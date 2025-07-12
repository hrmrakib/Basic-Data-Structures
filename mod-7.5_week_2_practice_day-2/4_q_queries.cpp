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

void insert_at_head(Node* &head, int val) {
    Node * newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

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

void insert_at_any_pos(Node* head, int idx, int val) {
    Node* newnode = new Node(val);
    Node* temp = head;
    for(int i = 0; i < idx; i++) {
        temp = temp->next;
        if(temp == NULL) {
            return;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

int get_size(Node* head) {
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
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


    return 0;
}
