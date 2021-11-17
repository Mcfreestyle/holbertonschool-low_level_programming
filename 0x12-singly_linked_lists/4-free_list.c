#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *htemp;

	while (head != NULL)
	{
		free(head->str);
		htemp = head;
		head = head->next;
		free(htemp);
	}
}
