#include "binary_trees.h"

/**
 *binary_tree_depth -this will  Measure the depth of a node in a binary tree
 *@tree:this is a  Pointer to the node to measure
 *Return:this will Return 0 if true,else  it will return a depth of a given value
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

