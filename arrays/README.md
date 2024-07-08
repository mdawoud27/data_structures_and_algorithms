# Arrays

**Array** *is a collection of elements stored in contiguous memory locations. Each element in the array is accessed using an index. Arrays are widely used in programming to store and manipulate data efficiently.*

```cpp
Arrays are recommended in situations when you know beforehand how many elements you are going to store.
```

## Array Operations

-  **Insertion**: Adding an element to the array at a specific index.
-  **Deletion**: Removing an element from the array.
-  **Searching**: Finding the index of a specific element in the array.

[*Check this file*](./arrays.cpp) for a simple implementation of the above operations.


## Types of Arrays

- **One-Dimensional Array**: A single list of elements.
- **Two-Dimensional Array**: A matrix of elements arranged in rows and columns.
- **Multi-Dimensional Array**: Arrays with more than two dimensions.


## Summary

- **Arrays are extremely powerful data structures** that store elements of the same type. The type of elements and the size of the array are fixed and defined when you create it.
- **Memory is allocated immediately** after the array is created and it’s empty until you assign the values.
- Their **elements are located in contiguous locations in memory**, so they can be accessed very efficiently (random access, O(1) = constant time) using indices.
- **Indices start at 0**, not 1 like we are used to.
- **Inserting elements** at the beginning or in the middle of the array involves moving elements to the right. If the array is full, creating a new, larger array (which is not very efficient). Inserting at the end of the array is very efficient, constant time O(1).
- **Removing elements** from the beginning or from the middle of the array involves moving all the elements to the left to avoid leaving an empty space in memory. This guarantees that the elements are stored in contiguous spaces in memory. Removing at the end of the array is very efficient because you only delete the last element.
- **To find an element**, you need to check the entire array until you find it. If the data is sorted, you can use algorithms such as Binary Search to optimize the process.

<!-- Arrays are fundamental data structures used to store and manipulate collections of elements efficiently.

They are versatile and widely used in various applications, from simple data storage to complex algorithms. 

Understanding array operations and implementations is essential for mastering programming and algorithmic problem-solving. -->

## Resources

- [*Arrays 101*](https://www.freecodecamp.org/news/data-structures-101-arrays-a-visual-introduction-for-beginners-7f013bcc355a/)

- [*Array cheatsheet for coding interviews*](https://www.techinterviewhandbook.org/algorithms/array/)


## Contributing

Contributions to this array guide are welcome! Feel free to submit a pull request with any improvements or additions you'd like to see.

[*back to top*](#arrays)
