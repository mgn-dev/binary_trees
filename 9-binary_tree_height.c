#include "binary_trees.h"

/**
 * max - returns the maximum value between the two given values.
 * @value1: first value to compare.
 * @value2: second value to compare.
 *
 * Return: max value.
*/
size_t max(size_t value1, size_t value2)
{
	if (value1 >= value2)
		return (value1);
	else
		return (value2);
}

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: return tree height or 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		left_height = -1;
	else
		left_height = binary_tree_height(tree->left);

	if (tree->right == NULL)
		right_height = -1;
	else
		right_height = binary_tree_height(tree->right);

	return (max(left_height + 1, right_height + 1));
}
