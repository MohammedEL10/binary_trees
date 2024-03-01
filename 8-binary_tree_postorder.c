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
	func(tree->n);
}
