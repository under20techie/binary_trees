#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * of the node to create
 * @value: the value to put in the new node
 *
 * Return: new node or NULL .
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;

	return (new);
}
