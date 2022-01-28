#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: address of the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, c = 0;
	hash_node_t *node;

	if (!ht)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			c++;
			if (c > 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
