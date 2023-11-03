#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node.
 * @parent: A pointer to the parent node of the node to create.
 * @value: The value to put in the new node.
 * Return: A pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int data)
{
    binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

    if (new_node)
    {
        new_node->data = data;
        new_node->parent = parent;
        new_node->left = NULL;
        new_node->right = NULL;
        return new_node;
    }
    return NULL;
}