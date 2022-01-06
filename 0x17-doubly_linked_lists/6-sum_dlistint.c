#include "lists.h"

/**
 * sum_dlistint - sum of all the data(n) of a doubly linked list
 * @head: pointer to the fisrt node
 *
 * Return: the sum of all numbers of the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head; head = head->next)
		sum += head->n;
	return (sum);
}

