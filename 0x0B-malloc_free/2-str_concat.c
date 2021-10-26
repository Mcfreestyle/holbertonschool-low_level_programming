#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the fisrt string
 * @s2: pointer to the second string
 *
 * Return: the pointer to a newly allocated space which
 *	contains the concatenation, otherwise NULL if
 *	there is insufficient memory
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, j;
	char *str;

	size1 = 0;
	size2 = 0;

	if (s1 != NULL)
	{
		while (*(s1 + size1))
			size1++;
	}
	else
		size1 = 0;

	if (s2 != NULL)
	{
		while (*(s2 + size2))
			size2++;
	}
	else
		size2 = 0;

	str = malloc(size1 + size2 + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(str + i) = *(s1 + i);
	for (j = 0; j < size2; j++)
	{
		*(str + i) = *(s2 + j);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
