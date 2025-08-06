#include<bits/stdc++.h>
using namespace std;


class node{
public:
    int data;
    node * next;
};

class LinkedList{
public:
    node * head;

    LinkedList()
    {
        head =NULL;
    }

    //insert new value in Head
    void InsertAtHead(int value)
    {

    }
    // print the linked list
    void Traverse()
    {

    }
    // Search for a single value
    void SearchDistinctValue(int value)
    {

    }
    void SearchAllValue(int value)
    {

    }

    
};

int main()
{
    cout<<"Structure of a linked list"<<endl;

    LinkedList l;

    l.InsertAtHead(10);
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    l.Traverse();

    l.SearchDistinctValue(10);
    l.SearchDistinctValue(5);

    l.SearchAllValue(30);

    return 0;

    
}