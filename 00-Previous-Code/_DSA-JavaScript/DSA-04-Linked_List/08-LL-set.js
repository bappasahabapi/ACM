class CreateNode {
    constructor(value) {
        this.value = value;
        this.next = null;
    }
}

class LinkdList {
    constructor(value) {
        const newNode = new CreateNode(value);
        this.head = newNode;
        this.tail = newNode;
        this.length = 1;
    }


    //todo: Add Node
    // push or add node at the end
    push(value) {
        const newNode = new CreateNode(value);
        if (this.head === null) {
            this.head = newNode;
            this.tail = newNode;
        } else {
            this.tail.next = newNode;
            this.tail = newNode;
        }
        this.length++;
        return this;
    }

    // add node at the start
    unshift(value){
        const newNode =new CreateNode(value);

        if(!this.head){
            this.head = newNode;
            this.tail = newNode;
        }else{
            newNode.next =this.head; // pointer update
            this.head =newNode;   // new node k head banalam 
        }
        this.length++;
        return this; //whole linked list
    }

    //todo: Delete Node 

    // remove from end
    pop() {

        if (!this.head)
            return undefined;
        let temp = this.head;
        let pre = this.head;
        while (temp.next) {
            pre = temp;
            temp = temp.next;
        }
        this.tail = pre;
        this.tail.next = null;
        this.length--;

        if (this.length === 0) {
            this.head = null;
            this.tail = null;
        }
        return temp;
    };

    //remove from first
    shift(){
        if(!this.head) 
            return this.undefined;
        let tempNode =this.head;   // tempNode pointing to the head
        this.head =this.head.next;  // move head pointer
        tempNode.next= null;   // finally ser tempNode to null for detaching from head
        this.length--;

        if(this.length ===0){
            this.tail =null;
        }
        return this;
    };


    get(index){
        if(index<0 || index>=this.length){
            return undefined;
        }
        let temp =this.head;
        for(let i=0;i<index; i++){
            temp=temp.next;
        }
        return temp;
    };

    set(index,value){
        let temp =this.get(index);
        if(temp){
            this.value=value;
            return true;
        }
        return false;
    }
}

let myLinkedList = new LinkdList(11);
myLinkedList.push(3);
myLinkedList.push(23);
myLinkedList.push(7);
console.log("Linked List length:",myLinkedList);
myLinkedList.set(0,555)

console.log(myLinkedList.set(0,555))
// console.log("0th item:",myLinkedList);




