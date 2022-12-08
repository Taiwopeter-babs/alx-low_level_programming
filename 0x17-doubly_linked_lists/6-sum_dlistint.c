#include "lists.h"

/**
 * sum_dlistint - computes sum of data in linked list
 * @head: pointer to head of linked list
 * Return: sum of linked list, otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
