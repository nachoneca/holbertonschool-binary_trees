#include"binary_trees.h"
/**
 *binary_tree_is_full - check if the tree is full
 *@tree: pointer to the root
 *Return: 1 if full, 0 if not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t count_l = 0, count_r = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		count_l = 1 + binary_tree_is_full(tree->left);
	if (tree->right)
		count_r = 1 + binary_tree_is_full(tree->right);
	if (count_l == count_r)
		return (1);
	else
		return (0);
}
