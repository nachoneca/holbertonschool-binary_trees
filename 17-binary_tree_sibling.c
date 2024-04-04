#include "binary_trees.h"
/**
 *binary_tree_sibling - find if have sibling
 *@node: pointer to the node to find if have sibling
 *Return: return pointer to sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
	{
		if (node->parent->right == NULL)
			return (NULL);
		return (node->parent->right);
	}
	else
	{
		if (node->parent->right == NULL)
			return (NULL);
		return (node->parent->left);
	}
}
