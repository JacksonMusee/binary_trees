#include "binary_trees.h"

/**
 *binary_tree_postorder - Traverses a tree in postorder
 *
 *@tree: The tree to traverse
 *@func: A pointer to a function that operates on a node's data
 *
 * Return: void/nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left);
	binary_tree_postorder(tree->right);
	func(tree->n);
}
