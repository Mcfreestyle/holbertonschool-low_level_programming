#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 *
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
	{
		m *= -1;
	}
	_putchar('0' + m);
	return (m);
}
