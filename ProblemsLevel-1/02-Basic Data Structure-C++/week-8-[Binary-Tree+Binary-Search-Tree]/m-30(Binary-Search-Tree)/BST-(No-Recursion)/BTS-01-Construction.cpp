#include<bits/stdc++.h>
using namespace std;

//make the node class
class node {
    int value;
    node* left;
    node* right;

    node(int value){
        this->value = value;
        left=nullptr;
        right=nullptr;
    }
};

class BinarySearchTree{
public:

    node* root;

    BinarySearchTree(){
        root=nullptr;
    };


};


int main(){

    BinarySearchTree* myBTS =new BinarySearchTree();
    cout<<"Root:"<<myBTS->root;   // to access the root value use (->)

    return 0;
}