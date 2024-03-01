#include "binary_trees.h"

/*
 *  function that goes through a binary tree using post-order traversal
 *  @tree: to traverse
 *  @func: to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
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
