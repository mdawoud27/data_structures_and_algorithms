## Linked List Operations

This `main.c` contains C code that implements various operations on a singly linked list. These operations include ***insertion*** and ***deletion*** at different positions, **printing** the linked list, ***checking for circularity***, and ***more***.

### Project Structure
*main files*

- `linked_list.h`: Header file containing the struct definition of the linked list node and function declarations.

- `main.c`: Main program demonstrating the usage of linked list operations.

- `insertion.c`: Contains the different methods of insert.
- `deletion.c`: Contains the different methods of delete.
- `print.c`: Prints the values of nodes in the linked list.
- `free.c`: Frees the memory allocated for the linked list.
- `check_cycle.c`: Checks if the linked list is circular.

### Compilation and Execution

*To compile the code, use the following command:*

``` bash
gcc *.c -o linked_list_program
```

*To execute the compiled program, run:*

``` bash
./linked_list_program
```

*After running the above command, the result will be like the following:*

``` bash
node no.1 = 4
node no.2 = 8
node no.3 = 30
node no.4 = 40
```
*BTW, these results appeared according to the functions are called in the `main.c` file*

### Implemented Linked List Operations

The following operations are implemented in this project:

- **Insertion:**

    - Insert a node at the end of the linked list.
    - Insert a node at the beginning of the linked list.
    -  Insert a node at a specified position in the linked list.
    - Insert a node in a sorted manner in the linked list.
    <br><br>

- **Deletion:**

    - Delete the last node from the linked list.
    - Delete the first node from the linked list.
    - Delete a node at a specified position from the linked list.
    - Delete the first node with a specific value from the linked list.
    <br><br>

- **Other Operations:**

    - Print the values of nodes in the linked list.
    - Check if the linked list is circular.
    - Count the number of nodes in the linked list.
    - Free the memory allocated for the linked list.


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

- Contributions to this repository are welcome. Feel free to fork the repository, make changes, and submit pull requests.

- Feel free to customize the `README.md` further to provide more specific details about the *implementation*, *usage examples*, and any additional information you'd like to include.
