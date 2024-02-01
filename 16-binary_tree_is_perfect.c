#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_height, r_height;
	int full;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	full = binary_tree_is_full(tree);
	if (l_height == r_height && full == 1)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: height of the tree
 * If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 * If tree is full return 1, else return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
