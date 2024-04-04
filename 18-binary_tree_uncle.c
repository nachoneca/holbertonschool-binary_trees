#include "binary_trees.h"
/**
 *binary_tree_uncle - find if have uncle
 *@node: pointer to the node to find if have sibling
 *Return: return pointer to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
	{
		if (node->parent->parent->right == NULL)
			return (NULL);
		return (node->parent->parent->right);
	}
	else
	{
		if (node->parent->parent->left == NULL)
			return (NULL);
		return (node->parent->parent->left);
	}
}
