#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *actual, *temp;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);
	actual = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(actual);
		return (1);
	}
	for (; actual->next != NULL; actual = actual->next, i++)
	{
		if (i == index)
			temp = actual;
		if (i - 1 == index)
		{
			temp->next = actual->next;
			free(actual);
			return (1);
		}
	}
	if (i - 1 != index)
		return (-1);
	temp->next = actual->next;
	free(actual);
	return (1);
}
