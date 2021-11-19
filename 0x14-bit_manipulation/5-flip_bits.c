
/**
 * flip_bits - calculate the number of bits to flip
 *		to get from one number to another
 * @n: first number to compare
 * @m: second number to compare
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned int i = 0;

	for (a = n ^ m; a > 0; a = a >> 1)
	{
		if ((a & 1) == 1)
			i++;
	}
	return (i);
}
