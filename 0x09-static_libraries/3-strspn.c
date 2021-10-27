#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: address that will verify their characters with accept
 * @accept: address
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int count, i, len;

	len = strlen(accept);
	count = 0;

	while (*s)
	{
		i = 0;
		while (*(accept + i))
		{
			if (*s == *(accept + i))
			{
				count++;
				break;
			}
			i++;
		}
		if (i == len)
			break;
		s++;
	}
	return (count);
}

