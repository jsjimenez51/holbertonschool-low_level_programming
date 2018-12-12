#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right-child of another node.
* @parent: pointer to the parent node of the node being created.
* @value: the value to put in the new node.
*
* Return: a pointer to the created node, or NULL on failure/parent is NULL.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_right;

	if (!parent)
		return (NULL);

	new_node_right = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		new_node_right->right = parent->right;
		parent->right->parent = new_node_right;
	}
	parent->right = new_node_right;

	return (new_node_right);
}
