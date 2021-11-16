#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - calculate the number of elements of a linked list
 * @h: pointer to head
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{

	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
