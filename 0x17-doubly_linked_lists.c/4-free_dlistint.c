#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the first node
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	free_dlistint(head->next);
	free(head);
}
