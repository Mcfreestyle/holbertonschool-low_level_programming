#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int len, pos;

	len = strlen(str);
	pos = len / 2 + len % 2;

	for (; pos < len; pos++)
		_putchar(str[pos]);
	_putchar('\n');
}


