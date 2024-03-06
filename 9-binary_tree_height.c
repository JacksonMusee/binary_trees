#include "binary_trees.h"

/**
*binary_tree_height - Calculate height of a tree
*
*@tree: The tree
*
*Return: the height
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t height = height_helper(tree) - 1;

	return (height);
}

/**
*height_helper - Handle the recursion part of calculating height
*
*@tree: The tree
*
*Return: Height of tree adding one
*
*/
size_t height_helper(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = height_helper(tree->left);
	right_h = height_helper(tree->right);

	return (left_h > right_h ? left_h + 1 : right_h + 1);
}
