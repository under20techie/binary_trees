#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the left-child
 * of another node.
 * @parent: parent node to insert the left-child in
 * @value: value to store in node created
 *
 * Return: pointer to node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (!new_node)
	{
		return (NULL);
	}

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
