#include "lists.h"
/**
 * add_node - adds node to the beginning of a linked list
 * @head: first node of the list to be substituted
 * @str: string to be duplicated
 * Return: number of elements in a list
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int str_len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* compute length of str */
	for (str_len = 0; str[str_len] != '\0'; str_len++)
		;

	/* put in data */
	new_node->len = str_len;
	new_node->str = strdup(str);

	/* point the new node to the current value of head */
	new_node->next = (*head);

	/**
	 * move head to point to new node i.e holds the address of
	 * new node
	 */
	(*head) = new_node;

	return ((*head));
}
