/*
Create a program that uses dynamic memory allocation to implement a stack data structure
to push and pop elements.
*/
#include <iostream>
using namespace std;

struct RA2211003010002_Stack {
    int* RA2211003010002_data;
    int RA2211003010002_size;
    int RA2211003010002_capacity;
};

void RA2211003010002_initStack(RA2211003010002_Stack& stack, int capacity) {
    stack.RA2211003010002_data = (int*)malloc(capacity * sizeof(int));
    stack.RA2211003010002_size = 0;
    stack.RA2211003010002_capacity = capacity;
}

void RA2211003010002_push(RA2211003010002_Stack& stack, int value) {
    if (stack.RA2211003010002_size < stack.RA2211003010002_capacity) {
        stack.RA2211003010002_data[stack.RA2211003010002_size] = value;
        stack.RA2211003010002_size++;
        cout << "Pushed: " << value << endl;
    } else {
        cout << "Stack is full. Cannot push." << endl;
    }
}

int RA2211003010002_pop(RA2211003010002_Stack& stack) {
    if (stack.RA2211003010002_size > 0) {
        stack.RA2211003010002_size--;
        int value = stack.RA2211003010002_data[stack.RA2211003010002_size];
        cout << "Popped: " << value << endl;
        return value;
    } else {
        cout << "Stack is empty. Cannot pop." << endl;
        return -1;
    }
}

void RA2211003010002_displayStack(const RA2211003010002_Stack& stack) {
    cout << "Stack contents: ";
    for (int i = 0; i < stack.RA2211003010002_size; i++) {
        cout << stack.RA2211003010002_data[i] << " ";
    }
    cout << endl;
}

int main() {
    RA2211003010002_Stack stack;
    int capacity; 
    cout << "Enter the capacity of the stack: ";   
    cin >> capacity;
    RA2211003010002_initStack(stack, capacity);
    int choice, value;
    while (true) {
        cout << "=======Menu=======\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display Stack\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                RA2211003010002_push(stack, value);
                break;
            case 2:
                RA2211003010002_pop(stack);
                break;
            case 3:
                RA2211003010002_displayStack(stack);
                break;
            case 4:
                cout << "Quitting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}