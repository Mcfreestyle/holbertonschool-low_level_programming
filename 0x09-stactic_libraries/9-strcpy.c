#include <string.h>
/**
 * _strcpy - copies the pointed string to the pointed buffer
 * @dest: string destiny
 * @src: string source
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = strlen(src);

	for (i = 0; i < len + 1; i++)
		dest[i] = src[i];
	return (dest);
}
