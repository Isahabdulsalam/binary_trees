#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of another in tree
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	n_node = binary_tree_node(parent, value);

	if (n_node == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		n_node->left = parent->left;
		parent->left->parent = n_node;
	}
	parent->left = n_node;
	return (n_node);
}
