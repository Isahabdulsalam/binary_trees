#include "binary_trees.h"

/**
 * heap_insert - function inserts a value in Max Binary Heap
 * @root: double pointer to the root node of the Heap to insert the value
 * @value: value to store in the node to be inserted
 *
 * Return: return pointer to the created node NULL on failure
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *tree, *n_node, *lip;
	int max, leaf, sub, byte, q, tmp;

	if (!root)
		return (NULL);
	if (!(*root))
		return (*root = binary_tree_node(NULL, value));
	tree = *root;
	max = binary_tree_size(tree);
	leaf = max;
	for (q = 0, sub = 1; leaf >= sub; sub *= 2, q++)
		leaf -= sub;

	for (byte = 1 << (level - 1); byte != 1; byte >>= 1)
		tree = leaf & byte ? tree->right : tree->left;

	n_node = binary_tree_node(tree, value);
	leaf & 1 ? (tree->right = n_node) : (tree->left = n_node);

	lip = n_node;
	for (; lip->parent && (lip->n > lip->parent->n); lip = lip->parent)
	{
		tmp = lip->n;
		lip->n = lip->parent->n;
		lip->parent->n = tmp;
		n_node = n_node->parent;
	}

	return (n_node);
}

/**
 * binary_tree_size - function measures the size of a binary tree
 * @tree: tree to measure the size.
 *
 * Return: return size of the tree otherwise 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
