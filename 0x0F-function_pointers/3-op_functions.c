#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: the sum of the numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: the difference of the numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: the product of the numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: the division of the numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get the remainder of the division of 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: the remainder of the division of the numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
