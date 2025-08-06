#include <iostream>
#include <queue>
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

void printLevelOrder(node* root){
    
}

int main()
{

    node *root = new node(0);

    root->left = new node(1);
    root->right = new node(2);

    root->left->left = new node(3);
    root->left->right = new node(4);
    return 0;
}