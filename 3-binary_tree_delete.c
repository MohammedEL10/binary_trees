#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes the binary tree
 * @tree: pointer to the node to be deleted
 * Return: nothing if tree is NULL
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
