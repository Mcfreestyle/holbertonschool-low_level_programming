
/**
 * leet - encodes a string into 1337
 * @str: string
 *
 * Return: pointer to string
 */
char *leet(char *str)
{
	int n, j;

	char store[2][10] = {
		{'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'},
		{'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'}
	};
	n = 0;

	while (*(str + n))
	{
		for (j = 0; j < 10; j++)
		{
			if (*(str + n) == store[0][j])
			{
				*(str + n) = store[1][j];
				break;
			}
		}
		n++;
	}
	return (str);
}


