## Doubly Linked List Operations

### Introduction

A doubly linked list is a data structure that consists of nodes, each containing a value and pointers to the previous and next nodes in the list. This implementation provides functions for various operations on the doubly linked list, including insertion and deletion at different positions, printing the nodes, counting the number of nodes, and freeing the memory.

### Project Structure
*main files*

- `linked_list.h`: Header file containing the struct definition of the linked list node and function declarations.

- `main.c`: Main program demonstrating the usage of linked list operations.

- `insertion.c`: Contains the different methods of insert.
- `deletion.c`: Contains the different methods of delete.
- `other_func.c`: Contains:
    - `print_node()` function that prints the values of nodes in the linked list.

    - `count_nodes()` function that counts the number of nodes in the list.

    - `free_nodes()` function that frees the memory allocated for the linked list.



### Usage

*To use the provided implementation, follow these steps:*

- Compile the source code using a C compiler, such as gcc:
``` bash
    gcc *.c -o doubly_linked_list
```

- Run the compiled executable:
``` bash
    ./doubly_linked_list
```
This will execute the main function, which demonstrates the various operations on the doubly linked list.

### Functions

The implementation provides the following functions for operating on the doubly linked list:

- **Insertion Operations**

    - `node *insert_first(node *head, int value)`: Inserts a node with the given value at the beginning of the list.

    - `node *insert_end(node *head, int value)`: Inserts a node with the given value at the end of the list.
    - `node *insert_pos(node *head, int value, int pos)`: Inserts a node with the given value at a specific position in the list.

- **Deletion Operations**

    - `node *delete_first(node *head)`: Deletes the first node in the list.

    - `node *delete_end(node *head)`: Deletes the last node in the list.
    - `node *delete_pos(node *head, int pos)`: Deletes a node at a specific position in the list.

- **Other Operations**

    - `void print_node(node *head)`: Prints the values of all nodes in the list.
    - `int count_nodes(node *head)`: Returns the number of nodes in the list.
    - `void free_nodes(node *head)`: Frees the memory allocated for all nodes in the list.

### Contributing

- Contributions to this repository are welcome! If you find any issues or improvements, please feel free to create a pull request or raise an issue.

- Feel free to modify and use this `README` template for your own projects!
