#include "binary_trees.h"

/**
 * binary_tree_height - short description
 *
 * Description: long description
 *
 * @tree: argument_1 description
 *
 * Return: return description
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_balance - short description
 *
 * Description: long description
 *
 * @tree: argument_1 description
 *
 * Return: return description
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_h = 0, r_h = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		l_h = 0;
	else
		l_h = 1 + ((int) binary_tree_height(tree->left));
	if (tree->right == NULL)
		r_h = 0;
	else
		r_h = 1 + ((int) binary_tree_height(tree->right));
	return (l_h - r_h);
}
