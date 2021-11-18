#include <string.h>
#include <stddef.h>

/**
 * _pow_recursion - calculate the power of a number
 * @x: number that is raised to y
 * @y: number that is the power of x
 *
 * Return: the power of a number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: converted number, otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i, exp;
	unsigned int uint = 0;

	if (b == NULL)
		return (0);
	exp = strlen(b) - 1;

	for (i = 0; *(b + i); i++, exp--)
	{
		if (*(b + i) != '1' && *(b + i) != '0')
			return (0);
		uint += (*(b + i) - 48) * _pow_recursion(2, exp);
	}
	return (uint);
}
