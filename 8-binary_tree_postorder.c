#include "binary_trees.h"

 /**
  * binary_tree_postorder - function that goes through postorder tranversal
  * @tree: pointer to the root node to tranverse
  * @func: pointer to the function to call for each node
  * Return: nothing
  */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
