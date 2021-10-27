#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 */
void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
