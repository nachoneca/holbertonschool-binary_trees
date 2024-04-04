#include"binary_trees.h"
/**
 *binary_tree_nodes - calculates the num of nodes with one child
 *@tree: pointer to the root
 *Return: number of nodes with at least one child, if null = 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
