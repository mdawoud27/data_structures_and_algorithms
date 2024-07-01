# Stack Implementation using Array

This program demonstrates the implementation of a stack data structure using an array in C. The stack follows the **Last In First Out (LIFO)** principle, where the last element pushed onto the stack is the first one to be popped out.

## Introduction

The program implements a stack using a fixed-size array to store elements. The stack_arr array represents the stack, and the top variable keeps track of the index of the top element in the stack. The maximum capacity of the stack is defined as MAX, which is set to 5 in this example.

## Functions

- `int is_full()`: Checks if the stack is full.

- `int is_empty()`: Checks if the stack is empty.
- `void push(int data)`: Pushes an element onto the stack.
- `int pop()`: Pops an element from the stack and returns its value.

- `int peek()`: Returns the value of the top element without removing it.

- `void print_stack()`: Prints the elements in the stack.

## Usage

1. Include the necessary header files: `#include <stdio.h>` and `#include <stack.h>`.

1. Define a constant `MAX` to specify the maximum capacity of the stack.

1. Define an array `stack_arr` to store the elements of the stack and initialize the *top* variable to -1.

1. Implement the stack functions as described in the functions section.

1. In the `main()` function, demonstrate the usage of the stack by *pushing*, *popping*, and *peeking elements*.

## Contributing

Contributions are welcome! If you find any issues or improvements for the stack implementation, feel free to create a pull request.

Feel free to explore and utilize this stack implementation for your projects. If you have any questions or need further assistance, don't hesitate to reach out!
