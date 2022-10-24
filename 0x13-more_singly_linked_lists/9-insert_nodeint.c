#include "lists.h"

/**
 * insert_nodeint_at_index - adds node at a specific index
 * @head: starting node of list
 * @idx: index to add node to and return
 * @n: data value
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;
	unsigned int node_idx;

	if (*head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	temp = *head;

	for (node_idx = 0; node_idx < idx - 1; node_idx++)
	{
		temp = temp->next;
	}

	if (temp->next == NULL)
		return (NULL);
	node->next = temp->next;
	temp->next = node;

	return (node);
}
