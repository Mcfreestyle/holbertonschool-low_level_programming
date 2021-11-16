#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - localizes the nth node of a linked list
 * @head: address of first node
 * @index: index of the node
 *
 * Return: nth node, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (head);
}
