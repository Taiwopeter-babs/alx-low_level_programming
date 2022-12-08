#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at specified index
 * in a doubly linked list
 * @h: pointer to head of linked list
 * @idx: index/position to be inserted
 * @n: data for new node
 * Return: address of new node, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr, *next_node, *temp;
	unsigned int node_idx, len;

	temp = *h;

	for (len = 0; temp != NULL; len++)
		temp = temp->next;

	if (*h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	if (idx != 0)
	{
		curr = *h;
		for (node_idx = 0; node_idx < idx - 1; node_idx++)
			curr = curr->next;

		next_node = curr->next;
		new_node->next = next_node;
		curr->next = new_node;
		new_node->prev = curr;
		next_node->prev = next_node;
	}
	return (new_node);
}
