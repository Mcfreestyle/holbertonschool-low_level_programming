#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of a triangle
 */
void print_triangle(int size)
{
	int i, j, spc;

	if (size > 0)
	{
		spc = size;
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j < spc)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			spc--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
