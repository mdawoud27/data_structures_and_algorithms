# Binary Tree Project

This C project implements a binary tree data structure along with various binary tree operations. A binary tree is a hierarchical data structure where each node has at most two children, referred to as the left child and the right child.

## Project Overview
The project provides a set of functions for creating, manipulating, and traversing binary trees. These functions are implemented in the `binary_trees.h` header file and `main.c` file.

### Useage
1. Include the `binary_trees.h` header file in your C source code.

3. Compile your source code along with:
    ```bash
    gcc *.c -o a

    ./a
    ```

### Binary Tree Operations
The project includes many binary tree operations check them from [*here*](./binary_tree_operations.c)

### Binary Tree Traversal
The project supports three types of tree traversal:

- **Pre-order Traversal**: Visit the root node first, then the left subtree, and finally the right subtree.
- **In-order Traversal**: Visit the left subtree first, then the root node, and finally the right subtree.
- **Post-order Traversal**: Visit the left subtree first, then the right subtree, and finally the root node.

### Printing a Binary Tree
The project includes a function `binary_tree_print` that visually prints a binary tree, helping you understand the tree's structure and layout.

## Contributing
Feel free to fork the project, create pull requests, and help improve this binary tree implementation.
