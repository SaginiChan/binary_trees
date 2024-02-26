#include "binary_trees.h"

/**
 * binary_tree_height - this will Take the height of a binary tree
 * @tree:this is a  Pointer to the root node to measure the height
 * Return: 0 will be returned if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}

