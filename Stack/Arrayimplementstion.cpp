#include <iostream>
using namespace std;

struct mystack {
    int *arr;
    int cap;
    int pos;

    mystack(int size) {
        cap = size;
        pos = -1;
        arr = new int[size];
    }

    void push(int num) {
        if (pos == cap - 1) {
            cout << "Stack is full." << endl;
            return;
        }
        pos++;
        arr[pos] = num;
    }

    int peek() {
        if (pos == -1) {
            cout << "Stack is empty." << endl;
            return -1; // Return a default value or throw an exception in such cases.
        }
        return arr[pos];
    }

    void pop() {
        if (pos == -1) {
            cout << "Stack is empty." << endl;
            return;
        }
        pos--;
    }

    int size() {
        return pos + 1;
    }

    bool isEmpty() {
        return pos == -1;
    }
};

int main() {
    mystack stack(5);

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Size: " << stack.size() << endl;
    cout << "Is Empty: " << (stack.isEmpty() ? "Yes" : "No") << endl;
    cout << "Peek: " << stack.peek() << endl;

    stack.pop();

    cout << "Peek after pop: " << stack.peek() << endl;

    stack.pop();
    stack.pop();
    stack.pop(); // Trying to pop from an empty stack

    cout << "Size: " << stack.size() << endl;
    cout << "Is Empty: " << (stack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
