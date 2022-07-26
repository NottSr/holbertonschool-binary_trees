#include "binary_trees.h"
/**
 * binary_tree_preorder - Function that goes through a binary tree
 * using pre-order traversal
 *
 * @tree: Pointer to the node to check
 * @func: Pointer to a function to call for each node. The value
 * in the node must be passed as a parameter to this function.
 *
 * Return: 1 if node is root, otherwise 0
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}