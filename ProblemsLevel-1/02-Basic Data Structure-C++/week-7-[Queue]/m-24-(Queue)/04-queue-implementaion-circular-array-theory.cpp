
/*
 --------------   Using Circular array theory to implement Queue.
 case 1: queue size == array size  --> Queue is full.
 case 2: 

-  
 */

#include <bits/stdc++.h>
using namespace std;

const int maxSize = 5;

class Queue
{
public:
    int a[maxSize];
    int startIndex, endIndex; // l and r;
    int queueSize;

    Queue()
    {
        startIndex = 0;
        endIndex = -1;
        queueSize=0;
    };

    // O(1) as constant operation
    void enqueue(int value)
    {
        if(queueSize==maxSize){
            cout<<"Queue is Full."<<endl;
            return;
        }
        // update the endIndex to right
        endIndex++;
        if(endIndex==maxSize){
            // as we cross the border 
            endIndex = 0;
        }
        a[endIndex]=value;
        queueSize++;
    };

    // O(1) as constant operation
    void dequeue()
    {
        if (queueSize==0)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        //update start index to right
        startIndex++;
        if(startIndex==maxSize){
            startIndex = 0;
        }
        queueSize--;
    };


    // O(1) as constant operation
    int frontElement()
    {
        if (queueSize==0)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return a[startIndex];
    };


    // O(1) as constant operation
    int size()
    {
        return queueSize;
    };
};

int main()
{
    Queue q;
    // cout<<"Front Element: "<< q.frontElement()<<endl;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    cout<<"Q Size:"<<q.size()<<endl;
    cout<<"Front Element: "<< q.frontElement()<<endl;
    q.dequeue();
    cout<<"Front Element: "<< q.frontElement()<<endl;
    q.dequeue();
    cout<<"Front Element: "<< q.frontElement()<<endl;
    q.dequeue();
    // cout<<"Front Element: "<< q.frontElement()<<endl;

    cout<<"Length:"<<q.size()<<endl;
    return 0;
}