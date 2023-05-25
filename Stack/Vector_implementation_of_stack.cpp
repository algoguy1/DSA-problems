#include <iostream>
#include <vector>

using namespace std;

struct mystack {
    int pos;
    int cap;
    vector<int> myvector;

    mystack(int size) {
        cap = size;
        pos = -1;
        myvector.resize(size);
    }

    void push(int num) {
        if (!isFull()) {
            pos++;
            myvector[pos] = num;
        } else {
            cout << "Stack is full. Cannot push element: " << num << endl;
        }
    }

    int peek() {
        if (!isEmpty()) {
            return myvector[pos];
        } else {
            cout << "Stack is empty. No element to peek." << endl;
            return -1;  // Return a sentinel value indicating an empty stack
        }
    }

    int pop() {
        if (!isEmpty()) {
            int topElement = myvector[pos];
            pos--;
            return topElement;
        } else {
            cout << "Stack is empty. No element to pop." << endl;
            return -1;  
        }
    }

    bool isEmpty() {
        return pos == -1;
    }

    bool isFull() {
        return pos == cap - 1;
    }
};

int main() {
    mystack stack(5);

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.peek() << endl;

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Popped element: " << stack.pop() << endl;

    cout << "Top element: " << stack.peek() << endl;

    return 0;
}
