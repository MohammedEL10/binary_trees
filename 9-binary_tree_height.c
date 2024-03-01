#include "binary_trees.h"

<<<<<<< HEAD
/*
 *  function that measures the height of a binary tree
 *  @tree: s a pointer to the root node of the tree to measure the height.
 *  @Return: 0 if tree = NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
=======
/**
 *  binary_tree_height - function that checks the height of a binary tree
 *  @tree: pointer to the root node to measure the tree height
 *  Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a = 0;
	size_t b = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			a = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			b = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((a > b) ? a : b);
	}
>>>>>>> a22bc67cb05b7e78f22f115036a9b651acfe188e
}
