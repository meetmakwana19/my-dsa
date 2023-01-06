# Lnked List

- A type of Linear Data structure which is dynamic
- Made from collection of nodes
- A node is combination of
  - Data and
  - Address of next node
- The last node will have `null` in it's address part

#### Need of linked list

1. Adding extra data to the static array when size gets over is not possible
2. In case if vector of size 5 gets full for 6th element then a new vector will be made double the size ie. 10 and space will be wasted as vector always doubles it's size.

#### Advantages :

1. Dynamic DS
2. Grow and shrink at runtime wihtout any memory waste
3. Insertioon/deletion is easy without shifting any other elements which happens in array
4. No need of continous storage

#### Types :

1. Singly
2. Doubly
3. Circular
4. Circular Doubly

---

### Singly linked list :

1. Data value can be if any type like int, float, etc
1. Address part will be pointer of node type to point to the next node
1. To implement the node, will make a class LinkedListNode

### Doubly linked list :

1. Node has 3 things :
   1. Previous pointer
   2. Data
   3. Next pointer

### Circular linked list :

1. Tail will pointing to the head instead of pointing to NULL.
2. Only tail pointer will be needed
   1. And head pointer can be thus accessed by tail->next
3. There's no such thing as head as it is circular and we'll deal with
4. Same can happen with doubly linked list
