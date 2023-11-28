#include "binary_trees.h"

/**
 * get_left_depth - calculate the left most depth
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: get left most depth.
*/
int get_left_depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * is_perfect - function that checks if a binary tree is not perfect.
 * @tree: pointer to the root node of the tree to check.
 * @depth: how deep a tree goes.
 * @level: the level of a node.
 *
 * Return: return 1 if tree is perfect, 0 otherwise.
*/
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == (level + 1));

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, depth, level + 1) &&
			is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: return 1 if tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_perfect(tree, get_left_depth(tree), 0));
}
