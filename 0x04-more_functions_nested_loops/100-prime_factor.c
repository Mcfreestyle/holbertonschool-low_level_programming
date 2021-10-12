#include "main.h"
#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: 0.
 */
int main(void)
{
	int num, factor;

	num = 1231952;
	factor = 2;

	while (num > factor)
	{
		if (!(num % factor))
			num /= factor;
		else
			factor++;
	}
	printf("%i\n", factor);
	return (0);
}

