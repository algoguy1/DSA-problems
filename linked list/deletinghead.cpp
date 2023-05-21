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

node* deletehead(node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    else {
        node* temp = head->next;
        delete head;
        return temp;
    }
}

int main() {
    node* head = new node(10);
    node* num1 = new node(20);
    node* num2 = new node(30);

    head->next = num1;
    num1->next = num2;

    head = deletehead(head);
    displayLinkedList(head);

    return 0;
}
