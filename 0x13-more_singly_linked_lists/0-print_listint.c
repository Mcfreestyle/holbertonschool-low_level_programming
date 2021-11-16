#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{

	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
