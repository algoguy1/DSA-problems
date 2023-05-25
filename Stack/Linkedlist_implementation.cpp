#include<iostream>
using namespace std;

struct StackNode {
    int value;
    StackNode* next;

    StackNode(int val) {
        value = val;
        next = nullptr;
    }

    StackNode* push(int val) {
        StackNode* newNode = new StackNode(val);
        newNode->next = this;
        return newNode;
    }

    StackNode* pop() {
        if (this == nullptr) {
            cout << "Stack is already empty." << endl;
            return nullptr;
        }
        StackNode* newTop = this->next;
        delete this;
        return newTop;
    }
};

int main() {
    StackNode* top = new StackNode(10);
    StackNode* second = new StackNode(20);
    StackNode* third = new StackNode(30);
    StackNode* fourth = new StackNode(40);

    top->next = second;
    second->next = third;
    third->next = fourth;

    top = top->push(50);
    cout << top->value << endl;

    return 0;
}
