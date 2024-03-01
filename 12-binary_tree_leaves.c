#include "binary_trees.h"
/**
 * binary_tree_leaves - returns height of a tree
 * @tree: tree to determine height
 *
 * Return: height of tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->right) +
binary_tree_leaves(tree->left));
}
