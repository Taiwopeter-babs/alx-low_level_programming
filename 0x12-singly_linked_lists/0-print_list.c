#include "lists.h"
/**
 * print_list - prints the elements of a linked list
 * @h: node of the element
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i, j;

	j = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			for (i = 0; h->str[i] != '\0'; i++)
				;

			printf("[%lu] [%s]\n", i, h->str);
		}
		if (h->str == NULL)
			printf("[0] (nil)\n");

		h = h->next;
		j++;
	}
	return (j);
}
