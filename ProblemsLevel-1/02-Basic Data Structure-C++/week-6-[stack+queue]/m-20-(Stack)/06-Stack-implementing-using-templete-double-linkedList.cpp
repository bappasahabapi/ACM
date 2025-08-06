// Template Based implementation 



#include <bits/stdc++.h>
using namespace std;


template <class T> // T = int/float/double/ anything
class node
{
public:
    T data;
    node * nxt;
    node * prv;
};


template <class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node<T> * CreateNewNode(int data)
    {
        node *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    //Inserts the given data at the given index O(n)
    void Insert(int index, T data)
    {
        if(index > sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index!= index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // a = cur_index - 1
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }
    
    //Deletes the value at head. O(1)
    void DeleteAtHead()
    {
        if(head== NULL)
        {
            return;
        }
        node<T> *a = head;
        node<T> *b = head->nxt;
        delete a;
        if(b!= NULL)
        {
            b->prv = NULL;
        }
        head= b;
        sz--;
    }
    
    //todo:not used for this  Deletes the given index O(n)
    // void Delete(int index)
    // {
    //     if(index >= sz)
    //     {
    //         cout<<index<<" doesn't exist.\n";
    //         return;
    //     }
    //     node *a = head;
    //     int cur_index = 0;
    //     while(cur_index != index)
    //     {
    //         a = a->nxt;
    //         cur_index++;
    //     }
    //     node *b = a->prv;
    //     node *c = a->nxt;
    //     if(b!=NULL)
    //     {
    //         b->nxt = c;
    //     }
    //     if(c!= NULL)
    //     {
    //         c->prv = b;
    //     }
    //     delete a;
    //     if(index==0)
    //     {
    //         head = c;
    //     }
    //     sz--;
    // }

    //Prints the linked list O(n)
    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }

    //Reverse the doubly linked list O(n)
    // void Reverse()
    // {
    //     if(head==NULL)
    //     {
    //         return;
    //     }
    //     node *a = head;
    //     int cur_index = 0;
    //     while(cur_index != sz-1)
    //     {
    //         a = a->nxt;
    //         cur_index++;
    //     }
    //     // last index is in a

    //     node *b = head;
    //     while(b!= NULL)
    //     {
    //         swap(b->nxt, b->prv);
    //         b = b->prv;
    //     }
    //     head = a;
    // }
};

//Stack using doubly linked list
class Stack
{
public:
    DoublyLinkedList dl;

    Stack()
    {

    }

    int top()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack is empty!\n";
            return -1;
        }
        return dl.head->data;
    }

    void push(int val)
    {
        dl.InsertAtHead(val);
    }

    void pop()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack is empty!\n";
            return;
        }
        dl.DeleteAtHead();
    }
};

int main()
{
    Stack st;
    st.push(3);
    cout<<st.top()<<"\n";
    st.push(4);
    cout<<st.top()<<"\n";
    st.push(5);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    return 0;
}