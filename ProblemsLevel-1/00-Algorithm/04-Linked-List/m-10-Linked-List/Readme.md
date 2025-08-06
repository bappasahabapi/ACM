# Linked List

**1. At First making the node structure**

Making the node structure and which is a **class**
```cpp
        class node{
        public:
            int data;
            node * next;
        };
```
**2. Next we make the linked list class**

```cpp
class LinkedList{
public:
    node * head;

    LinkedList()
    {
        head =NULL;
    }
}
```

**3. Next making a node function** 
that takes a value and by using the value making a new_node and keep the next pointer node to null and finally return the node

```cpp
    // Creating new node pointer where data =value and next =NULL
    node * CreateNewNode(int value)
    {
        node *new_node=new node;
        new_node->data =value;
        new_node->next =NULL;

        return new_node;
    }
```
**4. Next print the linkedList** 

**5. Next apply the methods inside linkedList** 

    Insert node of linked list
    How to Traverse of linked list means **visit all nodes**
    Search for value (using linear search **O(n)**)

**6. Call the main** 
```cpp
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
```

### Alternatives pattern 

```cpp
// print the list: 360 350 340 330 30 20 30 10 

#include <iostream>
using namespace std;


// CREATE NODE CLASS HERE //
// Creating new node pointer where int value(this->value) =value and next =NULL
class Node {
    public:
        int value;
        Node* next;
    //Node constructor
    Node(int newValue){
        this->value = newValue;
        this->next = NULL;
        // this->next = nullptr
    }
};


class LinkedList {

	// CREATE LL CONSTRUCTOR HERE //
public:
    Node *head;

    LinkedList(){
        head=NULL;
    }


    //insett a new value in the head
    void InsertAtHead(int value){
        Node *newNode = new Node(value);

        // case: if head is null
        if(head==NULL){
            head=newNode;
            return;
        }
        //  case if head is not null
        newNode->next = head; 
        head=newNode;
    }

    // print the linked list
    void Traverse(){

        cout<<"print the list: ";
        Node *tempNode = head;

        while (tempNode != NULL){
            cout<<tempNode->value<<" ";
            tempNode = tempNode->next;
        }
        cout<<"\n";
        
    };

};


int main() {
        
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


    return 0;
       
}


```




--

1. Structure of LinkList
2. Insert node of linked list
3. How to Traverse of linked list means **visit all nodes**
4. Search for value (using linear search **O(n)**)

**01-structure-of-linked-list.cpp**

we make a data type which contains both int and pointer so we need class.

```cpp
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
```

**02-insert-in-head-linked-list.cpp**

`At initial case `

        1. head --> null
        2. Make the node
        3. Then head will be set to point the node
        4.when insert the first element we set the head pointer to the inserted value

**03-traverse-linked-list.cpp**

        1. Taking  new node pointer
        2. And point to the head
        3. Next print the data to the pointed head and find the next node
        4. By doing this when the node pointer is ==NULL break it;

```cpp
output:

Traverse the LinkedList
print the list:
print the list: 10
print the list: 30 10
print the list: 20 30 10
print the list: 30 20 30 10
print the list: 360 350 340 330 30 20 30 10

```

**04-searching-in-linked-list.cpp**

        1. First a is pointed to head [a--> 360]
        2. Next check a->data == value or not, if then return the index
        3. If the not matched the value we point a to next like [a=a->next]
        4. And also increased the index number.
        5. if not find the matched value in the loop return -1.
        1.

```cpp
Traverse the LinkedList
print the list:
print the list: 10
print the list: 30 10
print the list: 20 30 10
print the list: 30 20 30 10
print the list: 360 350 340 330 30 20 30 10
10 is found at index of : 7
5 is found at index of : -1
30 is found at index of : 4
```

**04-searching-all-possible-occurrence-linked-list.cpp**

```cpp
Traverse the LinkedList
print the list:
print the list: 10
print the list: 30 10
print the list: 20 30 10
print the list: 30 20 30 10
print the list: 360 350 340 330 30 20 30 10

10 is found at index of : 7
5 is found at index of : -1
30 is found at index of : 4

30 is existed at index 4
30 is existed at index 6
```
