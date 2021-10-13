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
 * rev_string - prints a string in reverse
 * @s: string
 */
void rev_string(char *s)
{
	int count, len, aux;

	len = _strlen(s);

	for (count = 0; count < len / 2; count++)
	{
		aux = s[count];
		s[count] = s[len - 1 - count];
		s[len - 1 - count] = aux;
	}
}
