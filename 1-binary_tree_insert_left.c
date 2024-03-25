#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: Always new_tree to left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree = malloc(sizeof(binary_tree_t));

	if (new_tree == NULL)
	{
		return (NULL);
	}
	if (parent == NULL)
	{
		free(new_tree);
		return (NULL);
	}


	new_tree->n = value;
	new_tree->left = NULL;
	new_tree->right = NULL;
	new_tree->parent = parent;
	if (parent->left == NULL)
	{
		parent->left = new_tree;
	}
	else
	{
		new_tree->left = parent->left;
		parent->left = new_tree;
		(new_tree->left)->parent = new_tree;
	}
	return (new_tree);
}
