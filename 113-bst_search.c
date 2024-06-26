#include "binary_trees.h"

/**
 * bst_search - Function to searches for a value in a binary search tree.
 * @tree: A pointer to the root node of the BST to search.
 * @value: value to search for in the BST.
 *
 * Return: If the tree is NULL. Otherwise, pointer that contain the value.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
		{
			return ((bst_t *)tree);
		}
		if (tree->n > value)
		{
			return (bst_search(tree->left, value));
		}
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
