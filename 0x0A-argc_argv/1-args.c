#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array that contains values of the arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int n = 0;

	while (--argc)
		n++;
	printf("%d\n", n);
	return (0);
}
