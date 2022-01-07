#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at given index
 *			of a doubly linked list
 * @head: pointer to head
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;

	for (node = *head; node; node = node->next, index--)
	{
		if (index == 0)
		{
			if (node->prev)
				(node->prev)->next = node->next;
			else
				*head = node->next;
			if (node->next)
				(node->next)->prev = node->prev;
			free(node);
			return (1);
		}
	}
	return (-1);
}
