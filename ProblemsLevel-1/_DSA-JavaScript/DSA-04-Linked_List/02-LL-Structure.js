class CreateNode {
    constructor(value){
        this.value = value;
        this.next = null;
    }
}

class LinkdList{
    constructor(value){
        const newNode =new CreateNode(value);
        this.head =newNode;
        this.tail=this.head;
        this.length=1;
    }
}

let LL1 =new LinkdList(4);
let LL2 =new LinkdList(55);
console.log(LL1,LL2)

/* 
LinkdList {
  head: CreateNode { value: 4, next: null },
  tail: CreateNode { value: 4, next: null },
  length: 1
}

*/