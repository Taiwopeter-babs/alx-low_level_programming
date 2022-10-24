#include "lists.h"

/**
 * sum_listint - computes the sum of all the data in a linked list
 * @head: starting node of list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum, data;

	if (head == NULL)
		return (0);

	node = head;

	sum = 0;
	while (node != NULL)
	{
		data = node->n;

		sum += data;

		node = node->next;
	}

	return (sum);


}
