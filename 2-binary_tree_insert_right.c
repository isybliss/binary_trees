#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as the right child
 * @parent: pointer to parent node
 * @value: value of the new node
 *
 * Return: pointer to created node or NUll if parent is null
 * or on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_right;

	if (parent == NULL)
		return (NULL);

	node_right = binary_tree_node(parent, value);

	if (node_right == NULL)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = node_right;
		node_right->right = parent->right;
	}
	parent->right = node_right;
	return (node_right);
}
