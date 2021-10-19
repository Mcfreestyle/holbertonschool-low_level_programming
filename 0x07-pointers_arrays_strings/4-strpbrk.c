#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: address that search their characters in accept
 * @accept: set of bytes
 *
 * Return: address of modificated string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (*(accept + i))
		{
			if (*s == *(accept + i))
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}

