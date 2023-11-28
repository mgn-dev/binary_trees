#include "binary_trees.h"
#include <stdio.h>

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

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + max(left_height, right_height));
}

/**
 * binary_tree_balance - function that measures the balance factor
 * of a binary tree.
 * @tree: function that measures the balance factor of a binary tree.
 *
 * Return: return balance factor, otherwise 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bf = 0, left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = (int)binary_tree_height(tree->left);
	right = (int)binary_tree_height(tree->right);

	bf = left - right;

	return (bf);
}
