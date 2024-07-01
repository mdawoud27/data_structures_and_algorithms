#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf.
 * @node: Pointer to the node to check.
 * Return: 1 if node is a leaf, otherwise 0, If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return 0;

    return (node->left == NULL && node->right == NULL);
}

/**
 * binary_tree_is_root - Function that checks if a given node is a root.
 * @node: Pointer to the node to check.
 * Return: 1 if node is a root, otherwise 0,
 * If node is NULL, return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return 0;

    return node->parent == NULL;
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: The height of the binary tree, or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL || (tree->left == NULL && tree->right == NULL))
        return 0;

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    if (left_height > right_height)
        return left_height + 1;
    else
        return right_height + 1;
}

/**
 * binary_tree_depth - Function that measures the depth of
 * a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 * Return: If tree is NULL, function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    if (tree->parent != NULL)
        return (1 + binary_tree_depth(tree->parent));

    return 0;
}

/**
 * binary_tree_size - Function that measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 * Return: If tree is NULL, the function must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t left_size, right_size;

    if (tree == NULL)
        return 0;

    left_size = binary_tree_size(tree->left);
    right_size = binary_tree_size(tree->right);

    return (1 + left_size + right_size);
}

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of leaves.
 * Return: If tree is NULL, the function must return 0,
 * A NULL pointer is not a leaf.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t left_leaves, right_leaves;

    if (tree == NULL)
        return 0;

    if (tree->left == NULL && tree->right == NULL)
        return 1;

    left_leaves = binary_tree_leaves(tree->left);
    right_leaves = binary_tree_leaves(tree->right);

    return (left_leaves + right_leaves);
}

/**
 * binary_tree_nodes - Function that counts the nodes
 * with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of nodes.
 * Return: If tree is NULL, the function must return 0,
 * A NULL pointer is not a node.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodes_count = 0;

    if (tree == NULL)
        return 0;

    if (tree->left != NULL || tree->right != NULL)
        nodes_count++;

    nodes_count += binary_tree_nodes(tree->left);
    nodes_count += binary_tree_nodes(tree->right);

    return nodes_count;
}

/**
 * binary_tree_balance - Function that measures the balance factor of a BT
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height, right_height;

    if (tree == NULL)
        return 0;

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (left_height - right_height);
}

/**
 * binary_tree_is_full - Function that checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    int left_nodes = 0, right_nodes = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left)
		left_nodes = binary_tree_is_full(tree->left);

	if (tree->right)
		right_nodes = binary_tree_is_full(tree->right);
	/*printf("%d\t%d\n", left_nodes, right_nodes);*/

	return (left_nodes && right_nodes);
}

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t left_height, right_height, left_perf, right_perf;

    if (tree == NULL)
        return 0;

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    if (left_height == right_height)
    {
        if (tree->left == NULL && tree->right == NULL)
            return 1;

        left_perf = binary_tree_is_perfect(tree->left);
        right_perf = binary_tree_is_perfect(tree->right);
        return left_perf && right_perf;
    }
    return 0;
}
