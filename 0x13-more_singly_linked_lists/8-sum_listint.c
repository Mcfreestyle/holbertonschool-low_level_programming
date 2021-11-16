#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - calculate the sum of all data(n) of a linked list
 * @head: address of the first node
 *
 * Return: sum of all data(n), otherwise NULL
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
