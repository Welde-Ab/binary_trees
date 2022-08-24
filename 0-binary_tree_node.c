#include "binary_trees.h"

/**
 * binary_tree_node - Stores recursively each level in an array of strings
 *
 * @parent: Pointer to the node to parent node
 * @value: Value to be assigned
 *
 * Return: The the create node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *temp = malloc(sizeof(binary_tree_t));
if (temp != NULL)
{
temp->value = value;
temp->parent = parent;
temp->left = temp->right = NULL;
return (temp);
}

else
{
return (NULL);
}
}
