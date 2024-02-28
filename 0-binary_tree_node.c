#include "binary_trees"
/*
 * binary_tree_node create binary tree
 * @ parrent: node parent
 * @value: the value of the node
 * return: the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t new_node*;
	new_node = malloc(sizeof(binary_tree))
		if (new_node == NULL)
		{
			return NULL;
		}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
