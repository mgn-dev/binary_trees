#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node.
 * @node: pointer to the node to find the uncle.
 *
 * Return: return a pointer to the uncle node or NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (node != NULL && node->parent != NULL)
	{
		parent = node->parent;
		if (parent->parent != NULL)
		{
			if (parent->parent->left == parent)
			{
				if (parent->parent->right != NULL)
				{
					return (parent->parent->right);
				}
			}

			if (parent->parent->right == parent)
			{
				if (parent->parent->left != NULL)
				{
					return (parent->parent->left);
				}
			}
		}
	}

	return (NULL);
}
