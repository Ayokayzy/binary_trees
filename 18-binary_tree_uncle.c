#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
 *         NULL if node is NULL
 *         NULL if the parent is NULL
 *         NULL if the node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return: a pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
	{
		if (node->parent->right == NULL)
			return (NULL);
		else
			return (node->parent->right);
	}

	if (node->parent->right == node)
	{
		if (node->parent->left == NULL)
			return (NULL);
		else
			return (node->parent->left);
	}
	return (NULL);
}
