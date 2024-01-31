#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree
 * to count the number of leaves.
 * Return: the number of leaves in a tree
 * If tree is NULL, your function must return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	total = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (total);
}
