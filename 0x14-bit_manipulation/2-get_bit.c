
/**
 * get_bit - get the bit at a given index of a number
 * @n: number
 * @index: index that indicate the bit to get
 *
 * Return: value of the bit at index, otherwise -1 if an error ocurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;
	unsigned int i = 0;

	temp = n;
	while (temp > 1)
	{
		temp = temp >> 1;
		i++;
	}
	if (index > i)
		return (-1);
	while (index > 0)
	{
		n = n >> 1;
		index--;
	}
	return (n & 1);
}
