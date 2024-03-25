#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_levelorder - goes through a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Description: This function traverses the binary tree using level-order
 *              traversal and applies the given function to each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Create a queue to store the nodes */
	binary_tree_t *queue[1024]; /* Assuming a maximum of 1024 nodes */
	int front = 0, rear = 0;

	/* Enqueue the root node */
	queue[rear++] = (binary_tree_t *)tree;

	/* Loop through the tree level by level */
	while (front < rear)
	{
		/* Dequeue a node */
		binary_tree_t *node = queue[front++];

		/* Apply the function to the current node's value */
		func(node->n);

		/* Enqueue the left child if exists */
		if (node->left != NULL)
			queue[rear++] = node->left;

		/* Enqueue the right child if exists */
		if (node->right != NULL)
			queue[rear++] = node->right;
	}
}
