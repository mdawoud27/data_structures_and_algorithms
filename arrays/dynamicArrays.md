# Advanced: Dynamic Arrays or Array Lists

*Learn how we might create arguably the most used data structure in the world: the dynamic array (also known as the array list).*

## What is a Dynamic Array?

A dynamic array, also known as an array list, is a data structure that combines the advantages of arrays and linked lists. Unlike a standard array, a dynamic array can grow and shrink in size dynamically, allowing for more flexible and efficient memory usage.

## Key Features

1. **Dynamic Sizing:**
   - Automatically resizes when the capacity is exceeded.
   - Reduces the need to know the upper limit of elements in advance.

2. **Efficient Indexing:**
   - Provides O(1) time complexity for accessing elements by index, similar to standard arrays.

3. **Amortized Time Complexity:**
   - Insertion at the end of the array takes O(1) amortized time, making it efficient for dynamic growth.

## How It Works

1. **Initialization:**
   - Start with a fixed-size array.
   - Track the current number of elements and the total capacity.

2. **Insertion:**
   - If the array is full, create a new array with double the capacity.
   - Copy existing elements to the new array.
   - Insert the new element.

3. **Resizing:**
   - Doubling the capacity ensures that insertion operations remain efficient on average (amortized O(1) time complexity).

4. **Deletion:**
   - Remove the element and shift subsequent elements left, if necessary.
   - Optionally, resize the array to reduce unused space.

[*Reference*](https://www.youtube.com/watch?v=5AllG-i_yto) | [*Example Code*](./dynamicArrays.cpp)

## Conclusion

**Dynamic arrays** or **array lists** provide a flexible and efficient way to manage collections of data. They combine the benefits of arrays and linked lists, making them one of the most commonly used data structures in programming.
