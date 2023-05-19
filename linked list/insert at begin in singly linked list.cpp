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

node* insertbegin(node* head, int x) {
    node* newNode = new node(x);  // Create a new node with the value x
    newNode->next = head;         // Set the next pointer of the new node to the current head
    head = newNode;               // Update the head pointer to point to the new node
    return head;                  // Return the updated head pointer
}

int main() {
    node* head = new node(10);
    node* numb1 = new node(20);
    node* numb2 = new node(50);

    head->next = numb1;
    numb1->next = numb2;

    head = insertbegin(head, 100); // Update the head pointer with the returned value

    // Print the updated list
    node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;

    return 0;
}
