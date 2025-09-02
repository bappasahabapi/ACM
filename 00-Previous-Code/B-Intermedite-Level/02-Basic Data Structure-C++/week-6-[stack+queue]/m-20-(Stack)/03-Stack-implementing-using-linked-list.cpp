
#include <iostream>
using namespace std;


// Creating new node pointer where int value(this->value) =value and next =NULL
class node { 
    public:
        int value;
        node* next;

        node(int value) {
            this->value = value;
            next = nullptr;
        }
}; 


class Stack{
public:
    node *top;  // head is here top
    int height;

    Stck()
    {
        top =NULL;
    }

    //insert new value in Head means push 
    void InsertAtHead(int value)
    {
        // create instace of new node with value
        node *newNode =new node(value);
        newNode->next =top;
        top = newNode;
        height++;


        // case: if head is null
        // if(top==NULL)
        // {
        //     top =newNode;
        //     return;
        // }
        // case if head is not null
        // newNode->next =head;
        // head =newNode;
    }
    // print the linked list
    void Traverse()
    {
        cout<<"print the list: ";
        node *a = head;
        while(a !=NULL)
        {
            cout<<a->value<<" ";
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
    // l.InsertAtHead(30);
    // l.Traverse();
    // l.InsertAtHead(20);
    // l.Traverse();
    // l.InsertAtHead(30);

    // l.Traverse();

    //  l.InsertAtHead(330);
    //  l.InsertAtHead(340);
    //  l.InsertAtHead(350);
    //  l.InsertAtHead(360);

    //  l.Traverse();

    // l.SearchDistinctValue(10);
    // l.SearchDistinctValue(5);

    // l.SearchAllValue(30);

    return 0;
}


