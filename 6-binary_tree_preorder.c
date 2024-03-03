#include "binary_trees.h"

/**
 *binary_tree_preorder - Traverses a tree in preorder
 *
 *@tree: The tree to traverse
 *@func: A pointer to a fucntion process a nodes data
 *
 * Return: void/nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
