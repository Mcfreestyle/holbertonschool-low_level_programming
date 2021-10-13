#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int len, count;

	len = strlen(str);
	
	for (count = 0; count < len; count += 2)
		_putchar(str[count]);
	_putchar('\n');
}


