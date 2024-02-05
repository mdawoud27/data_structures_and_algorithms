# Search Algorithms
This repository contains implementations of various search algorithms. Below, you'll find a list of algorithms, information on helper functions, and instructions on how to use and contribute to the project.

## Algorithms
*The following search algorithms are included, each tailored for different scenarios and data structures:*

- [Linear Search](./linear.c)

- [Binary Search](./binary.c)

- Jump Search

- Interpolation Search
- Exponential search
- Advanced binary search


**Helper Functions and Files**
- `main.c`: The entry point.
- Header file [`search_algos.h`](./search_algos.h)

- `print_array.c` function.

### Getting Started
**Building the Project**

1. Clone this repository to your local machine.
    ```bash
    git clone https://github.com/yourusername/search-algorithms.git
    ```
1. Change to the search_algorithms directory.
    ```bash
    cd search_algorithms
    ```
1. Compile the project and run it.
    ```bash
    gcc *.c -o search
    ./search
    ```

### Usage
**Searching Arrays**

To use a search algorithm on an array, call the corresponding function and provide the array along with its size as parameters. For example, to perform a linear search:

```c
int array[] = {5, 2, 9, 3, 6};
size_t size = sizeof(array) / sizeof(array[0]);
int value = 3;

size_t result = linear_search(array, size, value);
```

### Contributing
Contributions to this project are encouraged. If you wish to contribute, fork the repository, make your changes, and submit a pull request.

Feel free to customize this `README` further to include more project-specific details or instructions as needed.