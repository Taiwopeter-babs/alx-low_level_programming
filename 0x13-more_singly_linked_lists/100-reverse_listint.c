#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: starting node of list
 * Return: address to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	if (*head == NULL)
		return (NULL);

	prev = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next; /* set next to next node of head */
		(*head)->next = prev; /* set head node to point to NULL */
		prev = *head; /* store another value that will be prev node */
		*head = next; /* move head node forward */
	}
	*head = prev; /* set *head to first node of reversed list */

	return (prev);
}
