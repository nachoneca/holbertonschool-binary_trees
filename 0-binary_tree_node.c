#include "binary_trees.h"
/**
 *binary_tree_node - creates a leaf in the biary tree
 *@parent: parent of the new node
 *@value: info inside node
 *Return: returns NULL if failed and n_node if succeed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	n_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = value;
	n_node->parent = parent;
	n_node->left = NULL;
	n_node->right = NULL;
	return (n_node);
}
