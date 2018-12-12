#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node.
* @parent: pointer to the parent node of the node being created.
* @value: the value to put in the new node.
*
* Return: a pointer to the created node, or NULL on failure/parent is NULL.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_left;

	if (!parent)
		return (NULL);

	new_node_left = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		new_node_left->left = parent->left;
		parent->left->parent = new_node_left;
	}
	parent->left = new_node_left;

	return (new_node_left);
}
