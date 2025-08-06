// #include <bits/stdc++.h>
#include<iostream>
#include<queue>
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
    //queue is empty
    cout << endl;
}

void printLevelWiseWithSum(node *root)
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

    int level = 0; // Variable to track the level
    int levelSum = 0; // Variable to store the sum of values at each level

    while (!q.empty())
    {
        node *node = q.front();
        q.pop(); // value / NULL

        if (node != NULL)
        {
            levelSum = levelSum+ node->value; // Add node value to the level sum
            cout << node->value << " ";

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        else if (!q.empty())
        {
            q.push(NULL);
            cout << ",Level " << level << " -->  sum: " << levelSum << endl;
            level++; // Increment the level
            levelSum = 0; // Reset the level sum for the next level
        }
    }
    // Print the sum of the last level
    cout << ", Level: " << level << " sum: " << levelSum << endl;
}

int countNodes(node* root){
    if(root==NULL) return 0;
    return countNodes(root->left)+countNodes(root->right)+1;
}

int sumOfNodes(node* root){
    if(root==NULL) return 0;
    return sumOfNodes(root->left)+sumOfNodes(root->right)+ root->value;
}

int calcHeight(node* root){
    if(root==NULL) return 0;
    int leftHeight =calcHeight(root->left);
    int rightHeight =calcHeight(root->right);
    return max(leftHeight,rightHeight)+1;
}

int main()
{

    node *root = new node(0);

    root->left = new node(1);
    root->right = new node(2);

    root->left->left = new node(3);
    root->left->right = new node(4);

    root->right->left= new node(5);
    root->right->right=new node(6);

    root->left->left->left=new node(7);
    root->left->left->right=new node(7);

    printLevelWise(root);
    printLevelWiseWithSum(root);

    // total number of nodes 
    cout<<"Total Number of nodes: "<<countNodes(root)<<endl;
    cout<<"Total Sum of  nodes: "<<sumOfNodes(root)<<endl;

    cout<<"Tree Height:"<<calcHeight(root)<<endl;

    return 0;
}