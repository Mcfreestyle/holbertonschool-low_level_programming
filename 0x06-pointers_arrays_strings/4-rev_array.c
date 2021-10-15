#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to integer
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int i, aux;

	for (i = 0; i < n/2; i++)
	{
		aux = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = aux;
	}     	
}
