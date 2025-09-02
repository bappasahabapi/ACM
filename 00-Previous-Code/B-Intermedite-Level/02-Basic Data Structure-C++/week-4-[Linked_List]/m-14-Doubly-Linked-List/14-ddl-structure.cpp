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

    //todo: Method-1 [Insert at head]
    // Insert a node with the value in the head
    void insertAtHead(int value){
        Node *newNode =new Node(value); 

        if(head==NULL){
            head = newNode;
            tail=newNode;
            return;
        }
        size=size+1;

        Node *temp = head;
        newNode->next=temp;
        temp->pre=newNode;
        head=newNode;
        
    };  

    //todo: Method-2 [Insert at head]
    //Alternative way Insert a node with the value in the head
    void prepend(int value) {
        Node* newNode = new Node(value);
        
        if (size == 0) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->pre = newNode;
            head = newNode;
        }
        size++;
    }   
    
    //todo: [insert at tail]
    // insert node  at the end  
    void append(int value) {
            Node* newNode = new Node(value);
            if (size == 0) {
                head = newNode;
                tail = newNode;
                return;
            } else {
                tail->next = newNode;
                newNode->pre = tail;
                tail = newNode;
            }
            size++;
        }

    // Traverse And print function
    void traverseAndPrint(){
        Node *printNode = head;
        while(printNode != NULL){
            cout<<printNode->value<<" ";
            // cout<<printNode->value<<endl;
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

    dl.insertAtHead(10);     // 10
    dl.insertAtHead(50);    // 50 10
    dl.insertAtHead(5);    // 5  50 10
    dl.append(222);       // 5  50 10 222
    dl.prepend(77);      //  77 5  50 10 222

    dl.traverseAndPrint();
    cout<<"size of the DDL is = "<<dl.getSize()<<endl;



    return 0;
}