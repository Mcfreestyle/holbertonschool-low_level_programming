#include <stddef.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: address of number
 * @index: index that indicate the position of the bit
 *
 * Return: 1 if it works, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
