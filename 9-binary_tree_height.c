#include "binary_trees.h"
/**
 * binary_tree_height - Function that measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (!tree->left && !tree->right))
		return (0);

	size_t h_left = binary_tree_height(tree->left);
	size_t h_right = binary_tree_height(tree->right);

	return (h_left > h_right ? h_left + 1 : h_right + 1);
}
