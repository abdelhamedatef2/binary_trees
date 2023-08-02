#include "binary_trees.h"

/**
 * A binary_tree_node - Create binary tree node.
 * @parent:pointer to parent of node to create.
 * @value: value to put in a new node.
 *
 * Return: If error occurs - NULL.
 *         Otherwise - pointer to new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
