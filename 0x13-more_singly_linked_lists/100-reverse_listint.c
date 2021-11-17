#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - reverses a listint_t
 * @head: pointer to the head
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *actual, *act_next;

	if (*head == NULL)
		return (NULL);
	actual = *head;
	act_next = (*head)->next;
	if ((*head)->next == NULL)
		return (*head);
	*head = (*head)->next;
	reverse_listint(head);

	(act_next)->next = actual;
	actual->next = NULL;
	return (*head);
}
