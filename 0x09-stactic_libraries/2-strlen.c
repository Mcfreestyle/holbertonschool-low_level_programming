#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: pointer to a char
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int count, len;

	len = 0;

	for (count = 0; s[count] != '\0'; count++)
		len++;
	return (len);
}
