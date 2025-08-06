#include <bits/stdc++.h>
using namespace std;
/*
class node1{
 public:
    int value; // int id
    node1* left;
    node1* right;
    node1* parent; //temp for operation

    node1(int value){
        this->value=value;
        left=nullptr;
        right=nullptr;
        parent=nullptr;
    };
};

// to make a new node
class BinarySearchTree{

    node1* newNode =new node1(value)
} */

class node
{
public:
    int value; // int id
    node *left;
    node *right;
    node *parent; // temp for operation
};

class BinarySearchTree
{
    node *root;

    BinarySearchTree()
    {
        root = nullptr;
    }
    // crate new node function
    node *createNewNode(int value)
    {
        node *newNode = new node();
        newNode->value = value;
        newNode->left = nullptr;
        newNode->right = nullptr;
        newNode->parent = nullptr;
    };
};
int main()
{

    return 0;
}
