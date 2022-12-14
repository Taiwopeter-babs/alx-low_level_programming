#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: starting node of list
 * Return: data of deleted head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;

	*head = (*head)->next;

	data = temp->n;

	free(temp);


	return (data);
}
