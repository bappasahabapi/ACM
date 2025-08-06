# Stack: [ LIFO ] & Queue: [FIFO]
<hr>
<hr>


<h6>🇧🇩 Code:[Stack+Queue] </h6>

- <b>[📁 m-20-(Stack)](https://github.com/bappasahabapi/Level-1-ProblemSet-div-3-/tree/main/02-Basic%20Data%20Structure-C%2B%2B/week-6-%5Bstack%2Bqueue%5D) </b> https://visualgo.net/en/list

  - 01-Stack-implementing-using-static-array.cpp
  - 02-Stack-implementing-dynamic-array.cpp
  - 03-Stack-implementing-using-linked-list.cpp
  - 04-Stack-implementing-using-templete.cpp
  - 05-Stack-implementing-using-templete.cpp
  - 06-Stack-implementing-using-templete-double-linkedList.cpp
  --- 
  - S_00-stack-constructor.cpp
  - S_00-stack-structure.cpp
  - S_01-stack-push.cpp
  - S_02-stack-pop.cpp
  
---
- <b>[📁 m-22-(Templete-Based-Implemtation-stack)](https://github.com/bappasahabapi/Level-1-ProblemSet-div-3-/tree/main/02-Basic%20Data%20Structure-C%2B%2B/week-6-%5Bstack%2Bqueue%5D/m-22-(Templete-Based-Implemtation-stack)) </b>
    
     - List01.cpp
     - List02-reverse-linkedList.cpp
     - [LC-20-valid-parenthesis-using-stack.cpp](https://github.com/bappasahabapi/Level-1-ProblemSet-div-3-/blob/main/02-Basic%20Data%20Structure-C%2B%2B/week-6-%5Bstack%2Bqueue%5D/m-22-(Templete-Based-Implemtation-stack)/LC-20-valid-paranthesis-using-stack.cpp)
--- 

- <b>[📁 m-24-(Queue)](https://github.com/bappasahabapi/Level-1-ProblemSet-div-3-/tree/main/02-Basic%20Data%20Structure-C%2B%2B/week-6-%5Bstack%2Bqueue%5D/m-24-(Queue)) </b> https://visualgo.net/en/list

    - 00-Queue-Structure.cpp
    - 01-Queue-Structure1.cpp `[including enqueue adn dequeues]`
    - 02-Queue-Template.cpp
    -




---
# Stack: [ LIFO ]

- We can only insert(push) or delete(pop) from the top part . Thats means it has only haed which is on the top.
- That means we can add or remove element at the **same end** means top.
  - so add or remove element is -> **O(1)** thats why we use stack not array.
  - But if we remove element from bottom which is not possible then it will re indexing event elements that why this time complexity is -> **O(n)**

<b>Complexity:</b>

- Top Element Add is **O(1)**
- Top Element Remove is **O(1)**
- Top Element View is **O(1)**

<b>USE Case</b>

- priviously visited web pages know as stack.
- **Expression evulation** e stck use hoi.
- (()) barcket sequence problem e use hoi.

![LIFO](./image/stack-1.png)

### Push or Pop

![LIFO](./image/stack-2.png)
![LIFO](./image/stack-3.png)
![LIFO](./image/stack-4.png)
![LIFO](./image/stack-5.png)
![LIFO](./image/stack-6.png)

<h4>Stack Constructor:</h4>

![LIFO](./image/stack-7.png)

```json
A node is an un order map means which value is int and next is a pointer to a node.
{
    "value": 4,
    "next":nullptr
}
```

```cpp
// Create node class
class Node
{
public:
    int value; // 4
    Node *next; // nullptr

    Node(int val)
    {
        this->value = val;
        this->next = nullptr;
    }
};
```

`Stack looks like`
![LIFO](./image/stack-9.png)

`Stack constructor looks like`

![LIFO](./image/stack-8.png)
