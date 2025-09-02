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

