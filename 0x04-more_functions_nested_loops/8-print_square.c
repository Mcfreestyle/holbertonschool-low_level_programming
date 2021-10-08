#include "main.h"

/**
 * print_square - draws a square
 * @size: size of the square
 */
void print_square(int size)
{
	int n, m;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (m = 1; m <= size; m++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
