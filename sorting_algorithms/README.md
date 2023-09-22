# Sorting Algorithms

This repo contains implementation of several sorting algorithms for both arrays or linked lists.

First, I recommend to test your skills in time complexity (Big O notation) by passing [*his exam*]() (*will update soon*)

## Algorithms
*The following algorithms are commonly used for sorting data in various applications.*

- [Bubble Sort](./bubble_sort.c)

- Insertion Sort ([Arrays](./insertion_sort.c) -  [Doubly linked list](./insertion_sort_list.c))

- [Selection Sort](./selection_sort.c)

- Quick sort
- Shell sort 
- Cocktail shaker sort
- Counting sort
- Merge sort
- Heap sort
- Radix sort
- Bitonic sort
- Quick Sort - Hoare Partition scheme

**Helper Functions and files**
- Header file `sort.h`
- [swap](./swap.c)
- [swap_nodes](./swap_nodes.c)
- [create_list_from_array](./create_list_from_array.c)

*This section will be updated over the time.*

## Getting Started

**Building the Project**

1. Clone this repository to your local machine.

1. Change to `sorting_algorithms` directory:

1. Compile the project:

    ```bash
    gcc *.c -o a
    ./a 
    ```

## Usage
**Sorting Arrays**

To sort an array using one of the implemented algorithms, you can call the respective sorting function and provide your array and its size as parameters. For example, to sort an array using Bubble Sort:

```c
int array[] = {5, 2, 9, 3, 6};
size_t size = sizeof(array) / sizeof(array[0]);
bubble_sort(array, size);
```
**Sorting Linked Lists**

To sort a linked list, you can create a list from an array and then call the sorting function for linked lists. For example:

```c
int array[] = {5, 2, 9, 3, 6};
size_t size = sizeof(array) / sizeof(array[0]);
listint_t *list = create_listint(array, size);
insertion_sort_list(&list);
```

## Contributing
Contributions to this project are welcome. If you'd like to contribute, please fork the repository, make your changes, and submit a pull request. Be sure to follow best practices and maintain code quality.

Feel free to customize this `README` file further to include more project-specific details or instructions as needed.