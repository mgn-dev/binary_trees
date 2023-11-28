#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node: pointer to the node to find the sibling.
 *
 * Return: return sibling node, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node != NULL && node->parent != NULL)
	{
		if (node->parent->left == node)
		{
			if (node->parent->right != NULL)
				return (node->parent->right);
		}

		if (node->parent->right == node)
		{
			if (node->parent->left != NULL)
				return (node->parent->left);
		}
	}

	return (NULL);
}
