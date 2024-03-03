#include "binary_trees.h"

/**
 *binary_tree_is_root - Check if a node a root
 *
 *@node: The node to check
 *
 * Return: 1 if node is a root, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}