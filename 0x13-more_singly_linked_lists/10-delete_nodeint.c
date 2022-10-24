#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a specific index
 * @head: starting node of list
 * @index: index to add node to and return
 * Return: node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *temp;
	unsigned int idx;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	prev = *head;
	/* Go to (n-1)th node */
	for (idx = 0; idx < index - 1; idx++)
	{
		if (prev->next == NULL)
			return (-1);
		prev = prev->next;
	}

	temp = prev->next; /* nth node */

	/* point (n-1)th node to (n+1)th node */
	prev->next = temp->next;

	free(temp);

	return (1);
}
