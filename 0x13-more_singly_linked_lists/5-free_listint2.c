#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the head
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return;
	}
	temp = *head;

	*head = (*head)->next;
	free_listint2(head);
	free(temp);
}
