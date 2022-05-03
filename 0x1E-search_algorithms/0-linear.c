#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in a array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search in
 *
 * Return: first index where value is located, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int index = -1;

	if (!array)
		return (index);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			index = i;
			break;
		}
	}
	return (index);
}
