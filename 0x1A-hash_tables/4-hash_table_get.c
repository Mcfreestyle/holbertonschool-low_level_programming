#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: address of the hash table
 * @key: key of the item
 *
 * Return: value associated with the element, or NULL if @key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *item;

	if (!ht)
		return (NULL);

	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item)
		{
			if (!strcmp(item->key, key))
				return (item->value);
			item = item->next;
		}
	}
	return (NULL);
}
