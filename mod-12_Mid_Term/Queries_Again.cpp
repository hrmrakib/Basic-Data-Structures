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

void print_backward(Node* tail) {
    Node* temp = tail;
    cout "R -> ";
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
void print_forward(Node* head) {
    Node* temp = head;
    cout << "L -> ";
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int get_size(Node* head) {
    int count = 0;
    Node* temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_at_head(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if(head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if(head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}

void insert_at_any_pos(Node* &head, Node* &tail, int index, int val) {
    int size = get_size(head);
    
    if(index > size || index < 0) {
        cout << "Invalid" << endl;
        return;
    }else if(index == 0) {
        insert_at_head(head, tail, val);
    }else if(index == size) {
        insert_at_tail(head, tail, val);
    }else{
        Node* temp = head;
        Node* newnode = new Node(val);
        for(int i = 0; i < index-1; i++) {
            temp = temp->next;
        }

        newnode->next = temp->next;
        temp->next->prev = newnode;
        newnode->prev = temp;
        temp->next = newnode;
    }   
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int tc;
    cin >> tc;

    int index, val;
    while(tc--) {
        cin >> index >> val;
        insert_at_any_pos(head, tail, index, val);
        print_forward(head);
        print_backward(tail);
    }


    return 0;
}