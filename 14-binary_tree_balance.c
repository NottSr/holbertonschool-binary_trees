#include "binary_trees.h"
/**
 * binary_tree_balance - Function that measures the balance factor of a
 * binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bal_int = 0, bar_int = 0;

	if (tree == NULL || (!tree->left && !tree->right))
		return (0);

	if ((tree->left && tree->right) || (tree->left && !tree->right))
		bal_int = binary_tree_balance(tree->left) + 1;

	if ((!tree->left && tree->right) || (tree->left && tree->right))
		bar_int = binary_tree_balance(tree->right) + 1;

	return (bal_int - bar_int);
}
