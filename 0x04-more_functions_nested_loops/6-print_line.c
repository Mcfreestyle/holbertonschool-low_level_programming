#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times to draw the character '_'
 */
void print_line(int n)
{
	int k;

	if (n > 0)
	{
		for (k = 1; k <= n; k++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
