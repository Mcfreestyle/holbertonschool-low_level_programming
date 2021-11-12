#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	for (; head != NULL; head = head->next)
	{
		free(head->str);
		free(head);
	}
}
