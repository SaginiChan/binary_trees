#include "binary_trees.h"

/**
 * binary_tree_node - this will create a binary tree node
 * @parent: this is the pointer to the parent node of  new node
 * @value: this is the value to put in the new node
 * Return: this is a pointer to the new node,NULL if fails
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

