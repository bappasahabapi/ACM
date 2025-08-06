/* in cPP
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
 */

class Node {
  constructor(value) {
    this.data = value;
    this.left = null;
    this.right = null;
  }
}


// Creating nodes
let root = new Node(1);
let leftNode = new Node(2);
let rightNode = new Node(3);

// Connecting nodes
root.left = leftNode;
root.right = rightNode;

// Displaying node data
console.log("Root data:", root.data); // Output: Root data: 1
console.log("Left node data:", root.left.data); // Output: Left node data: 2
console.log("Right node data:", root.right.data); // Output: Right node data: 3

