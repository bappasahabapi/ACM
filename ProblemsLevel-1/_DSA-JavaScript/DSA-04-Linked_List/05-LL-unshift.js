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


    unshift(value){
        const newNode =new CreateNode(value);

        if(!this.head){
            this.head = newNode;
            this.tail = newNode;
        }else{
            newNode.next =this.head; // pointer update
            this.head =newNode;   // new node k head banalam 
            // newNode =this.head;   // not working anymore
        }
        this.length++;
        return this; //whole linked list

    }
}

let myLinkedList = new LinkdList(1);
myLinkedList.push(20);
myLinkedList.push(70);
myLinkedList.push(40);
// console.log(myLinkedList);

myLinkedList.unshift(33);
console.log(myLinkedList);


