
/*
        Array implementation so we dont need null or pointer concept

when l>r means empty
in array concept head and tail is just index value of array
 */

#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 5;

class Queue
{
public:
    int a[MAX_SIZE];
    int headIndex, tailIndex; // l and r;

    Queue()
    {
        headIndex = 0;
        tailIndex = -1;
    };

    // O(1) as constant operation
    void enqueue(int value)
    {
        if (tailIndex + 1 >= MAX_SIZE)
        {
            cout << "Queue is full" << endl;
            return;
        }
        tailIndex = tailIndex + 1;
        a[tailIndex] = value;
    };

    // O(1) as constant operation
    void dequeue()
    {
        if (headIndex>tailIndex)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        headIndex++;
    };
    // O(1) as constant operation
    int frontElement()
    {
        if (headIndex>tailIndex)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return a[headIndex];
    };
    // O(1) as constant operation
    int size()
    {
        return (tailIndex - headIndex) + 1;
    };
};

int main()
{
    Queue q;
    // cout<<"Front Element: "<< q.frontElement()<<endl;
    q.enqueue(12);
    q.enqueue(14);
    q.enqueue(16);
    cout<<"Front Element: "<< q.frontElement()<<endl;
    cout<<"Length:"<<q.size()<<endl;

    q.dequeue();
    q.dequeue();
    cout<<"Front Element: "<< q.frontElement()<<endl;
    cout<<"Length:"<<q.size()<<endl;
    return 0;
}