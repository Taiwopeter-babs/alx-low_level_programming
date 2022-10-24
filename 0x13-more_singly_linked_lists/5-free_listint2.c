#include "lists.h"

/**
 * free_listint2 - frees memory of list and sets head to NULL
 * @head: header of list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;


	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		(*head) = next_node;
	}
	(*head) = NULL;

}
