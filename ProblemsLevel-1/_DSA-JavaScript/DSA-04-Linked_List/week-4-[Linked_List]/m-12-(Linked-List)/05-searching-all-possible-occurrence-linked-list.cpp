
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

    LinkedList()
    {
        head =NULL;
    }

    // Creating new node pointer where data =value and next =NULL
    node * CreateNewNode(int value)
    {
        node *new_node=new node; //-> take space from memory by making new node
        new_node->data =value; // -নতুন নোডের ডাটা তে ভ্যালু রাখলাম।
        new_node->next =NULL; //  নতুন নোডের নেক্সট কে নাল সেট করে দিয়েছি।

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
    //TODO: print the linked list
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
    //TODO: Search for a single value 
    
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

    // l.SearchDistinctValue(10);
    // l.SearchDistinctValue(5);

 

    cout<<"10 is found at "<<l.SearchDistinctValue(10)<<endl;
    cout<<"5 is found at "<<l.SearchDistinctValue(5)<<endl;
    cout<<"30 is found at "<<l.SearchDistinctValue(30)<<endl;

    l.SearchAllValue(30);
    

    return 0;
}


