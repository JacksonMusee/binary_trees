#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a left child to a parent node
 * 
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * 
 * Return: pointer to the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return (NULL);

    binary_tree_t *new_nod = binary_tree_node(parent, value);

    if (new_nod == NULL)
        return (NULL);

    new_nod->left = parent->left;
    parent->left = new_nod;

    return (new_nod);
}