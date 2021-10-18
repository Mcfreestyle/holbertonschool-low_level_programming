#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: address where the character will be searched
 * @c: character to be located
 *
 * Return: address since the character located, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

