#include "binary_trees.h"

/**
 * binary_tree_insert_right - Add a node as the right child of a node.
 *
 * @parent: Pointer to node where the right child will be inserted.
 * @value: value to be stored in the new node.
 *
 * Return: Pointer to the newly created node, otherwise NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}