#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree.
 * @tree: pointer to the node to measure the depth.
 *
 * Return: return depth of node or 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
