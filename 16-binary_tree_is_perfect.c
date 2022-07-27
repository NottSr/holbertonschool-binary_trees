#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int last_nl = 0, last_nr = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	if (tree->left || tree->right)
	{
		last_nl = (binary_tree_is_perfect(tree->left) + 1);
		last_nr = (binary_tree_is_perfect(tree->right) + 1);
	}

	if (last_nl == last_nr)
		return (1);

	return (0);
}
