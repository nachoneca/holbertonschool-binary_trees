#include"binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree using traversal
 * from left to rigth and finaly the root
 * @tree: tree to traverse
 * @func: pointer to function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
