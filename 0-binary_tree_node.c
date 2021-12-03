#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer parent node
 * @value: value to put in the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nd = malloc(sizeof(binary_tree_t));

	if (nd == NULL)
		return (NULL);

	nd->n = value;
	nd->parent = parent;
	nd->left = NULL;
	nd->right = NULL;

	return (nd);
}
