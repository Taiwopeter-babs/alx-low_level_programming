#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to head of linked list to free
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	if (head)
	{
		while (head != NULL)
		{
			next_node = head->next;
			free(head);
			head = next_node;
		}
	}
}
