#include <bits/stdc++.h>
using namespace std;

// make the node class
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

class BinarySearchTree
{
public:
    node *root;

    BinarySearchTree()
    {
        root = nullptr;
    };

    // node insert function
    bool insert(int value)
    {
        node *newNode = new node(value);
        if (root == nullptr)
        {
            root = newNode;
            return true;
        }
        node *temp = root; // temp point to the root node
        while (true)
        {
            if (newNode->value == temp->value)
            {
                return false;
            }
            // case-1
            if (newNode->value < temp->value)
            {
                if (temp->left == nullptr)
                {
                    temp->left = newNode;
                    return true;
                }
                temp = temp->left;
            }
            // case-2
            else{
                if(temp->right==nullptr){
                    temp->right =newNode;
                    return true;
                }
                temp = temp->right;
            }
        }
    };
};

int main()
{

    BinarySearchTree *myBST = new BinarySearchTree();
    cout << "Root:" << myBST->root<<endl; // to access the root value use (->)

    myBST->insert(47);
    myBST->insert(21);
    myBST->insert(76);
    myBST->insert(18);
    myBST->insert(52);
    myBST->insert(82);

    myBST->insert(27);
     cout << "Root:" << myBST->root->value<<endl;

    cout<< myBST->root->left->right->value <<endl;


    return 0;
}