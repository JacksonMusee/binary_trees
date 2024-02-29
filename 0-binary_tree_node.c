#include "binary_trees.h"

/**
 *binary_tree_t *binary_tree_node - Creates a new node
 *
 *@parent: Parent of the new node
 *@value: Data to be stored in the new node
 *
 *Return: Returns a pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nd = malloc(sizeof(binary_tree_t));

	if (new_nd == NULL)
		return (NULL);
	
	new_nd->parent = parent;
	new_nd->left = NULL;
	new_nd->right = NULL;
	new_nd->n = value;

	return (new_nd);
}
