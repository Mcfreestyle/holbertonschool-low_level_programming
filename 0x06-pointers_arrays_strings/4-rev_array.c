#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to integer
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1 ; i > 0; i--)
		printf("%d, ", a[i]);
	printf("%d\n", a[i]);
}
