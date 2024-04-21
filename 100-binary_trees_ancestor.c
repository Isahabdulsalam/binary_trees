#include "binary_trees.h"

/**
 * binary_trees_ancestor - func tha finds the lowest common ancestor
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *mama, *dad;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	mama = first->parent, dad = second->parent;
	if (first == dad || !mama || (!mama->parent && dad))
		return (binary_trees_ancestor(first, dad));
	else if (mama == second || !dad || (!dad->parent && mama))
		return (binary_trees_ancestor(mama, second));
	return (binary_trees_ancestor(mama, dad));
}
