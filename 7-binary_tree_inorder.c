#include "binary_trees.h"

/**
 * binary_tree_inorder - this is a binary tree using in-order traversal
 * @tree:this is a  Pointer to the root node
 * @func: this is a Pointer to a function to call
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->right, func);
		binary_tree_inorder(tree->left, func);
		func(tree->n);
	}
}

