#include "binary_trees.h"

/**
 * BINARY_TREE_INSERT_RIGHT - INSERT A NODE AS THE RIGHT-CHILD
 *                            OF ANOTHER IN A BINARY TREE.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: IF PARENT ALREADY HAS A RIGHT-CHILD, THE NEW NODE
 *              TAKES ITS PLACE AND THE OLD RIGHT-CHILD IS SET AS
 *              THE RIGHT-CHILD OF THE NEW NODE.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)

{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
