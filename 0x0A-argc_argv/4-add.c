#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of parameters
 * @argv: array that contains the values of the arguments
 *
 * Return: 0 if the arguments are numbers and
 *	if there is only one argument, otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, j, add;

	i = 1;
	add = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (*(*(argv + i) + j))
		{
			if (*(*(argv + i) + j) >= '0' && *(*(argv + i) + j) <= '9')
				j++;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
		i++;
	}
	printf("%d\n", add);
	return (0);
}

