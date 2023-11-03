#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as
 * the left-child of another node.
 * @parent: A  pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 * Return: pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return NULL;

    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return NULL;

    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }
    parent->left = new_node;
    return new_node;
}

/**
 * binary_tree_insert_right - Function that inserts a node
 * as the right-child of another node.
 * @parent: A  pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 * Return: A pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return NULL;

    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return NULL;

    if (parent->right)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }
    parent->right = new_node;
    return new_node;
}

/**
 * binary_tree_insert - Function that inserts a node
 * @parent: A  pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 * Return: A pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        parent = binary_tree_node(parent, value);

    else if (value <= parent->data)
        parent->left = binary_tree_insert(parent->left, value);
    else
        parent->right = binary_tree_insert(parent->right, value);

    return parent;
}