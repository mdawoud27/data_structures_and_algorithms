# Standard Template Library (STL)

## 1. Introduction

Welcome to the Standard Template Library (STL) readme file! The STL is a powerful and essential part of C++ that provides a collection of template classes and functions to make common data structures and algorithms readily available to C++ programmers. It simplifies and accelerates the development of complex programs by offering a wide range of reusable and efficient components.

This readme provides a brief overview of STL, how to use it, its core components, and some examples to get you started.

## 2. Usage

*To use STL in your C++ project, follow these steps*:

1. **Include the necessary header files**: To access STL components, include the relevant header files in your code. For example, to use vectors, include `<vector>`
    ```cpp
    #include <vector>
    ```
2. **Use the STL components**: You can start using STL components in your code after including *the relevant header files*. Create objects of STL classes or use STL functions and algorithms as needed in your application.

3. **Compile and run**: Compile your C++ code with a C++ compiler that supports STL (most modern C++ compilers do). Be sure to link the standard library when compiling.

    ```bash
    g++ program.cpp -o a
    ./a
    ```

4. **Enjoy the benefits**: STL provides a wide range of containers (like vectors, lists, and maps) and algorithms (like sorting and searching) to simplify your code and make it more efficient.

## 3. Components
STL consists of several essential components, categorized as follows:

### 3.1. Containers

- **Simple:**
    - pair
- **Sequence:**
    - Arrays

    - [**Vectors** (`std::vector`)](./vector/): Dynamic arrays that can grow or shrink in size.

    - Lists
    <!-- (std::list): Doubly-linked lists that allow efficient insertion and removal of elements. -->

    - Deques
    <!-- (std::deque): Double-ended queues that support fast insertion and removal at both ends. -->

    - Forward list

- **Associative:**
    - Maps
    <!-- (std::map): Associative containers that store key-value pairs in a sorted order. -->

    - Multimap
    <!--An associative container that allows multiple elements with the same key, sorted by key. -->

     - Sets
    <!--(std::set): Containers that store unique elements in a sorted order. -->

    - Multiset
    <!-- An associative container that allows multiple elements with the same value, sorted by value. -->
<!-- 
- Unordered:
    
    - Unordered Multiset

    - Unordered Multimap
-->
- **Unordered:**
    - Unordered Sets
    <!-- (std::unordered_set): Containers that store unique elements in an unordered manner for faster access. -->

    - Unordered Multiset
    <!-- An associative container that allows multiple elements with the same value in an unordered manner for faster access. -->

    - Unordered Maps
    <!--(std::unordered_map): Associative containers that store key-value pairs in an unordered manner for faster access. -->

    - Unordered Multimap
    <!-- An associative container that allows multiple elements with the same key in an unordered manner for faster access. -->

- **Adapter:**
    - Stacks
    <!--(std::stack): LIFO (Last-In, First-Out) data structures. -->

    - Queues
    <!-- (std::queue): FIFO (First-In, First-Out) data structures. -->

    - Priority queue
    <!-- An adapter class that implements a priority queue, which allows efficient retrieval of the highest-priority element. -->

### 3.2. Algorithms

*STL provides a wide range of algorithms for common operations on containers. Some of the essential algorithms include:*

- **Sorting** (`std::sort`): Sorts elements in a container in ascending order.

- **Searching** (`std::find`): Searches for an element in a container.

- **Insertion** (`std::insert`): Inserts elements into a container.

- **Deletion** (`std::erase`): Removes elements from a container.

- **Transformations** (`std::transform`): Applies a function to elements in a container.

- **Aggregations** (`std::accumulate`): Computes the sum, product, or other aggregates of elements in a container.

### 3.3. Iterators

*STL iterators provide a generalized way to access elements in containers. They allow you to traverse and manipulate container elements without needing to know the specific container's underlying data structure.*

### 3.4. Function Objects

Function objects, also known as functors, allow you to use custom functions as arguments for STL algorithms. They are objects that can be called like functions, making them versatile and customizable.

## 4. Examples
To help you get started, here are some basic examples of using STL components in C++:

### 4.1. Using Vectors
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers; // Create an empty vector of integers.

    // Add elements to the vector.
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // Iterate through the vector and print its elements.
    for (auto num : numbers) {
        cout << num << " ";
    }

    return 0;
}
```
### 4.2. Sorting with Algorithms

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {5, 2, 9, 1, 5};

    // Sort the vector in ascending order.
    sort(numbers.begin(), numbers.end());

    // Iterate and print the sorted elements.
    for (auto num : numbers) {
        cout << num << " ";
    }

    return 0;
}
```

## 5. Contributing

Contributions to the STL are welcome! If you find bugs, want to propose new features, or improve documentation, please consider contributing. Here's how you can contribute:

1. Fork the STL repository.
1. Make your changes or additions.
1. Submit a pull request with a clear description of your changes.