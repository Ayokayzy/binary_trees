#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the lowest
 * common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, your function must return NULL
 */

binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second
)
{
	if (first == second->parent)
		return ((binary_tree_t *) first);
	if (second == first->parent)
		return ((binary_tree_t *) second);
	while (first->parent)
	{
		while (second->parent)
		{
			if (first->parent == second->parent)
				return (first->parent);
			second = second->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
