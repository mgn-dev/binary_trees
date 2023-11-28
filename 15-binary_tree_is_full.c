#include "binary_trees.h"

/**
 * is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if is tree full, 0 otherwise.
 */
int is_full(const binary_tree_t *tree)
{
	int left_isFull, right_isFull;

	if (tree == NULL)
		return (1);

	if ((tree->left == NULL && tree->right != NULL) ||
		(tree->left != NULL && tree->right == NULL))
		return (0);

	left_isFull = is_full(tree->left);
	right_isFull = is_full(tree->right);

	return (left_isFull && right_isFull);
}


/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if is tree full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_full(tree));
}
