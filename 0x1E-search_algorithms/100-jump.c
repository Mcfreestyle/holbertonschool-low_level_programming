#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0,
	       step = 0;/* block size to be jumped */

	if (!array)
		return (-1);

	/* Finding the block where value is present (if it's present) */
	while (array[step] < value)
	{
		prev = step;
		step += sqrt(size);
		if (step >= size)
			break;
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	/* Linear search for value in block beginning with prev */
	while (prev <= step && prev < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	return (-1);
}
