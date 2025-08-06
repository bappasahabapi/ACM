/* 
{
    "value":4,
    "left":nullptr,
    "right":nullptr,
} 

*/

// 1st way
class node{
public:

    int data;
    node* left;
    node* right;

    node(int value){
        this->data=value;
        left=nullptr;
        right=nullptr;
    }
};
//todo: to crate a new node from the class node 
// node* newNode =new node(value)
class node1{
public:

    int data;
    node1* left;
    node1* right;
};

    //todo: create node1 function that makes new node
   /*  node1* createNode(int value){
        node1* newNode = new node();
        newNode->data=value;
        newNode->left=nullptr;
        newNode->right=nullptr;

        return newNode;
    }
 */


class BinarySearchTree{
public:


    node* root;
    BinarySearchTree(){
        
        root = nullptr;
    };



};

int main(){

    node *root = new node(0);

    root->left=new node(1);
    root->right=new node(2);

    root->left->left=new node(3);
    root->left->right=new node(4);
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