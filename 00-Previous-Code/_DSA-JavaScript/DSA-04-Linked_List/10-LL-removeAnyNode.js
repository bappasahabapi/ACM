/* 

*/

class CreateNode{
    constructor(value){
        this.value = value;
        this.next = null;
    }
};

class LinkedList{
    constructor(value){
        const newNode =new CreateNode(value);
        this.head =newNode
        this.tail =this.head  // newNode;
        this.length=1;
    }

    printList(){
        let printNode =this.head;
        while(printNode !==null){
            console.log(printNode.value)
           printNode= printNode.next
        }
    }


    //todo: Inser Node 

    //push for insert at the end of the node
    insertAtEnd(value){
        const newNode =new CreateNode(value);
        if(this.head ===null){
            this.head = newNode;
            this.tail = newNode
        }else{
            this.tail.next = newNode;
            this.tail =newNode;
            this.length++;
        }
        return this;
    };
    //unshift for insert first.
    insertAtStart(value){
        const newNode =new CreateNode(value);
        if(this.head ===null){
            this.head = newNode;
            this.tail = newNode;
        }else{
            newNode.next =this.head;
            this.head = newNode;
            this.length++;
        }
        return this;

    };

    getIndex(index){
        if(index<0 || index>this.length) return undefined;
        let tempIndex =this.head;
        for(let i=0; i<index;i++){
            tempIndex= tempIndex.next;
        }
        return tempIndex
    }

    set(index, value) {
        let temp = this.get(index);
        if (temp) {
            temp.value = value;
            return true;
        }
        return false;
    };

    insertNodeAtAnyIndex(index,value){
        if(index<0 || index>this.length) return false;
        if(index ===this.length) return this.insertAtEnd(value);
        if(index ===0) return this.insertAtStart(value);

        const newNode =new CreateNode(value);
        const tempPtr =this.getIndex(index-1);
        
        newNode.next=tempPtr.next;
        tempPtr.next =newNode;
        this.length++;
        return true;
    };


    //todo: Remove 

    getHead() {
        if (this.head === null) {
            console.log("Head: null");
        } else {
            console.log("Head: " + this.head.value);
        }
    }

    getLength() {
        console.log("Length: " + this.length);
    }

    makeEmpty() {
        this.head = null;
        this.tail = null;
        this.length = 0;
    }

    pop() {
        if (this.length === 0) return undefined;
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
    }

    shift() {
        if (this.length === 0) return undefined;
        let temp = this.head;
        this.head = this.head.next;
        this.length--;
        if (this.length === 0) {
            this.tail = null;
        }
        temp.next = null;
        return temp;
    }

    remove(index) {
        if (index < 0 || index >= this.length) return undefined;
        if (index === 0) return this.shift();
        if (index === this.length - 1) return this.pop();

        const before = this.getIndex(index - 1);
        const temp = before.next;

        before.next = temp.next;
        temp.next = null;
        this.length--;
        return temp;
    }

}


function test(){

    let myLinkedList =new LinkedList(1);
    myLinkedList.insertAtEnd(2);
    myLinkedList.insertAtEnd(3);
    myLinkedList.insertAtEnd(4);
    myLinkedList.insertAtEnd(5);

    console.log("🔥 LL before remove():");
    myLinkedList.printList();

    console.log("\nRemoved node:");
    console.log(myLinkedList.remove(0).value);
    console.log("LL after remove() of first node:");
    myLinkedList.printList();

    console.log("\nRemoved node:");
    console.log(myLinkedList.remove(2).value);
    console.log("LL after remove() of last node:");
    myLinkedList.printList();


};
test();