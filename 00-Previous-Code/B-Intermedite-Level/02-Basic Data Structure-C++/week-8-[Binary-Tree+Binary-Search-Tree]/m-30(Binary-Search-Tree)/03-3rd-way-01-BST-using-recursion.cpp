// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *left;
    Node *right;
    Node(int val)
    {
        value = val;
        left = NULL;
        right = NULL;
    }
};

Node *insertInBST(Node *root, int value)
{
    if (root == NULL)
    {
        return new Node(value);
    }
    if (value < root->value)
    {
        root->left = insertInBST(root->left, value);
    }
    else
    {

        root->right = insertInBST(root->right, value);
    }

    return root;
}

// time complexity O(log n)
Node *searchInBST(Node *root, int key)
{
    if (root == NULL)
        return NULL;

    if (root->value == key)
    {
        return root;
    }
    // value>key
    if (root->value > key)
    {
        return searchInBST(root->left, key);
    }
    if (root->value < key)
    {
        return searchInBST(root->right, key);
    }
}


bool searchInBST1(int key)
{

    Node *root;
    if (root == NULL)
    {
        return false;
    }
    Node *tempRoot = root;
    while (tempRoot != NULL)
    {
        if (tempRoot->value > key)
        {
            tempRoot = tempRoot->left;
        }
        else if (tempRoot->value < key)
        {
            tempRoot = tempRoot->right;
        }
        else
        {
            return true; //if key == value
        }
    }
    return false;
}
// it gives sorted order binary search tree
void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->value << " ";
    inOrder(root->right);
}

int main()
{
    // as we make the fuction return type pointer so, we have to create pointer type object;
    Node *root = NULL;
    root = insertInBST(root, 5);
    insertInBST(root, 1);
    insertInBST(root, 3);
    insertInBST(root, 4);
    insertInBST(root, 2);
    insertInBST(root, 7);

    // print in InOrder format in DFS
    inOrder(root);
    cout << endl;

    //search elemtnt in BSR
    // searchInBST1(66);
    // cout<<endl;

    // search element inBST
    if (searchInBST(root, 66) == NULL)
    {
        cout << "key doesn't exist" << endl;
    }
    else
    {
        cout << "key exists" << endl;
    }

    return 0;
}