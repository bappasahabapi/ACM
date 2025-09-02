/* 
A node class is nothing bt unordered map object.
{
    "vlaue":4,
    "next":null
} */


// Node class for linked list
class Node {
    constructor(val) {
        this.value = val;
        this.next = null;
    }
}

// Stack class
class Stack {
    constructor(value) {
        let newNode = new Node(value);
        this.top = newNode;
        this.height = 1;
    }

    // Method to print the stack
    printStack() {
        let temp = this.top;
        while (temp !== null) {
            console.log(temp.value);
            temp = temp.next;
        }
    }

    // Method to print the top element of the stack
    getTop() {
        console.log("Top Element: ", this.top.value);
    }

    // Method to print the height of the stack
    getHeight() {
        console.log("Height of the Stack: ", this.height);
    }
}

// Main function
function main() {
    let myStack = new Stack(4); // Create a stack object
    myStack.getTop(); // Print the top element
    myStack.getHeight();
    myStack.printStack();
}

main();
