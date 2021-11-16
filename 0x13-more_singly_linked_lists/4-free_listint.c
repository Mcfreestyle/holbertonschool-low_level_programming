#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - frees a linked list
 * @head: address of the head
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	temp = head;

	head = head->next;
	free_listint(head);
	free(temp);
}
