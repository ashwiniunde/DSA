#include <iostream>
using namespace std;
class emp {
public:
    int empid;
    string name;
    float salary;
    emp* next; // store address of next node

    void accept();
    void display();
};

emp* start = nullptr; // pointer object of class

void emp::accept() {
    emp* temp = new emp();
   cout << "Enter employee ID: ";
   cin >> temp->empid;
   cout << "Enter employee name: ";
   cin>>temp->name; // Read the full line for name

    cout << "Enter employee salary: ";
    cin >> temp->salary;
    temp->next = nullptr;

    if (start == nullptr) {
        start = temp;
    } else {
        emp* current = start;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = temp;
    }
}

void emp::display() {
    emp* temp = start;
    if (temp == nullptr) {
        cout << "List is empty." << std::endl;
        return;
    }
    while (temp != nullptr) {
        cout << temp->empid << "\t"
             << temp->name << "\t\t" // Adjust spacing as needed
             << temp->salary << endl;
        temp = temp->next;
    }
    cout << std::endl;
}

int main() {
    int ch, y; // 'y' is declared but not used in the original handwritten code.
    emp e;

    // The original code in the image doesn't show a loop for user interaction
    // or how 'accept' and 'display' would be called.
    // I've added a basic menu-driven loop for demonstration purposes.

    int choice;
    do {
        cout << "\n1. Accept Employee Details" << std::endl;
        cout << "2. Display Employee Details" << std::endl;
        cout << "3. Exit" << std::endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                e.accept(); // Call the accept method to add an employee
                break;
            case 2:
                e.display(); // Call the display method to show employees
                break;
            case 3:
                cout << "Exiting program." << std::endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 3);

    // Memory deallocation (good practice for linked lists)
    emp* current = start;
    while (current != nullptr) {
        emp* next_node = current->next;
        delete current;
        current = next_node;
    }
    start = nullptr; // Ensure start is null after freeing memory

    return 0;
}
