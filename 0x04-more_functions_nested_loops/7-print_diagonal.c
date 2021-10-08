#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times to draw the backslash
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			if (i != n)
			{
				for (j = 1; j <= i; j++)
				{
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
