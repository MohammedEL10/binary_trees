#include "binary_trees.h"

/**
 * _binary_tree_t - function that creates a binary tree node
 * @parent: the pointer to the parent node to be created
 * @value: the value to give to the new node
 *
 * Return: a pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
