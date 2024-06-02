#include "tree.h"


t_node *create(int value)
{
	t_node *new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return NULL;

	new_node->data = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}

t_node *insert_left(t_node *parent, int value)
{
	parent->left = create(value);
	return parent->left;
}

t_node *insert_right(t_node *parent, int value)
{
	parent->right = create(value);
	return parent->right;
}

int	main(void)
{
	t_node *node;

	node = create(1);
	if (!node)
		return (1);
	printf("value is: %d\n", node->data);
	return (0);
}
