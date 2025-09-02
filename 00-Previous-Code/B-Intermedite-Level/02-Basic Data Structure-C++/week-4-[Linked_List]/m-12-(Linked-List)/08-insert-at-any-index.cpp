/* 
    i-1 tomo
    আমিi-1 তম নোডকে iতে পয়েন্ট করবো এবং i-1 তম নোড যেখানে পয়েন্ট করে sekhane i কে পয়েন্ট করবো।

 */



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

    // Linked List size
    int getSize()
    {
        return size;
    }

    //TODO: Insert node at any index
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
   

    l.InsertAtAnyIndex(1,100);
    l.Traverse();
    cout<<"Size of the Linked List = "<<l.getSize()<<endl;

    l.InsertAtAnyIndex(4,200);
    l.Traverse();
     cout<<"Size of the Linked List = "<<l.getSize()<<endl;
    
  
    

    return 0;
}


