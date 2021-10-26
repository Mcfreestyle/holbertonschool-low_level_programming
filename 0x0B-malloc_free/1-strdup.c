#include <stdlib.h>

/**
 * _strdup - copies the string to a newly allocated memory
 * @str: pointer to dynamic memory
 *
 * Return: NULL if the string is null or there is insufficient memory,
 *	otherwise the pointer to the dynamic memory
 */
char *_strdup(char *str)
{
	int i, size;
	char *str1;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (*(str + size))
		size++;
	str1 = malloc(size + 1);

	i = 0;
	if (str1 == NULL)
		return (NULL);
	while (*(str + i))
	{
		*(str1 + i) = *(str + i);
		i++;
	}
	*(str1 + i) = '\0';
	return (str1);
}
