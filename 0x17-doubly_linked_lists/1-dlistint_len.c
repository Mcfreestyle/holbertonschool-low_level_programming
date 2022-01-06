#include "lists.h"

/**
 * dlistint_len - prints all nodes of a doubly linked list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nb_nodes;

	for (nb_nodes = 0; h; nb_nodes++)
		h = h->next;

	return (nb_nodes);
}
