#include "binary_trees.h"

/**
 * binary_tree_rotate_right -  treerotat
 * @tree: Points
 * Return: Points
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *chill, *pero = tree;

	if (!tree)
		return (NULL);

	chill = pero->left;
	if (!chill)
		return (tree);

	if (chill->right)
		chill->right->pero = pero;

	pero->left = chill->right;
	chill->right = pero;
	chill->pero = pero->pero;
	pero->pero = chill;

	if (chill->pero && chill->pero->left == pero)
		chill->pero->left = chill;
	else if (chill->pero)
		chill->pero->right = chill;

	return (chill);
}

