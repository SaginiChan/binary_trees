#include "binary_trees.h"

/**
 * binary_tree_size -this will  Measure the size of a binary tree
 * @tree: this is a Pointer to the root node of the tree
 * Return: If  tree = NULL, return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->right);
		size += binary_tree_size(tree->left);

	}
	return (size);
}

