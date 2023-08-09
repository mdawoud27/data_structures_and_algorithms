## Linked List Operations

*This `main.c` contains C code that implements various operations on a singly linked list. These operations include **insertion** and **deletion** at different positions, **printing** the linked list, **checking for circularity**, and **more**.*

### Files
- `main.c`: The main program that demonstrates the usage of linked list operations.

- `linked_list.h`: Header file containing the struct definition of the linked list node and function declarations.

- `linked_list.c`: Implementation of the linked list operations.

### Compilation and Execution

To compile the code, use the following command:

``` bash
gcc main.c linked_list.c -o linked_list_program
```

To execute the compiled program, run:

``` bash
./linked_list_program
```

### Linked List Operations

The implemented operations on the linked list are as follows:

- **insert_node_end**: Inserts a node at the end of the linked list.

- **insert_node_first**: Inserts a node at the beginning of the linked list.

- **insert_node_pos**: Inserts a node at a specified position in the linked list.


- **insert_in_sorted_list**: Inserts a node in a sorted manner in the linked list.

- **delete_node_end**: Deletes the last node from the linked list.

- **delete_node_first**: Deletes the first node from the linked list.

- **delete_node_pos**: Deletes a node at a specified position from the linked list.

- **delete_node_with_value**: Deletes the first node with a specific value from the linked list.

- **print_list**: Prints the values of nodes in the linked list.

- **is_list_circular**: Checks if the linked list is circular.

- **cnt_node**: Counts the number of nodes in the linked list.

- **free_list**: Frees the memory allocated for the linked list.

### Usage Example

``` c
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(void) {
    // Create and manipulate the linked list using the provided functions
    // ...

    return 0;
}
```

### Contributing

Contributions to this repository are welcome. Feel free to fork the repository, make changes, and submit pull requests.


Feel free to customize the `README` further to provide more specific details about the *implementation*, *usage examples*, and any additional information you'd like to include.
