#include "binary_trees.h"

/**
 * binary_tree_insert_right - adds a node at the right of the parent
 * @value: data well stored in the new node
 * @parent: pointer to the node to be created
 * Return: pointer, NULL if parent is error
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
