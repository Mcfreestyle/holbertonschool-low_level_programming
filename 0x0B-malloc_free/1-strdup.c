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

	size = 0;
	while (*(str + size))
		size++;

	str1 = malloc(size);
	i = 0;
	if (str == NULL || str1 == NULL)
		return (NULL);
	while (*(str + i))
	{
		*(str1 + i) = *(str + i);
		i++;
	}
	return (str1);
}
