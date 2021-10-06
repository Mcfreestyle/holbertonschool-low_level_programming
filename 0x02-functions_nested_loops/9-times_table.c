#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, mult, multPost;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mult = i * j;
			multPost = i * (j + 1);
			if ((mult / 10) > 0)
			{
				_putchar((mult / 10) + '0');
			}
			_putchar((mult % 10) + '0');
			if (j == 9)
			{
				_putchar('\n');
				break;
			}
			_putchar(',');
			if (multPost <= 9)
			{
				_putchar(' ');
			}
			_putchar (' ');
		}
	}
}
