#include "binary_trees.h"

/**
*binary_tree_depth - find the depth of a given node
*
*@tree: The node
*
*Return: depth or 0 is tree s null
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		depth += 1;
		tree = tree->parent;
	}

	return (depth);
}
