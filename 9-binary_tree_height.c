#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary t
 * @tree: pointer to the root node
 * Return: height 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = height_h(tree);
	return (height - 1);
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
