#include <stddef.h>
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: address where the character will be searched
 * @c: character to be located
 *
 * Return: address since the character located, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	int len, i;

	len = strlen(s);
	i = 0;

	while (i <= len)
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}

