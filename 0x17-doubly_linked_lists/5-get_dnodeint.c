#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at specified index
 * @head: pointer to head of list
 * @index: index of node
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int node_idx;

	node = head;

	for (node_idx = 0; node != NULL; node_idx++)
	{
		if (node_idx == index)
			break;
		node = node->next;
	}
	if (node == NULL)
		return (NULL);

	return (node);
}
