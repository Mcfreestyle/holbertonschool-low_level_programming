#include "search_algos.h"
#include <stdio.h>

/**
 * min - calculate the minimun of two numbers
 * @num1: first number to compare for
 * @num2: second number to compare for
 *
 * Return: minimun of two numbers
 */
size_t min(size_t num1, size_t num2)
{
	return (num1 > num2 ? num2 : num1);
}

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
 * bin_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the subarray to search in
 * @left: index of the first element of the subarray
 * @right: index of the last element of the subarray
 * @value: value to search for
 *
 * Return: index where value is located
 */
int bin_search(int *array, size_t left, size_t right, int value)
{
	size_t middle;

	while (left <= right)
	{
		print_array(array, left, right);
		middle = (left + right) / 2;
		if (value < array[middle])
			right = middle - 1;
		else if (value > array[middle])
			left = middle + 1;
		else
			return (middle);
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (!array)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2,
								min(bound, size - 1));

	return (bin_search(array, bound / 2, min(bound, size - 1), value));
}
