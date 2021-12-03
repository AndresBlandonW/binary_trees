#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as left-child
 * @parent: pointer parent node
 * @value: value to store in the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newn = NULL;

	if (parent == NULL)
		return (NULL);

	newn = malloc(sizeof(binary_tree_t));
	if(newn == NULL)
		return (NULL);

	newn->n = value;
	newn->parent = parent;
	newn->left = NULL;
	newn->right = NULL;

	if(parent->left)
		parent->left->parent = newn;

	parent->left = newn;
	return (newn);
}
