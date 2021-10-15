
/**
 * _strncpy - copies a string
 * @dest: first pointer to character
 * @src: second pointer to character
 * @n: number of bytes used from src
 *
 * Return: pointer to the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

