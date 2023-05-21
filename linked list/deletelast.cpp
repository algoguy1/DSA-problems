#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;

    node(int x) {
        data = x;
        next = nullptr;
    }
};

void displayLinkedList(node* head) {
    node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

node* deletelast(node* head) {
    if (head == nullptr) {
        delete head;
        return nullptr;
    }

    node* curr = head;
    while (curr->next != nullptr) {
        curr = curr->next;
    }

    delete curr->next;
    curr->next = nullptr;
    return head;
}

int main() {
    node* head = new node(10);
    node* temp1 = new node(50);
    node* temp2 = new node(20);

    head->next = temp1;
    temp1->next = temp2;

    head = deletelast(head);
    displayLinkedList(head);

    return 0;
}
