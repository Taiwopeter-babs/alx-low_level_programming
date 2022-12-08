#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning of linked list
 * @head: pointe to head of linked list
 * @n: data of new node to add
 * Return: new node on success, else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	if (*head)
	{
		new_node->next = *head;
		new_node->prev = NULL;
		(*head)->prev = new_node;
		*head = new_node;
	}
	else if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}

	return (new_node);
}
