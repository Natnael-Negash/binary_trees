#include "binary_trees.h"

/**
 * BINARY_TREE_INSERT_LEFT - INSERTS A NODE AS A LEFT-CHILD OF
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: IF PARENT IS NULL OR AN ERROR OCCURS - NULL.
 *         OTHERWISE - A POINTER TO THE NEW NODE.
 *
 * Description: IF PARENT ALREADY HAS A LEFT-CHILD, THE NEW NODE
 *              TAKES ITS PLACE AND THE OLD LEFT-CHILD IS SET AS
 *              THE LEFT-CHILD OF THE NEW NODE.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
