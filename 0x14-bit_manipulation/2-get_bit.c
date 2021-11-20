
/**
 * get_bit - get the bit at a given index of a number
 * @n: number
 * @index: index that indicate the bit to get
 *
 * Return: value of the bit at index, otherwise -1 if an error ocurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int mask = 1;

	max_bits = sizeof(n) * 8;

	if (index >= max_bits)
		return (-1);

	mask = n & (mask << index);
	return (mask >> index);
}
