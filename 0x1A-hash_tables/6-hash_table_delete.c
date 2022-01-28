#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: address of the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node;
			free(node->key);
			free(node->value);
			node = node->next;
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
