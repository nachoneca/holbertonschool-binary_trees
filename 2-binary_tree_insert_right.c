#include"binary_trees.h"
/**
 *binary_tree_insert_right - create a node to the right
 *@parent: pointer to the father of new node
 *@value: value iside new node
 *Return: returns the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (parent == NULL)
		return (NULL);
	n_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = value;
	n_node->parent = parent;
	n_node->left = NULL;
	n_node->right = NULL;

	if (parent->right != NULL)
	{
		n_node->right = parent->right;
		parent->right->parent = n_node;
	}
	parent->right = n_node;

	return (n_node);
}
