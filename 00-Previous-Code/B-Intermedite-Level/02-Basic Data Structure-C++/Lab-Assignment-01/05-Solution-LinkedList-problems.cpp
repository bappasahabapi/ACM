#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node *next;
};

class LinkedList {
public:
    node *head;
    int size;

    LinkedList() {
        head = NULL;
        size = 0;
    }

    node* CreateNewNode(int value)
    {
        node *new_node = new node;
        new_node->data = value;
        new_node->next = NULL;

        return new_node;
    }

    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if (head == NULL) {
            head = a;
        } else {
            a->next = head;
            head = a;
        }
        size++;
    }

    void Traverse()
    {
        // cout << "print the list: ";
        node *a = head;
        while (a != NULL) {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    }

    int SearchDistinctValue(int value)
    {
        // cout << "index of : ";
        node *a = head;
        int index = 0;

        while (a != NULL) {
            if (a->data == value) {
                return index;
            }
            a = a->next;
            index++;
        }
        return -1;
    }

    void SearchAllValue(int value) {
        cout << endl;
        node *a = head;
        int index = 0;

        while (a != NULL) {
            if (a->data == value) {
                cout << value << " is existed at index " << index << endl;
            }
            a = a->next;
            index++;
        }
    }

    int getSize()
    {
        return size;
    }

    int getValue(int index) {
        if (index >= size) {
            return -1;
        }
        node *a = head;
        for (int i = 0; i < index; i++) {
            a = a->next;
        }
        return a->data;
    }

    void printReverse() {
        cout << "print the list in reverse: ";
        printReverseUtil(head);
        cout << "\n";
    }

    void printReverseUtil(node *temp) {
        if (temp == NULL) {
            return;
        }
        printReverseUtil(temp->next);
        cout << temp->data << " ";
    }

    void swapFirst() {
        if (head == NULL || head->next == NULL) {
            return;
        }
        node *temp = head;
        head = head->next;
        temp->next = head->next;
        head->next = temp;
    }

};

int main() {
    LinkedList l;

    cout << l.getSize() << "\n";
    l.InsertAtHead(5);
    cout << l.getSize() << "\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout << l.getSize() << "\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout << l.getValue(2) << "\n";
    cout << l.getValue(6) << "\n";

    l.printReverse();
    l.Traverse();
    
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    return 0;
}
