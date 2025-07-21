#include<iostream>
using namespace std;

int stack[5], n = 5;
int top = -1;

void push(int k) {
    if (top == n - 1) {
        cout << "Stack is Full." << endl;
    } else {
        top++;
        stack[top] = k;
        cout << "Pushed: " << k << endl;
    }
}

void pop() {
    int item;
    if (top >= 0) {
        item = stack[top];
        top--;
        cout << "Popped Element: " << item << endl;
    } else {
        cout << "Stack is Empty." << endl;
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack is Empty." << endl;
    } else {
        cout << "Peek Element: " << stack[top] << endl;
    }
}

void display() {
    if (top >= 0) {
        cout << "Stack Elements (Top to Bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Stack is Empty." << endl;
    }
}

int main() {
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);   // This should fill the stack
    push(18);  // Should print "Stack is Full."

    pop();
    pop();
    peek();
    display();

    return 0;
}
/*
OUTPUT::

Pushed: 2
Pushed: 3
Pushed: 4
Pushed: 5
Pushed: 6
Stack is Full.
Popped Element: 6
Popped Element: 5
Peek Element: 4
Stack Elements (Top to Bottom): 4 3 2

*/