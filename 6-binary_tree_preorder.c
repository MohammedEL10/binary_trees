#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a pre order traversal
 * @tree: pointer to the root node to traverse
 * @func: pointer to function to call for each node
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
