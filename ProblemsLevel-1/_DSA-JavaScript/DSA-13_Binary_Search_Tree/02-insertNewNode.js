class Node {
    constructor(value) {
        this.value = value;
        this.left = null;
        this.right = null;
    }
}
 
class BST {
    constructor() {
        this.root = null;
    }

    insert(value) {

        const newNode = new Node(value);
        //corner case
        if (this.root === null) {
            this.root = newNode;
            return this;
        }
        let temp = this.root; // 2
        while (temp !== null) {

            //corner case
            if (newNode.value === temp.value) return undefined;

            // 2<1
            if (newNode.value < temp.value) {
                if (temp.left === null) {
                    temp.left = newNode;
                    return this;
                }
                temp = temp.left;
            } else {
                if (temp.right === null) {
                    temp.right = newNode;
                    return this;
                } 
                temp = temp.right;
            }
        }
    }

}



function test() {

    let myBST = new BST();

    myBST.insert(2);
    myBST.insert(1);
    myBST.insert(3);

    /*
        THE LINES ABOVE CREATE THIS TREE:
                     2
                    / \
                   1   3
    */


    console.log("Root:", myBST.root.value);
    console.log("\nRoot->Left:", myBST.root.left.value);
    console.log("\nRoot->Right:", myBST.root.right.value);
}


test();


/*
    EXPECTED OUTPUT:
    ----------------
    Root: 2

    Root->Left: 1

    Root->Right: 3

*/