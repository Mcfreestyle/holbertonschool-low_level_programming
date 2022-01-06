#include "lists.h"
#include <stddef.h>

/**
 * get_dnodeint_at_index - get the nth node of a doubly linked list
 * @head: address of the first node
 * @index: index of the node
 *
 * Return: node in the given index, otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; head; head = head->next, index--)
	{
		if (index == 0)
			return (head);
	}
	return (NULL);
}
