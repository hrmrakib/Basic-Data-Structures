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

void insert_at_tail(Node* &head, Node* &tail, int val){
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

    Node* temp = head;
    Node* temp2 = tail;

    bool is_palindrome = true;
    while (temp != NULL && temp2 != NULL) {
        if(temp->val != temp2->val){
            is_palindrome = false;
            break;
        }
        temp = temp->next;
        temp2 = temp2->prev;
    }

    if(is_palindrome) {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}