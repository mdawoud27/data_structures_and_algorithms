# Linked List vs Array

_Both Arrays and Linked Lists can be used to store linear data of similar types, but each has its advantages and disadvantages._

## Points in favour of Linked Lists

1. **Fixed Size of Arrays:** The size of an array is fixed, so we must know the upper limit on the number of elements in advance. Generally, the allocated memory is equal to this upper limit regardless of actual usage, which is not memory efficient.

2. **Expensive Insertion:** Inserting a new element in an array is expensive because room must be created for the new element, which involves shifting existing elements.

3. **Expensive Deletion:** Deleting elements in an array can be costly unless special techniques are used. For example, deleting the 5th element requires shifting all subsequent elements.

## Advantages and Disadvantages of Linked Lists Over Arrays

### Advantages of linkedlist

- Dynamic size
- Ease of insertion/deletion

### Drawbacks

- No Random Access: Elements must be accessed sequentially starting from the first node, making binary search inefficient.
- Extra Memory: Each element requires additional memory for a pointer.
- Cache Locality: Arrays have better cache locality, leading to better performance, while linked lists have poor cache locality.

## Major Differences Between Array and Linked List

![Arrays vs Linked Lists](./images/arrays_vs_linkedlists.png)
