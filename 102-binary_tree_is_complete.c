/* 102-binary_tree_is_complete.c */

#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the binary tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	const binary_tree_t *queue[4096];
	int front = 0, rear = 0;
	int has_null_child = 0;

	if (tree == NULL)
		return (0);

	queue[rear++] = tree;

	while (front != rear)
	{
		const binary_tree_t *node = queue[front++];

		if (node == NULL)
			has_null_child = 1;
		else
		{
			if (has_null_child)
				return (0);

			queue[rear++] = node->left;
			queue[rear++] = node->right;
		}
	}

	return (1);
}