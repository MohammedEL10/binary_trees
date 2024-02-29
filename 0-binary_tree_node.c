#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
<<<<<<< HEAD
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure
=======
 * @parent: node parent
 * @value: the value of the node
 * Return: the new node
>>>>>>> db4dafabcd7cac7977bac089876f6f949b6ee437
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

<<<<<<< HEAD
	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL); /* insufficient memory */

	new->n = value;
	new->left = new->right = NULL;
	new->parent = parent;

	if (new->parent == NULL) /* root */
		return new;
	if (new->n < parent->n)
		parent->left = new;
	else
		parent->right = new;
	return new;
=======
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
>>>>>>> db4dafabcd7cac7977bac089876f6f949b6ee437
}
