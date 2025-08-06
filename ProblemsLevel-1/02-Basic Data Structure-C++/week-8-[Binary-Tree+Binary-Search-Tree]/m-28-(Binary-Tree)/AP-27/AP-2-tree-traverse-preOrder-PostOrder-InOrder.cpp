/* 
         
        0
       /  \
      1    2
     / \   |
    3   4  NULL
    |    |
    NLL  NULL

    
 */

// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class node
{
public:
    int value;
    node *left;
    node *right;

    node(int value)
    {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};

void preOrder(node *root){
    if(root==nullptr) return;
    cout<<root->value<<" ";

    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(node *root){
    if(root==nullptr) return;

    inOrder(root->left);
    cout<<root->value<<" ";
    inOrder(root->right);
}
void postOrder(node *root){
    if(root==nullptr) return;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->value<<" ";
}

int main(){

    node *root = new node(0);

    root->left=new node(1);
    root->right=new node(2);

    root->left->left=new node(3);
    root->left->right=new node(4);
    cout<<"preOrder [root->left->right] = ";
    preOrder(root); // root->left->right [0 1 3 4 2]
    cout<<endl;

    cout<<"inOrder : ";
    inOrder(root); 
    cout<<endl;

    cout<<"postOrder : ";
    postOrder(root); 
    cout<<endl;



    return 0;
}


/* 
         
        0
       /  \
      1    2
     / \   |
    3   4  NULL
    |    |
    NLL  NULL

    
 */