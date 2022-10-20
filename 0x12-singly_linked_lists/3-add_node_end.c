#include "lists.h"
/**
 * add_node_end - adds node to the end of a linked list
 * @head: first node of the list to be substituted
 * @str: string to be duplicated
 * Return: number of elements in a list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int str_len;
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (str_len = 0; str[str_len] != '\0'; str_len++)
		;

	new_node->len = str_len;
	new_node->str = strdup(str);

	new_node->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new_node;
		return ((*head));
	}
	/* set temp to head */
	temp = (*head);
	/**
	 * move temp->next until next is not NULL
	 * then set temp->next to new_node
	 */
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;

	return (new_node);
}
