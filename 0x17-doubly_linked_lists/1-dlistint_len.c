#include "lists.h"

/**
 * dlistint_len - computes length of a linked list
 * @h: pointer to head of linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *temp;

	temp = h;

	count = 0;
	while (temp != NULL)
	{
		temp = temp->next;

		count++;
	}
	return (count);
}
