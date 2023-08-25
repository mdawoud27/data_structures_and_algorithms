# Queue Implementation using Array in C

This repository contains a simple implementation of a queue data structure using an *array* in C. A queue follows the **First In First Out (FIFO)** principle, where the first element added is the first one to be removed.

## Introduction

The implementation utilizes a fixed-size array to store elements in the queue. The queue array represents the queue, while the *front* and *rear* variables maintain the indices of the front and rear elements respectively. The maximum capacity of the queue is set using the constant *SIZE*, which in this example is initialized to 5.

## Functions

- `int is_empty()`: Checks if the queue is empty.

- `int is_full()`: Checks if the queue is full.

- `int peek()`: Returns the value at the front of the queue without removing it.

- `void en_queue(int value)`: Adds an element to the rear of the queue.

- `void de_queue()`: Removes the front element from the queue.

- `int front_value()`: Returns the value at the front of the queue.

- `int rear_value()`: Returns the value at the rear of the queue.

- `void print_queue()`: Prints the elements in the queue.

## Usage

To use this queue implementation:

1. Clone this repository or download the source code.
    ```bash
    git clone https://github.com/mdawoud27/data_structures_and_algorithms.git
    ```
1. Nanigate to `queue_arrays` folder.

1. Compile the source code.
    ```bash
    gcc *.c -o queue
    ```

1. Run the compiled executable.
    ```bash
    ./queue
    ```

The `main()` function demonstrates how to use the queue functions. It enqueues four integers, prints the queue's contents, dequeues an element, prints the updated queue, and then exits.

## Contributing

Contributions are welcome! If you encounter any issues or have ideas for improving the queue implementation, feel free to create a pull request.

Feel free to explore and integrate this array-based queue implementation into your projects. If you have questions or need assistance, please don't hesitate to contact us. We're here to help you make the most of this implementation!
