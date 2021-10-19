#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: address where a substring will be searched.
 * @needle: substring
 *
 * Return: pointer to the beggining of the located substring, otherwise NUll
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, c, len;

	i = 0;
	j = 0;
	c = 0;
	len = strlen(needle);

	while (*(haystack + j))
	{
		while (*(haystack + i))
		{
			if (*(needle + j) == *(haystack + i))
			{
				i++;
				c++;
				break;
			}
			if (c - 1 != j && c != 0)
				break;
			i++;
		}
		if (c - 1 != j || !(*(haystack + i)))
			break;
		j++;
	}
	if (c == len)
		return (haystack + i - c);
	else
		return (NULL);
}

