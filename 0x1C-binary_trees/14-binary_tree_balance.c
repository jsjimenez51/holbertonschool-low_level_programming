#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
* binary_tree_balance - measures the balance factor of a binary tree.
* @tree: pointer to the root node of the tree to measure the balance.
*
* Return: the balance factor of the binary tree else 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0;
	int height_r = 0;

	if (!tree)
		return (0);

	height_l = (binary_tree_height(tree->left));
	if (!tree->left)
		height_l--;
	height_r = (binary_tree_height(tree->right));
	if (!tree->right)
		height_r--;

	return (height_l - height_r);
}
