#include "binary_tree.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: pointer to the node to check in the tree
 * Return: return -1 if the node is a leaf otherwise return 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL || node->right != NULL || node->left != NULL)
	{
		return (0);
	}
	return (-1);
}
