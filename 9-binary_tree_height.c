#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftheight = 0;
	size_t rightheight = 0;
	size_t max;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left || tree->right)
		{
			leftheight = binary_tree_height(tree->left);
			rightheight = binary_tree_height(tree->right);

			if (leftheight > rightheight)
			{
				max = leftheight + 1;
				return (max);
			}
			else
			{
				max = rightheight + 1;
				return (max);
			}
		}
	}
	return (0);
}
