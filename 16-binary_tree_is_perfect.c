#include"binary_trees.h"

/**
 *b_height - calculates the height of a tree
 *@tree: pointer to the root
 *Return: the height of the tree
 */
int b_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
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

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
/**
 * binary_tree_is_perfect - determine if a binary tree is perfect
 * @tree: pointer to the root of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_balance = binary_tree_balance(tree->left);
	int right_balance = binary_tree_balance(tree->right);

	if (left_balance != 0 || right_balance != 0)
		return (0);

	return (binary_tree_is_perfect(tree->left)
	&& binary_tree_is_perfect(tree->right));
}
