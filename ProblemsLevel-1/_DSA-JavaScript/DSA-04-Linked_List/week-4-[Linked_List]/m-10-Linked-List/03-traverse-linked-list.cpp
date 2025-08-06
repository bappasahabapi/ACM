
#include<bits/stdc++.h>
using namespace std;


class node{
public:
    int data;
    node *next;
};

class LinkedList{
public:
    node *head;

    LinkedList()
    {
        head =NULL;
    }

    // Creating new node pointer where data =value and next =NULL
    node * CreateNewNode(int value)
    {
        node *new_node=new node;
        new_node->data =value;
        new_node->next =NULL;

        return new_node;
    }

    //insert new value in Head
    void InsertAtHead(int value)
    {
        node *a =CreateNewNode(value);
        // case: if head is null
        if(head==NULL)
        {
            head =a;
            return;
        }
        // case if head is not null
        a->next =head;
        head =a;
    }
    // print the linked list
    void Traverse()
    {
        cout<<"print the list: ";
        node *a = head;
        while(a !=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
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
    cout<<"Traverse the LinkedList"<<endl;

    LinkedList l;

    l.Traverse();
    
    l.InsertAtHead(10);
    l.Traverse();
    l.InsertAtHead(30);
    l.Traverse();
    l.InsertAtHead(20);
    l.Traverse();
    l.InsertAtHead(30);

    l.Traverse();

     l.InsertAtHead(330);
     l.InsertAtHead(340);
     l.InsertAtHead(350);
     l.InsertAtHead(360);

     l.Traverse();

    l.SearchDistinctValue(10);
    l.SearchDistinctValue(5);

    l.SearchAllValue(30);

    return 0;
}


