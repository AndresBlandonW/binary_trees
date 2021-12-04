#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as right-child
 * @parent: pointer parent node
 * @value: value to store in the new node
 * Return: insert a node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newn = NULL;

	if (parent == NULL)
		return (NULL);

	newn = malloc(sizeof(binary_tree_t));
	if (newn == NULL)
		return (NULL);

	newn->n = value;
	newn->parent = parent;
	newn->left = NULL;
	newn->right = NULL;

	newn->right = parent->right;
	parent->right = newn;

	if (newn->right)
		newn->right->parent = newn;

	return (newn);
}
