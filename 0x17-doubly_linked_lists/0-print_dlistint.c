#include "lists.h"

/**
 * print_dlistint - prints elements of a linked list
 * @h: pointer to head of linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *temp;

	temp = h;

	count = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);

		temp = temp->next;

		count++;
	}
	return (count);
}
