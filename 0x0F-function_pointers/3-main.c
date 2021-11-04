#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array that contains the values of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cal, num1, num2;
	char *operator;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		operator = argv[2];
		if (get_op_func(operator) == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		cal = get_op_func(operator)(num1, num2);
		printf("%d\n", cal);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
