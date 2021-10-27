
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
	int size = 0;
	int i;

	while (*(src + size))
		size++;
	for (i = 0; i < n; i++)
	{
		if (i < size)
			*(dest + i) = *(src + i);
		else
			*(dest + i) = '\0';
	}
	return (dest);
}

