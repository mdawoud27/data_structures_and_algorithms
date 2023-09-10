# Hash Table Implementation in C

*This is a simple implementation of a hash table in C. The code provides functions for **creating** a hash table, **inserting** key-value pairs, **retrieving** values by key, and **freeing the allocated memory**.*

## Features
- Hash function for mapping keys to buckets.

- Collision handling using **separate chaining** (linked lists).

- Functions for *inserting*, *retrieving*, and *freeing memory*.

- Simple demonstration with example key-value pairs.


## Getting Started

### Building

1. Clone the repository to your local machine:
    ```bash
    git clone https://github.com/mdawoud27/data_structures_and_algorithms.git
    ```

1. Navigate to the project directory `hash_tables`

1. Compile the code using GCC:
    ```bash
    gcc -o hash main.c
    ```

### Usage

To use this hash table implementation, follow these steps:

1. Include the necessary headers at the beginning of your C file:

    ```c
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    ```
2. Define the hash table and hash functions:

    ```c
    #define TABLE_SIZE 100

    // Structures and functions as provided in the code
    ```

1. Create a hash table:

    ```c
    hash_table_t *table = create_table(TABLE_SIZE);
    ```

1. Insert key-value pairs:

    ```c
    insert(table, "name", "dawoud");
    insert(table, "age", "21");
    insert(table, "location", "ALX");

    insert(table, "apple", "red");
    insert(table, "banana", "yellow");
    insert(table, "cherry", "red");
    ```

1. Retrieve values by key:

    ```c
    char *value = get(table, "banana");
    printf("Value for key 'banana': %s\n", value);
    ```

1. Print the contents of the hash table:

    ```c
    print_table(table);
    ```

1. Clean up and free memory:

    ```c
    free_table(table);
    ```


## Contributing

Contributions are welcome! If you'd like to improve this code or add new features, please fork the repository and create a pull request.


Feel free to customize this `README` file to better suit your project's needs. You can add more sections, provide additional information, and include any relevant documentation.