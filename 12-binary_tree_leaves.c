#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			height += 1;
		}
		height += binary_tree_leaves(tree->left);
		height += binary_tree_leaves(tree->right);
	}
	return (height);
}
