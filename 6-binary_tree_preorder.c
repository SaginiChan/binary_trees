#include "binary_trees.h"

/**
 * binary_tree_preorder -traverses a binary tree using pre-order traversal
 * @tree: this is a Pointer to the root node
 * @func: this is a Pointer to a function to call
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);

		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

