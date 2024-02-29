#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that creates a binary tree node
 * @parent: the pointer to the parent node to be created
 * @value: the value to give to the new node
 *
 * Return: a pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	{
	parent->left = new;
	return (new);
}
