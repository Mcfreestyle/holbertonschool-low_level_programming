#include <stddef.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: address of the number
 * @index: index that indicate the position of the bit
 *
 * Return: 1 if it works, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int mask = 1;

	max_bits = sizeof(*n) * 8;
	if (n == NULL || index >= max_bits)
		return (-1);

	mask = mask << index;
	mask = ~(mask);
	*n = *n & mask;
	return (1);
}
