#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int count;
	
	for (count = 0; str[count] != '\0'; count += 2)
		_putchar(str[count]);
	_putchar('\n');
}


