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

	node = *head;
	if (*head == NULL)
		return (-1);

	idx = 0;
	while (node)
	{
		if (index == 0)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
			return (1);
		}
		if (idx == index - 1)
		{
			temp = node->next;
			node->next = temp->next;
			if (node->next != NULL)
				(node->next)->prev = node;
			free(temp);
			return (1);
		}
		node = node->next;
		idx++;
	}
	return (-1);
}
