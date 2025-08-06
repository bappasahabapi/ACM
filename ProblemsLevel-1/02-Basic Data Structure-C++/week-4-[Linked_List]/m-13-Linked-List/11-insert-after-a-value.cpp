/* 
insert 100 after 10
logic:

    1. find out where is 10. if 10 is multiple time we take the first one
 */


// #include<bits/stdc++.h>
#include<iostream>
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

    // Linked List size
    int getSize()
    {
        return size;
    }

    // Insert node at any index
    /* 
    i-1 tomo
    আমিi-1 তম নোডকে iতে পয়েন্ট করবো এবং i-1 তম নোড যেখানে পয়েন্ট করে sekhane i কে পয়েন্ট করবো।

 */
    void InsertAtAnyIndex(int index, int value)
    {
        // check the corner case 
        if(index<0 || index> size)
        {
            return;
        }

        if(index==0)
        {
            InsertAtHead(value);
            return;
        }
        // size er man tokhoni barbe jokon insert korte parbo
        size++;
        node *a =head;
        int current_index =0;
        while(current_index!=index-1)
        {
            a =a->next;
            current_index++;
        }
        node *new_node =CreateNewNode(value);
        new_node->next =a->next;
        a->next =new_node;
    }
     // delete at head

     void DeleteAtHead()
     {
        if(head==NULL)
        {
            return;
        }
        size--;
        node *a =head;
        head =a->next;
        delete a;
     }

     //delete at any index

     void DeleteAtAnyIndex(int index)
     {
        if(index <0 || index> size-1)
        {
            return;
        }
        if(index==0)
        {
            DeleteAtHead();
            return;
        }
        size--;
        node *a =head;
        int current_index =0;
        while(current_index!=index-1)
        {
            a= a->next;
            current_index++;
        }
        node *b =a->next;
        a->next =b->next;
        delete b;
     }
        // TODO: Insert value after specific value
        // here value =10, data =100 that means insert 100 after 10
     void InsertAfterValue(int value, int data)
     {
            node *a =head;
            while(a!=NULL)
            {
                if(a->data ==value)
                {
                    break;
                }
                a =a->next;
            }
            if(a==NULL)
            {
                cout<<value<<"does't exist in Linked list"<<endl;
                return;
            }
            size++;
            node *new_node=CreateNewNode(data);
            new_node->next =a->next;
            a->next =new_node;
     }

   

};

int main()
{
    cout<<"Traverse the LinkedList"<<endl;

    LinkedList l;
    l.InsertAtHead(30);
    l.InsertAtHead(10);
    l.InsertAtHead(5);

    l.Traverse();

    l.InsertAfterValue(10,100);
    l.Traverse();

    cout<<"Size of the Linked List = "<<l.getSize()<<endl;
   

    // l.InsertAtAnyIndex(1,100);
    // l.Traverse();
    // cout<<"Size of the Linked List = "<<l.getSize()<<endl;

    // l.InsertAtAnyIndex(4,200);
    // l.Traverse();
    // cout<<"Size of the Linked List = "<<l.getSize()<<endl;
    // cout<<"\n";

    //  l.DeleteAtHead();
    //  l.Traverse();
    //  cout<<"Size of the Linked List = "<<l.getSize()<<endl;

    //  l.DeleteAtAnyIndex(2);
    //  l.Traverse();
     
    
  
    

    return 0;
}


