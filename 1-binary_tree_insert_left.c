

/**
 *binary_tree_insert_left - this will insertsa node as the left-child of another node
 *@parent: this is a pointer to the node to insert the left-child
 *@value: this value  stores in the new node
 * Return: this is a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}

