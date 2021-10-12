#include "main.h"

/**
 * print_diagonal_1 - prints diagonal (second form)
 * @n: number of backslashs
 */
void print_diagonal_1(int n)
{
	int n_space, diag;

	diag = n;

	if (n > 0)
	{
		while (n--)
		{
			for (n_space = n + 1; n_space < diag; n_space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
