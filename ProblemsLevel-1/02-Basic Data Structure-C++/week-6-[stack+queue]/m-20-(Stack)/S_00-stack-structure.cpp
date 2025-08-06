#include <iostream>
using namespace std;

// Node class for linked list
class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        this->value = val;
        this->next = nullptr;
    }
};

// Stack class
class Stack
{
public:
    // Member variables
    Node *top;
    int height;

public:
    // Constructor
    Stack(int value)
    {
        Node *newNode = new Node(value);
        top = newNode;
        height = 1;
    };

    // Method to print the stack
    void printStack()
    {
        Node *temp = top;
        while (temp != nullptr)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    // Method to print the top element of the stack
    void getTop()
    {
        cout << "Top Element: " << top->value << endl;
    }

    // Method to print the height of the stack
    void getHeight()
    {
        cout << "Height of the Stack: " << height << endl;
    }
};

int main()
{
    Stack myStack(4); // Create a stack object
    myStack.getTop(); // Print the top element
    myStack.getHeight();
    myStack.printStack();
}
