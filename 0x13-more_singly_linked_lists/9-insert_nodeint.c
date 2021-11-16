#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head
 * @idx: index of the list where the new node should be added
 * @n: date to the new node
 *
 * Return: address of the new code, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (temp = *head; temp != NULL; temp = temp->next, i++)
	{
		if (i == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
	}
	free(new);
	return (NULL);
}



