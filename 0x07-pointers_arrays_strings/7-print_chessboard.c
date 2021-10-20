#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to first vector of array a
 */
void print_chessboard(char (*a)[8])
{
	int i, j, size;

	size = sizeof(a[0]);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar(*(*(a + i) + j));
			j++;
		}
		_putchar('\n');
		i++;
	}
}
