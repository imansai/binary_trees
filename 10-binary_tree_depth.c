#include "binary_trees.h"

/**
 * binary_tree_depth - Measures node depth in a binary tree.
 *
 * @tree: Pointer to the node to be measured.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
