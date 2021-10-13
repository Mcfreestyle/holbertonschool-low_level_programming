#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len, count;

	len = 0;

	for (count = 0; s[count] != '\0'; count++)
		len++;
	return (len);
}

/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int count, len;

	len = _strlen(s);

	for (count = len - 1; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
