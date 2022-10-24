#include "lists.h"

/**
 * listint_len - computes and returns the number of elements
 * @h: header of list
 * Return: number of nodes/elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node;
	size_t i;

	node = h;

	i = 0;
	while (node != NULL)
	{
		node = node->next;

		i++;
	}
	return (i);
}
