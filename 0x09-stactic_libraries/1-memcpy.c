
/**
 * _memcpy - copies memory area
 * @dest: the address of memory that copy
 * @src:  the address of memory to be copied
 * @n: number of characters to be copied
 *
 * Return: the address of memory that copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
