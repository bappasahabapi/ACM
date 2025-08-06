/* 
Inssert At anyNode 
    case:1 insert at first or head part using push()
    case:2 insrt at end or tail part unshift()
    case:3 insert at anywhere 

Corner Case: where we can not insert node
    if(index<0 || index>=this.length)  
    To get the index we need make getIndex() 
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
    // printLinkedList() {
    //     let temp = this.head;
    //     let result = ''; 
    //     while (temp !== null) {
    //         result += temp.value + ' ';
    //         temp = temp.next;
    //     }
    //     console.log(result.trim());
    // }

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

    // set(index, value) {
    //     let temp = this.get(index);
    //     if (temp) {
    //         temp.value = value;
    //         return true;
    //     }
    //     return false;
    // };

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
    }

    


}


function test(){

    let myLinkedList =new LinkedList(1);
    myLinkedList.insertAtEnd(3);
    // myLinkedList.insertAtStart(55)
    // myLinkedList.insertAtEnd(77)
    // myLinkedList.printList()
    // myLinkedList.getIndex(1)

    console.log("🔥 LL before insert():");
    myLinkedList.printList();

    myLinkedList.insertNodeAtAnyIndex(1, 2);

    console.log("\n🔥 LL after insert(2) in middle:");
    myLinkedList.printList();

    myLinkedList.insertNodeAtAnyIndex(0, 0);

    console.log("\n🔥 LL after insert(0) at beginning:");
    myLinkedList.printList();

    myLinkedList.insertNodeAtAnyIndex(4, 4);

    console.log("\nLL after insert(4) at end:");
    myLinkedList.printList();
};
test();