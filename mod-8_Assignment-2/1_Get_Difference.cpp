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
    Node* newnode = new Node(val);
    if(head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int get_min(Node* head) {
    Node* temp = head;
    int min = temp->val;
    while(temp != NULL) {
        if(min > temp->val) {
            min = temp->val;
        }
        temp = temp->next;
    }
    return min;
}

int get_max(Node* head) {
    Node* temp = head;
    int max = temp->val;
    while(temp != NULL) {
        if(max < temp->val) {
            max = temp->val;
        }
        temp = temp->next;
    }
    return max;
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

    int min = get_min(head);
    int max = get_max(head);

    cout << (max - min) << endl;
    return 0;
}
