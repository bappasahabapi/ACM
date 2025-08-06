// First making the node class
class Node {
  constructor(value) {
    this.data = value;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    this.head = null;
  }

  //insert new value in Head
  insertAtHead(value) {
    const node = new Node(value);
    // case: if head is null
    if (this.head === null) {
      this.head = node;
      return;
    }
    // case if head is not null
    node.next = this.head;
    this.head = node;
  }

  // print the linked list
  traverse() {
    let result = "print the list: ";
    let node = this.head;
    while (node != null) {
      result += node.data + " ";
      node = node.next;
    }
    console.log(result);
  }

  // Search for a single value
  searchDistinctValue(value) {
    console.log("index of : ");
    let node = this.head;
    let index = 0;

    while (node != null) {
      if (node.data === value) {
        return index;
      }
      node = node.next;
      index++;
    }
    return -1;
  }

  searchAllValue(value) {
    console.log("");
    let node = this.head;
    let index = 0;

    while (node != null) {
      if (node.data === value) {
        console.log(`${value} is existed at index ${index}`);
      }
      node = node.next;
      index++;
    }
  }
}

console.log("Traverse the LinkedList");
const l = new LinkedList();
l.traverse();
l.insertAtHead(10);
l.traverse();
l.insertAtHead(30);
l.traverse();
l.insertAtHead(20);
l.traverse();
l.insertAtHead(30);
l.traverse();
l.insertAtHead(330);
l.insertAtHead(340);
l.insertAtHead(350);
l.insertAtHead(360);
l.traverse();

console.log(`10 is found at ${l.searchDistinctValue(10)}`);
console.log(`5 is found at ${l.searchDistinctValue(5)}`);
console.log(`30 is found at ${l.searchDistinctValue(30)}`);

l.searchAllValue(30);
