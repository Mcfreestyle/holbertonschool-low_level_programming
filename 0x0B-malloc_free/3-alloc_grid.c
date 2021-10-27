#include <stdlib.h>

/**
 * alloc_grid - create an array of two dimensions
 * @width: number of columns of the array
 * @height: number if rows of the string
 *
 * Return: pointer to a 2 dimensional array, otherwise NULL
 *	if the width or height is NULL or there is insufficient space
 */
int **alloc_grid(int width, int height)
{
	int i, j, len;
	int *p, **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	len = sizeof(int *) * height + sizeof(int) * width * height;
	array = malloc(len);

	p = (int *)(array + height);

	for (i = 0; i < height; i++)
	{
		array[i] = p + width * i;
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(*(array + i) + j) = 0;
	}
	return (array);
}
