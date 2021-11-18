#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int power_two = 1, temp;

	if (n == 0 || n == 1)
	{
		_putchar('0' + n);
		return;
	}
	while (power_two < n)
		power_two *= 2;
	temp = power_two;
	while (power_two > 0)
	{
		if (power_two <= n)
		{
			n -= power_two;
			_putchar('1');
		}
		else if (power_two != temp)
			_putchar('0');
		power_two /= 2;
	}
}
