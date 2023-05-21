#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;

    node(int x) {
        data = x;
        next = nullptr;
    }
};

node* insertatend(node* head, int x) {
    node* newNode = new node(x);
    if (head == nullptr) {
        return newNode;
    }

    node* curr = head;
    while (curr->next != nullptr) {
        curr = curr->next;
    }
    curr->next = newNode;
    return head;
}

void displayLinkedList(node* head) {
    node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
     node* head=new node(10);
    node* num1=new node(20);
    node* num2=new node(30);

    head->next=num1;
    num1->next=num2;
    
    insertatend(head,50);

    displayLinkedList(head);
    
    return 0;
}
