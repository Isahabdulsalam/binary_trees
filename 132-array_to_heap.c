#include "binary_trees.h"

/**
 * array_to_heap - function that builds a Max Binary Heap tree from an array
 * @array: a pointer to the first element of the array to be converted
 * @size: the number of element in the array
 *
 * Return: return pointer to the root node of the created Binary Heap
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int m;
	heap_t *root = NULL;

	for (m = 0; m < size; m++)
		heap_insert(&root, array[m]);

	return (root);
}
