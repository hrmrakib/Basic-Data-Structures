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

void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
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

    Node* head2 = NULL;    
    Node* tail2 = NULL;    

    int val;
    while(true) {
        cin >> val;
        if(val == -1) {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    while(true) {
        cin >> val;
        if(val == -1) {
            break;
        }
        insert_at_tail(head2, tail2, val);
    }
    int size = get_size(head);
    int size2 = get_size(head2);

    size == size2 ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}