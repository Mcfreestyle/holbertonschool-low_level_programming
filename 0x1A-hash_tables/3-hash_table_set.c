#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: address of the hast table
 * @key: key of the item
 * @value: value of the item
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *head, *node;


	if (!strcmp(key, "") || !key || !strcmp(value, "") || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	head = ht->array[index];
	node = head;

	while (node)
	{
		if (!strcmp(node->key, key))
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup((char *)key);
	new_node->value = strdup(value);
	new_node->next = head;

	head = new_node;

	ht->array[index] = head;
	return (1);
}
