#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as left-child
 * @parent: pointer parent node
 * @value: value to store in the new node
 * Return: a pointer to created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	new_node->left = parent->left;

	if (parent->left)
		parent->left->parent = new_node;

	parent->left = new_node;
	return (new_node);
}
