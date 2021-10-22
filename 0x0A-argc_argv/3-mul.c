#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array that contains the values of the arguments
 *
 * Return: 0 if there are three arguments, othewise 1
 */
int main(int argc, char *argv[])
{
	int c;

	if (argc == 3)
	{
		c = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", c);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
