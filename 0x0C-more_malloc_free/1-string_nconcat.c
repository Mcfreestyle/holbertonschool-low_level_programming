#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates the first string
 *	with n bytes of the second string
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes of the second string that are concatenated
 *
 * Return: pointer to a newly allocated space to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, mem, i, j;
	char *str;

	i = 0;
	j = 0;

	if (s1 == NULL)
		size1 = 0;
	else
		size1 = strlen(s1);

	if (s2 == NULL)
		size2 = 0;
	else
		size2 = strlen(s2);

	if (n < size2)
	{
		mem = size1 + n + 1;
		str = malloc(sizeof(char) * mem);
	}
	else
	{
		mem = size1 + size2 + 1;
		str = malloc(sizeof(char) * mem);
	}

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(str + i) = *(s1 + i);

	for (; i < mem - 1; i++)
	{
		*(str + i) = *(s2 + j);
		j++;
	}
	*(str + i) = '\0';
	return (str);
}
