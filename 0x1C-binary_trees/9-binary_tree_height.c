#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree utilizing
* post-order traversal.
* @tree: pointer to the root node of the tree to measure the height.
*
* Return: Height of tree, 0 if tree is NULL.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_nodes, r_nodes;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	l_nodes = binary_tree_height(tree->left);
	r_nodes = binary_tree_height(tree->right);

	if (l_nodes < r_nodes)
		return (r_nodes + 1);

	return (l_nodes + 1);
}
