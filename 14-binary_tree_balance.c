#include"binary_trees.h"

int b_height(const binary_tree_t *tree)
{
	size_t count_l = 0, count_r = 0;

	if (tree == NULL)
		return (-1);

	if (tree->left)
		count_l = 1 + b_height(tree->left);
	if (tree->right)
		count_r = 1 + b_height(tree->right);
	return (count_l > count_r ? count_l : count_r);
}

/**
 *binary_tree_balance - calculates the balance in a func
 *@tree: pointer to the root of the tree
 *Return: returns the balance of the tree, tree->left - tree->right
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (b_height(tree->left) - b_height(tree->right));
}
