#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth
 * of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: depth of a node
 * If tree is NULL, your function must return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *current_node;
	size_t depth = 0;

	if (tree == NULL)
		return (depth);
	current_node = (binary_tree_t *) tree;
	while (current_node->parent)
	{
		depth++;
		current_node = current_node->parent;
	}
	return (depth);
}
