#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements of the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory for the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *str;

	i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);
	
	str = malloc(nmemb * size);

	if (str == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
