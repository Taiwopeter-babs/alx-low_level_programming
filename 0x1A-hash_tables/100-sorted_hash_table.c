#include "hash_tables.h"

/**
 * shash_table_create - creates a new hash table
 * @size: size of the table to be created
 * Return: pointer to new table on success, else NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int idx;


	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
	{
		sfree_table(new_table);
		return (NULL);
	}

	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;

	new_table->array = calloc(new_table->size, sizeof(shash_node_t *));
	if (!(new_table->array))
	{
		free(new_table->array);
		sfree_table(new_table);
		return (NULL);
	}
	for (idx = 0; idx < new_table->size; idx++)
	{
		new_table->array[idx] = NULL; /* set each head to NULL */
	}

	return (new_table);
}

/**
 * shash_table_set - adds an element to the hash table.
 * If there is collision, adds it to indexed linked list
 * @ht: pointer to hash table
 * @key: used to get the index with the hash function
 * @value: value to be added alongside the key to hash table
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current_node;


	if (!ht)
	{
		free(ht);
		return (0);
	}

	/* create node to add */
	new_node = screate_node(key, value);
	if (!new_node)
	{
		sfree_table(ht);
		return (0);
	}
	/* get index */
	index = key_index((unsigned char *) key, ht->size);

	/* check if index is occupied */
	current_node = ht->array[index];

	if (current_node == NULL) /* index is empty, key non-existent */
	{
		/* add to table */
		ht->array[index] = new_node;
		ht->shead = add_to_sorted(ht, new_node);
		return (1);
	}
	else
		scollision_h(ht, index, new_node);

	ht->shead = add_to_sorted(ht, new_node);
	return (1);
}

/**
 * add_to_sorted - inserts node in sorted linked list
 * based on ASCII values
 * @ht: pointer to hash table
 * @node: pointer to node of sorted linked list
 * Return: head of sorted linked list, otherwise NULL
 */
shash_node_t *add_to_sorted(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *curr, *next;
	unsigned long int ascii_val, ascii_head, next_val, curr_val;

	/* if sorted list is empty */
	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = node;
		return (ht->shead);
	}

	ascii_val = get_ascii(node->key);

	if (!(ht->shead->snext))
	{
		ascii_head = get_ascii(ht->shead->key);
		if (ascii_val >= ascii_head)
		{
			ht->shead->snext = node;
			node->sprev = ht->shead;
			ht->stail = node;
			return (ht->shead);
		}
		else if (ascii_val <= ascii_head)
		{
			node->snext = ht->shead;
			ht->shead->sprev = node;
			ht->shead = node;
			ht->stail = node->snext;
			return (ht->shead);
		}
	}
	else if (ht->shead->snext)
	{
		curr = ht->shead;

		if (ascii_val <= get_ascii(ht->shead->key))
		{
			node->snext = ht->shead;
			ht->shead->sprev = node;
			ht->shead = node;
			return (ht->shead);
		}
		while (curr)
		{
			curr_val = get_ascii(curr->key);

			if (curr->snext)
			{
				next_val = get_ascii(curr->snext->key);

				if (ascii_val >= curr_val && ascii_val <= next_val)
				{
					next = curr->snext;
					node->snext = next;
					curr->snext = node;
					node->sprev = curr;
					next->sprev = node;
					return (ht->shead);
				}
			}
			if (ascii_val >= curr_val && curr->snext == NULL)
			{
				node->sprev = curr;
				curr->snext = node;
				ht->stail = node;
				return (ht->shead);
			}
			curr = curr->snext;
		}
	}
	return (NULL);
}

/**
 * scollision_h - uses chaining method to handle collisions
 * in the hash table
 * @ht: pointer to hash table
 * @index: index of array that holds the linked list; recipient of new node
 * @node: new node to be added to linked list
 * Return: nothing
 */
