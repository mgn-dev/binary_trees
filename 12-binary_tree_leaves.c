#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves.
 *
 * Return: return leaf count of node or 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leafs = 0, right_leafs = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leafs = binary_tree_leaves(tree->left);
	right_leafs = binary_tree_leaves(tree->right);

	return (left_leafs + right_leafs);
}
