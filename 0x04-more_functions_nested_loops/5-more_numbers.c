#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int num, i, d1, d2;

	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			d2 = num % 10;
			if (num >= 10)
			{
				d1 = num / 10;
				_putchar(d1 + '0');
			}
			_putchar(d2 + '0');
		}
		_putchar('\n');
	}
}
