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

    Queue()
    {
        this->first = nullptr;
        this->last = nullptr;
        this->length = 0;
    };
    // insert to the last O(1)
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
    };

    // remove or release from the node head

    int dequeueNode()
    {
        if (length == 0)
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        else
        {
            node *tempNode = first;
            int dequeValue = first->value;
            if (length == 1)
            {
                first = nullptr;
                last = nullptr;
            }
            else
            {
                first = first->next;
            }
            delete tempNode;
            length--;
            return dequeValue;
        }
    };

    void print()
    {
        node *tempNode = first;
        while (tempNode != nullptr)
        {
            cout << tempNode->value << "-> ";
            tempNode = tempNode->next;
        }
        cout << "\n\n";
    };

    void getFirstNode()
    {
        cout << "First node:" << first->value << endl;
    };
    void getLastNode()
    {
        cout << "First node:" << last->value << endl;
    };
    void getLength()
    {
        cout << "Length:" << length << endl;
    };
};

int main()
{
    Queue q;
    q.enqueue(30);
    q.enqueue(50);
    q.enqueue(70);
    q.print();
    q.getFirstNode();
    q.getLastNode();
    q.getLength();

    cout<<"Dequeued value:"<<q.dequeueNode()<<endl;
    q.print();
    q.getLength();

    return 0;
}
