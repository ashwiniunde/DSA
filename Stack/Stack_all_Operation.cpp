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
   int choice, value;

    do {
        cout << "\n==== Stack Menu ====" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exiting... Bye bye " << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
