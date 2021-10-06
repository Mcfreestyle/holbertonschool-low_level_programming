#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the number to be checked
 *
 * Return: n.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
