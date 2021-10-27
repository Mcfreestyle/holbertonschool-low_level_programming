
/**
 * _memset - fills memory with a constant byte
 * @s: the address of memory to fill
 * @b: constant byte
 * @n: number of bytes of the memory to be filled
 *
 * Return: the address of memory that was filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
