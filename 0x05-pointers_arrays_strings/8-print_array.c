#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
			printf("%i, ", a[i]);
		printf("%i\n", a[i]);
	}
	else
		printf("%i\n", a[0]);
}
