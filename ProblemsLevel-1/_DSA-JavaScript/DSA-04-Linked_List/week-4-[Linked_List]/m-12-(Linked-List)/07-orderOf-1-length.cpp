
#include<bits/stdc++.h>
using namespace std;

// First making the node structure
class node{
public:
    int data;
    node *next;
};

class LinkedList{
public:
    node *head;
     int size; // calculate the size of the linked list
     
    LinkedList()
    {
        head =NULL;
        size=0;
    }

    // Creating new node pointer where data =value and next =NULL
    node * CreateNewNode(int value)
    {
        node *new_node=new node; //-> take space from memory by making new node
        new_node->data =value; // -নতুন নোডের ডাটা তে ভ্যালু রাখলাম।
        new_node->next =NULL; //  নতুন নোডের নেক্সট কে নাল সেট করে দিয়েছি।

        return new_node;
    }

    //todo:insert new value in Head
    void InsertAtHead(int value)
    {
        size++;
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
       
    };
    // Search for a single value 
    
    int SearchDistinctValue(int value)
    {
      
       cout<<"index of : ";
        node *a = head;
        int index =0;

        while(a != NULL)
        {
            if(a->data==value)
            {
                return index;
            }
            a=a->next;
            index++;
        }
        return -1;
         
    }
    void SearchAllValue(int value)
    {
        cout<<endl;
        node *a = head;
        int index =0;

        while(a != NULL)
        {
            if(a->data==value)
            {
                cout<<value<<" is existed at index "<<index<<endl;
            }
            a=a->next;
            index++;
        }  
    }

    //TODO: Linked List size
     // oder of 1 means => O(1)
    int getSize()
    {
        return size;
    }

    // we start from head and iterate till to null (order of n)
   /* 
    int getSize()
    {
        int size =0;
        node *a =head;
        while(a!=NULL)
        {
            size++;
            a=a->next;
        }
        return size;
    }
     */

    

    

    
};

int main()
{
    cout<<"Traverse the LinkedList"<<endl;

    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(5);
    l.InsertAtHead(20);
    l.Traverse();

    cout<<"Size of the Linked List = "<<l.getSize()<<endl;
    
  
    

    return 0;
}


