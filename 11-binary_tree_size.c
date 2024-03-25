#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size -  measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		height += 1;
		height += binary_tree_size(tree->left);
		height += binary_tree_size(tree->right);
	}
	return (height);
}
