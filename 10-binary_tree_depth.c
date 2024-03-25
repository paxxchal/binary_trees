#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth -  measures the depth of a node in a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *current;
	size_t height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		current = tree->parent;
		while (current != NULL)
		{
			height += 1;
			current = current->parent;
		}
	}
	return (height);
}
