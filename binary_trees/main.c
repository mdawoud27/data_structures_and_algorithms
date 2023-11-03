#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void print_num(int n)
{
    printf("%d\n", n);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/*Test create new nodes*/
    // binary_tree_t *root;

    // root = binary_tree_node(NULL, 98);

    // root->left = binary_tree_node(root, 12);
    // root->left->left = binary_tree_node(root->left, 6);
    // root->left->right = binary_tree_node(root->left, 16);

    // root->right = binary_tree_node(root, 402);
    // root->right->left = binary_tree_node(root->right, 256);
    // root->right->right = binary_tree_node(root->right, 512);

    // binary_tree_print(root);

/*Test insert function in the left.*/
    // binary_tree_t *root;

    // root = binary_tree_node(NULL, 98);
    // root->left = binary_tree_node(root, 12);
    // root->right = binary_tree_node(root, 402);
    // binary_tree_print(root);
    // printf("\n");
    // binary_tree_insert_left(root->right, 128);
    // binary_tree_insert_left(root, 54);
    // binary_tree_print(root);

/*Test insert function in the right.*/
//      binary_tree_t *root;

//     root = binary_tree_node(NULL, 98);
//     root->left = binary_tree_node(root, 12);
//     root->right = binary_tree_node(root, 402);
//     binary_tree_print(root);
//     printf("\n");
//     binary_tree_insert_right(root->left, 54);
//     binary_tree_insert_right(root, 128);
//     binary_tree_print(root);

/*Test delete tree function*/
//      binary_tree_t *root;

//     root = binary_tree_node(NULL, 98);
//     root->left = binary_tree_node(root, 12);
//     root->right = binary_tree_node(root, 402);
//     binary_tree_insert_right(root->left, 54);
//     binary_tree_insert_right(root, 128);
//     binary_tree_print(root);
//     binary_tree_delete(root);

/*Test some operations*/
    // binary_tree_t *root;
    // int ret;

    // root = binary_tree_node(NULL, 98);
    // root->left = binary_tree_node(root, 12);
    // root->right = binary_tree_node(root, 402);
    // binary_tree_insert_right(root->left, 54);
    // binary_tree_insert_right(root, 128);
    // binary_tree_print(root);

    // ret = binary_tree_is_leaf(root);
    // printf("Is %d a leaf: %d\n", root->data, ret);
    // ret = binary_tree_is_leaf(root->right);
    // printf("Is %d a leaf: %d\n", root->right->data, ret);
    // ret = binary_tree_is_leaf(root->right->right);
    // printf("Is %d a leaf: %d\n", root->right->right->data, ret);


    // binary_tree_t *root;
    // int ret;

    // root = binary_tree_node(NULL, 98);
    // root->left = binary_tree_node(root, 12);
    // root->right = binary_tree_node(root, 402);
    // binary_tree_insert_right(root->left, 54);
    // binary_tree_insert_right(root, 128);
    // binary_tree_print(root);

    // ret = binary_tree_is_root(root);
    // printf("Is %d a root: %d\n", root->data, ret);
    // ret = binary_tree_is_root(root->right);
    // printf("Is %d a root: %d\n", root->right->data, ret);
    // ret = binary_tree_is_root(root->right->right);
    // printf("Is %d a root: %d\n", root->right->right->data, ret);

/*Tree Traversal - preorder*/
    // binary_tree_t *root;

    // root = binary_tree_node(NULL, 98);
    // root->left = binary_tree_node(root, 12);
    // root->right = binary_tree_node(root, 402);
    // root->left->left = binary_tree_node(root->left, 6);
    // root->left->right = binary_tree_node(root->left, 56);
    // root->right->left = binary_tree_node(root->right, 256);
    // root->right->right = binary_tree_node(root->right, 512);

    // binary_tree_print(root);
    // binary_tree_preorder(root, &print_num);
    
/*Tree Traversal - inorder*/
    // binary_tree_t *root;

    // root = binary_tree_node(NULL, 98);
    // root->left = binary_tree_node(root, 12);
    // root->right = binary_tree_node(root, 402);
    // root->left->left = binary_tree_node(root->left, 6);
    // root->left->right = binary_tree_node(root->left, 56);
    // root->right->left = binary_tree_node(root->right, 256);
    // root->right->right = binary_tree_node(root->right, 512);

    // binary_tree_print(root);
    // binary_tree_inorder(root, &print_num);

/*Tree Traversal - postorder*/
    // binary_tree_t *root;

    // root = binary_tree_node(NULL, 98);
    // root->left = binary_tree_node(root, 12);
    // root->right = binary_tree_node(root, 402);
    // root->left->left = binary_tree_node(root->left, 6);
    // root->left->right = binary_tree_node(root->left, 56);
    // root->right->left = binary_tree_node(root->right, 256);
    // root->right->right = binary_tree_node(root->right, 512);

    // binary_tree_print(root);
    // binary_tree_postorder(root, &print_num);

/*Check tree height*/
    // binary_tree_t *root;
    // size_t height;

    // root = binary_tree_node(NULL, 98);
    // root->left = binary_tree_node(root, 12);
    // root->right = binary_tree_node(root, 402);
    // binary_tree_insert_right(root->left, 54);
    // binary_tree_insert_right(root, 128);
    // binary_tree_print(root);

    // height = binary_tree_height(root);
    // printf("Height from %d: %lu\n", root->data, height);
    // height = binary_tree_height(root->right);
    // printf("Height from %d: %lu\n", root->right->data, height);
    // height = binary_tree_height(root->left->right);
    // printf("Height from %d: %lu\n", root->left->right->data, height);

/*Check the depth of binary tree*/
    // binary_tree_t *root;
    // size_t depth;

    // root = binary_tree_node(NULL, 98);
    // root->left = binary_tree_node(root, 12);
    // root->right = binary_tree_node(root, 402);
    // binary_tree_insert_right(root->left, 54);
    // binary_tree_insert_right(root, 128);
    // binary_tree_print(root);

    // depth = binary_tree_depth(root);
    // printf("Depth of %d: %lu\n", root->data, depth);
    // depth = binary_tree_depth(root->right);
    // printf("Depth of %d: %lu\n", root->right->data, depth);
    // depth = binary_tree_depth(root->left->right);
    // printf("Depth of %d: %lu\n", root->left->right->data, depth);
/*Check the size of binary tree*/
    // binary_tree_t *root;
    // size_t size;

    // root = binary_tree_node(NULL, 98);
    // root->left = binary_tree_node(root, 12);
    // root->right = binary_tree_node(root, 402);
    // binary_tree_insert_right(root->left, 54);
    // binary_tree_insert_right(root, 128);
    // binary_tree_print(root);

    // size = binary_tree_size(root);
    // printf("Size of %d: %lu\n", root->data, size);
    // size = binary_tree_size(root->right);
    // printf("Size of %d: %lu\n", root->right->data, size);
    // size = binary_tree_size(root->left->right);
    // printf("Size of %d: %lu\n", root->left->right->data, size);

/*Count leaves in binary tree*/
    // binary_tree_t *root;
    // size_t leaves;

    // root = binary_tree_node(NULL, 98);
    // root->left = binary_tree_node(root, 12);
    // root->right = binary_tree_node(root, 402);
    // binary_tree_insert_right(root->left, 54);
    // binary_tree_insert_right(root, 128);
    // binary_tree_print(root);

    // leaves = binary_tree_leaves(root);
    // printf("Leaves in %d: %lu\n", root->data, leaves);
    // leaves = binary_tree_leaves(root->right);
    // printf("Leaves in %d: %lu\n", root->right->data, leaves);
    // leaves = binary_tree_leaves(root->left->right);
    // printf("Leaves in %d: %lu\n", root->left->right->data, leaves);

/*Counts the nodes in binary tree*/
    // binary_tree_t *root;
    // size_t nodes;

    // root = binary_tree_node(NULL, 98);
    // root->left = binary_tree_node(root, 12);
    // root->right = binary_tree_node(root, 402);
    // binary_tree_insert_right(root->left, 54);
    // binary_tree_insert_right(root, 128);
    // binary_tree_print(root);

    // nodes = binary_tree_nodes(root);
    // printf("Nodes in %d: %lu\n", root->data, nodes);
    // nodes = binary_tree_nodes(root->right);
    // printf("Nodes in %d: %lu\n", root->right->data, nodes);
    // nodes = binary_tree_nodes(root->left->right);
    // printf("Nodes in %d: %lu\n", root->left->right->data, nodes);

/*Check balance in binary tree*/
    // binary_tree_t *root;
    // int balance;

    // root = binary_tree_node(NULL, 98);
    // root->left = binary_tree_node(root, 12);
    // root->right = binary_tree_node(root, 402);
    // binary_tree_insert_right(root->left, 54);
    // binary_tree_insert_right(root, 128);
    // binary_tree_insert_left(root, 45);
    // binary_tree_insert_right(root->left, 50);
    // binary_tree_insert_left(root->left->left, 10);
    // binary_tree_insert_left(root->left->left->left, 8);
    // binary_tree_print(root);

    // balance = binary_tree_balance(root);
    // printf("Balance of %d: %+d\n", root->data, balance);
    // balance = binary_tree_balance(root->right);
    // printf("Balance of %d: %+d\n", root->right->data, balance);
    // balance = binary_tree_balance(root->left->left->right);
    // printf("Balance of %d: %+d\n", root->left->left->right->data, balance);

/*Checks if binary tree is full or not*/
    // binary_tree_t *root;
    // int full;

    // root = binary_tree_node(NULL, 98);
    // root->left = binary_tree_node(root, 12);
    // root->right = binary_tree_node(root, 402);
    // binary_tree_insert_right(root->left, 54);
    // binary_tree_insert_right(root, 128);
    // root->left->left = binary_tree_node(root->left, 10);
    // binary_tree_print(root);

    // full = binary_tree_is_full(root);
    // printf("Is %d full: %d\n", root->data, full);
    // full = binary_tree_is_full(root->left);
    // printf("Is %d full: %d\n", root->left->data, full);
    // full = binary_tree_is_full(root->right);
    // printf("Is %d full: %d\n", root->right->data, full);

/*Checks if binary tree is perfect or not*/
    binary_tree_t *root;
    int perfect;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    root->left->left = binary_tree_node(root->left, 10);
    root->right->left = binary_tree_node(root->right, 10);

    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);

    root->right->right->left = binary_tree_node(root->right->right, 10);
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n\n", perfect);

    root->right->right->right = binary_tree_node(root->right->right, 10);
    binary_tree_print(root);
    perfect = binary_tree_is_perfect(root);
    printf("Perfect: %d\n", perfect);
    return (0);
}