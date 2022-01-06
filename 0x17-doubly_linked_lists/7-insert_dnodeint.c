#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: pointer to the head
 * @idx: index of the node to add
 * @n: number of the new node
 *
 * Return: address of the new node, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp, *node = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	tmp = NULL;
	for (; node; node = node->next, idx--)
	{
		if (idx == 0)
		{
			new->next = node;
			new->prev = node->prev;
			if (tmp == NULL)
				*h = new;
			else
				tmp->next = new;
			node->prev = new;
			return (new);
		}
		tmp = node;
	}
	if (idx == 0)
	{
		new->next = node;
		new->prev = tmp;
		if (tmp == NULL)
			*h = new;
		else
			tmp->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
