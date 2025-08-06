/*  
Pop is O(n) operation.
    case 1: no element
    case 2: two or more elements
    case 3: 1 element


*/



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
  };


  // pop or remove node at the last O(n)
  pop(){

    // case 1: no element
    if(!this.head){
        return undefined;
    }
    // case 2: two or more elements
    let temp =this.head;
    let pre =this.head;
    while(temp.next !==null){
        pre =temp;
        temp = temp.next;
    }
    //both case 2 and 3
    this.tail =pre;
    this.tail.next =null;
    this.length --;

    // case 3: 1 element
    if(this.length ===0){
        this.head =null;
        this.tail =null;
    }
    return temp;

  }
};

let myLinkedList =new LinkdList(1);
myLinkedList.push(23);
myLinkedList.push(26);
console.log(myLinkedList)

myLinkedList.pop()
console.log(myLinkedList);

myLinkedList.pop()
console.log(myLinkedList);

myLinkedList.pop()
console.log(myLinkedList)

myLinkedList.pop()
console.log(myLinkedList);