void scollision_h(shash_table_t *ht, unsigned long int index, shash_node_t *node)
{
	shash_node_t *head;

	head = ht->array[index];

	ht->array[index] = sadd_node_to_chain(head, node);
}
/**
 * sadd_node_to_chain - adds node beginning of linked list
 * @head: pointer to head of linked list
 * @node: new node to be added
 * Return: pointer to head of linked list
 */
shash_node_t *sadd_node_to_chain(shash_node_t *head, shash_node_t *node)
{
	shash_node_t *temp;

	if (!head)
	{
		head = node;
		return (head);
	}
	else
	{
		temp = head;
		while (temp)
		{
			if (strcmp(temp->key, node->key) == 0)
				break;
			temp = temp->next;
		}
		if (temp == NULL)
		{
			node->next = head;
			head = node;
		}
		else
		{
			free(temp->value);
			temp->value = strdup(node->value);
			sfree_node(node);
		}
	}

	return (head);
}


/**
 * get_ascii - compute the ascii values of string/char and returns
 * @key: key to compute
 * Return: unsigned long int value
 */
unsigned long int get_ascii(char *key)
{
	unsigned long int idx, sum = 0;

	for (idx = 0; key[idx]; idx++)
		sum += key[idx];

	return (sum);
}

/**
 * shash_table_get - retrieves value of key from hash table
 * @ht: pointer to hash table
 * @key: key parameter
 * Return: value of key, else NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (!ht)
	{
		return (NULL);
	}

	index = key_index((unsigned char *) key, ht->size);
	if (index > ht->size)
		return (NULL);

	node = ht->array[index];
	if (!node)
	{
		sfree_node(node);
		return (NULL);
	}

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * screate_node - creates new node for array or linked list
 * @key: key of node
 * @value: value of node
 * Return: new node created
 */
shash_node_t *screate_node(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (!key)
	{
		free(new_node);
		return (NULL);
	}
	new_node->key = strdup(key);

	if (!value)
		new_node->value = strdup("(null)");
	else
		new_node->value = strdup(value);

	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;

	return (new_node);
}
/**
 * shash_table_print - prints a hash table in order based on
 * sorted linked list
 * @ht: pointer to hash table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	char *separation = "";

	if (ht == NULL)
		return;

	node = ht->shead;

	putchar('{');
	printf("%s", separation);

	while (node)
	{
		printf("%s'%s': '%s'", separation, node->key,
				node->value);
		separation = ", ";

		node = node->snext;
	}

	putchar('}');
	printf("\n");
}
/**
 * shash_table_print_rev - prints a hash table in order
 * @ht: pointer to hash table
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	char *separation = "";

	if (ht == NULL)
		return;

	putchar('{');
	printf("%s", separation);

	node = ht->stail;

	while (node)
	{
		printf("%s'%s': '%s'", separation, node->key,
				node->value);
		separation = ", ";

		node = node->sprev;
	}
	putchar('}');
	printf("\n");
}

/**
 * sfree_linked_list - frees the linked list in each array
 * @list_head: pointer to head of linked list
 * Return: nothing
 */
void sfree_linked_list(shash_node_t *list_head)
{
	shash_node_t *temp;

	while (list_head)
	{
		temp = list_head;
		list_head = list_head->next;
		sfree_node(temp);
	}
	free(list_head);
}

/**
 * sfree_table - frees a hash table
 * @table: pointer to table
 * Return: nothing
 */
void sfree_table(shash_table_t *table)
{
	unsigned long int idx;

	for (idx = 0; idx < table->size; idx++)
	{
		if (table->array[idx])
			sfree_linked_list(table->array[idx]);
	}

	/*free_slinked_list(table->shead);*/
	if (table->array)
		free(table->array);
	free(table);
}
/**
 * sfree_node - frees a node
 * @node: node to be freed
 * Return: nothing
 */
void sfree_node(shash_node_t *node)
{
	if (node->key)
		free(node->key);
	if (node->value)
		free(node->value);
	free(node);
}
/**
 * shash_table_delete - frees/deletes a hash table
 * @ht: pointer to hash table
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	sfree_table(ht);
}
