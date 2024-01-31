#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree
 * to count the number of nodes.
 * Return: the number of nodes in a tree
 * If tree is NULL, your function must return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	total = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;

	return (total);
}
