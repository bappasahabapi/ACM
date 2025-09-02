// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next;
    node *previous;

    node(int value){
        this->data=value;
        this->next=nullptr;
        this->previous=nullptr;
    }
};

class DoublyLinkedList{
public:
    node *head;
    int size;
    DoublyLinkedList()
    {
        head=NULL;
        size=0;
    }

    //todo: Creates a new node with the given data and returns a node pointer;
    // node *CreateNewNode(int data)
    // {
    //     node *new_node =new node;
    //     new_node->data=data;
    //     new_node->next=NULL;
    //     new_node->next=NULL;
    //     return new_node;

    // }
    //todo: insert  a node with given data at head
    void InsertAtHead(int data)
{
        size++;
        node *new_node = new node(data);
        // node *new_node =CreateNewNode(data);
        if(head ==NULL)
        {
            head =new_node;
            return;
        }
        node *a =head;  // this is temporary variable a 
        new_node->next=a;
        a->previous=new_node;
        head=new_node;
    }

    //todo: print the doubly linked list
    void Traverse()
    {
        node *a =head;
        while (a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
        
    }

    int getSize()
    {
        return size;
    }







};



int main()
{
    cout<<"Printed List: ";
    DoublyLinkedList dl;

    dl.InsertAtHead(10);
    dl.InsertAtHead(5);
    dl.InsertAtHead(1);

    dl.Traverse();
    cout<<"size is->  "<<dl.getSize()<<endl;
   



    return 0;
}