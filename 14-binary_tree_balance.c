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
	int bal = 0, bar = 0;
	if (tree == NULL)
		return (0);

	if ((!tree->left && tree->right) && (tree->left && !tree->right))
		return (0);

	if (tree->left)
		bal = binary_tree_balance(tree->left) + 1;

	if (tree->right)
		bar = binary_tree_balance(tree->right) + 1;

	return (bal - bar);
}
