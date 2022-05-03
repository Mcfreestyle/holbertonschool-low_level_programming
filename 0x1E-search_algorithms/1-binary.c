#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array in the specified range
 * @ar: array
 * @i_left: first index of the subarray
 * @i_right: last index of the subarray
 */
void print_array(int *ar, size_t i_left, size_t i_right)
{
	printf("Searching in array: ");
	for (; i_left < i_right; i_left++)
		printf("%d, ", ar[i_left]);
	printf("%d\n", ar[i_left]);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i_left = 0,
	       i_right = size - 1,
	       i_middle;

	if (!array)
		return (-1);

	while (i_left <= i_right)
	{
		print_array(array, i_left, i_right);
		i_middle = (i_left + i_right) / 2;
		if (value < array[i_middle])
			i_right = i_middle - 1;
		else if (value > array[i_middle])
			i_left = i_middle + 1;
		else
			return (i_middle);
	}
	return (-1);
}
