#include "hash_tables.h"

/**
 * key_index - calculates the index of a key
 * @key: key of the item
 * @size: size of the hash table
 *
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
