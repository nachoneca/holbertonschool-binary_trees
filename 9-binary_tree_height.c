#include"binary_trees.h"
/**
 *binary_tree_height - calculates the height of a tree
 *@tree: pointer to the root
 *Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_l, count_r;

	if (tree == NULL)
		return (0);
	count_l = binary_tree_height(tree->left);
	count_r = binary_tree_height(tree->right);
	if (count_l > count_r)
		return (count_l + 1);
	else
		return (count_r + 1);

}
