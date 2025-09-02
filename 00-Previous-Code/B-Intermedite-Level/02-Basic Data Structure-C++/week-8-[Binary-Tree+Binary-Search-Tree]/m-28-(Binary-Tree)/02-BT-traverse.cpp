#include <bits/stdc++.h>
// #include <iostream>
// #include <queue>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node *parent;
};

class BinaryTree
{
public:
    node *root;
    BinaryTree()
    {
        root = nullptr;
    }

    void printLevelWise(node *root)
    {

        if (root == nullptr)
        {
            cout << "Tree is empty!" << endl;
            return;
        }

        queue<node *> q;

        // O-th level
        q.push(root);
        q.push(NULL);
        cout << "0 th level: " << root->value << endl;

        // loop is working till the queue is not empty size
        while (!q.empty())
        {
            node *node = q.front();
            q.pop(); // value / NULL

            // if front element of  queue is not null
            if (node != NULL)
            {
                cout << node->value << " ";

                if (node->left)
                    q.push(node->left);
                if (node->right)
                {
                    q.push(node->right);
                }
            }

            // if queue is null
            else if (!q.empty())
            {
                q.push(NULL);
            }
            // if queue is both null and empty we break out the loop
        }
        // queue is empty
        cout << endl;
    }

    // Create node class
    node *CreateNewNode(int value)
    {
        node *newNode = new node();
        newNode->data = value;
        newNode->left = nullptr;
        newNode->right = nullptr;
        newNode->parent = nullptr;

        return newNode;
    };

    void Insertion(int id, int value)
    {
        node* newnode = CreateNewNode(id, value);
        if(root==NULL)
        {
            root = newnode;
            return;
        }
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();

            if(a->Left != NULL){
                q.push(a->Left);
            }
            
            else{
                //Insert in left child of node a
                a->Left = newnode;
                newnode->parent = a;
                return;
            }
            if(a->Right != NULL){
                q.push(a->Right);
            }
            else{
                //Insert in right child of node a
                a->Right = newnode;
                newnode->parent = a;
                return;
            }

        }
    }
    
    //printWiseLevel
    void BFS()
    {
        queue<node *> q;
        q.push(root);

        while (!q.empty()) // q !==nlllptr
        {
            node *a = q.front(); // a=root=front()
            q.pop();

            int l = -1, r = -1, p = -1;
            if (a->left)
            {
                l = a->left->data;
                q.push(a->left);
            }
            if (a->right)
            {
                r = a->right->data;
                q.push(a->right);
            }
        }
    }
};

int main()
{
    BinaryTree bt;
    bt.BFS();
    return 0;
}
