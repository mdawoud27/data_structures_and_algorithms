# Linked List vs Array

*Both Arrays and Linked List can be used to store linear data of similiar types, but they both have some advantages and disadvantages over each other.*


## Following are the points in favour of Linked Lists:

1. **The size of the arrays is fixed:** So we must know the upper limit on the number of elements in advance. Also, generally, the allocated memory is equal to the upper limit irrespective of the usage. This is not efficient in terms of memory.

2. **Inserting a new element in an array of elements is expensive,** because the room has to be created for the new elements and to create room existing elements have to be shifted.

3. **Deletion is also expensive with arrays until unless some special techniques are used.** For example, to delete 5th element in an array, all elements after 5th must be moved.


## Advantage & Disadvantages of LinkedList over Arrays

### Advantages of linkedlist

- Dynamic size
- Ease of insertion/deletion

### Drawbacks

- Random access is not allowed. We have to access elements sequentially starting from the first node. So we cannot do binary search with linked lists efficiently with its default implementation. Read about it here.

- Extra memory space for a pointer is required with each element of the list.

- Arrays have better cache locality that can make a pretty big difference in performance. Linked lists have poor cache locality.


## Major differences between array and linked-list are listed below: 
<div style="display: grid; place-items: center;">
    <img src="./images/arrays_vs_linkedlists.png">
</div>

