#include "binary_trees.h"

/**
 * binary_tree_balance - balance factor of binary tree
 * balance factor is difference in height of two childs
 * @tree: pointer to the root
 *
 * Return: balance factor, or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height_h(tree->left) - height_h(tree->right));
}

/**
 * height_h - the heavy lifter
 * @tree: tree to measure
 *
 * Return: height, root inclusive
 */
size_t height_h(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = (1 + height_h(tree->left));

	right = (1 + height_h(tree->right));

	if (left > right)
		return (left);

	return (right);
}
