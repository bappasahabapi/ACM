#include <iostream>

using namespace std;

// Create a node class for creating a new node for the queue.
class node
{
public:
    int value;
    node *next;

    node(int value)
    {
        this->value = value;
        this->next = nullptr;
    }
};

// Create a Queue Class
class Queue
{
public:
    node *first;
    node *last;
    int length;

    Queue(int value)
    {
        node *newNode = new node(value);
        first = newNode;
        last = newNode;
        length = 1;
    };

    void print()
    {
        node *tempNode = first;
        while (tempNode != nullptr)
        {
            cout << tempNode->value << "-> ";
            tempNode = tempNode->next;
        }
        cout << endl;
    }

    void enqueue(int value)
    {
        node *newNode = new node(value);
        if (length == 0)
        {
            first = newNode;
            last = newNode;
        }
        else
        {
            last->next = newNode;
            last = newNode;
        }
        length++;
    }
};

int main()
{
    // Queue q;
    // q.print();
    Queue *q = new Queue(20);
    q->print();

    q->enqueue(33);
    q->enqueue(78);
    q->enqueue(44);
    q->print();

    return 0;
}
