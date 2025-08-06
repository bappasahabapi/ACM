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
    this.value = value;
    this.left = null;
    this.right = null;
  }
}



class BST {

  constructor() {
    this.root =null;
  }
}

function main(){

    let newNode =new BST();

  
    if(newNode.root===null)
        console.log('Root is null');
    else
        console.log("Root:",newNode.root.value)
}

main();