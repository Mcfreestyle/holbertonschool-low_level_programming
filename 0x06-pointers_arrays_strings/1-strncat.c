
/**
 * _strcat - concatenates two strings
 * @dest: first pointer to character
 * @src: second pointer to character
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
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}

