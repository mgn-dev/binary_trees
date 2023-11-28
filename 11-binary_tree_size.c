#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure the size.
 *
 * Return: return size of node or 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0, current = 1;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		left_size = 0;
	else
		left_size = binary_tree_size(tree->left);

	if (tree->right == NULL)
		right_size = 0;
	else
		right_size = binary_tree_size(tree->right);

	return (current + left_size + right_size);
}
