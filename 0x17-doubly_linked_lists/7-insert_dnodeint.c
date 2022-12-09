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
	dlistint_t *new_node, *curr, *next_node;
	unsigned int node_idx;

	if (*h == NULL && idx != 0)
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
		new_node->prev = NULL;
		if (*h == NULL)
		{
			*h = new_node;
			new_node->next = NULL;
		}
		else
		{
			new_node->next = *h;
			(*h)->prev = new_node;
			*h = new_node;
		}
		return (new_node);
	}
	if (idx != 0)
	{
		if (idx == 1)
			insert_atindexone(h, new_node);
		curr = *h;
		for (node_idx = 0; node_idx < idx - 1; node_idx++)
			curr = curr->next;

		next_node = curr->next;
		new_node->next = next_node;
		curr->next = new_node;
		new_node->prev = curr;
		next_node->prev = new_node;
	}
	return (new_node);
}
/**
 * insert_atindexone - inserts a node just after the head
 * @h: head
 * @new_node: node to insert
 * Return: node
 */
dlistint_t *insert_atindexone(dlistint_t **h, dlistint_t *new_node)
{
	dlistint_t *next_node;

	next_node = (*h)->next;
	new_node->next = next_node;
	(*h)->next = new_node;
	new_node->prev = *h;
	next_node->prev = new_node;
	return (new_node);
}

