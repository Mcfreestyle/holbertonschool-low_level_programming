#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string that contains the binary number
 *
 * Return: converted number, otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		uint = uint << 1;
		if (*b == '1')
			uint = uint | 1;
		b++;
	}
	return (uint);
}
