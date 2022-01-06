#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all nodes of a doubly linked list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nb_nodes;

	for (nb_nodes = 0; h; nb_nodes++, h = h->next)
		printf("%d\n", h->n);

	return (nb_nodes);
}
