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

    // Insert or push a new node 
    void Push(int value){
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        height++;

        // alternate 
        // if(height==0) // means top point to null
        // {
        //     top = newNode;  
        // }else{
        //     newNode->next=top;
        //     top =newNode;
        // }
    }


};

int main()
{
    Stack myStack(4); // Create a stack object
    myStack.Push(3);
    myStack.Push(6);

    myStack.getTop(); // Print the top element
    // myStack.getHeight();
    myStack.printStack();
}
