#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: pointer to the head
 * @n: number of the new node
 *
 * Return: address of the new node, otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *node = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (node == NULL)
	{
		new->next = node;
		new->prev = node;
		*head = new;
		return (new);
	}

	while (node->next)
		node = node->next;

	new->next = node->next;
	new->prev = node;
	node->next = new;

	return (new);
}
