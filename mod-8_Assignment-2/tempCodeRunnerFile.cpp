f (idx == 0) {
        Node* temp = head;
        head = head->next;
        if (head == NULL) tail = NULL;
        delete temp;
        return;
    }