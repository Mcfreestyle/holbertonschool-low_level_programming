#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int r;

	if (c >= 'A' && c <= 'Z')
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
