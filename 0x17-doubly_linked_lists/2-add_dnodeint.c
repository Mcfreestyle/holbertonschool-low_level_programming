#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: pointer to the head
 * @n: number of new node
 *
 * Return: address of the new node, otherwise NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
