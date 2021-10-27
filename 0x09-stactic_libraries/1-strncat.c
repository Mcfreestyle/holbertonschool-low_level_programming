
/**
 * _strncat - concatenates two strings
 * @dest: first pointer to character
 * @src: second pointer to character
 * @n: number of bytes used from src
 *
 * Return: pointer to the dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;

	while (j < n)
	{
		if (*(src + j) == '\0')
			break;
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}

