#include <iostream>
using namespace std;

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

class Stack
{
private:
    Node *top;
    int height;

public:
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

    // Insert or push a new node at the top
    void PushElement(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        height++;
    }

    // Remove or pop means delte the node from top as {LIFO}
    int PopElemnt()
    {
        if (height == 0)
            return INT_MIN;

        Node *temp = top;
        int poppedValue = temp->value;

        delete temp;
        height--;
        return poppedValue;
    }
};

int main()
{
    Stack myStack(4); // Create a stack object
    myStack.PushElement(3);
    myStack.PushElement(6);
    myStack.PushElement(34);

    myStack.printStack();
     cout << "After Popped value:" << myStack.PopElemnt() << endl;

}
