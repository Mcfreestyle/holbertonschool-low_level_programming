#include <stdio.h>

/**
 * main - prints Fizz-Buzz test
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (!(n % 3))
		{
			printf("Fizz");
		}
		if (!(n % 5))
		{
			printf("Buzz");
		}
		if (n % 3 && n % 5)
		{
			printf("%i", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}


