#include"binary_trees.h"
/**
 *binary_tree_height - calculates the height of a tree
 *@tree: pointer to the root
 *Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_l = 0, count_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		count_l = 1 + binary_tree_height(tree->left);
	if (tree->right)
		count_r = 1 + binary_tree_height(tree->right);

	if (count_l > count_r)
		return (count_l);
	else
		return (count_r);

}
