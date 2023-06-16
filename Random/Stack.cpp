Question: Create a class called Stack that represents a stack data structure. It should have methods push(), pop(), and isEmpty() to add elements, remove elements, and check if the stack is empty, respectively. Implement the stack using an array. Write a program that demonstrates the functionality of the Stack class by performing push and pop operations.

Test cases:

Stack Operations:
1. Push
2. Pop
3. Exit
Enter your choice: 1
Enter element to push: 10
Pushed element: 10

Stack Operations:
1. Push
2. Pop
3. Exit
Enter your choice: 1
Enter element to push: 20
Pushed element: 20

Stack Operations:
1. Push
2. Pop
3. Exit
Enter your choice: 2
Popped element: 20

Stack Operations:
1. Push
2. Pop
3. Exit
Enter your choice: 2
Popped element: 10

Stack Operations:
1. Push
2. Pop
3. Exit
Enter your choice: 2
Stack is empty. Cannot pop element.


// Program to add and pop elements of stack
#include <iostream>

using namespace std;

// Initialising class that emulates a stack
class Stack {
    int *p=(int *)malloc(sizeof(int));
    int choice = 0;
    int elements = 0; // Variable to keep track of elements of the stack
    public :
        Stack() {
            while (choice != 3) { // Taking inputs until user choses to exit
                cout << "Stack operations" << endl;
                cout << "1. Push" << endl << "2. Pop" << endl << "3. Exit" << endl;
                cout << "Enter your choice : ";
                cin >> choice;
                if (choice == 1) {
                    push();
                } else if (choice == 2) {
                    pop();
                } else if (choice != 3) {
                    cout << "Enter a valid choice" << endl << endl;
                }
            }
        }
        
        // Function to push an element to the end of the stack
        void push() {
            int element;
            cout << "Enter element to push : ";
            cin >> element;
            p = (int *)realloc(p, ++elements * sizeof(int)); // reacllocating the size of the pointer to accomodate extra element
            *(p+elements-1) = element;
            cout << "Pushed element : " << element << endl << endl;
        }
        
        // Function to remove the last element from the stack
        void pop() {
            if (elements > 0) {
                cout << "Popped element : " << *(p+elements-1) << endl << endl;
                p = (int *)realloc(p, --elements * sizeof(int)); // reallocating the size of the pointer with one less element
            } else {
                cout << "Stack is empty. Cannot pop element." << endl << endl;
            }
        }
};

//Function to test the functionality of class Stack
int main() {
    class Stack s1;
    return 0;
}
