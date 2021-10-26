#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array allocating dynamic memory
 * @size: size of the memory
 * @c: character to fill the array
 *
 * Return: NUll if the size is zero or the pointer is NUll,
 *	otherwise the pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	i = 0;
	if (size == 0 || str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
