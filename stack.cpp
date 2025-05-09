#include <iostream>
using namespace std;

#define SIZE 5  // Maximum size of the stack

class Stack {
private:
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    // Push operation
    void push(int value) {
        if (top >= SIZE - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            top++;
            arr[top] = value;
            cout << value << " pushed to stack." << endl;
        }
    }

    // Pop operation
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << arr[top] << " popped from stack." << endl;
            top--;
        }
    }

    // Peek operation
    void peek() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    // Display stack
    void display() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.peek();
    s.pop();
    s.display();

    return 0;
}
