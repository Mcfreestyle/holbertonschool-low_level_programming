#include "main.h"
#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: 0.
 */
int main(void)
{
	long int num, factor;

	num = 612852475143;
	factor = 2;

	while (num > factor)
	{
		if (!(num % factor))
			num /= factor;
		else
			factor++;
	}
	printf("%ld\n", factor);
	return (0);
}

