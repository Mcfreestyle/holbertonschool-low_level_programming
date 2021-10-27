#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: number to be checked
 *
 * Return: 0 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	int r;

	if (c >= '0' && c <= '9')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
