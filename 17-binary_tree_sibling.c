#include "binary_trees.h"

/**
 * binary_tree_sibling - locates sibling
 * @node:  pointer to the to find the sibling.
 * Return: If node = NULL or there is no sibling point siblingL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

