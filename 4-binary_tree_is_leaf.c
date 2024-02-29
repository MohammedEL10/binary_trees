#include "binary_tree"

/*
 * node is leaf _ binary_tree_is_leaf
 * @ node: node to check
 * if node is leaf = return 1
 * if node = NULL return 0
 * if otherwise:  return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node);
{
	return ((!node || node->left || node->right)? 0 : 1);
}
