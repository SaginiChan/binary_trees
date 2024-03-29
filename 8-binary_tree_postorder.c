#include "binary_trees.h"

/**
 * binary_tree_postorder - this will Go through a binary tree
 * @tree: this is a  Pointer to the root node
 * @func: this is a pointer to a function to call
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

