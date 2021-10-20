
/**
 * _strlen_recursion - return the length of a string
 * @s: pointer to string
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
		return (0);
	}
	n = _strlen_recursion(s + 1);
	n++;
	return (n);
}
