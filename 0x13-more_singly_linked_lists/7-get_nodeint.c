#include "lists.h"

/**
 * get_nodeint_at_index - deletes the head node of a linked list
 * @head: starting node of list
 * @index: index of node to get and return
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int node_idx;

	node = head;

	node_idx = 0;
	while (node != NULL)
	{
		if (node_idx == index)
			break;
		node_idx++;
		node = node->next;
	}
	if (node == NULL)
		return (NULL);

	return (node);


}
