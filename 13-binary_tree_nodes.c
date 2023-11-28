#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with
 * at least 1 child in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of nodes.
 *
 * Return: return non-leaf nodes or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (1 + left + right);
}
