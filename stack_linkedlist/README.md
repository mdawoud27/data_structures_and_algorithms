# Stack Implementation using Linked List (LIFO)

This repository showcases a straightforward implementation of a stack data structure using a linked list in C. The stack adheres to the **Last In First Out (LIFO)** principle, wherein the last element pushed onto the stack is the first one to be popped out.

## Introduction

This implementation employs a *linked list* to represent the stack. Each element in the stack, referred to as a "node," holds an integer value and a pointer to the next node in the stack. The top pointer indicates the top of the stack. The program demonstrates basic operations like *pushing* elements onto the stack, *popping* elements, *peeking* at the top element, *printing* the stack's contents, and *freeing allocated memory*.

## Functions

- `int is_empty()`: Determines if the stack is empty.

- `void push(int value)`: Pushes an element onto the stack.

- `int pop()`: Pops an element from the stack and returns its value.

- `int peek()`: Returns the value of the top element without removing it.

- `void print_stack()`: Prints the elements in the stack.

- `void free_stack()`: Frees all memory occupied by the stack nodes.

## Usage

To utilize this stack implementation:

1. Clone this repository or download the source code.
    ``` bash
    git clone https://github.com/mdawoud27/data_structures_and_algorithms.git
    ```
1. Nanigate to `stack_linkedlist` folder.

1. Compile the source code
    ```bash
    gcc *.c -o stack
    ```

1. Run the compiled executable.
    ```bash
    ./stack
    ```

The `main()` function demonstrates how to use the stack functions. It pushes three integers onto the stack, prints the stack's contents, pops an element, prints the updated stack, peeks at the top element, and finally frees the memory occupied by the stack nodes.

## Contributing

Contributions are highly appreciated! If you encounter any issues or have ideas for improving the stack implementation, feel free to create a pull request.

Feel free to explore and integrate this linked list-based stack implementation into your projects. If you have any questions or need further assistance, please don't hesitate to reach out. Your success in using this implementation is our priority!
