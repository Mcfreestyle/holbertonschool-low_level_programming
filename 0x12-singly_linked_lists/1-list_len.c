#include "lists.h"
#include <stddef.h>

/**
 * list_len - calculate the number of elements of a linked list
 * @h: pointer to the head of a linked list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (; h != NULL; h = h->next)
	{
		i++;
	}
	return (i);
}
