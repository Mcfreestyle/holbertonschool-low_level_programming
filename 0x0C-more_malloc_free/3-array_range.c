#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: first number of the array
 * @max: last number of the array
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	unsigned int i, len;
	int *ptr;

	if (min > max)
		return (NULL);

	len = ((max - min) + 1);
	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		*(ptr + i) = min;
		min++;
	}
	return (ptr);
}
