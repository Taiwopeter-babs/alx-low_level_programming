#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to head of linked list
 * @index: index of node to delete
 * Return: 1 on success, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *temp;
	unsigned int idx;

	if (*head == NULL)
		return (-1);
	node = *head;

	for (idx = 0; node != NULL; idx++)
	{
		if (index == 0)
		{
			temp = *head;
			*head = temp->next;
			if (temp->next != NULL)
				(*head)->prev = NULL;
			free(temp);
			return (1);
		}
		if (idx == index)
		{
			if (node->next != NULL)
				(node->next)->prev = node->prev;
			if (node->prev != NULL)
				(node->prev)->next = node->next;
			free(node);
			return (1);
		}
		node = node->next;
	}
	return (-1);
}
