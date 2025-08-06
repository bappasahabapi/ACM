#   🅐 Singly Linked List:
    
    we have two part 
        1. node (data)
        2. next pointer
        
    1.Insert after a specific value
    2. Reverse order printing
    

**🎧 m-10-Linked-list:**

    01-structure-of-linked-list.cpp
    02-insert-in-head-linked-list.cpp
    03-traverse-linked-list.cpp
    04-searching-in-linked-list.cpp
    05-searching-all-possible-occurrence-linked-list.cpp

**🎧 m-12-Linked-list:**

    06-linkedList-length.cpp
    07-orderOf-1-length.cpp
    08-insert-at-any-index.cpp
    09-delete-at-head.cpp
    10-delete-at-any-node.cpp

**🎧 m-13-Linked-list:**

    
    11-insert-after-a-value.cpp
    12-reverse-print.cpp

**🎧 m-14-Doubly-Linked-list:**
    
    14-structure.cpp
    15-insertion-at-head.cpp
    16-insertion-at-any-index.cpp
    17-deletion.cpp
    18-reverse.cpp

###   Basic Operations(singly linked list):

    1. Insert after a specific value
    2. print reverse order recursively
    

#   🅑Doubly Linked List:

    1.Structure
    2.Insertion
    3.Deletion 
    4.Reverse 
    
    --> Here we can track our previous memory
        That means backtracking/backward movement is possible
                    --> Implementation easier

Real Example: *Browser navigation*

    we have three part 
        1. Previous node pointer 
        2. node (data)
        3. next pointer
        
**1.Structure of Doubly Linked list:**
   
         
        {[pre_pointer ][data][next_pointer_node]}
        
          memory address   memory address    memory address
     head↘️     ➍⓿                 ➎⓿             ➏⓿
          {[NULL][5][50]}-->{[➍⓿][10][➏⓿]}--> {[ ➎⓿][15][NULL]}
                       ↪️↪️↪️↪️↪️↪️⤴️
    index:      0                1                2
**2.Doubly linked list insertion:**   
   
         
        {[pre_pointer ][data][next_pointer_node]}
        
          memory address   memory address    memory address
     head↘️     ➍⓿                 ➎⓿             ➏⓿
          {[NULL][5][50]}-->{[➍⓿][10][➏⓿]}--> {[ ➎⓿][15][NULL]}
                       ↪️↪️↪️↪️↪️↪️⤴️
    index:      0                1                2

**3.Doubly linked list Deletion:**


# Structure of Double Linked List:

```cpp
#include<bits/stdc++.h>
using namespace std;



class Node{
public:    
    int value;
    Node *next;
    Node *pre;

    Node(int value){
        this->value=value;
        this->next=NULL;
        this->pre=NULL;
    };

} ;

class DoublyLinkedList{
public:
    Node *head;
    Node *tail;
    int size;

    DoublyLinkedList(){
        this->head=NULL;
        this->tail=NULL;
        size=0;
    };

    // Insert a node with the value in the head
    void insertAtHead(int value){
        size=size+1;
        Node *newNode =new Node(value); 
        if(head==NULL){
            head = newNode;
            tail=newNode;
            return;
        }
        Node *temp = head;
        newNode->next=temp;
        temp->pre=newNode;
        head=newNode;
        

    };

    // Traverse And print function
    void traverseAndPrint(){
        Node *printNode = head;
        while(printNode != NULL){
            cout<<printNode->value<<endl;
            printNode =printNode->next;
        }
        cout<<"\n";
    };

    int getSize()
    {
        return size;
    }


};

int main(){

    cout<<"Printed List: "<<"\n";
    DoublyLinkedList dl;

    dl.insertAtHead(10);
    dl.insertAtHead(50);
    dl.insertAtHead(5);

    dl.traverseAndPrint();
     cout<<"size of the DDL is = "<<dl.getSize()<<endl;



    return 0;
}

```



🎧 Note: All questions are about **doubly linked-lists here.**

**1.Write the doubly linked list class and a function to add a new element to the front of a doubly linked list. Also write a function to print all the elements of the linked-list.**

`Sample Input:` [1, 2, 3, 4, 5], new element: 0

`Sample Output:` Doubly linked list containing the elements [0, 1, 2, 3, 4, 5]

**2.Write a function to remove the last element of a Doubly linked list.**

`Sample Input:` [1, 2, 3, 4, 5]

`Sample Output:` Doubly linked list containing the elements [1, 2, 3, 4]

**3.Write a function to find the i-th index of a doubly linked list.**

`Sample Input:` [1, 2, 3, 4, 5], i = 2
`Sample Output:` 3

**Write a function to check if a doubly linked list contains a given element.**

`Sample Input:` [1, 2, 3, 4, 5], element: 3

`Sample Output:` True

**Write a function to reverse a doubly linked list?**

`Sample Input:` [1, 2, 3, 4, 5]

`Sample Output:` Doubly linked list containing the elements [5, 4, 3, 2, 1]

**Write a function to insert an element at a specific index in a doubly linked list.**

`Sample Input: `[1, 2, 3, 4, 5], index: 1, element: 0

`Sample Output:` Doubly linked list containing the elements [1, 0, 2, 3, 4, 5]

**How would you delete a specific element from a doubly linked list?**

`Sample Input:` [1, 2, 6, 4, 5], element: 6

`Sample Output:` Doubly linked list containing the elements [1, 2, 4, 5]

**Write a function to check if a doubly linked list is a palindrome.**

`Sample Input:` [1, 2, 3, 2, 1]
`Sample Output:` True


`Sample Input:` [1, 2, 3, 3, 1]
`Sample Output:` False

In the context of a doubly linked list, a palindrome is a list where the elements, when read from the first element to the last and then from the last element to the first, are the same.

 An example of a doubly linked list palindrome is [1, 2, 3, 2, 1], when read from the first element to the last it is [1, 2, 3, 2, 1] and when read from the last element to the first it is [1, 2, 3, 2, 1] as well. In this sense, a doubly linked list is a palindrome if the element at the first node is equal to the element at the last node, the element at the second node is equal to the element at the second to last node, and so on.


