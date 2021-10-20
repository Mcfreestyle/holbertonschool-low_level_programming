#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to array
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int s1, s2, i;

	s1 = 0;
	s2 = 0;
	for (i = 0; i < size; i++)
	{
		s1 += *(a + i * (size + 1));
		s2 += *(a + (i + 1) * (size - 1));
	}
	printf("%d, %d\n", s1, s2);
}
